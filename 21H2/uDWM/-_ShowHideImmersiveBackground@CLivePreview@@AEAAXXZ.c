/*
 * XREFs of ?_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ @ 0x180083F5C
 * Callers:
 *     ?_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV?$DynArray@PEAVCWindowData@@$0A@@@_N@Z @ 0x180084094 (-_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV-$DynArray@PEAVCWindowData@@$0A@@@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 *     ?_GetCoverageStateOfWindow@CLivePreview@@AEAA?AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z @ 0x180083560 (-_GetCoverageStateOfWindow@CLivePreview@@AEAA-AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z.c)
 *     ?s_GetCoverageStateOfTwoRects@CLivePreview@@CA?AW4COVERAGESTATE@@PEBUtagRECT@@0PEAU3@@Z @ 0x180085130 (-s_GetCoverageStateOfTwoRects@CLivePreview@@CA-AW4COVERAGESTATE@@PEBUtagRECT@@0PEAU3@@Z.c)
 *     ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x1800957B0 (-StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z.c)
 */

void __fastcall CLivePreview::_ShowHideImmersiveBackground(CLivePreview *this)
{
  unsigned int i; // edi
  char v3; // bp
  __int64 v4; // rdx
  __int64 v5; // r15
  __int64 v6; // rax
  __int128 v7; // [rsp+20h] [rbp-38h] BYREF

  for ( i = 0; i < *((_DWORD *)this + 106); ++i )
  {
    v3 = 1;
    v4 = *((_QWORD *)this + 65);
    v5 = *(_QWORD *)(*((_QWORD *)this + 50) + 16LL * i);
    v6 = *(_QWORD *)(v5 + 728);
    if ( !v4 || *(_DWORD *)(v4 + 112) == 1 )
    {
      if ( v6 && (unsigned int)CLivePreview::_GetCoverageStateOfWindow((__int64)this, *(_QWORD *)(v5 + 728)) )
      {
LABEL_10:
        v3 = 0;
LABEL_11:
        if ( !v3 )
        {
          if ( *(_BYTE *)(*((_QWORD *)this + 50) + 16LL * i + 8) )
          {
            CTopLevelWindow::StartLivePreviewAnimation(v5, 3LL);
            *(_BYTE *)(*((_QWORD *)this + 50) + 16LL * i + 8) = 0;
          }
        }
        continue;
      }
    }
    else
    {
      v7 = 0LL;
      if ( v6 && (unsigned int)CLivePreview::s_GetCoverageStateOfTwoRects(v6 + 48, v4 + 48, &v7) == 1 )
        goto LABEL_10;
    }
    if ( *(_BYTE *)(*((_QWORD *)this + 50) + 16LL * i + 8) )
      goto LABEL_11;
    CTopLevelWindow::StartLivePreviewAnimation(v5, 4LL);
    *(_BYTE *)(*((_QWORD *)this + 50) + 16LL * i + 8) = 1;
  }
}
