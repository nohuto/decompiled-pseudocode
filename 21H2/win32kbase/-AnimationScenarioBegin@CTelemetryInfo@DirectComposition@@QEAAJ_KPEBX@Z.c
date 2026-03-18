/*
 * XREFs of ?AnimationScenarioBegin@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z @ 0x1C00080A4
 * Callers:
 *     NtDCompositionTelemetryAnimationScenarioBegin @ 0x1C0008DF0 (NtDCompositionTelemetryAnimationScenarioBegin.c)
 * Callees:
 *     ?VerifyInfo@DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@SA_NPEBX_K@Z @ 0x1C00081C0 (-VerifyInfo@DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@SA_NPEBX_K@Z.c)
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0030874 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 */

__int64 __fastcall DirectComposition::CTelemetryInfo::AnimationScenarioBegin(
        DirectComposition::CTelemetryInfo ***this,
        size_t a2,
        char *a3)
{
  int v6; // esi
  _DWORD *Quota; // rbx
  int v8; // edi
  DirectComposition::CTelemetryInfo **v9; // rcx

  v6 = (a2 + 11) & 0xFFFFFFFC;
  Quota = NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(
            (NSInstrumentation::CLeakTrackingAllocator *)this,
            0x104uLL,
            (unsigned int)(v6 + 20),
            0x6F744344u);
  v8 = 0;
  if ( !Quota )
    v8 = -1073741801;
  if ( v8 >= 0 )
  {
    Quota[4] = v6;
    Quota[5] = v6;
    Quota[6] = 280;
    if ( &a3[a2] < a3 || (unsigned __int64)&a3[a2] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(Quota + 7, a3, a2);
    if ( !DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO::VerifyInfo(Quota + 7, a2) )
      v8 = -1073741811;
    if ( v8 >= 0 )
    {
      v9 = this[7];
      if ( *v9 != (DirectComposition::CTelemetryInfo *)(this + 6) )
        __fastfail(3u);
      *(_QWORD *)Quota = this + 6;
      *((_QWORD *)Quota + 1) = v9;
      *v9 = (DirectComposition::CTelemetryInfo *)Quota;
      this[7] = (DirectComposition::CTelemetryInfo **)Quota;
      Quota = 0LL;
    }
  }
  if ( Quota )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      Quota);
  return (unsigned int)v8;
}
