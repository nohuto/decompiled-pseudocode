/*
 * XREFs of _anonymous_namespace_::SetArrayConfiguration_DwmPenInteractionConfigurationPrimitive_ @ 0x1800C3B9C
 * Callers:
 *     ?SetInteractionConfiguration@CInteractionProcessor@@QEAAJW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@PEBXI@Z @ 0x1800C3914 (-SetInteractionConfiguration@CInteractionProcessor@@QEAAJW4Enum@InteractionConfigurationUpdateTy.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@UDwmPenInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmPenInteractionConfigurationPrimitive@@I@Z @ 0x1800C3D5C (-AddMultipleAndSet@-$DynArray@UDwmPenInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmPenIn.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D4A28 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

__int64 __fastcall anonymous_namespace_::SetArrayConfiguration_DwmPenInteractionConfigurationPrimitive_(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  int v6; // edi

  if ( !a1 && a2 )
  {
    v6 = -2147024809;
    goto LABEL_6;
  }
  *(_DWORD *)(a3 + 24) = 0;
  DynArrayImpl<0>::ShrinkToSize(a3, 12LL);
  v6 = DynArray<DwmPenInteractionConfigurationPrimitive,0>::AddMultipleAndSet(a3, a1, a2);
  if ( v6 < 0 )
  {
LABEL_6:
    *(_DWORD *)(a3 + 24) = 0;
    DynArrayImpl<0>::ShrinkToSize(a3, 12LL);
  }
  return (unsigned int)v6;
}
