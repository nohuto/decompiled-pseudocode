/*
 * XREFs of PsQueryProcessExceptionFlags @ 0x140907620
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

__int64 __fastcall PsQueryProcessExceptionFlags(ULONG_PTR BugCheckParameter1, int a2, int *a3)
{
  int v4; // edi
  int v6; // r15d
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // edx
  __int64 *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  int *v16; // rax
  int v17; // r12d
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  _OWORD v22[3]; // [rsp+58h] [rbp-60h] BYREF

  memset(v22, 0, sizeof(v22));
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
    if ( v8 < 2 )
      goto LABEL_13;
  }
  else
  {
    v8 = 3;
  }
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112)) )
  {
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v9, v10, v11);
    return 3221225738LL;
  }
LABEL_13:
  v12 = v8 & 1;
  if ( (v8 & 1) != 0 )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v22);
    v12 = v8 & 1;
  }
  if ( v6 )
  {
    v13 = *(__int64 **)(BugCheckParameter1 + 1408);
    if ( !v13 || *((_WORD *)v13 + 4) != 0x8664 )
    {
      v15 = 0LL;
      if ( v13 )
        v15 = *v13;
      v16 = (int *)(v15 + 40);
      goto LABEL_24;
    }
    v14 = *v13;
  }
  else
  {
    v14 = *(_QWORD *)(BugCheckParameter1 + 1360);
  }
  v16 = (int *)(v14 + 80);
LABEL_24:
  v17 = *v16;
  if ( v12 )
    KiUnstackDetachProcess((__int64)v22, 0LL);
  if ( v8 >= 2 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112));
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v18, v19, v20);
  }
  *a3 = 0;
  if ( (v17 & 4) != 0 )
  {
    *a3 = 1;
    v4 = 1;
  }
  if ( (v17 & 8) != 0 )
    *a3 = v4 | 2;
  return 0LL;
}
