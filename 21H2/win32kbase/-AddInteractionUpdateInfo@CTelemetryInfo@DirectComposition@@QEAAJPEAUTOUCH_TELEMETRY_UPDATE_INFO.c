/*
 * XREFs of ?AddInteractionUpdateInfo@CTelemetryInfo@DirectComposition@@QEAAJPEAUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x1C0006F94
 * Callers:
 *     NtDCompositionTelemetryTouchInteractionUpdate @ 0x1C00076D0 (NtDCompositionTelemetryTouchInteractionUpdate.c)
 * Callees:
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0030874 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 */

__int64 __fastcall DirectComposition::CTelemetryInfo::AddInteractionUpdateInfo(
        DirectComposition::CTelemetryInfo ***this,
        struct TOUCH_TELEMETRY_UPDATE_INFO *a2)
{
  unsigned int v4; // ebx
  _OWORD *Quota; // rax
  __int128 v6; // xmm0
  char *v7; // rdi
  DirectComposition::CTelemetryInfo **v8; // rcx

  v4 = 0;
  Quota = NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(
            (NSInstrumentation::CLeakTrackingAllocator *)this,
            0x104uLL,
            0xE8uLL,
            0x6F744344u);
  if ( Quota )
  {
    Quota[1] = *(_OWORD *)a2;
    Quota[2] = *((_OWORD *)a2 + 1);
    Quota[3] = *((_OWORD *)a2 + 2);
    Quota[4] = *((_OWORD *)a2 + 3);
    Quota[5] = *((_OWORD *)a2 + 4);
    Quota[6] = *((_OWORD *)a2 + 5);
    Quota[7] = *((_OWORD *)a2 + 6);
    v6 = *((_OWORD *)a2 + 7);
    v7 = (char *)a2 + 128;
    Quota[8] = v6;
    Quota[9] = *(_OWORD *)v7;
    Quota[10] = *((_OWORD *)v7 + 1);
    Quota[11] = *((_OWORD *)v7 + 2);
    Quota[12] = *((_OWORD *)v7 + 3);
    Quota[13] = *((_OWORD *)v7 + 4);
    *((_QWORD *)Quota + 28) = *((_QWORD *)v7 + 10);
    v8 = this[3];
    if ( *v8 != (DirectComposition::CTelemetryInfo *)(this + 2) )
      __fastfail(3u);
    *(_QWORD *)Quota = this + 2;
    *((_QWORD *)Quota + 1) = v8;
    *v8 = (DirectComposition::CTelemetryInfo *)Quota;
    this[3] = (DirectComposition::CTelemetryInfo **)Quota;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v4;
}
