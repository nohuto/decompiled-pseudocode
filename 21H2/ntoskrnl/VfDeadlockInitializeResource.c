/*
 * XREFs of VfDeadlockInitializeResource @ 0x140A98420
 * Callers:
 *     VerifierKeInitializeMutant @ 0x140A95E00 (VerifierKeInitializeMutant.c)
 *     VerifierKeInitializeMutex @ 0x140A95E60 (VerifierKeInitializeMutex.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140295EF0 (RtlCaptureStackBackTrace.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ViLowerIrql @ 0x140601864 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x1406018DC (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockCanProceed @ 0x140A7F8F2 (ViDeadlockCanProceed.c)
 *     ViDeadlockAddResource @ 0x140A98ACC (ViDeadlockAddResource.c)
 *     ViDeadlockAllocate @ 0x140A98DCC (ViDeadlockAllocate.c)
 *     ViDeadlockDetectionLock @ 0x140A994C4 (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x140A994FC (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockFree @ 0x140A997C0 (ViDeadlockFree.c)
 */

__int64 __fastcall VfDeadlockInitializeResource(LONG *a1, __int64 a2, void *a3)
{
  void *v5; // rdi
  USHORT v6; // ax
  unsigned int v7; // ecx
  __int64 v8; // rax
  unsigned __int8 v9; // bl
  unsigned int v10; // esi
  _QWORD *v11; // rcx
  _QWORD *v12; // rbx
  PVOID Entry; // [rsp+30h] [rbp-68h] BYREF
  PVOID v15; // [rsp+38h] [rbp-60h] BYREF
  PVOID BackTrace[8]; // [rsp+40h] [rbp-58h] BYREF

  Entry = 0LL;
  v15 = 0LL;
  memset(BackTrace, 0, sizeof(BackTrace));
  if ( !ViDeadlockCanProceed(a1) )
    return 0LL;
  if ( *((_DWORD *)ViDeadlockGlobals + 8196) )
    return 0LL;
  if ( *((int *)ViDeadlockGlobals + 8282) > 1024 )
    return 0LL;
  v5 = (void *)ViDeadlockAllocate(1LL);
  if ( !v5 )
    return 0LL;
  v6 = RtlCaptureStackBackTrace(2u, 8u, BackTrace, 0LL);
  v7 = v6;
  if ( v6 )
  {
    v8 = 1LL;
    if ( v7 )
      v8 = v7;
    if ( (unsigned int)v8 >= 8 )
      goto LABEL_11;
  }
  else
  {
    BackTrace[0] = a3;
    v8 = 1LL;
  }
  BackTrace[v8] = 0LL;
LABEL_11:
  v9 = ViRaiseIrqlToDpcLevel();
  ViDeadlockDetectionLock(1LL);
  v10 = ViDeadlockAddResource((int)a1, (__int64)&Entry, (__int64)&v15);
  ViDeadlockDetectionUnlock(1LL);
  ViLowerIrql(v9);
  if ( !v10 )
    ViDeadlockFree(v5);
  if ( Entry )
    ViDeadlockFree(Entry);
  v11 = v15;
  if ( v15 )
  {
    do
    {
      v12 = (_QWORD *)*v11;
      ViDeadlockFree(v11);
      v11 = v12;
    }
    while ( v12 );
  }
  return v10;
}
