/*
 * XREFs of ?CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ @ 0x1C0084D24
 * Callers:
 *     ?SetDefaultConfiguration@CInteractionMarshaler@DirectComposition@@QEAAJXZ @ 0x1C00838D4 (-SetDefaultConfiguration@CInteractionMarshaler@DirectComposition@@QEAAJXZ.c)
 *     ?SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z @ 0x1C0083E9C (-SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z.c)
 * Callees:
 *     ?SetConfigurationAll@CInteractionConfigurationGroup@DirectComposition@@QEAAJW4Enum@InteractionInputType@@@Z @ 0x1C0084E24 (-SetConfigurationAll@CInteractionConfigurationGroup@DirectComposition@@QEAAJW4Enum@InteractionIn.c)
 *     ?ClearConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAXXZ @ 0x1C0086288 (-ClearConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAXXZ.c)
 *     ?QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z @ 0x1C0095B9C (-QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z.c)
 */

__int64 __fastcall DirectComposition::CInteractionMarshaler::CheckInputSinkTypes(
        DirectComposition::CInteractionMarshaler *this)
{
  int v1; // edi
  CompositionInputObject *v4; // rcx
  int v5; // r14d
  char v6; // si
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  v1 = 0;
  if ( (*((_BYTE *)this + 340) & 1) == 0 )
    return 0LL;
  v4 = (CompositionInputObject *)*((_QWORD *)this + 34);
  v5 = 0;
  v6 = 0;
  v8 = 0LL;
  v7 = 0LL;
  if ( v4 )
  {
    CompositionInputObject::QueryInputQueueTypes(v4, (struct COMPOSITION_INPUT_SINK_QUERY_V2 *)&v7);
    v5 = v8;
  }
  else
  {
    v6 = 1;
  }
  DirectComposition::CInteractionConfigurationGroup::ClearConfiguration((DirectComposition::CInteractionMarshaler *)((char *)this + 64));
  if ( !v6 && v5 <= 1 )
  {
LABEL_10:
    if ( SDWORD1(v7) <= 1 )
    {
LABEL_12:
      if ( v6 || SHIDWORD(v7) > 1 )
      {
        v1 = DirectComposition::CInteractionConfigurationGroup::SetConfigurationAll((char *)this + 64, 1LL);
        if ( v1 >= 0 )
          v1 = DirectComposition::CInteractionConfigurationGroup::SetConfigurationAll((char *)this + 64, 2LL);
      }
      goto LABEL_16;
    }
LABEL_11:
    *((_DWORD *)this + 19) |= 1u;
    v1 = 0;
    *((_DWORD *)this + 37) = -805306369;
    goto LABEL_12;
  }
  v1 = DirectComposition::CInteractionConfigurationGroup::SetConfigurationAll((char *)this + 64, 3LL);
  if ( v1 >= 0 )
  {
    if ( v6 )
      goto LABEL_11;
    goto LABEL_10;
  }
LABEL_16:
  *((_DWORD *)this + 4) |= 0x200u;
  return (unsigned int)v1;
}
