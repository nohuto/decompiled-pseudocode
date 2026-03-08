/*
 * XREFs of ?bSwap@XEPALOBJ@@QEAAHPEAPEAVPALETTE@@KK@Z @ 0x1C02DA678
 * Callers:
 *     NtGdiResizePalette @ 0x1C02D4500 (NtGdiResizePalette.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XEPALOBJ::bSwap(XEPALOBJ *this, struct PALETTE **a2)
{
  _QWORD *v2; // rsi
  __int64 result; // rax
  char v6; // [rsp+20h] [rbp-18h]

  v2 = *a2;
  v6 = 8;
  result = HmgSwapLockedHandleContents(**(_QWORD **)this, 1LL, *(_QWORD *)*a2, 1LL, v6);
  if ( (_DWORD)result )
  {
    *a2 = *(struct PALETTE **)this;
    *(_QWORD *)this = v2;
  }
  return result;
}
