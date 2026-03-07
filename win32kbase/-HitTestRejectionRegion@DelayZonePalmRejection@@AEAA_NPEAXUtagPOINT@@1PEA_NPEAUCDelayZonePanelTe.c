bool __fastcall DelayZonePalmRejection::HitTestRejectionRegion(
        DelayZonePalmRejection *this,
        void *a2,
        struct tagPOINT a3,
        struct tagPOINT a4,
        bool *a5,
        struct CDelayZonePanelTelemetryData *a6)
{
  char *v6; // r15
  bool v7; // bp
  char *v8; // rsi
  char v13; // r14
  int v14; // eax
  int v15; // r8d
  const char *v16; // r9
  int v17; // edx

  v6 = (char *)this + 72;
  v7 = 0;
  v8 = (char *)*((_QWORD *)this + 9);
  if ( v8 == (char *)this + 72 )
    return 0;
  v13 = 1;
  while ( 1 )
  {
    v14 = (int)qword_1C02D7448;
    if ( qword_1C02D7448 )
      v14 = qword_1C02D7448();
    if ( (((v14 != 0) + 1) & *((_DWORD *)v8 + 23)) == 0 )
      goto LABEL_14;
    if ( !v8[60] )
      break;
    if ( *((void **)v8 + 12) == a2 )
    {
      v7 = PtInRect((_DWORD *)v8 + 6, *(_QWORD *)&a4);
      goto LABEL_13;
    }
LABEL_14:
    v8 = *(char **)v8;
    if ( v8 == v6 )
      return v7;
  }
  if ( *((_DWORD *)v8 + 16) && !(unsigned int)ApiSetIsProcessForeground() )
    goto LABEL_14;
  v7 = CPalmRejectZoneInfo::HitTestDelayZonePalmRejectionRegion((CPalmRejectZoneInfo *)v8, a3, (struct tagRECT *)a6);
LABEL_13:
  if ( !v7 )
    goto LABEL_14;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v13 = 0;
  }
  if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = "true";
    if ( !v8[60] )
      v16 = "false";
    v17 = 31;
    LOBYTE(v17) = v13;
    LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_sd(
      WPP_GLOBAL_Control->AttachedDevice,
      v17,
      v15,
      (_DWORD)v16,
      4,
      8,
      31,
      (__int64)&WPP_86908d42d98631d196c6ca9688fccfc3_Traceguids,
      (__int64)v16,
      *((_DWORD *)v8 + 14));
  }
  *a5 = v8[60];
  return v7;
}
