/*
 * XREFs of ?SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z @ 0x1802A8128
 * Callers:
 *     ?ProcessCreate@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICINTEROPTEXTURE_CREATE@@@Z @ 0x1802A7C74 (-ProcessCreate@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICINT.c)
 *     ?ProcessSetRoot@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETROOT@@@Z @ 0x1802A7EB8 (-ProcessSetRoot@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICIN.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Create@CDesktopTree@@KAJPEAVCComposition@@PEAVCVisual@@U_LUID@@PEAPEAV1@@Z @ 0x18020C988 (-Create@CDesktopTree@@KAJPEAVCComposition@@PEAVCVisual@@U_LUID@@PEAPEAV1@@Z.c)
 *     ??$ReleaseInterface@VCVisual@@@@YAXAEAPEAVCVisual@@@Z @ 0x1802A699C (--$ReleaseInterface@VCVisual@@@@YAXAEAPEAVCVisual@@@Z.c)
 *     ?SetVisualTree@CHolographicInteropTexture@@AEAAJPEAVCVisualTree@@@Z @ 0x1802A8224 (-SetVisualTree@CHolographicInteropTexture@@AEAAJPEAVCVisualTree@@@Z.c)
 */

__int64 __fastcall CHolographicInteropTexture::SetRootVisual(CHolographicInteropTexture *this, struct CVisual *a2)
{
  struct CVisualTree *v4; // rdi
  unsigned int v5; // eax
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v10; // eax
  __int64 v11; // rcx
  struct CDesktopTree *v12; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0LL;
  ReleaseInterface<CVisual>((__int64 *)this + 13);
  if ( a2 )
  {
    v5 = *((_DWORD *)this + 56);
    if ( v5 )
    {
      v10 = CDesktopTree::Create(
              *((struct CComposition **)this + 2),
              a2,
              (struct _LUID)(v5 | 0xFFFFFFFE00000000uLL),
              (struct _LUID **)&v12);
      v8 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x10Eu, 0LL);
        return v8;
      }
      v4 = v12;
    }
    else
    {
      *((_QWORD *)this + 13) = a2;
      (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)a2 + 8LL))(a2);
    }
  }
  v6 = CHolographicInteropTexture::SetVisualTree(this, v4);
  v8 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x114u, 0LL);
  if ( v4 )
    (*(void (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v4 + 16LL))(v4);
  return v8;
}
