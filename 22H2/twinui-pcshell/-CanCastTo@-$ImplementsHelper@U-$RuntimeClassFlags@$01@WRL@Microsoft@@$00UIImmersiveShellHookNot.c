/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiveShellHookNotification@@UIServiceProvider@@UIImmersiveShellComponent@@UIImmersiveLauncherCortana@@UIXamlLauncherStateCallback@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180072834
 * Callers:
 *     ?QueryService@XamlLauncher@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180018EE0 (-QueryService@XamlLauncher@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveLauncher@@UIImmersiveLauncherTrayNotify@@UIImmersiveShellHookNotification@@UIServiceProvider@@UIImmersiveShellComponent@@UIImmersiveLauncherCortana@@UIXamlLauncherStateCallback@@UIPrivilegedOperationsConsumer@@@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800445B0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjec.c)
 *     XamlLauncher_CreateInstance @ 0x18039F848 (XamlLauncher_CreateInstance.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveShellHookNotification,IServiceProvider,IImmersiveShellComponent,IImmersiveLauncherCortana,IXamlLauncherStateCallback,IPrivilegedOperationsConsumer>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  BOOL IsEqualGUID; // eax
  _DWORD *v5; // rcx
  _QWORD *v6; // r10
  __int64 v7; // r11
  unsigned int v8; // r8d
  _DWORD *v9; // rcx
  _DWORD *v10; // r9
  _QWORD *v11; // r10
  __int64 v12; // r11

  if ( *a2 == 1260763374
    && a2[1] == *(_DWORD *)&GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c.Data2
    && a2[2] == *(_DWORD *)GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c.Data4
    && a2[3] == *(_DWORD *)&GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  else
  {
    v3 = a1 + 8;
    if ( *a2 == 1834041537
      && a2[1] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data2
      && a2[2] == *(_DWORD *)GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4
      && a2[3] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4[4] )
    {
      *a3 = v3;
      return 0;
    }
    else
    {
      IsEqualGUID = InlineIsEqualGUID(a2, &GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4);
      v8 = 0;
      if ( IsEqualGUID
        || InlineIsEqualGUID(v5, &GUID_5ef7890f_319b_4259_8d0f_36e5ff0916ce)
        || (v7 += 8LL, *v10 == 1201492897)
        && v10[1] == *(_DWORD *)&GUID_479d53a1_03c4_4a44_9a85_13d570bd7ba8.Data2
        && v10[2] == *(_DWORD *)GUID_479d53a1_03c4_4a44_9a85_13d570bd7ba8.Data4
        && v10[3] == *(_DWORD *)&GUID_479d53a1_03c4_4a44_9a85_13d570bd7ba8.Data4[4] )
      {
        *v6 = v7;
      }
      else if ( InlineIsEqualGUID(v9, &GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db) )
      {
        *v11 = v12 + 8;
      }
      else
      {
        return (unsigned int)-2147467262;
      }
    }
    return v8;
  }
}
