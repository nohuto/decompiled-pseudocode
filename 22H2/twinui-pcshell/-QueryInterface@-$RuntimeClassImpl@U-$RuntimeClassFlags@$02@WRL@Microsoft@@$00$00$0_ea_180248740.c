/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIJumpViewExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveMonitorNotification@@UIClosable@Foundation@8@UIActiveZBandNotificationForMonitor@@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180248740
 * Callers:
 *     ?QueryInterface@CJumpViewExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180164DF0 (-QueryInterface@CJumpViewExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CJumpViewExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180164E00 (-QueryInterface@CJumpViewExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIJumpViewExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveMonitorNotification@@UIClosable@Foundation@8@UIActiveZBandNotificationForMonitor@@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180164E10 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIJumpViewE.c)
 *     ?QueryInterface@CJumpViewExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180164E20 (-QueryInterface@CJumpViewExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIJumpViewExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveMonitorNotification@@UIClosable@Foundation@8@UIActiveZBandNotificationForMonitor@@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180164E30 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180164E30.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IJumpViewExperienceManager,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IJumpViewExperienceManager,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>>(
           a1,
           a2,
           a3);
}
