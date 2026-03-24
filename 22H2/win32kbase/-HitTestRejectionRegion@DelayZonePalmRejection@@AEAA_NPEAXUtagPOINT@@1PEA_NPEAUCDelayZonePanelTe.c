/*
 * XREFs of ?HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTelemetryData@@@Z @ 0x1C01ACE54
 * Callers:
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01AD158 (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     PtInRect @ 0x1C00707BC (PtInRect.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     ?HitTestDelayZonePalmRejectionRegion@CPalmRejectZoneInfo@@QEAA_NUtagPOINT@@PEAUCDelayZonePanelTelemetryData@@@Z @ 0x1C01ACD4C (-HitTestDelayZonePalmRejectionRegion@CPalmRejectZoneInfo@@QEAA_NUtagPOINT@@PEAUCDelayZonePanelTe.c)
 *     WPP_RECORDER_SF_sd @ 0x1C01ADEF0 (WPP_RECORDER_SF_sd.c)
 *     ApiSetIsProcessForeground @ 0x1C01CFA30 (ApiSetIsProcessForeground.c)
 */

bool __fastcall DelayZonePalmRejection::HitTestRejectionRegion(
        DelayZonePalmRejection *this,
        void *a2,
        struct tagPOINT a3,
        struct tagPOINT a4,
        bool *a5,
        struct CDelayZonePanelTelemetryData *a6)
{
  char *v6; // r14
  bool v7; // bp
  char *v8; // rsi
  int v13; // eax
  const char *v14; // rdx
  const char *v15; // rcx

  v6 = (char *)this + 72;
  v7 = 0;
  v8 = (char *)*((_QWORD *)this + 9);
  if ( v8 == (char *)this + 72 )
    return 0;
  while ( 1 )
  {
    v13 = (int)qword_1C0257060;
    if ( qword_1C0257060 )
      v13 = qword_1C0257060();
    if ( (((v13 != 0) + 1) & *((_DWORD *)v8 + 23)) == 0 )
      goto LABEL_13;
    if ( !v8[60] )
      break;
    if ( *((void **)v8 + 12) == a2 )
    {
      v7 = PtInRect((_DWORD *)v8 + 6, *(_QWORD *)&a4);
      goto LABEL_12;
    }
LABEL_13:
    v8 = *(char **)v8;
    if ( v8 == v6 )
      return v7;
  }
  if ( *((_DWORD *)v8 + 16) && !(unsigned int)ApiSetIsProcessForeground() )
    goto LABEL_13;
  v7 = CPalmRejectZoneInfo::HitTestDelayZonePalmRejectionRegion((CPalmRejectZoneInfo *)v8, a3, (struct tagRECT *)a6);
LABEL_12:
  if ( !v7 )
    goto LABEL_13;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = "false";
    v15 = "true";
    if ( !v8[60] )
      v15 = "false";
    LOBYTE(v14) = 4;
    WPP_RECORDER_SF_sd(
      (_DWORD)v15,
      (_DWORD)v14,
      8,
      31,
      (__int64)&WPP_926a34ac5ff436dd04abf80f696c769b_Traceguids,
      (__int64)v15,
      *((_DWORD *)v8 + 14));
  }
  *a5 = v8[60];
  return v7;
}
