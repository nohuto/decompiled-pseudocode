/*
 * XREFs of ndisCmCleanupSessionState @ 0x1C00B1688
 * Callers:
 *     ndisCmCleanupWorkRoutine @ 0x1C0127560 (ndisCmCleanupWorkRoutine.c)
 * Callees:
 *     <none>
 */

void ndisCmCleanupSessionState()
{
  KIRQL v0; // al
  unsigned int v1; // r8d
  __int64 i; // rbx

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_1C00E5B28);
  v1 = dword_1C00E71A8;
  for ( i = 0LL; (unsigned int)i < v1; i = (unsigned int)(i + 1) )
  {
    if ( *((_QWORD *)P + 3 * i + 1) )
    {
      KeReleaseSpinLock(&qword_1C00E5B28, v0);
      v0 = KeAcquireSpinLockRaiseToDpc(&qword_1C00E5B28);
      v1 = dword_1C00E71A8;
    }
  }
  KeReleaseSpinLock(&qword_1C00E5B28, v0);
}
