/*
 * XREFs of DpiInitializeWin8 @ 0x1C00210E0
 * Callers:
 *     <none>
 * Callees:
 *     DpiInitializeInternal @ 0x1C00210F8 (DpiInitializeInternal.c)
 */

__int64 __fastcall DpiInitializeWin8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  LOBYTE(a4) = 1;
  return DpiInitializeInternal(a1, a2, a3, a4);
}
