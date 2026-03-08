/*
 * XREFs of ?ProcessSetCreationParams@CCompositionCubeMap@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONCUBEMAP_SETCREATIONPARAMS@@@Z @ 0x18021FBEC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z @ 0x180027268 (-Grow@-$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionCubeMap::ProcessSetCreationParams(
        CCompositionCubeMap *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONCUBEMAP_SETCREATIONPARAMS *a3)
{
  int v4; // ecx
  int v5; // esi
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi

  if ( *((_QWORD *)this + 20) != *((_QWORD *)a3 + 1) )
  {
    *((_DWORD *)this + 40) = *((_DWORD *)a3 + 2);
    v4 = *((_DWORD *)a3 + 3);
    *((_DWORD *)this + 41) = v4;
    *((_BYTE *)this + 168) = *((_BYTE *)a3 + 16);
    v5 = 6 * v4;
    v6 = DynArrayImpl<1>::Grow((unsigned __int64)this + 88, 0x20u, 6 * v4, 1, 0LL);
    v8 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x81u, 0LL);
      return v8;
    }
    *((_DWORD *)this + 28) = v5;
    (*(void (__fastcall **)(CCompositionCubeMap *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
  }
  return 0;
}
