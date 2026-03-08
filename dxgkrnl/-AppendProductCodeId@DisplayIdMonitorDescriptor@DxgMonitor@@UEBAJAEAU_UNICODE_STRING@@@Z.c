/*
 * XREFs of ?AppendProductCodeId@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z @ 0x1C03CBA90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?DisplayID_GetProductCode@@YAJPEBUDisplayIDObj@@PEAG@Z @ 0x1C0071FD8 (-DisplayID_GetProductCode@@YAJPEBUDisplayIDObj@@PEAG@Z.c)
 */

__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::AppendProductCodeId(
        DxgMonitor::DisplayIdMonitorDescriptor *this,
        struct _UNICODE_STRING *a2)
{
  NTSTATUS ProductCode; // eax
  __int64 v4; // rbx
  NTSTATUS appended; // eax
  WCHAR Source[4]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v8; // [rsp+28h] [rbp-20h]

  *(_QWORD *)Source = 0LL;
  v8 = 0;
  ProductCode = DisplayID_GetProductCode((DxgMonitor::DisplayIdMonitorDescriptor *)((char *)this + 24), Source);
  v4 = ProductCode;
  if ( ProductCode >= 0 )
  {
    appended = RtlAppendUnicodeToString(a2, Source);
    v4 = appended;
    if ( appended >= 0 )
      return 0LL;
  }
  WdLogSingleEntry1(2LL, v4);
  return (unsigned int)v4;
}
