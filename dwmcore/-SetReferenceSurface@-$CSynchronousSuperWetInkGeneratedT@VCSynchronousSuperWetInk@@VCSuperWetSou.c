/*
 * XREFs of ?SetReferenceSurface@?$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCSuperWetSource@@@@QEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x1801C65C0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18004A70C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ @ 0x1802507C8 (-OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ.c)
 */

__int64 __fastcall CSynchronousSuperWetInkGeneratedT<CSynchronousSuperWetInk,CSuperWetSource>::SetReferenceSurface(
        CSynchronousSuperWetInk *this,
        struct CResource *a2)
{
  unsigned int v3; // edi
  struct CResource *v4; // rcx
  int v6; // eax
  __int64 v7; // rcx

  v3 = 0;
  v4 = (struct CResource *)*((_QWORD *)this + 23);
  if ( a2 != v4 )
  {
    if ( v4 )
      (*(void (__fastcall **)(_QWORD *, _QWORD))(**((_QWORD **)v4 + 13) + 384LL))(*((_QWORD **)v4 + 13), 0LL);
    v6 = CResource::RegisterNotifier(this, a2);
    v3 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x1748u, 0LL);
    }
    else
    {
      CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 23));
      *((_QWORD *)this + 23) = a2;
      CSynchronousSuperWetInk::OnPropertyChanged(this);
    }
  }
  return v3;
}
