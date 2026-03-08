/*
 * XREFs of ?AppendFriendlyName@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z @ 0x1C03CB950
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?DisplayID_GetUserFriendlyName@@YAJPEBUDisplayIDObj@@PEAGEPEAE@Z @ 0x1C00720DC (-DisplayID_GetUserFriendlyName@@YAJPEBUDisplayIDObj@@PEAGEPEAE@Z.c)
 */

__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::AppendFriendlyName(
        DxgMonitor::DisplayIdMonitorDescriptor *this,
        struct _UNICODE_STRING *a2,
        __int64 a3)
{
  int UserFriendlyName; // eax
  __int64 v5; // rbx
  NTSTATUS appended; // eax
  unsigned __int8 v8[8]; // [rsp+20h] [rbp-38h] BYREF
  WCHAR Source[8]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v10; // [rsp+38h] [rbp-20h]
  int v11; // [rsp+40h] [rbp-18h]

  v8[0] = 0;
  *(_OWORD *)Source = 0LL;
  v10 = 0LL;
  v11 = 0;
  UserFriendlyName = DisplayID_GetUserFriendlyName(
                       (DxgMonitor::DisplayIdMonitorDescriptor *)((char *)this + 24),
                       Source,
                       a3,
                       v8);
  v5 = UserFriendlyName;
  if ( UserFriendlyName >= 0 )
  {
    appended = RtlAppendUnicodeToString(a2, Source);
    v5 = appended;
    if ( appended >= 0 )
      return 0LL;
  }
  WdLogSingleEntry1(2LL, v5);
  return (unsigned int)v5;
}
