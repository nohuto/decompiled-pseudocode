/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UDwmTouchpadInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmTouchpadInteractionConfigurationPrimitive@@I@Z @ 0x1800C3C64
 * Callers:
 *     _anonymous_namespace_::SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_ @ 0x1800C3ACC (_anonymous_namespace_--SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_.c)
 *     ?Initialize@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAJPEAUIInteractionContextWrapper@@_N@Z @ 0x1800EC114 (-Initialize@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@.c)
 *     ?CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x1801A8564 (-CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUI.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800C3DD8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     memcpy_0 @ 0x1801177E8 (memcpy_0.c)
 */

__int64 __fastcall DynArray<DwmTouchpadInteractionConfigurationPrimitive,0>::AddMultipleAndSet(
        __int64 a1,
        const void *a2,
        __int64 a3)
{
  __int64 v4; // rcx
  unsigned int v5; // esi
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx

  v4 = *(unsigned int *)(a1 + 24);
  v5 = v4 + a3;
  if ( (int)v4 + (int)a3 < (unsigned int)v4 )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2147024362, 0xB5u, 0LL);
  }
  else
  {
    v6 = 0;
    if ( v5 <= *(_DWORD *)(a1 + 20) )
    {
      memcpy_0((void *)(*(_QWORD *)a1 + 12 * v4), a2, 12LL * (unsigned int)a3);
      *(_DWORD *)(a1 + 24) = v5;
    }
    else
    {
      v7 = DynArrayImpl<0>::AddMultipleAndSet(a1, 12LL, a3, a2);
      v6 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xC0u, 0LL);
    }
  }
  return v6;
}
