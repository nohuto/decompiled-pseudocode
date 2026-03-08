/*
 * XREFs of ?SessionInitialize@DesktopRecalc@@YAXXZ @ 0x1C00F1AA8
 * Callers:
 *     EditionUserInitialize @ 0x1C00F1A90 (EditionUserInitialize.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ds @ 0x1C00F1B6C (WPP_RECORDER_AND_TRACE_SF_ds.c)
 */

void __fastcall DesktopRecalc::SessionInitialize(DesktopRecalc *this)
{
  char v1; // bl
  int v2; // r8d
  int v3; // r9d
  int v4; // edx
  int v5; // [rsp+60h] [rbp+8h] BYREF

  v5 = 0;
  v1 = 1;
  FastGetProfileIntFromID(0LL, 39LL, 616LL);
  v4 = v5;
  DesktopRecalc::enableSessionDisconnectBehavior = v5 != 0;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v1 = 0;
  }
  if ( v1 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = v1;
    LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    LOBYTE(v3) = v5 != 0;
    WPP_RECORDER_AND_TRACE_SF_ds(WPP_GLOBAL_Control->AttachedDevice, v4, v2, v3, (unsigned int)&v5, 0);
  }
}
