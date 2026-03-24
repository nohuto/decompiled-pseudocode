/*
 * XREFs of GetCaptionHeight @ 0x1C0047254
 * Callers:
 *     xxxCalcClientRect @ 0x1C004A800 (xxxCalcClientRect.c)
 *     xxxDrawWindowFrame @ 0x1C004BA7C (xxxDrawWindowFrame.c)
 *     xxxInitializeMoveSizeData @ 0x1C021184C (xxxInitializeMoveSizeData.c)
 *     xxxMenuBarDraw @ 0x1C024CF54 (xxxMenuBarDraw.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C024E7B4 (xxxMNRecomputeBarIfNeeded.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x1C004C618 (GetWindowDpiLastNotify.c)
 *     GetDpiDependentMetric @ 0x1C0061430 (GetDpiDependentMetric.c)
 */

__int64 __fastcall GetCaptionHeight(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // eax
  int v4; // r8d
  unsigned int WindowDpiLastNotify; // eax
  __int64 v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rax

  v2 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v2 + 16) & 8) == 0 )
    return 0LL;
  v3 = *(_DWORD *)(v2 + 288);
  v4 = v3 & 0xF;
  if ( *(char *)(v2 + 24) < 0 )
  {
    if ( v4 == 3 )
    {
      WindowDpiLastNotify = (v3 >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v2 + 232) & 0x8000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
    }
    else if ( (v3 & 0xF) == 0
           && (v9 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v9 + 8) + 64LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 284LL);
    }
    v6 = 22LL;
  }
  else
  {
    if ( v4 == 3 )
    {
      WindowDpiLastNotify = (v3 >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v2 + 232) & 0x8000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
    }
    else if ( (v3 & 0xF) == 0
           && (v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v8 + 8) + 64LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 284LL);
    }
    v6 = 2LL;
  }
  return GetDpiDependentMetric(v6, WindowDpiLastNotify);
}
