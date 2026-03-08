/*
 * XREFs of ?AddTargets@CCompositionLight@@AEAAJPEAVCResourceTable@@IPEBXIW4LightBehavior@@@Z @ 0x180011B08
 * Callers:
 *     ?ProcessAddTargets@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONLIGHT_ADDTARGETS@@PEBXI@Z @ 0x180011AE8 (-ProcessAddTargets@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONLIGHT_AD.c)
 *     ?ProcessAddExclusions@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONLIGHT_ADDEXCLUSIONS@@PEBXI@Z @ 0x180216238 (-ProcessAddExclusions@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONLIGHT.c)
 * Callees:
 *     ?AddTarget@CCompositionLight@@QEAAJPEAVCVisual@@W4LightBehavior@@_N@Z @ 0x180011BBC (-AddTarget@CCompositionLight@@QEAAJPEAVCVisual@@W4LightBehavior@@_N@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x180049354 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionLight::AddTargets(
        __int64 a1,
        CResourceTable *a2,
        unsigned int a3,
        unsigned int *a4,
        __int64 a5,
        unsigned int a6)
{
  unsigned int v6; // ebx
  unsigned int v7; // edi
  struct CResource *ResourceWithoutType; // rax
  unsigned int v13; // ecx
  struct CResource *v14; // rbx
  int v15; // eax
  unsigned int v16; // ecx

  v6 = 0;
  v7 = 0;
  if ( a3 )
  {
    while ( 1 )
    {
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *a4);
      v14 = ResourceWithoutType;
      if ( !ResourceWithoutType
        || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 56LL))(
              ResourceWithoutType,
              196LL) )
      {
        break;
      }
      v15 = CCompositionLight::AddTarget(a1, v14, a6, 0LL);
      v6 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xA8u, 0LL);
        return v6;
      }
      ++v7;
      ++a4;
      if ( v7 >= a3 )
        return v6;
    }
    v6 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2003303421, 0xA4u, 0LL);
  }
  return v6;
}
