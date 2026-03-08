/*
 * XREFs of DestroyThreadsMessages @ 0x1C00D3420
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeQEntry@@YAXPEAUtagQMSG@@@Z @ 0x1C0011A90 (-FreeQEntry@@YAXPEAUtagQMSG@@@Z.c)
 *     ?RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C0011C00 (-RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 *     DelQEntry @ 0x1C0038CDC (DelQEntry.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C003E858 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00D34C0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 */

void __fastcall DestroyThreadsMessages(_QWORD *a1, __int64 a2)
{
  struct tagMLIST *v2; // rsi
  __int64 v3; // rbx
  __int64 v6; // rbx
  __int64 v7; // rbp
  char v8; // dl
  char v9; // r8
  __int64 v10; // rdi

  v2 = (struct tagMLIST *)(a1 + 3);
  v3 = a1[3];
  if ( v3 )
  {
    do
    {
      v7 = *(_QWORD *)v3;
      if ( *(_QWORD *)(v3 + 104) == a2 )
      {
        if ( a1[11] == v3 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) == 0
            || (v8 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
          {
            v8 = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            || (v9 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
          {
            v9 = 0;
          }
          if ( v8 || v9 )
            WPP_RECORDER_AND_TRACE_SF_qq(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v8,
              v9,
              (__int64)gFullLog,
              5u,
              0x12u,
              0x13u,
              (__int64)&WPP_b2df51b585c137d44ad42ff4c9684e7b_Traceguids,
              a1,
              a1[11]);
          a1[11] = 0LL;
        }
        CleanEventMessage((struct tagQMSG *)v3);
        DelQEntry((__int64)v2, v3, 1);
      }
      v3 = v7;
    }
    while ( v7 );
  }
  v6 = a1[6];
  if ( v6 )
  {
    do
    {
      v10 = *(_QWORD *)(v6 + 8);
      if ( *(_QWORD *)(v6 + 104) == a2 )
      {
        RemoveQMsgFromDeferList(v2, (struct tagQMSG *)v6);
        CleanEventMessage((struct tagQMSG *)v6);
        FreeQEntry((struct tagQMSG *)v6);
      }
      v6 = v10;
    }
    while ( v10 );
  }
}
