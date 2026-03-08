/*
 * XREFs of ?GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z @ 0x1C003FCD8
 * Callers:
 *     xxxCheckFullScreen @ 0x1C0033340 (xxxCheckFullScreen.c)
 *     ?CalculateWindowMargins@CWindowMarginProp@WindowMargins@@QEAA?AUFRAME_MARGIN@@PEBUtagWND@@IW4MarginsFor@?A0x67ef0edd@2@@Z @ 0x1C0042CB8 (-CalculateWindowMargins@CWindowMarginProp@WindowMargins@@QEAA-AUFRAME_MARGIN@@PEBUtagWND@@IW4Mar.c)
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x1C00FB938 (_anonymous_namespace_--xxxNormalizeRect.c)
 * Callees:
 *     GetWindowBordersForDpiWithCompatFlags2 @ 0x1C00448E4 (GetWindowBordersForDpiWithCompatFlags2.c)
 *     GetWindowDpiLastNotify @ 0x1C00A3A34 (GetWindowDpiLastNotify.c)
 */

__int64 __fastcall GetWindowBordersWithDpiAwareness(const struct tagWND *a1, __int64 a2, int a3, int a4)
{
  int v4; // r10d
  int WindowDpiLastNotify; // eax
  bool v6; // zf
  const struct tagWND *v7; // rdx
  _DWORD *v8; // r9
  __int64 v9; // rcx
  int v11; // ecx
  __int64 v12; // rax

  v4 = 0;
  WindowDpiLastNotify = a4;
  v6 = a4 == 0;
  v7 = a1;
  v8 = (_DWORD *)*((_QWORD *)a1 + 5);
  if ( v6 )
  {
    v11 = v8[72] & 0xF;
    if ( v11 == 3 )
    {
      WindowDpiLastNotify = (v8[72] >> 8) & 0x1FF;
    }
    else if ( (v8[58] & 0x400) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(v7);
    }
    else if ( !v11
           && (v12 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 456LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v12 + 8) + 64LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 424LL) + 284LL);
    }
  }
  v9 = *((_QWORD *)v7 + 2);
  if ( *(_DWORD *)(v9 + 632) <= 0x9900u )
    v4 = *(_DWORD *)(v9 + 648);
  return GetWindowBordersForDpiWithCompatFlags2(v8[7], v8[6], a3, (unsigned __int8)a3, WindowDpiLastNotify, v4);
}
