/*
 * XREFs of ?ProcessSetCoordinateSpace@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONPOINTLIGHT_SETCOORDINATESPACE@@@Z @ 0x1802219EC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009EE80 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z @ 0x1800C6FF4 (--4-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z.c)
 *     ?IssueLightChangedNotification@CCompositionLight@@QEAAXXZ @ 0x1800C7150 (-IssueLightChangedNotification@CCompositionLight@@QEAAXXZ.c)
 *     ?UpdateRegistrationWithCompositor@CCompositionLight@@IEAAXXZ @ 0x1800C718C (-UpdateRegistrationWithCompositor@CCompositionLight@@IEAAXXZ.c)
 */

__int64 __fastcall CCompositionPointLight::ProcessSetCoordinateSpace(
        CCompositionPointLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONPOINTLIGHT_SETCOORDINATESPACE *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  __int64 Resource; // rax
  __int64 v8; // rcx

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( !v5 || (Resource = CResourceTable::GetResource((__int64)a2, v5, 0xC4u)) != 0 )
  {
    if ( Resource != *((_QWORD *)this + 32) )
    {
      wil::com_ptr_t<CVisual,wil::err_returncode_policy>::operator=((__int64 *)this + 32, Resource);
      CCompositionLight::UpdateRegistrationWithCompositor(this);
      CCompositionLight::IssueLightChangedNotification(this);
    }
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, 0x103u, 0LL);
  }
  return v4;
}
