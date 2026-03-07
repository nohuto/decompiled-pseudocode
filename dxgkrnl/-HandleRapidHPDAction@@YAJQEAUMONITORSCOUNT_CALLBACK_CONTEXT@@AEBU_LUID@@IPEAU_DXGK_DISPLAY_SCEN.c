__int64 __fastcall HandleRapidHPDAction(
        struct MONITORSCOUNT_CALLBACK_CONTEXT *const a1,
        struct _LUID *a2,
        unsigned int a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  int v8; // eax
  __int64 result; // rax
  unsigned __int8 v10; // [rsp+40h] [rbp+8h] BYREF

  v8 = DxgkInvalidateMonitorConnections(2LL);
  if ( v8 < 0 )
    WdLogSingleEntry1(4LL, v8);
  *((_DWORD *)a1 + 8) |= 0x10u;
  v10 = 0;
  if ( (int)DisplayConfigHelperCreateSimulateMonitor(a2, a3, 3, 0, &v10, (__int64)a4) >= 0 )
    *((_BYTE *)a1 + 26) = 0;
  result = DisplayConfigHandleMonitorInvalidation(1LL, a1, a4);
  if ( (int)result < 0 )
  {
    WdLogSingleEntry1(4LL, (int)result);
    return 0LL;
  }
  return result;
}
