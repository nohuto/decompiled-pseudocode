/*
 * XREFs of ?Initialize@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAJPEAUIInteractionContextWrapper@@_N@Z @ 0x1800ECD44
 * Callers:
 *     ?Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@000_N@Z @ 0x1800ECB90 (-Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@000_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@UDwmTouchpadInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmTouchpadInteractionConfigurationPrimitive@@I@Z @ 0x1800C46C4 (-AddMultipleAndSet@-$DynArray@UDwmTouchpadInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwm.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EC624 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionContextWrapper@@@Z @ 0x1800ECF0C (--4-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionContextWrap.c)
 *     __security_check_cookie @ 0x18010EF20 (__security_check_cookie.c)
 */

__int64 __fastcall CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::Initialize(
        __int64 a1,
        __int64 a2,
        char a3)
{
  char v3; // al
  int v6; // edi
  _DWORD v8[4]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_BYTE *)(a1 + 149);
  v8[0] = 0;
  v8[1] = 0;
  v8[2] = 0;
  *(_BYTE *)(a1 + 149) = a3 | v3 & 0xFE;
  v6 = DynArray<DwmTouchpadInteractionConfigurationPrimitive,0>::AddMultipleAndSet(a1 + 88, v8, 1LL);
  if ( v6 < 0 )
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)a1);
  else
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::operator=(a1, a2);
  return (unsigned int)v6;
}
