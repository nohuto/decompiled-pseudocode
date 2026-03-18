/*
 * XREFs of ApiSetEditionCreateDesktopEntryPoint @ 0x1C00BBDD8
 * Callers:
 *     NtUserCreateDesktopEx @ 0x1C00BBDB0 (NtUserCreateDesktopEx.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionCreateDesktopEntryPoint(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6)
{
  __int64 v7; // rbp
  __int64 v8; // r14
  PDEVICE_OBJECT v10; // rcx
  char v11; // bl
  void *v12; // r9
  __int64 v13; // rdi
  void *v15; // r8

  v7 = a3;
  v8 = a2;
  v10 = WPP_GLOBAL_Control;
  v11 = 1;
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
  v12 = &WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids;
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      484,
      (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
  v13 = 0LL;
  if ( qword_1C029BB48 && (int)qword_1C029BB48(v10, a2, a3, v12) >= 0 && qword_1C029BB50 )
    v13 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int, int))qword_1C029BB50)(a1, v8, v7, a4, a5, a6);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v11 = 0;
  if ( (_BYTE)a2 || v11 )
  {
    v15 = &WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids;
    LOBYTE(v15) = v11;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      (_DWORD)v15,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      485,
      (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
  }
  return v13;
}
