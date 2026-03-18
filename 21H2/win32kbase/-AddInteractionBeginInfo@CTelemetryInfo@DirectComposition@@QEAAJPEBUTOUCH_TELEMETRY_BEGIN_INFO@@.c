/*
 * XREFs of ?AddInteractionBeginInfo@CTelemetryInfo@DirectComposition@@QEAAJPEBUTOUCH_TELEMETRY_BEGIN_INFO@@@Z @ 0x1C0008FA8
 * Callers:
 *     NtDCompositionTelemetryTouchInteractionBegin @ 0x1C0008CF0 (NtDCompositionTelemetryTouchInteractionBegin.c)
 * Callees:
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0030874 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 */

__int64 __fastcall DirectComposition::CTelemetryInfo::AddInteractionBeginInfo(
        DirectComposition::CTelemetryInfo ***this,
        const struct TOUCH_TELEMETRY_BEGIN_INFO *a2)
{
  unsigned int v3; // ebx
  _OWORD *Quota; // rax
  DirectComposition::CTelemetryInfo **v6; // rcx

  v3 = 0;
  Quota = NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(
            (NSInstrumentation::CLeakTrackingAllocator *)this,
            0x104uLL,
            0x48uLL,
            0x6F744344u);
  if ( Quota )
  {
    Quota[1] = *(_OWORD *)a2;
    Quota[2] = *((_OWORD *)a2 + 1);
    Quota[3] = *((_OWORD *)a2 + 2);
    *((_QWORD *)Quota + 8) = *((_QWORD *)a2 + 6);
    v6 = this[1];
    if ( *v6 != (DirectComposition::CTelemetryInfo *)this )
      __fastfail(3u);
    *(_QWORD *)Quota = this;
    *((_QWORD *)Quota + 1) = v6;
    *v6 = (DirectComposition::CTelemetryInfo *)Quota;
    this[1] = (DirectComposition::CTelemetryInfo **)Quota;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v3;
}
