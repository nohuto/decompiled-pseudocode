/*
 * XREFs of xxxUserModeCallback @ 0x1C022D320
 * Callers:
 *     xxxMNStartMenu @ 0x1C021C1CC (xxxMNStartMenu.c)
 *     xxxMNOpenHierarchy @ 0x1C02325D0 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C0234200 (xxxMenuWindowProc.c)
 *     xxxTrackPopupMenuEx @ 0x1C024614C (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C00EF5D4 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C0159AD4 (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0159AFC (--1LeaveEnterCrit@@QEAA@XZ.c)
 */

__int64 xxxUserModeCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4, ...)
{
  unsigned int v4; // ebx
  unsigned int v6; // edi
  unsigned int Count; // eax
  int v8; // ebx
  __int64 result; // rax
  _QWORD v10[3]; // [rsp+50h] [rbp-18h] BYREF
  int v11; // [rsp+88h] [rbp+20h] BYREF
  int v12; // [rsp+8Ch] [rbp+24h]
  va_list va; // [rsp+90h] [rbp+28h] BYREF

  va_start(va, a4);
  v12 = HIDWORD(a4);
  v4 = a3;
  v6 = a1;
  v10[0] = 0LL;
  v11 = 0;
  Count = AtomicExecutionCheck::GetCount(a1, a2, a3);
  if ( Count )
  {
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 37LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)va);
  EtwTraceBeginCallback(v6);
  v8 = KeUserModeCallback(v6, a2, v4, v10, &v11);
  EtwTraceEndCallback(v6);
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)va);
  if ( v8 < 0 )
    return (unsigned int)v8;
  result = 3221225473LL;
  if ( !v11 )
    return (unsigned int)v8;
  return result;
}
