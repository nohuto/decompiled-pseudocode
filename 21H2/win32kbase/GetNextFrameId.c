/*
 * XREFs of GetNextFrameId @ 0x1C01AE8B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCB00 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C01874D8 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ApiSetResetLastSeenFrameId @ 0x1C01D0360 (ApiSetResetLastSeenFrameId.c)
 */

__int64 GetNextFrameId()
{
  struct A0xad387374::CFrameIdGenerator *v0; // rbx
  unsigned int v1; // edi
  int v2; // ecx
  CInpLockGuard *v4[9]; // [rsp+20h] [rbp-48h] BYREF

  v0 = `anonymous namespace'::CFrameIdGenerator::s_pInstance;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v4,
    (struct A0xad387374::CFrameIdGenerator *)((char *)`anonymous namespace'::CFrameIdGenerator::s_pInstance + 8),
    0LL);
  v1 = *(_DWORD *)v0;
  v2 = *(_DWORD *)v0 + 1;
  *(_DWORD *)v0 = v2;
  if ( v1 == -1 )
  {
    *(_DWORD *)v0 = v2 + 1;
    ApiSetResetLastSeenFrameId();
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v4);
  return v1;
}
