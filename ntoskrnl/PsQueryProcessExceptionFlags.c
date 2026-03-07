__int64 __fastcall PsQueryProcessExceptionFlags(ULONG_PTR BugCheckParameter1, int a2, int *a3)
{
  int v4; // edi
  int v6; // r15d
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v8; // ebx
  int v9; // edx
  __int64 *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  int *v13; // rax
  int v14; // r12d
  $115DCDF994C6370D29323EAB0E0C9502 v16; // [rsp+58h] [rbp-60h] BYREF

  memset(&v16, 0, sizeof(v16));
  v4 = 0;
  if ( (a2 & 0xFFFFFFFE) != 0 )
    return 3221225712LL;
  if ( !*(_QWORD *)(BugCheckParameter1 + 1360) )
    return 3221225711LL;
  v6 = a2 & 1;
  if ( (a2 & 1) != 0 && !*(_QWORD *)(BugCheckParameter1 + 1408) )
    return 3221225711LL;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcState.Process == (_KPROCESS *)BugCheckParameter1 )
  {
    v8 = 0;
    if ( CurrentThread->Process != (_KPROCESS *)BugCheckParameter1 )
      v8 = 2;
  }
  else
  {
    v8 = 3;
  }
  if ( v8 >= 2 )
  {
    --CurrentThread->KernelApcDisable;
    if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112)) )
    {
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      return 3221225738LL;
    }
  }
  v9 = v8 & 1;
  if ( (v8 & 1) != 0 )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v16);
    v9 = v8 & 1;
  }
  if ( v6 )
  {
    v10 = *(__int64 **)(BugCheckParameter1 + 1408);
    if ( !v10 || *(_WORD *)(BugCheckParameter1 + 2412) != 0x8664 )
    {
      v12 = 0LL;
      if ( v10 )
        v12 = *v10;
      v13 = (int *)(v12 + 40);
      goto LABEL_24;
    }
    v11 = *v10;
  }
  else
  {
    v11 = *(_QWORD *)(BugCheckParameter1 + 1360);
  }
  v13 = (int *)(v11 + 80);
LABEL_24:
  v14 = *v13;
  if ( v9 )
    KiUnstackDetachProcess(&v16);
  if ( v8 >= 2 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112));
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  *a3 = 0;
  if ( (v14 & 4) != 0 )
  {
    *a3 = 1;
    v4 = 1;
  }
  if ( (v14 & 8) != 0 )
    *a3 = v4 | 2;
  return 0LL;
}
