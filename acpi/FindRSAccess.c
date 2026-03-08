/*
 * XREFs of FindRSAccess @ 0x1C004B438
 * Callers:
 *     RegRSAccess @ 0x1C004CD24 (RegRSAccess.c)
 *     AccessBaseField @ 0x1C00517B0 (AccessBaseField.c)
 *     RawFieldAccess @ 0x1C0052760 (RawFieldAccess.c)
 *     SupportsOnlyRawAccess @ 0x1C0052F58 (SupportsOnlyRawAccess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindRSAccess(int a1)
{
  KIRQL v2; // al
  __int64 i; // rbx

  v2 = ExAcquireSpinLockShared(&RSAccessLock);
  for ( i = gpRSAccessHead; i && *(_DWORD *)(i + 8) != a1; i = *(_QWORD *)i )
    ;
  ExReleaseSpinLockShared(&RSAccessLock, v2);
  return i;
}
