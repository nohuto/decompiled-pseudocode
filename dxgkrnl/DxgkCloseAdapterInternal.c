/*
 * XREFs of DxgkCloseAdapterInternal @ 0x1C01DFFC0
 * Callers:
 *     ??1CAdapter@@IEAA@XZ @ 0x1C0018F30 (--1CAdapter@@IEAA@XZ.c)
 * Callees:
 *     DxgkCloseAdapterImpl @ 0x1C0188940 (DxgkCloseAdapterImpl.c)
 */

__int64 __fastcall DxgkCloseAdapterInternal(__int64 a1, __int64 a2, __int64 a3)
{
  return DxgkCloseAdapterImpl(a1, 0, a3);
}
