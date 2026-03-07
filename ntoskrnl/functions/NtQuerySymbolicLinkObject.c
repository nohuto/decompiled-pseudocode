__int64 __fastcall NtQuerySymbolicLinkObject(HANDLE Handle, unsigned __int64 a2, _DWORD *a3)
{
  KPROCESSOR_MODE PreviousMode; // r9
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int128 v9; // xmm0
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char *v15; // rdi
  int v16; // edi
  unsigned int MaximumLength; // eax
  struct _KTHREAD *v18; // rcx
  bool v19; // zf
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-30h]
  void *v23[2]; // [rsp+40h] [rbp-28h]
  UNICODE_STRING Src; // [rsp+50h] [rbp-18h] BYREF
  NTSTATUS v25; // [rsp+88h] [rbp+20h]

  *(_OWORD *)v23 = 0LL;
  Src = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (a2 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = a2;
    if ( a2 >= 0x7FFFFFFF0000LL )
      v7 = 0x7FFFFFFF0000LL;
    *(_WORD *)v7 = *(_WORD *)v7;
    v8 = a2 + 2;
    if ( a2 + 2 >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    *(_WORD *)v8 = *(_WORD *)v8;
    v9 = *(_OWORD *)a2;
    *(_OWORD *)v23 = v9;
    if ( WORD1(v9) )
    {
      v10 = (unsigned __int64)v23[1];
      v11 = (unsigned __int64)v23[1] + WORD1(v9) - 1;
      if ( v23[1] > (void *)v11 || v11 >= 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v12 = (v11 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v10 = *(_BYTE *)v10;
        v10 = (v10 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v10 != v12 );
    }
    if ( a3 )
    {
      v13 = (__int64)a3;
      if ( (unsigned __int64)a3 >= 0x7FFFFFFF0000LL )
        v13 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v13 = *(_DWORD *)v13;
    }
  }
  else
  {
    *(_OWORD *)v23 = *(_OWORD *)a2;
  }
  Object = 0LL;
  v25 = ObReferenceObjectByHandle(Handle, 1u, ObpSymbolicLinkObjectType, PreviousMode, &Object, 0LL);
  if ( v25 >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v15 = (char *)Object;
    BugCheckParameter2 = (ULONG_PTR)Object - 32;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)Object - 32, 0LL);
    if ( (*((_DWORD *)v15 + 7) & 0x10) != 0 )
      RtlInitUnicodeString(&Src, &word_1408834C0);
    else
      Src = *(UNICODE_STRING *)(v15 + 8);
    v16 = *(_DWORD *)&Src.Length;
    if ( a3 )
    {
      if ( Src.MaximumLength <= WORD1(v23[0]) )
      {
        MaximumLength = Src.MaximumLength;
LABEL_25:
        memmove(v23[1], Src.Buffer, MaximumLength);
        *(_WORD *)a2 = v16;
        if ( a3 )
          *a3 = HIWORD(v16);
LABEL_27:
        ExReleasePushLockEx((__int64 *)BugCheckParameter2, 0LL);
        v18 = KeGetCurrentThread();
        v19 = v18->KernelApcDisable++ == -1;
        if ( v19
          && ($C71981A45BEB2B45F82C232A7085991E *)v18->ApcState.ApcListHead[0].Flink != &v18->152
          && !v18->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        ObfDereferenceObject(Object);
        return (unsigned int)v25;
      }
    }
    else if ( Src.Length <= WORD1(v23[0]) )
    {
      MaximumLength = Src.Length;
      goto LABEL_25;
    }
    v25 = -1073741789;
    if ( a3 )
      *a3 = Src.MaximumLength;
    goto LABEL_27;
  }
  return (unsigned int)v25;
}
