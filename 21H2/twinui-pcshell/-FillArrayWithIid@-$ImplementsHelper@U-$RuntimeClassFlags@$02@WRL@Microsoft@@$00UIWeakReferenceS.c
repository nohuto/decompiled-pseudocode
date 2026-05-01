/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@UIPortableViewHostItem@6789@UIApplicationViewBackedViewHostItemPrivate@@U?$Implements@UIForegroundTarget@ComposableShell@Internal@Windows@@UICoreForegroundTarget@Core@234@UIKeepAliveView@234@VTreeNodeBase@234@@23@UIImmersiveShellHookNotification@@UIApplicationViewChangeListener@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x1800C8D4C
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewHostItem@Holographic@Shell@Internal@Windows@@UIViewHostItemAppViewInternal@5678@UIPortableViewHostItem@5678@UIApplicationViewBackedViewHostItemPrivate@@U?$Implements@UIForegroundTarget@ComposableShell@Internal@Windows@@UICoreForegroundTarget@Core@234@UIKeepAliveView@234@VTreeNodeBase@234@@23@UIImmersiveShellHookNotification@@UIApplicationViewChangeListener@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800C8FF0 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewHostItem@Hol.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal,Windows::Internal::Shell::Holographic::IPortableViewHostItem,IApplicationViewBackedViewHostItemPrivate,Microsoft::WRL::Implements<Windows::Internal::ComposableShell::IForegroundTarget,Windows::Internal::ComposableShell::Core::ICoreForegroundTarget,Windows::Internal::ComposableShell::IKeepAliveView,Windows::Internal::ComposableShell::TreeNodeBase>,IImmersiveShellHookNotification,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>::FillArrayWithIid(
        __int64 a1,
        unsigned int *a2,
        __int64 a3)
{
  int v3; // ecx
  __int64 result; // rax

  v3 = *a2;
  *(GUID *)(a3 + 16LL * *a2) = GUID_00000038_0000_0000_c000_000000000046;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 1)) = GUID_0cfc8c70_0442_4d54_ab51_7f5a0c9e44ad;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 2)) = GUID_89e6231e_c28a_418b_8621_c325652634e7;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 3)) = GUID_86ccf8b6_d952_45b2_b3ad_bf46c2eec142;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 4)) = GUID_a0c468da_f582_42e8_886b_d3cc317a5fcb;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 5)) = GUID_0a755d7a_42b9_45ce_b3f2_398496c2378d;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 6)) = GUID_6b2d1c78_3576_4417_841c_3cf804725d86;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 7)) = GUID_2d10b4a2_7c09_4621_b36f_9a62ecbac6cb;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 8)) = GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 9)) = GUID_727f9e97_76ee_497b_a942_b6371328485c;
  result = (unsigned int)(v3 + 10);
  *a2 = result;
  return result;
}
