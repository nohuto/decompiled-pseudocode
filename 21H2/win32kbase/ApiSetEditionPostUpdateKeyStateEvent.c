/*
 * XREFs of ApiSetEditionPostUpdateKeyStateEvent @ 0x1C0089DF0
 * Callers:
 *     PostUpdateKeyStateEvent @ 0x1C0089B30 (PostUpdateKeyStateEvent.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionPostUpdateKeyStateEvent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  PDEVICE_OBJECT v5; // rcx
  char v6; // bl
  void *v7; // r9
  unsigned int v8; // edi
  int v9; // eax
  void *v11; // r8

  v3 = a2;
  v5 = WPP_GLOBAL_Control;
  v6 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  v7 = &WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids;
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      428,
      (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
  if ( qword_1C029D160 )
  {
    v8 = 0;
    if ( (int)qword_1C029D160(v5, a2, a3, v7) >= 0 )
    {
      if ( qword_1C029D168 )
        v9 = qword_1C029D168(a1, v3);
      else
        v9 = 0;
      LOBYTE(v8) = v9 != 0;
    }
  }
  else
  {
    v8 = 0;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v6 = 0;
  if ( (_BYTE)a2 || v6 )
  {
    v11 = &WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids;
    LOBYTE(v11) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      (_DWORD)v11,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      429,
      (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
  }
  return v8;
}
