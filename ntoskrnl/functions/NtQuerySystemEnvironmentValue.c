__int64 __fastcall NtQuerySystemEnvironmentValue(
        UNICODE_STRING *a1,
        volatile void *a2,
        unsigned __int16 a3,
        unsigned __int16 *a4)
{
  __int64 v7; // rbx
  unsigned __int16 v8; // ax
  wchar_t *v10; // rdx
  ULONG v11; // eax
  unsigned __int16 v12; // bx
  NTSTATUS v13; // ebx
  void *Pool2; // rdi
  struct _KTHREAD *v15; // rax
  int EnvironmentVariable; // ebx
  unsigned int v17; // ebx
  KPROCESSOR_MODE PreviousMode; // [rsp+20h] [rbp-68h]
  UNICODE_STRING UnicodeString; // [rsp+28h] [rbp-60h] BYREF
  STRING DestinationString; // [rsp+38h] [rbp-50h] BYREF
  ULONG v21; // [rsp+48h] [rbp-40h]
  unsigned int v22; // [rsp+4Ch] [rbp-3Ch]
  PVOID P; // [rsp+58h] [rbp-30h]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-20h]

  v21 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  UnicodeString = 0LL;
  DestinationString.Buffer = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = 0x7FFFFFFF0000LL;
    UnicodeString = *a1;
    v8 = _mm_cvtsi128_si32((__m128i)UnicodeString);
    if ( !v8 )
      return 3221225477LL;
    if ( ((__int64)UnicodeString.Buffer & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = (wchar_t *)((char *)UnicodeString.Buffer + v8);
    if ( (unsigned __int64)v10 > 0x7FFFFFFF0000LL || v10 < UnicodeString.Buffer )
      MEMORY[0x7FFFFFFF0000] = 0;
    ProbeForWrite(a2, a3, 2u);
    if ( a4 )
    {
      if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
        v7 = (__int64)a4;
      *(_WORD *)v7 = *(_WORD *)v7;
    }
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return 3221225569LL;
  }
  else
  {
    UnicodeString = *a1;
  }
  v11 = RtlxUnicodeStringToOemSize(&UnicodeString);
  v12 = v11;
  v21 = v11;
  DestinationString.Buffer = (char *)ExAllocatePool2(64LL, v11, 1920364101LL);
  if ( !DestinationString.Buffer )
    return 3221225626LL;
  DestinationString.MaximumLength = v12;
  v13 = RtlUnicodeStringToAnsiString(&DestinationString, &UnicodeString, 0);
  v22 = v13;
  if ( v13 >= 0 )
  {
    Pool2 = (void *)ExAllocatePool2(64LL, 1024LL, 1920364101LL);
    P = Pool2;
    if ( Pool2 )
    {
      v15 = KeGetCurrentThread();
      --v15->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
      EnvironmentVariable = HalGetEnvironmentVariable(DestinationString.Buffer, 0x400u, (char *)Pool2);
      ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      ExFreePoolWithTag(DestinationString.Buffer, 0);
      if ( EnvironmentVariable )
      {
        ExFreePoolWithTag(Pool2, 0);
        return 3221225473LL;
      }
      else
      {
        RtlInitAnsiString(&DestinationString, (PCSZ)Pool2);
        UnicodeString.Buffer = (wchar_t *)a2;
        UnicodeString.MaximumLength = a3;
        UnicodeString.Length = 0;
        v17 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 0);
        v22 = v17;
        if ( a4 )
          *a4 = UnicodeString.Length;
        ExFreePoolWithTag(Pool2, 0);
        return v17;
      }
    }
    else
    {
      ExFreePoolWithTag(DestinationString.Buffer, 0);
      return 3221225626LL;
    }
  }
  else
  {
    ExFreePoolWithTag(DestinationString.Buffer, 0);
    return (unsigned int)v13;
  }
}
