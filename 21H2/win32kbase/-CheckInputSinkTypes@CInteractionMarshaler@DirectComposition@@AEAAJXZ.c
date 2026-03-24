/*
 * XREFs of ?CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ @ 0x1C0083870
 * Callers:
 *     ?EnsureInteraction@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@_NPEBGPEAPEAVCInteractionMarshaler@2@@Z @ 0x1C008322C (-EnsureInteraction@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@_NPEBGPEAP.c)
 *     ?SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z @ 0x1C008347C (-SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z.c)
 * Callees:
 *     ?QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z @ 0x1C005AAA4 (-QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z.c)
 *     ?SetConfigurationAll@CInteractionConfigurationGroup@DirectComposition@@QEAAJW4Enum@InteractionInputType@@@Z @ 0x1C0083978 (-SetConfigurationAll@CInteractionConfigurationGroup@DirectComposition@@QEAAJW4Enum@InteractionIn.c)
 *     ?ClearConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAXXZ @ 0x1C0083DA0 (-ClearConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CInteractionMarshaler::CheckInputSinkTypes(
        DirectComposition::CInteractionMarshaler *this)
{
  int v1; // ebx
  CompositionInputObject *v3; // rcx
  int v4; // r14d
  char v5; // bp
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  v1 = 0;
  if ( (*((_BYTE *)this + 332) & 1) != 0 )
  {
    v3 = (CompositionInputObject *)*((_QWORD *)this + 33);
    v4 = 0;
    v5 = 0;
    v8 = 0LL;
    v7 = 0LL;
    if ( v3 )
    {
      CompositionInputObject::QueryInputQueueTypes(v3, (struct COMPOSITION_INPUT_SINK_QUERY_V2 *)&v7);
      v4 = v8;
    }
    else
    {
      v5 = 1;
    }
    DirectComposition::CInteractionConfigurationGroup::ClearConfiguration((DirectComposition::CInteractionMarshaler *)((char *)this + 56));
    if ( v5 || v4 > 1 )
    {
      v1 = DirectComposition::CInteractionConfigurationGroup::SetConfigurationAll((char *)this + 56, 3LL);
      if ( v1 < 0 )
      {
LABEL_16:
        *((_DWORD *)this + 4) |= 0x200u;
        return (unsigned int)v1;
      }
      if ( v5 )
        goto LABEL_10;
    }
    if ( SDWORD1(v7) > 1 )
LABEL_10:
      v1 = DirectComposition::CInteractionConfigurationGroup::SetConfigurationAll((char *)this + 56, 4LL);
    if ( v1 >= 0 && (v5 || SHIDWORD(v7) > 1) )
    {
      v1 = DirectComposition::CInteractionConfigurationGroup::SetConfigurationAll((char *)this + 56, 1LL);
      if ( v1 >= 0 )
        v1 = DirectComposition::CInteractionConfigurationGroup::SetConfigurationAll((char *)this + 56, 2LL);
    }
    goto LABEL_16;
  }
  return 0LL;
}
