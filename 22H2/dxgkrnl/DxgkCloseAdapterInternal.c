/*
 * XREFs of DxgkCloseAdapterInternal @ 0x1C0157058
 * Callers:
 *     ??1CAdapter@@IEAA@XZ @ 0x1C0013424 (--1CAdapter@@IEAA@XZ.c)
 * Callees:
 *     DxgkCloseAdapterImpl @ 0x1C0124D90 (DxgkCloseAdapterImpl.c)
 */

__int64 __fastcall DxgkCloseAdapterInternal(__int64 a1, __int64 a2, __int64 a3)
{
  return DxgkCloseAdapterImpl(a1, 0, a3);
}
