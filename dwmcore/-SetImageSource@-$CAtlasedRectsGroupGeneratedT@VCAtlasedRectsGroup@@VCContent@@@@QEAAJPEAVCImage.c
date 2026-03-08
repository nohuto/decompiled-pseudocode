/*
 * XREFs of ?SetImageSource@?$CAtlasedRectsGroupGeneratedT@VCAtlasedRectsGroup@@VCContent@@@@QEAAJPEAVCImageSource@@@Z @ 0x1800F5AFC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18004A70C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsGroupGeneratedT<CAtlasedRectsGroup,CContent>::SetImageSource(
        struct CResource **this,
        struct CResource *a2)
{
  unsigned int v2; // ebx
  int v6; // eax
  __int64 v7; // rcx
  struct CResource *v8; // rcx

  v2 = 0;
  if ( a2 != this[9] )
  {
    v6 = CResource::RegisterNotifier((CResource *)this, a2);
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x124u, 0LL);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[9]);
      v8 = *this;
      this[9] = a2;
      (*((void (__fastcall **)(struct CResource **, _QWORD, _QWORD))v8 + 9))(this, 0LL, 0LL);
    }
  }
  return v2;
}
