/*
 * XREFs of ?SetInteractionConfiguration@CInteractionProcessor@@QEAAJW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@PEBXI@Z @ 0x1800C3914
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x18003263C (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 *     ?Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z @ 0x180208E24 (-Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z.c)
 * Callees:
 *     _anonymous_namespace_::SetArrayConfiguration_DwmMousewheelInteractionConfigurationPrimitive_ @ 0x1800C38B0 (_anonymous_namespace_--SetArrayConfiguration_DwmMousewheelInteractionConfigurationPrimitive_.c)
 *     _anonymous_namespace_::SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_ @ 0x1800C3ACC (_anonymous_namespace_--SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_.c)
 *     _anonymous_namespace_::SetArrayConfiguration_DwmTouchInteractionConfigurationPrimitive_ @ 0x1800C3B34 (_anonymous_namespace_--SetArrayConfiguration_DwmTouchInteractionConfigurationPrimitive_.c)
 *     _anonymous_namespace_::SetArrayConfiguration_DwmPenInteractionConfigurationPrimitive_ @ 0x1800C3B9C (_anonymous_namespace_--SetArrayConfiguration_DwmPenInteractionConfigurationPrimitive_.c)
 */

__int64 __fastcall CInteractionProcessor::SetInteractionConfiguration(
        __int64 a1,
        int a2,
        int a3,
        _DWORD *a4,
        unsigned int a5)
{
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // eax
  char v11; // cl
  unsigned int v12; // edx
  int v13; // r8d
  __int64 v14; // r8
  int v16; // eax
  int v17; // eax
  int v18; // eax

  v7 = a3 - 1;
  if ( !v7 )
  {
    v17 = anonymous_namespace_::SetArrayConfiguration_DwmTouchInteractionConfigurationPrimitive_(
            a4,
            a5,
            a1 + (a2 != 0 ? 720LL : 88LL));
    v11 = 0;
    v12 = v17;
    if ( v17 < 0 )
      return v12;
    if ( !a2 )
    {
      *(_BYTE *)(a1 + 148) |= 1u;
      return v12;
    }
    goto LABEL_12;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v16 = anonymous_namespace_::SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_(
            a4,
            a5,
            a1 + (a2 != 0 ? 752LL : 248LL));
    v11 = 0;
    v12 = v16;
    if ( v16 < 0 )
      return v12;
    if ( !a2 )
    {
      *(_BYTE *)(a1 + 308) |= 1u;
      return v12;
    }
    goto LABEL_12;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v10 = anonymous_namespace_::SetArrayConfiguration_DwmPenInteractionConfigurationPrimitive_(
            a4,
            a5,
            a1 + (a2 != 0 ? 688LL : 408LL));
    v11 = 0;
    v12 = v10;
    if ( v10 < 0 )
      return v12;
    if ( !a2 )
    {
      *(_BYTE *)(a1 + 468) |= 1u;
      return v12;
    }
    goto LABEL_12;
  }
  v13 = v9 - 1;
  if ( !v13 )
  {
    v11 = 0;
    v14 = a2 != 0 ? 8 : 0;
    v12 = 0;
    if ( a4 )
    {
      if ( a5 )
      {
        *(_DWORD *)(v14 + a1 + 640) = *a4;
        goto LABEL_11;
      }
    }
    else if ( a5 )
    {
      v12 = -2147024809;
      goto LABEL_11;
    }
    *(_DWORD *)(v14 + a1 + 640) = 0;
LABEL_11:
    if ( (v12 & 0x80000000) != 0 )
      return v12;
    goto LABEL_12;
  }
  if ( v13 != 1 )
    return (unsigned int)-2147024809;
  v18 = anonymous_namespace_::SetArrayConfiguration_DwmMousewheelInteractionConfigurationPrimitive_(
          (__int64)a4,
          a5,
          a1 + (a2 != 0 ? 656LL : 568LL));
  v11 = 0;
  v12 = v18;
  if ( v18 >= 0 )
  {
    if ( !a2 )
    {
      *(_BYTE *)(a1 + 628) |= 1u;
      return v12;
    }
LABEL_12:
    if ( a2 == 1 )
    {
      if ( *(_DWORD *)(a1 + 648)
        || *(_DWORD *)(a1 + 680)
        || *(_DWORD *)(a1 + 712)
        || *(_DWORD *)(a1 + 744)
        || *(_DWORD *)(a1 + 776) )
      {
        v11 = 1;
      }
      *(_BYTE *)(a1 + 1264) = v11 | *(_BYTE *)(a1 + 1264) & 0xFE;
    }
  }
  return v12;
}
