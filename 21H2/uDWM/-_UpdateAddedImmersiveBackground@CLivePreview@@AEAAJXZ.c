/*
 * XREFs of ?_UpdateAddedImmersiveBackground@CLivePreview@@AEAAJXZ @ 0x180084304
 * Callers:
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z @ 0x18008231C (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 *     ?_ShouldAddImmersiveChrome@CLivePreview@@AEAA_NXZ @ 0x180083F30 (-_ShouldAddImmersiveChrome@CLivePreview@@AEAA_NXZ.c)
 *     ?s_GetCoverageStateOfTwoRects@CLivePreview@@CA?AW4COVERAGESTATE@@PEBUtagRECT@@0PEAU3@@Z @ 0x180085130 (-s_GetCoverageStateOfTwoRects@CLivePreview@@CA-AW4COVERAGESTATE@@PEBUtagRECT@@0PEAU3@@Z.c)
 */

__int64 __fastcall CLivePreview::_UpdateAddedImmersiveBackground(CLivePreview *this)
{
  unsigned int i; // edi
  __int64 v3; // rdx
  __int64 v4; // rsi
  int CoverageStateOfTwoRects; // eax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  if ( CLivePreview::_ShouldAddImmersiveChrome(this) )
  {
    for ( i = 0; i < *((_DWORD *)this + 114); ++i )
    {
      v3 = *((_QWORD *)this + 65);
      if ( !v3 || *(_DWORD *)(v3 + 112) == 1 )
      {
        v8 = 32LL * i;
        *(_BYTE *)(v8 + *((_QWORD *)this + 54) + 24) = 0;
        v7 = *(_QWORD *)(v8 + *((_QWORD *)this + 54));
      }
      else
      {
        v4 = 32LL * i;
        CoverageStateOfTwoRects = CLivePreview::s_GetCoverageStateOfTwoRects(
                                    v4 + *((_QWORD *)this + 54) + 8LL,
                                    v3 + 48,
                                    0LL);
        v6 = *((_QWORD *)this + 54);
        *(_BYTE *)(v4 + v6 + 24) = CoverageStateOfTwoRects != 1;
        v7 = *(_QWORD *)(v4 + *((_QWORD *)this + 54));
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 104LL))(v7);
    }
  }
  return 0LL;
}
