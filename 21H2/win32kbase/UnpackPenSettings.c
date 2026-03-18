/*
 * XREFs of UnpackPenSettings @ 0x1C01E8EF0
 * Callers:
 *     ?ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z @ 0x1C01EF3E0 (-ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z.c)
 * Callees:
 *     RIMIsDefaultUILanguageRTL @ 0x1C00C5510 (RIMIsDefaultUILanguageRTL.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C00E6154 (WPP_RECORDER_AND_TRACE_SF_s.c)
 */

__int64 __fastcall UnpackPenSettings(_DWORD *a1)
{
  int v1; // eax
  int v3; // ebx
  char v4; // si
  bool v5; // dl
  BOOL v6; // eax
  int v7; // ecx
  int v8; // ebx
  __int64 result; // rax

  v1 = (int)qword_1C029CC80;
  v3 = a1[3];
  if ( qword_1C029CC80 )
    v1 = qword_1C029CC80();
  v4 = 1;
  if ( v3 != v1 )
  {
    v5 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_s(
        WPP_GLOBAL_Control->AttachedDevice,
        v5,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink);
    v6 = RIMIsDefaultUILanguageRTL();
    v7 = 0;
    if ( v6 )
      LOBYTE(v7) = v3 == 0;
    else
      LOBYTE(v7) = v3 != 0;
    *((_DWORD *)gpsi + 514) = v7;
    if ( qword_1C029C670 )
      qword_1C029C670(8229LL, 0LL, 0LL);
  }
  v8 = a1[4];
  if ( v8 != dword_1C028F850 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v4 = 0;
    }
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_s(
        WPP_GLOBAL_Control->AttachedDevice,
        v4,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink);
    dword_1C028F850 = v8;
    if ( qword_1C029C670 )
      qword_1C029C670(8223LL, 0LL, 0LL);
  }
  result = (unsigned int)a1[5];
  if ( (_DWORD)result != dword_1C028F890 )
    dword_1C028F890 = a1[5];
  return result;
}
