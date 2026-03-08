/*
 * XREFs of ?ProcessSetEnabled@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONLIGHT_SETENABLED@@@Z @ 0x18021626C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UpdateRegistrationWithCompositor@CCompositionLight@@IEAAXXZ @ 0x1800C718C (-UpdateRegistrationWithCompositor@CCompositionLight@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionLight::ProcessSetEnabled(
        CCompositionLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONLIGHT_SETENABLED *a3)
{
  char v3; // al

  v3 = *((_BYTE *)a3 + 8);
  if ( *((_BYTE *)this + 170) != v3 )
  {
    *((_BYTE *)this + 170) = v3;
    CCompositionLight::UpdateRegistrationWithCompositor(this);
    (*(void (__fastcall **)(CCompositionLight *, __int64))(*(_QWORD *)this + 72LL))(this, 5LL);
    (*(void (__fastcall **)(CCompositionLight *, __int64))(*(_QWORD *)this + 72LL))(this, 1LL);
  }
  return 0LL;
}
