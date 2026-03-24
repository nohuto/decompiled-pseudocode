/*
 * XREFs of InitFunctionTables @ 0x1C0393850
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004D9D8 (WPP_RECORDER_SF_.c)
 */

__int64 (__fastcall *__fastcall InitFunctionTables(int a1))(struct tagWND *a1, int a2, int a3, int a4, ULONG64 a5)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 (__fastcall *result)(struct tagWND *, int, int, int, ULONG64); // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(a1, 4, 3, 11, (__int64)&WPP_5beb818f3182338190d7890059714f79_Traceguids);
  v1 = 0LL;
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
  *(_WORD *)(gpsi + 334LL) = 320;
  *(_WORD *)(gpsi + 340LL) = 336;
  *(_WORD *)(gpsi + 328LL) = 400;
  *(_WORD *)(gpsi + 332LL) = 344;
  *(_WORD *)(gpsi + 384LL) = 376;
  v3 = 32LL;
  *(_WORD *)(gpsi + 330LL) = 320;
  do
  {
    v4 = v1++ & 0x1F;
    mpFnidPfn[v4] = (__int64)IsMulDestroyBrushInternalSupported;
    --v3;
  }
  while ( v3 );
  mpFnidPfn[0] = (__int64)xxxWrapSBWndProc;
  qword_1C0339018 = (__int64)xxxWrapRealDefWindowProc;
  qword_1C0339020 = (__int64)xxxWrapMenuWindowProc;
  qword_1C0339028 = (__int64)xxxWrapDesktopWndProc;
  qword_1C03390C8 = (__int64)xxxWrapSendMessage;
  qword_1C0339098 = (__int64)fnHkINLPCWPEXSTRUCT;
  qword_1C03390A0 = (__int64)fnHkINLPCWPRETEXSTRUCT;
  qword_1C03390D0 = (__int64)xxxSendMessageFF;
  qword_1C03390D8 = (__int64)xxxSendMessageEx;
  qword_1C03390E0 = (__int64)xxxWrapCallWindowProc;
  qword_1C03390E8 = (__int64)xxxWrapSendMessageBSM;
  qword_1C0339040 = (__int64)xxxWrapSwitchWndProc;
  qword_1C03390F8 = (__int64)xxxWrapSendNotifyMessage;
  result = xxxWrapSendMessageCallback;
  qword_1C0339100 = (__int64)xxxWrapSendMessageCallback;
  qword_1C0339030 = (__int64)xxxWrapRealDefWindowProc;
  qword_1C0339038 = (__int64)xxxWrapRealDefWindowProc;
  return result;
}
