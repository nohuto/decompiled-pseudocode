/*
 * XREFs of ?ActiveZBandChangedForMonitor@ImmersiveMonitorHelper@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x18007D410
 * Callers:
 *     <none>
 * Callees:
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x180010CEC (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FixZBandChangeRaceCondition@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18007D63C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FixZBandChangeRaceCondition@@@details@wil.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?IsBelowImmersiveLauncher@ZBandHelpers@@YA_NW4ZBID@@@Z @ 0x1801E360C (-IsBelowImmersiveLauncher@ZBandHelpers@@YA_NW4ZBID@@@Z.c)
 */

__int64 __fastcall ImmersiveMonitorHelper::ActiveZBandChangedForMonitor(__int64 a1, __int64 a2, unsigned int a3)
{
  char v6; // si
  char v7; // r14
  bool v8; // di
  HWND ForegroundWindow; // rax
  enum _TABLETMODESTATE *v10; // rdx
  TabletModeHelpers *v11; // rcx
  void (*v12)(void); // rax
  int v13; // [rsp+40h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(a1 + 48) )
    return 2147943568LL;
  v6 = 1;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixZBandChangeRaceCondition>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_FixZBandChangeRaceCondition>::GetImpl'::`2'::impl,
    a2);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 40LL))(*(_QWORD *)(a1 + 48)) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 96LL))(*(_QWORD *)(a1 + 48))
      || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 104LL))(*(_QWORD *)(a1 + 48)) )
    {
      v7 = 1;
    }
    else
    {
      v7 = 0;
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 112LL))(*(_QWORD *)(a1 + 48))
        && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 128LL))(*(_QWORD *)(a1 + 48)) )
      {
        return 0LL;
      }
    }
    v8 = 1;
    ForegroundWindow = GetForegroundWindow();
    if ( (unsigned int)GetWindowBand(ForegroundWindow, &v13) )
      v8 = v13 != 13;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 112LL))(*(_QWORD *)(a1 + 48))
      && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 120LL))(*(_QWORD *)(a1 + 48))
      && a3 == 6 )
    {
      v8 = 0;
    }
    if ( !v7
      && (!(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 128LL))(*(_QWORD *)(a1 + 48))
       || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 112LL))(*(_QWORD *)(a1 + 48))) )
    {
      v6 = 0;
    }
    if ( !v8 )
      return 0LL;
    if ( v6 && (unsigned __int8)ZBandHelpers::IsBelowImmersiveLauncher(a3) )
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 48) + 72LL))(*(_QWORD *)(a1 + 48), 7LL);
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 112LL))(*(_QWORD *)(a1 + 48))
      || !(unsigned __int8)ZBandHelpers::IsBelowImmersiveLauncher(a3) && a3 != 6 )
    {
      return 0LL;
    }
    if ( v7 )
    {
      if ( TabletModeHelpers::IsTabletMode(v11, v10)
        && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 136LL))(*(_QWORD *)(a1 + 48)) )
      {
        return 0LL;
      }
      v12 = *(void (**)(void))(**(_QWORD **)(a1 + 48) + 88LL);
      goto LABEL_33;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 136LL))(*(_QWORD *)(a1 + 48)) )
    {
      v12 = *(void (**)(void))(**(_QWORD **)(a1 + 48) + 80LL);
LABEL_33:
      v12();
    }
  }
  return 0LL;
}
