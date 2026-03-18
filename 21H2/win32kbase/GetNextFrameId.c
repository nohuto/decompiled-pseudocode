/*
 * XREFs of GetNextFrameId @ 0x1C01E7B50
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C01BD200 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C01BD260 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ApiSetResetLastSeenFrameId @ 0x1C020F0D4 (ApiSetResetLastSeenFrameId.c)
 */

__int64 GetNextFrameId()
{
  int *v0; // rbx
  unsigned int v1; // edi
  int v2; // ecx
  PERESOURCE *v4[9]; // [rsp+20h] [rbp-48h] BYREF

  v0 = (int *)qword_1C0296BE0;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v4,
    (struct CInpLockGuard *)((char *)qword_1C0296BE0 + 8),
    0LL);
  v1 = *v0;
  v2 = *v0 + 1;
  *v0 = v2;
  if ( v1 == -1 )
  {
    *v0 = v2 + 1;
    ApiSetResetLastSeenFrameId();
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v4);
  return v1;
}
