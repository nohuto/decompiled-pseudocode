/*
 * XREFs of ??$GetImplementedIIDS@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIControlCenterExperienceManager@6789@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@9@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIControlCenterExperienceManager@6789@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@9@@123@PEAKPEAPEAU_GUID@@@Z @ 0x180222504
 * Callers:
 *     ?GetIids@CControlCenterExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180223100 (-GetIids@CControlCenterExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::GetImplementedIIDS<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable>>(
        __int64 a1,
        _DWORD *a2,
        GUID **a3)
{
  GUID *v5; // rax

  *a3 = 0LL;
  *a2 = 0;
  v5 = (GUID *)CoTaskMemAlloc(0x90uLL);
  if ( !v5 )
    return 2147942414LL;
  *v5 = GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90;
  v5[1] = GUID_8d4d1ec2_4740_4fc5_b4b1_6dc3722a2eeb;
  v5[2] = GUID_00000038_0000_0000_c000_000000000046;
  v5[3] = GUID_fd8022e5_1099_53f9_b49a_b39bf3f15861;
  v5[4] = GUID_d669a58e_6b18_4d1d_9004_a8862adb0a20;
  v5[5] = GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2;
  v5[6] = GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0;
  v5[7] = GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270;
  v5[8] = GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e;
  *a2 = 9;
  *a3 = v5;
  return 0LL;
}
