/*
 * XREFs of xxxMNDrawFullNC @ 0x1C024C484
 * Callers:
 *     xxxMNSetTop @ 0x1C023AFB8 (xxxMNSetTop.c)
 *     xxxMenuWindowProc @ 0x1C023B5E0 (xxxMenuWindowProc.c)
 * Callees:
 *     DrawEdge @ 0x1C0045148 (DrawEdge.c)
 *     GreSetBrushOrg @ 0x1C004558C (GreSetBrushOrg.c)
 *     MNGetpItemFromIndex @ 0x1C00480C4 (MNGetpItemFromIndex.c)
 *     MNIsUAHMenu @ 0x1C0049030 (MNIsUAHMenu.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     NtGdiPatBlt @ 0x1C00B3F50 (NtGdiPatBlt.c)
 *     xxxSendUAHMenuMessage @ 0x1C0101FD0 (xxxSendUAHMenuMessage.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C0124AE8 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     DrawFrame @ 0x1C015A3A8 (DrawFrame.c)
 *     GreGetBrushOrg @ 0x1C015E7E0 (GreGetBrushOrg.c)
 *     MNDrawArrow @ 0x1C024C08C (MNDrawArrow.c)
 *     MNDrawEdge @ 0x1C024C258 (MNDrawEdge.c)
 */

__int64 __fastcall xxxMNDrawFullNC(struct tagWND *a1, HDC a2, __int64 **a3)
{
  __int64 result; // rax
  int v4; // ebx
  HDC DCEx; // rsi
  __int64 *v9; // rax
  __int64 v10; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rcx
  _DWORD *v13; // rdx
  LONG bottom; // r12d
  LONG v15; // r12d
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // ebx
  const struct tagDPIMETRICS *DPIMETRICS; // rax
  const struct tagDPIMETRICS *v21; // rax
  RECT v22; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v23[4]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v24; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+48h]

  result = (__int64)*a3;
  v4 = 0;
  v24 = 0LL;
  if ( *(_QWORD *)(*(_QWORD *)result + 40LL) )
  {
    if ( a2 )
      DCEx = a2;
    else
      DCEx = (HDC)_GetDCEx(a1, 0LL, 66561LL);
    result = MNIsUAHMenu(*(_QWORD *)(**a3 + 40));
    if ( (_DWORD)result )
    {
      result = (__int64)*a3;
      if ( *(_QWORD *)(**a3 + 16) )
      {
        v9 = *a3;
        v23[2] = 0LL;
        v10 = *(_QWORD *)(*v9 + 16);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v23[0] = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = v23;
        v23[1] = v10;
        if ( v10 )
          HMLockObject(v10);
        v4 = xxxSendUAHMenuMessage(*(_QWORD *)(**a3 + 16), 149LL, *(__int64 **)(**a3 + 40), (__int64)DCEx);
        result = ThreadUnlock1(v12);
      }
    }
    if ( *(_QWORD *)(**a3 + 40) )
    {
      if ( v4 )
      {
        MNDrawArrow(DCEx, a3, -3);
        result = MNDrawArrow(DCEx, a3, -4);
      }
      else
      {
        v13 = (_DWORD *)*((_QWORD *)a1 + 5);
        v22.top = 0;
        v22.left = 0;
        v22.right = v13[24] - v13[22];
        v22.bottom = v13[25] - v13[23];
        if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == 0x80020000 )
        {
          MNDrawEdge(*(_QWORD *)(**a3 + 40), a2, &v22, 0x2000);
          bottom = v22.bottom;
        }
        else
        {
          DrawEdge(DCEx, &v22, 5, 8207);
          DrawFrame(DCEx, &v22.left, 1, 120);
          ++v22.left;
          --v22.right;
          ++v22.top;
          bottom = v22.bottom - 1;
        }
        v15 = bottom - *((_DWORD *)GetDPIMETRICS(a1) + 7);
        GreGetBrushOrg(DCEx, &v24);
        if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a3 + 40) + 40LL) + 24LL) )
        {
          v16 = MNGetpItemFromIndex(*(_QWORD *)(**a3 + 40), *(_DWORD *)(*(_QWORD *)(**a3 + 40) + 116LL));
          GreSetBrushOrg(DCEx, 0, -*(_DWORD *)(*(_QWORD *)v16 + 68LL), 0LL);
          v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a3 + 40) + 40LL) + 24LL);
        }
        else
        {
          v17 = *(_QWORD *)(gpsi + 4728LL);
        }
        v18 = GreSelectBrush(DCEx, v17);
        v19 = v22.right - v22.left;
        v25 = v18;
        DPIMETRICS = GetDPIMETRICS(a1);
        NtGdiPatBlt(DCEx, v22.left, v22.top, v19, *((_DWORD *)DPIMETRICS + 7), 15728673);
        MNDrawArrow(DCEx, a3, -3);
        v21 = GetDPIMETRICS(a1);
        NtGdiPatBlt(DCEx, v22.left, v15, v19, *((_DWORD *)v21 + 7), 15728673);
        MNDrawArrow(DCEx, a3, -4);
        GreSetBrushOrg(DCEx, v24, SHIDWORD(v24), 0LL);
        result = GreSelectBrush(DCEx, v25);
      }
      if ( !a2 )
        return _ReleaseDC(DCEx);
    }
    else if ( !a2 && DCEx )
    {
      return _ReleaseDC(DCEx);
    }
  }
  return result;
}
