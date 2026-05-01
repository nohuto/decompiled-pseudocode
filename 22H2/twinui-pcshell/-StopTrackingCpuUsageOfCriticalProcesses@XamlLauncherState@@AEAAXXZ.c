/*
 * XREFs of ?StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x1803A6320
 * Callers:
 *     ?OnMessage@XamlLauncherState@@UEAAJI_K_J@Z @ 0x1803A4DD0 (-OnMessage@XamlLauncherState@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?SnapshotCpuCyclesUsedByCortana@XamlLauncherState@@AEAAJPEA_K@Z @ 0x1800583A8 (-SnapshotCpuCyclesUsedByCortana@XamlLauncherState@@AEAAJPEA_K@Z.c)
 *     ?SnapshotCpuCyclesUsedByStartMenu@XamlLauncherState@@AEAAJPEA_K@Z @ 0x180058404 (-SnapshotCpuCyclesUsedByStartMenu@XamlLauncherState@@AEAAJPEA_K@Z.c)
 *     ?SnapshotCpuCyclesUsedBySiHost@XamlLauncherState@@AEAAJPEA_K@Z @ 0x1800584AC (-SnapshotCpuCyclesUsedBySiHost@XamlLauncherState@@AEAAJPEA_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18009CA10 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps@@@details@wil@.c)
 *     ??$CriticalProcessDidntUseAnyCpu@AEAY0BM@$$CBG@StartWindowTelemetry@@SAXAEAY0BM@$$CBG@Z @ 0x1803A0BDC (--$CriticalProcessDidntUseAnyCpu@AEAY0BM@$$CBG@StartWindowTelemetry@@SAXAEAY0BM@$$CBG@Z.c)
 *     ??$CriticalProcessDidntUseAnyCpu@AEAY0L@$$CBG@StartWindowTelemetry@@SAXAEAY0L@$$CBG@Z @ 0x1803A0CC8 (--$CriticalProcessDidntUseAnyCpu@AEAY0L@$$CBG@StartWindowTelemetry@@SAXAEAY0L@$$CBG@Z.c)
 *     ??$CriticalProcessDidntUseAnyCpu@PEBG@StartWindowTelemetry@@SAX$$QEAPEBG@Z @ 0x1803A0DB4 (--$CriticalProcessDidntUseAnyCpu@PEBG@StartWindowTelemetry@@SAX$$QEAPEBG@Z.c)
 */

void __fastcall XamlLauncherState::StopTrackingCpuUsageOfCriticalProcesses(XamlLauncherState *this)
{
  int started; // eax
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // r8
  int v6; // eax
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v11; // [rsp+40h] [rbp+18h] BYREF
  const wchar_t *v12; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  if ( *((_QWORD *)this + 129) )
  {
    started = XamlLauncherState::SnapshotCpuCyclesUsedByStartMenu(this, &v9);
    if ( started >= 0 )
    {
      if ( v9 == *((_QWORD *)this + 129) )
        StartWindowTelemetry::CriticalProcessDidntUseAnyCpu<unsigned short const (&)[28]>(v3);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x9B8,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)started);
    }
  }
  v10 = 0LL;
  if ( *((_QWORD *)this + 130) )
  {
    v4 = XamlLauncherState::SnapshotCpuCyclesUsedByCortana(this, &v10);
    if ( v4 >= 0 )
    {
      if ( v10 == *((_QWORD *)this + 130) )
      {
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::ReportUsage(
          `wil::Feature<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::GetImpl'::`2'::impl,
          1u,
          v5);
        v12 = L"searchapp.exe";
        StartWindowTelemetry::CriticalProcessDidntUseAnyCpu<unsigned short const *>((__int64 *)&v12);
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x9C0,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v4);
    }
  }
  v11 = 0LL;
  if ( *((_QWORD *)this + 131) )
  {
    v6 = XamlLauncherState::SnapshotCpuCyclesUsedBySiHost(this, &v11);
    if ( v6 >= 0 )
    {
      if ( v11 == *((_QWORD *)this + 131) )
        StartWindowTelemetry::CriticalProcessDidntUseAnyCpu<unsigned short const (&)[11]>(v7);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x9C8,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v6);
    }
  }
}
