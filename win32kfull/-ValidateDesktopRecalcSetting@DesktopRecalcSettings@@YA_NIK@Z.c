/*
 * XREFs of ?ValidateDesktopRecalcSetting@DesktopRecalcSettings@@YA_NIK@Z @ 0x1C0229198
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C01032D0 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Ds @ 0x1C0229E04 (WPP_RECORDER_AND_TRACE_SF_Ds.c)
 */

bool __fastcall DesktopRecalcSettings::ValidateDesktopRecalcSetting(DesktopRecalcSettings *this, unsigned int a2)
{
  unsigned int v2; // ebx
  int v3; // ecx
  PDEVICE_OBJECT v5; // rcx
  bool v6; // r8
  int v7; // r9d

  v2 = a2;
  v3 = (_DWORD)this - 8235;
  if ( !v3 )
  {
    v5 = WPP_GLOBAL_Control;
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)a2 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v2 < 2;
    v7 = 86;
    goto LABEL_20;
  }
  if ( v3 != 4 )
    return 0;
  v5 = WPP_GLOBAL_Control;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = 87;
LABEL_20:
    WPP_RECORDER_AND_TRACE_SF_Ds(v5->AttachedDevice, a2, v6, v7);
  }
  return v2 < 2;
}
