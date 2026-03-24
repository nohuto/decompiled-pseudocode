/*
 * XREFs of ?AddInteractionUpdateInfo@CTelemetryInfo@DirectComposition@@QEAAJPEAUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x1C0003364
 * Callers:
 *     NtDCompositionTelemetryTouchInteractionUpdate @ 0x1C0003260 (NtDCompositionTelemetryTouchInteractionUpdate.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C00295D0 (Win32AllocPoolWithQuota.c)
 */

__int64 __fastcall DirectComposition::CTelemetryInfo::AddInteractionUpdateInfo(
        DirectComposition::CTelemetryInfo *this,
        struct TOUCH_TELEMETRY_UPDATE_INFO *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  DirectComposition::CTelemetryInfo **v6; // rdx

  v4 = 0;
  v5 = Win32AllocPoolWithQuota(104LL, 1869890372LL);
  if ( v5 )
  {
    *(_OWORD *)(v5 + 16) = *(_OWORD *)a2;
    *(_OWORD *)(v5 + 32) = *((_OWORD *)a2 + 1);
    *(_OWORD *)(v5 + 48) = *((_OWORD *)a2 + 2);
    *(_OWORD *)(v5 + 64) = *((_OWORD *)a2 + 3);
    *(_OWORD *)(v5 + 80) = *((_OWORD *)a2 + 4);
    *(_QWORD *)(v5 + 96) = *((_QWORD *)a2 + 10);
    v6 = (DirectComposition::CTelemetryInfo **)*((_QWORD *)this + 3);
    if ( *v6 != (DirectComposition::CTelemetryInfo *)((char *)this + 16) )
      __fastfail(3u);
    *(_QWORD *)v5 = (char *)this + 16;
    *(_QWORD *)(v5 + 8) = v6;
    *v6 = (DirectComposition::CTelemetryInfo *)v5;
    *((_QWORD *)this + 3) = v5;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v4;
}
