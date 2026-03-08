/*
 * XREFs of ?TraceUpdatedConfiguration@CInteraction@@QEAAXW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@IPEBX@Z @ 0x180031764
 * Callers:
 *     ?ProcessUpdateConfiguration@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_UPDATECONFIGURATION@@PEBXI@Z @ 0x1800317DC (-ProcessUpdateConfiguration@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_UPD.c)
 * Callees:
 *     McTemplateU0pqqNR2_EventWriteTransfer @ 0x180209BD4 (McTemplateU0pqqNR2_EventWriteTransfer.c)
 */

__int64 __fastcall CInteraction::TraceUpdatedConfiguration(int a1, int a2, int a3, int a4, __int64 a5)
{
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  __int64 result; // rax

  v5 = a3 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          if ( v8 == 1 && (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
            return McTemplateU0pqqNR2_EventWriteTransfer(
                     12 * a4,
                     (unsigned int)&INTERACTION_MOUSEWHEEL_CONFIGURATION_CHANGED,
                     a1,
                     a2,
                     a4,
                     12 * a4,
                     a5);
        }
        else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
        {
          return McTemplateU0pqqNR2_EventWriteTransfer(
                   4 * a4,
                   (unsigned int)&INTERACTION_MOUSE_CONFIGURATION_CHANGED,
                   a1,
                   a2,
                   a4,
                   4 * a4,
                   a5);
        }
      }
      else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
      {
        return McTemplateU0pqqNR2_EventWriteTransfer(
                 12 * a4,
                 (unsigned int)&INTERACTION_PEN_CONFIGURATION_CHANGED,
                 a1,
                 a2,
                 a4,
                 12 * a4,
                 a5);
      }
    }
    else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
    {
      return McTemplateU0pqqNR2_EventWriteTransfer(
               12 * a4,
               (unsigned int)&INTERACTION_TOUCHPAD_CONFIGURATION_CHANGED,
               a1,
               a2,
               a4,
               12 * a4,
               a5);
    }
  }
  else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
  {
    return McTemplateU0pqqNR2_EventWriteTransfer(
             12 * a4,
             (unsigned int)&INTERACTION_TOUCH_CONFIGURATION_CHANGED,
             a1,
             a2,
             a4,
             12 * a4,
             a5);
  }
  return result;
}
