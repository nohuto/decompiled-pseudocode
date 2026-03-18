/*
 * XREFs of MiUnlockWorkingSetOptimal @ 0x1406503A0
 * Callers:
 *     MiInitializeBootShadowStackPage @ 0x1406449D4 (MiInitializeBootShadowStackPage.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14023C4E0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1403193E0 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiUnlockWorkingSetOptimal(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  MiUnlockPageTableInternal(a1, a2);
  return MiUnlockWorkingSetShared(a1, a3);
}
