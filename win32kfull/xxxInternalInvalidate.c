/*
 * XREFs of xxxInternalInvalidate @ 0x1C0053270
 * Callers:
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C000D2CC (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 *     xxxCompositedPaint @ 0x1C0015794 (xxxCompositedPaint.c)
 *     ComposeWindow @ 0x1C002297C (ComposeWindow.c)
 *     SetRedirectedWindow @ 0x1C002BE1C (SetRedirectedWindow.c)
 *     xxxRedrawWindow @ 0x1C0050700 (xxxRedrawWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00669E0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0068A60 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C0097D18 (zzzUpdateWindowsAfterModeChange.c)
 *     UpdateWindowMonitor @ 0x1C00AE6B0 (UpdateWindowMonitor.c)
 *     zzzLockWindowUpdate2 @ 0x1C00E51C8 (zzzLockWindowUpdate2.c)
 *     ?xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z @ 0x1C00F0EF0 (-xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z.c)
 *     xxxInvalidateWallpaperWindow @ 0x1C00F57E4 (xxxInvalidateWallpaperWindow.c)
 *     xxxSystemParametersInfoWorker @ 0x1C01032D0 (xxxSystemParametersInfoWorker.c)
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0149E06 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z @ 0x1C01BD944 (-InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z.c)
 *     ?SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z @ 0x1C01C8AB0 (-SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01C954C (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     UserRedrawDesktop @ 0x1C0225B78 (UserRedrawDesktop.c)
 *     xxxScrollWindowEx @ 0x1C0231B34 (xxxScrollWindowEx.c)
 * Callees:
 *     SpbCheckRect @ 0x1C000B2CC (SpbCheckRect.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C0052B80 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     PhysicalToLogicalInPlaceRect @ 0x1C005460C (PhysicalToLogicalInPlaceRect.c)
 *     xxxDoSyncPaint @ 0x1C00FDA04 (xxxDoSyncPaint.c)
 *     IntersectRect @ 0x1C00FEBD4 (IntersectRect.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C0101FD4 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

void __fastcall xxxInternalInvalidate(struct tagWND *a1, HRGN a2, unsigned int a3)
{
  unsigned int v3; // r15d
  unsigned int v4; // edi
  HRGN v5; // r13
  struct tagWND *v6; // r14
  struct tagWND *i; // rbx
  __int64 v8; // rdx
  struct tagRECT *v9; // rax
  HRGN v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  struct tagWND *v14; // r8
  struct tagWND *v15; // rsi
  __int64 v16; // rdx
  char v17; // al
  LONG left; // edx
  LONG right; // ecx
  LONG top; // edx
  LONG bottom; // ecx
  __int64 RectRgnIndirect; // rax
  __int64 v23; // [rsp+30h] [rbp-40h]
  struct tagWND *v24; // [rsp+38h] [rbp-38h]
  struct tagRECT v25; // [rsp+40h] [rbp-30h] BYREF
  struct tagRECT v26; // [rsp+50h] [rbp-20h] BYREF

  v3 = 0;
  v24 = 0LL;
  v4 = a3;
  v23 = 0LL;
  v5 = a2;
  v6 = a1;
  i = 0LL;
  v25 = 0LL;
  if ( (a3 & 1) != 0 )
  {
    for ( i = a1; i; i = (struct tagWND *)*((_QWORD *)i + 13) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)i + 5) + 27LL) & 2) != 0 )
        break;
    }
    if ( i )
    {
      if ( a2 == (HRGN)1 )
      {
        RectRgnIndirect = GreCreateRectRgnIndirect(*((_QWORD *)a1 + 5) + 88LL);
        v23 = RectRgnIndirect;
        if ( RectRgnIndirect )
          v5 = (HRGN)RectRgnIndirect;
      }
      else
      {
        v23 = 0LL;
      }
      v24 = v6;
      v4 |= 0x80u;
      v6 = i;
    }
  }
  v8 = *((_QWORD *)v6 + 5);
  if ( (((v4 & 1) != 0) & (*(_BYTE *)(v8 + 26) >> 3)) != 0 )
    *((_DWORD *)v6 + 80) |= 0x4000u;
  if ( (v4 & 0x400) != 0 )
    v25 = *(struct tagRECT *)(v8 + 88);
  else
    v26 = *(struct tagRECT *)(v8 + 104);
  v9 = &v26;
  if ( (v4 & 0x400) != 0 )
    v9 = &v25;
  v25 = *v9;
  if ( (v4 & 9) != 0 )
  {
    v10 = v5;
    if ( v5 == (HRGN)1 )
    {
      v11 = *((_QWORD *)v6 + 5);
      v10 = (HRGN)ghrgnInv1;
      v12 = (v4 & 0x400) != 0 ? v11 + 88 : v11 + 104;
      SetRectRgnIndirect(ghrgnInv1, v12);
      v13 = *(_QWORD *)(*((_QWORD *)v6 + 5) + 168LL);
      if ( v13 )
        GreCombineRgn(ghrgnInv1, ghrgnInv1, v13, 1LL);
    }
  }
  else
  {
    v10 = (HRGN)ghrgnInv1;
    SetEmptyRgn(ghrgnInv1);
  }
  if ( (v4 & 9) != 0
    && (v4 & 1) != 0
    && (v14 = v6, (*(_BYTE *)(*((_QWORD *)v6 + 5) + 27LL) & 0x20) == 0)
    && (v15 = (struct tagWND *)*((_QWORD *)v6 + 13)) != 0LL )
  {
    while ( 1 )
    {
      v16 = *((_QWORD *)v15 + 5);
      v17 = *(_BYTE *)(v16 + 31);
      if ( (v17 & 0x10) == 0 || (v17 & 0x20) != 0 )
        break;
      v26 = *(struct tagRECT *)(v16 + 104);
      PhysicalToLogicalInPlaceRect(v14, &v26);
      left = v25.left;
      right = v25.right;
      if ( v25.left <= v26.left )
        left = v26.left;
      v25.left = left;
      if ( v25.right >= v26.right )
        right = v26.right;
      v25.right = right;
      if ( left >= right )
        break;
      top = v25.top;
      bottom = v25.bottom;
      if ( v25.top <= v26.top )
        top = v26.top;
      v25.top = top;
      if ( v25.bottom >= v26.bottom )
        bottom = v26.bottom;
      v25.bottom = bottom;
      if ( top >= bottom )
        break;
      if ( (*(_BYTE *)(*((_QWORD *)v15 + 5) + 27LL) & 0x20) == 0 )
      {
        v14 = v15;
        v15 = (struct tagWND *)*((_QWORD *)v15 + 13);
        if ( v15 )
          continue;
      }
      goto LABEL_35;
    }
  }
  else
  {
LABEL_35:
    if ( (v4 & 0x1001) == 0x1001 )
    {
      if ( *(_QWORD *)(gpDispInfo + 32LL) )
      {
        v26 = 0LL;
        if ( (unsigned int)GreGetRgnBox(v10, &v26) )
        {
          IntersectRect(&v26, &v26, &v25);
          SpbCheckRect(v6, &v26, 0);
        }
      }
    }
    InternalInvalidate2(v6, (unsigned __int64)v5, v10, &v25, v4);
    if ( i )
    {
      v6 = v24;
      if ( v23 )
        GreDeleteObject(v23);
    }
    if ( (v4 & 0x100) != 0 )
    {
      xxxInternalUpdateWindow(v6, (v4 & 0x40) == 0);
    }
    else if ( (v4 & 0x200) != 0 )
    {
      if ( (v4 & 0x40) == 0 )
      {
        v3 = 4;
        if ( (v4 & 0x80u) != 0 )
          v3 = 32;
      }
      xxxDoSyncPaint(v6, v3);
    }
  }
}
