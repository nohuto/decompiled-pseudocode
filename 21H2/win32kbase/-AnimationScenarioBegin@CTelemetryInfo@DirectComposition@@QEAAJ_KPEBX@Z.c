/*
 * XREFs of ?AnimationScenarioBegin@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z @ 0x1C0099838
 * Callers:
 *     NtDCompositionTelemetryAnimationScenarioBegin @ 0x1C009F660 (NtDCompositionTelemetryAnimationScenarioBegin.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C00295D0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     ?VerifyInfo@DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@SA_NPEBX_K@Z @ 0x1C0099954 (-VerifyInfo@DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@SA_NPEBX_K@Z.c)
 *     memmove @ 0x1C00CF880 (memmove.c)
 */

__int64 __fastcall DirectComposition::CTelemetryInfo::AnimationScenarioBegin(
        DirectComposition::CTelemetryInfo *this,
        size_t a2,
        char *a3)
{
  int v6; // r14d
  __int64 v7; // rbx
  int v8; // edi
  DirectComposition::CTelemetryInfo **v9; // rcx

  v6 = (a2 + 11) & 0xFFFFFFFC;
  v7 = Win32AllocPoolWithQuota((unsigned int)(v6 + 20), 0x6F744344u);
  v8 = 0;
  if ( !v7 )
    v8 = -1073741801;
  if ( v8 >= 0 )
  {
    *(_DWORD *)(v7 + 16) = v6;
    *(_DWORD *)(v7 + 20) = v6;
    *(_DWORD *)(v7 + 24) = 287;
    if ( &a3[a2] < a3 || (unsigned __int64)&a3[a2] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove((void *)(v7 + 28), a3, a2);
    if ( !DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO::VerifyInfo((const void *)(v7 + 28), a2) )
      v8 = -1073741811;
    if ( v8 >= 0 )
    {
      v9 = (DirectComposition::CTelemetryInfo **)*((_QWORD *)this + 7);
      if ( *v9 != (DirectComposition::CTelemetryInfo *)((char *)this + 48) )
        __fastfail(3u);
      *(_QWORD *)v7 = (char *)this + 48;
      *(_QWORD *)(v7 + 8) = v9;
      *v9 = (DirectComposition::CTelemetryInfo *)v7;
      *((_QWORD *)this + 7) = v7;
      v7 = 0LL;
    }
  }
  if ( v7 )
    Win32FreePool(v7);
  return (unsigned int)v8;
}
