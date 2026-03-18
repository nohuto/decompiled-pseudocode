/*
 * XREFs of DestroyThreadsMessages @ 0x1C00F6000
 * Callers:
 *     <none>
 * Callees:
 *     FreeQEntry @ 0x1C0002D54 (FreeQEntry.c)
 *     ?RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C0002FC8 (-RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 *     DelQEntry @ 0x1C005BE3C (DelQEntry.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C0078850 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00F6110 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 */

_UNKNOWN **__fastcall DestroyThreadsMessages(_QWORD *a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  struct tagMLIST *v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v7; // rbx
  __int64 v8; // rbp
  char v9; // r8
  __int64 v10; // rdi
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = (struct tagMLIST *)(a1 + 3);
  v4 = a1[3];
  v5 = a2;
  if ( v4 )
  {
    do
    {
      v8 = *(_QWORD *)v4;
      if ( *(_QWORD *)(v4 + 104) == v5 )
      {
        if ( a1[10] == v4 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) == 0
            || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
          {
            LOBYTE(a2) = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            || (v9 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
          {
            v9 = 0;
          }
          if ( (_BYTE)a2 || v9 )
            WPP_RECORDER_AND_TRACE_SF_qq(
              WPP_GLOBAL_Control->AttachedDevice,
              a2,
              v9,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              5,
              18,
              18,
              (__int64)&WPP_d6b06c2d77c33863c5663f3e1e5963a9_Traceguids,
              (char)a1,
              a1[10]);
          a1[10] = 0LL;
        }
        CleanEventMessage((struct tagQMSG *)v4);
        result = (_UNKNOWN **)DelQEntry((__int64)v3, v4, 1);
      }
      v4 = v8;
    }
    while ( v8 );
  }
  v7 = a1[6];
  if ( v7 )
  {
    do
    {
      v10 = *(_QWORD *)(v7 + 8);
      if ( *(_QWORD *)(v7 + 104) == v5 )
      {
        RemoveQMsgFromDeferList(v3, (struct tagQMSG *)v7);
        CleanEventMessage((struct tagQMSG *)v7);
        result = (_UNKNOWN **)FreeQEntry((unsigned int *)v7);
      }
      v7 = v10;
    }
    while ( v10 );
  }
  return result;
}
