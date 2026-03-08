/*
 * XREFs of ?ProcessUpdateConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C00A22B4
 * Callers:
 *     ?SetBufferProperty@CInteractionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00A2250 (-SetBufferProperty@CInteractionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX.c)
 * Callees:
 *     ?ProcessUpdatePenConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C00A22FC (-ProcessUpdatePenConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDw.c)
 *     ?ProcessUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C00A2370 (-ProcessUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUD.c)
 *     ?ProcessUpdateTouchConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C00A23E4 (-ProcessUpdateTouchConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBU.c)
 *     ?ApplyConfigOperation@CInteractionConfigurationGroup@DirectComposition@@CAIIIW4Enum@InteractionProperty@@PEA_N@Z @ 0x1C00A2600 (-ApplyConfigOperation@CInteractionConfigurationGroup@DirectComposition@@CAIIIW4Enum@InteractionP.c)
 */

__int64 __fastcall DirectComposition::CInteractionConfigurationGroup::ProcessUpdateConfiguration(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        _BYTE *a4)
{
  unsigned int v5; // r10d
  int v7; // eax
  _DWORD *v8; // r11
  _BYTE *v9; // r9
  int v10; // eax
  __int64 v11; // r11
  _BYTE *v12; // r9

  switch ( *a2 )
  {
    case 1:
      return (unsigned int)DirectComposition::CInteractionConfigurationGroup::ProcessUpdateTouchConfigurationList();
    case 2:
      return (unsigned int)DirectComposition::CInteractionConfigurationGroup::ProcessUpdateTouchpadConfiguration();
    case 3:
      return (unsigned int)DirectComposition::CInteractionConfigurationGroup::ProcessUpdatePenConfigurationList();
    case 4:
      *a4 = 0;
      v10 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(
              *(unsigned int *)(a1 + 84),
              (unsigned int)a2[1]);
      *(_DWORD *)(v11 + 84) = v10;
      if ( *v12 != (_BYTE)v5 )
        *(_DWORD *)(v11 + 12) |= 1u;
      break;
    case 5:
      *a4 = 0;
      v7 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(
             *(unsigned int *)(a1 + 96),
             (unsigned int)a2[1]);
      v8[23] = -1;
      v8[24] = v7;
      v8[22] = 1;
      if ( *v9 != (_BYTE)v5 )
        v8[3] |= 0x10u;
      break;
    default:
      return (unsigned int)-1073741811;
  }
  return v5;
}
