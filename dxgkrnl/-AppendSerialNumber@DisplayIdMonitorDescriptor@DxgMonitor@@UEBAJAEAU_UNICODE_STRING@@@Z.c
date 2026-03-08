/*
 * XREFs of ?AppendSerialNumber@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z @ 0x1C03CBB30
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?DisplayID_GetSerialNumber@@YAJPEBUDisplayIDObj@@PEAG@Z @ 0x1C0072050 (-DisplayID_GetSerialNumber@@YAJPEBUDisplayIDObj@@PEAG@Z.c)
 */

__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::AppendSerialNumber(
        DxgMonitor::DisplayIdMonitorDescriptor *this,
        struct _UNICODE_STRING *a2)
{
  NTSTATUS SerialNumber; // eax
  __int64 v4; // rbx
  NTSTATUS appended; // eax
  WCHAR Source[8]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v8; // [rsp+30h] [rbp-18h]

  v8 = 0;
  *(_OWORD *)Source = 0LL;
  SerialNumber = DisplayID_GetSerialNumber((DxgMonitor::DisplayIdMonitorDescriptor *)((char *)this + 24), Source);
  v4 = SerialNumber;
  if ( SerialNumber >= 0 )
  {
    appended = RtlAppendUnicodeToString(a2, Source);
    v4 = appended;
    if ( appended >= 0 )
      return 0LL;
  }
  WdLogSingleEntry1(2LL, v4);
  return (unsigned int)v4;
}
