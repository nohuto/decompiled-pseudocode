/*
 * XREFs of NtQuerySystemEnvironmentValue @ 0x140954A40
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x1402067A0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140206930 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     RtlInitAnsiString @ 0x14024FB10 (RtlInitAnsiString.c)
 *     HalGetEnvironmentVariable @ 0x1404BBA60 (HalGetEnvironmentVariable.c)
 *     RtlUnicodeStringToAnsiString @ 0x1405EDB00 (RtlUnicodeStringToAnsiString.c)
 *     SeSinglePrivilegeCheck @ 0x140627A60 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x1406CD560 (ProbeForWrite.c)
 *     RtlAnsiStringToUnicodeString @ 0x1406F6920 (RtlAnsiStringToUnicodeString.c)
 *     RtlxUnicodeStringToAnsiSize @ 0x14075D380 (RtlxUnicodeStringToAnsiSize.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __cdecl NtQuerySystemEnvironmentValue(
        PUNICODE_STRING VariableName,
        PWSTR VariableValue,
        USHORT ValueLength,
        PUSHORT ReturnLength)
{
  __int64 v7; // rbx
  unsigned __int16 v8; // ax
  wchar_t *v10; // rdx
  ULONG v11; // eax
  unsigned __int16 v12; // bx
  int v13; // ebx
  PVOID PoolWithTag; // rdi
  struct _KTHREAD *v15; // rax
  int EnvironmentVariable; // ebx
  NTSTATUS v17; // ebx
  KPROCESSOR_MODE PreviousMode; // [rsp+20h] [rbp-68h]
  UNICODE_STRING UnicodeString; // [rsp+28h] [rbp-60h] BYREF
  _STRING DestinationString; // [rsp+38h] [rbp-50h] BYREF
  ULONG v21; // [rsp+48h] [rbp-40h]
  int v22; // [rsp+4Ch] [rbp-3Ch]
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
    if ( ((unsigned __int8)VariableName & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = 0x7FFFFFFF0000LL;
    UnicodeString = *VariableName;
    v8 = _mm_cvtsi128_si32((__m128i)UnicodeString);
    if ( !v8 )
      return -1073741819;
    if ( ((__int64)UnicodeString.Buffer & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = (wchar_t *)((char *)UnicodeString.Buffer + v8);
    if ( (unsigned __int64)v10 > 0x7FFFFFFF0000LL || v10 < UnicodeString.Buffer )
      MEMORY[0x7FFFFFFF0000] = 0;
    ProbeForWrite(VariableValue, ValueLength, 2u);
    if ( ReturnLength )
    {
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v7 = (__int64)ReturnLength;
      *(_WORD *)v7 = *(_WORD *)v7;
    }
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    UnicodeString = *VariableName;
  }
  v11 = RtlxUnicodeStringToAnsiSize(&UnicodeString);
  v12 = v11;
  v21 = v11;
  DestinationString.Buffer = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x72766E45u);
  if ( !DestinationString.Buffer )
    return -1073741670;
  DestinationString.MaximumLength = v12;
  v13 = RtlUnicodeStringToAnsiString(&DestinationString, &UnicodeString, 0);
  v22 = v13;
  if ( v13 >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x400uLL, 0x72766E45u);
    P = PoolWithTag;
    if ( PoolWithTag )
    {
      v15 = KeGetCurrentThread();
      --v15->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
      EnvironmentVariable = HalGetEnvironmentVariable(DestinationString.Buffer, 0x400u, (char *)PoolWithTag);
      ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      ExFreePoolWithTag(DestinationString.Buffer, 0);
      if ( EnvironmentVariable )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
        return -1073741823;
      }
      else
      {
        RtlInitAnsiString(&DestinationString, (PCSZ)PoolWithTag);
        UnicodeString.Buffer = VariableValue;
        UnicodeString.MaximumLength = ValueLength;
        UnicodeString.Length = 0;
        v17 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 0);
        v22 = v17;
        if ( ReturnLength )
          *ReturnLength = UnicodeString.Length;
        ExFreePoolWithTag(PoolWithTag, 0);
        return v17;
      }
    }
    else
    {
      ExFreePoolWithTag(DestinationString.Buffer, 0);
      return -1073741670;
    }
  }
  else
  {
    ExFreePoolWithTag(DestinationString.Buffer, 0);
    return v13;
  }
}
