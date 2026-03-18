/*
 * XREFs of InitFunctionTables @ 0x1C03916E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 (__fastcall *InitFunctionTables())(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4, ULONG64 a5)
{
  __int64 v0; // rbx
  char v1; // dl
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 (__fastcall *result)(struct tagWND *, __int64, __int64, __int64, ULONG64); // rax

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
      (__int64)&WPP_6ef41bf7ba8b3874ce66483ce5bf9e7b_Traceguids);
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
    mpFnidPfn[v4] = (__int64)IsMulDestroyBrushInternalSupported;
    --v3;
  }
  while ( v3 );
  mpFnidPfn[0] = (__int64)xxxWrapSBWndProc;
  qword_1C0335218 = (__int64)xxxWrapRealDefWindowProc;
  qword_1C0335220 = (__int64)xxxWrapMenuWindowProc;
  qword_1C0335228 = (__int64)xxxWrapDesktopWndProc;
  qword_1C03352C8 = (__int64)xxxWrapSendMessage;
  qword_1C0335298 = (__int64)fnHkINLPCWPEXSTRUCT;
  qword_1C03352A0 = (__int64)fnHkINLPCWPRETEXSTRUCT;
  qword_1C03352D0 = (__int64)xxxSendMessageFF;
  qword_1C03352D8 = (__int64)xxxSendMessageEx;
  qword_1C03352E0 = (__int64)xxxWrapCallWindowProc;
  qword_1C03352E8 = (__int64)xxxWrapSendMessageBSM;
  qword_1C0335240 = (__int64)xxxWrapSwitchWndProc;
  qword_1C03352F8 = (__int64)xxxWrapSendNotifyMessage;
  result = xxxWrapSendMessageCallback;
  qword_1C0335300 = (__int64)xxxWrapSendMessageCallback;
  qword_1C0335230 = (__int64)xxxWrapRealDefWindowProc;
  qword_1C0335238 = (__int64)xxxWrapRealDefWindowProc;
  return result;
}
