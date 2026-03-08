/*
 * XREFs of InitFunctionTables @ 0x1C03B7870
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 (__fastcall *InitFunctionTables())(struct tagTHREADINFO **a1, unsigned int a2, unsigned __int64 a3, void *a4, ULONG64 a5)
{
  __int64 v0; // rbx
  char v1; // dl
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 (__fastcall *result)(struct tagTHREADINFO **, unsigned int, unsigned __int64, void *, ULONG64); // rax

  v0 = 0LL;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
    || (v1 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v1 = 0;
  }
  if ( v1 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v1,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      11,
      4,
      3,
      11,
      (__int64)&WPP_ec7b7e6d7dea360f8b258b91fa3b2ce6_Traceguids);
  v2 = 304LL;
  *(_QWORD *)(gpsi + 272LL) = 4LL;
  *(_QWORD *)(gpsi + 280LL) = 0LL;
  *(_QWORD *)(gpsi + 288LL) = 3LL;
  *(_QWORD *)(gpsi + 296LL) = 1LL;
  do
  {
    *(_QWORD *)(v2 + gpsi) = 0LL;
    v2 += 8LL;
  }
  while ( v2 < 320 );
  *(_WORD *)(gpsi + 334LL) = 328;
  *(_WORD *)(gpsi + 340LL) = 344;
  *(_WORD *)(gpsi + 328LL) = 408;
  *(_WORD *)(gpsi + 332LL) = 352;
  *(_WORD *)(gpsi + 384LL) = 384;
  v3 = 32LL;
  *(_WORD *)(gpsi + 330LL) = 328;
  do
  {
    v4 = v0++ & 0x1F;
    *((_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink + v4) = IsMulDestroyBrushInternalSupported;
    --v3;
  }
  while ( v3 );
  WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)xxxWrapSBWndProc;
  WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)xxxWrapRealDefWindowProc;
  *(_QWORD *)&WPP_MAIN_CB.SectorSize = xxxWrapMenuWindowProc;
  WPP_MAIN_CB.DeviceObjectExtension = (struct _DEVOBJ_EXTENSION *)xxxWrapDesktopWndProc;
  qword_1C0360EC8 = (__int64)xxxWrapSendMessage;
  qword_1C0360E98 = (__int64)fnHkINLPCWPEXSTRUCT;
  qword_1C0360EA0 = (__int64)fnHkINLPCWPRETEXSTRUCT;
  qword_1C0360ED0 = (__int64)xxxSendMessageFF;
  qword_1C0360ED8 = (__int64)xxxSendMessageEx;
  qword_1C0360EE0 = (__int64)xxxWrapCallWindowProc;
  qword_1C0360EE8 = (__int64)xxxWrapSendMessageBSM;
  qword_1C0360E40 = (__int64)xxxWrapSwitchWndProc;
  qword_1C0360EF8 = (__int64)xxxWrapSendNotifyMessage;
  result = xxxWrapSendMessageCallback;
  qword_1C0360F00 = (__int64)xxxWrapSendMessageCallback;
  WPP_MAIN_CB.Reserved = xxxWrapRealDefWindowProc;
  *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) = xxxWrapRealDefWindowProc;
  return result;
}
