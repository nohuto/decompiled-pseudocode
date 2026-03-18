/*
 * XREFs of ?AnimationScenarioReference@CTelemetryInfo@DirectComposition@@QEAAJPEBU_GUID@@PEA_K@Z @ 0x1C0008EEC
 * Callers:
 *     NtDCompositionTelemetryAnimationScenarioReference @ 0x1C00088F0 (NtDCompositionTelemetryAnimationScenarioReference.c)
 * Callees:
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0030874 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 */

__int64 __fastcall DirectComposition::CTelemetryInfo::AnimationScenarioReference(
        DirectComposition::CTelemetryInfo ***this,
        const struct _GUID *a2,
        unsigned __int64 *a3)
{
  unsigned int v5; // ebx
  char *Quota; // rax
  DirectComposition::CTelemetryInfo **v8; // rcx

  v5 = 0;
  Quota = (char *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(
                    (NSInstrumentation::CLeakTrackingAllocator *)this,
                    0x104uLL,
                    0x38uLL,
                    0x6F744344u);
  if ( Quota )
  {
    *((_DWORD *)Quota + 6) = 281;
    *((_DWORD *)Quota + 4) = 36;
    *((_DWORD *)Quota + 5) = 36;
    *(struct _GUID *)(Quota + 28) = *a2;
    *((_QWORD *)Quota + 6) = *a3;
    v8 = this[7];
    if ( *v8 != (DirectComposition::CTelemetryInfo *)(this + 6) )
      __fastfail(3u);
    *(_QWORD *)Quota = this + 6;
    *((_QWORD *)Quota + 1) = v8;
    *v8 = (DirectComposition::CTelemetryInfo *)Quota;
    this[7] = (DirectComposition::CTelemetryInfo **)Quota;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v5;
}
