/*
 * XREFs of ?GetChangeName@TabViewManagerTraceLogging@@CAPEBDW4APPLICATION_VIEW_CHANGE@@@Z @ 0x1802DF158
 * Callers:
 *     ?StartActivity@TabViewManager_OnApplicationViewChanged@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@PEAUHWND__@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x1802E7A5C (-StartActivity@TabViewManager_OnApplicationViewChanged@TabViewManagerTraceLogging@@QEAAXPEAUIApp.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 */

const char *__fastcall TabViewManagerTraceLogging::GetChangeName(int a1)
{
  __int64 *v1; // rax
  _QWORD v3[42]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v4; // [rsp+150h] [rbp+50h] BYREF

  v3[2] = 1LL;
  v3[0] = 0LL;
  v3[1] = "AVC_ADDED";
  v3[3] = "AVC_REMOVED";
  v3[5] = "AVC_FORGOTTEN";
  v3[7] = "AVC_VISIBLE";
  v3[9] = "AVC_HIDDEN";
  v3[11] = "AVC_AUMID";
  v3[13] = "AVC_NEEDINESS";
  v3[15] = "AVC_FOCUS";
  v3[17] = "AVC_PENDING_FOCUS";
  v3[19] = "AVC_UNFOCUS";
  v3[21] = "AVC_SHOW_IN_SWITCHERS";
  v3[23] = "AVC_REMOVED_FROM_SWITCHERS";
  v3[25] = "AVC_THUMBNAIL_WINDOW";
  v3[27] = "AVC_MONITOR_CHANGED";
  v3[29] = "AVC_WINDOW_CHANGED";
  v3[31] = "AVC_SIZE_CONSTRAINTS";
  v3[33] = "AVC_TRAY_CHANGED";
  v3[35] = "AVC_OWNER_CHANGED";
  v3[37] = "AVC_ENTERPRISEID_CHANGED";
  v3[39] = "AVC_ENTERPRISE_CHROME_PREFERENCE_CHANGED";
  v3[41] = "AVC_CANTAB";
  v1 = v3;
  v3[4] = 2LL;
  v3[6] = 3LL;
  v3[8] = 4LL;
  v3[10] = 5LL;
  v3[12] = 6LL;
  v3[14] = 7LL;
  v3[16] = 8LL;
  v3[18] = 9LL;
  v3[20] = 10LL;
  v3[22] = 11LL;
  v3[24] = 12LL;
  v3[26] = 13LL;
  v3[28] = 14LL;
  v3[30] = 15LL;
  v3[32] = 16LL;
  v3[34] = 17LL;
  v3[36] = 18LL;
  v3[38] = 19LL;
  v3[40] = 20LL;
  while ( *(_DWORD *)v1 != a1 )
  {
    v1 += 2;
    if ( v1 == &v4 )
      return "Unknown";
  }
  return (const char *)v1[1];
}
