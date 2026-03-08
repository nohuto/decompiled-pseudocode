/*
 * XREFs of xxxDDETrackSendHook @ 0x1C01FDFB0
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x1C006E550 (xxxSendTransformableMessageTimeout.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C003E858 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     _PostMessage @ 0x1C00EF0A0 (_PostMessage.c)
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01FAA18 (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C01FAB6C (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 *     ?NewConversation@@YAHPEAPEAUtagDDECONV@@0PEAUtagWND@@1@Z @ 0x1C01FAD3C (-NewConversation@@YAHPEAPEAUtagDDECONV@@0PEAUtagWND@@1@Z.c)
 *     xxxMessageEvent @ 0x1C022E378 (xxxMessageEvent.c)
 */

_BOOL8 __fastcall xxxDDETrackSendHook(struct tagWND *a1, int a2, __int64 a3, int a4)
{
  struct tagWND *v7; // rax
  struct tagWND *v8; // rbx
  struct tagDDECONV *DdeConv; // rax
  char v11; // dl
  struct tagDDECONV *v12; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v13[2]; // [rsp+58h] [rbp-40h] BYREF
  __int128 v14; // [rsp+68h] [rbp-30h]
  __int128 v15; // [rsp+78h] [rbp-20h]
  __int64 v16; // [rsp+88h] [rbp-10h]
  struct tagDDECONV *v17; // [rsp+A0h] [rbp+8h] BYREF

  v12 = 0LL;
  if ( (MonitorFlags & 0x2000000) != 0 )
  {
    v14 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    v13[0] = (unsigned __int16)a4;
    v13[1] = HIWORD(a4);
    xxxMessageEvent((_DWORD)a1, a2, a3, a4, 0x2000000, (__int64)v13);
  }
  if ( *(_QWORD *)(gptiCurrent + 424LL) == *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) )
    return 1LL;
  if ( a2 == 996 )
  {
    v7 = (struct tagWND *)ValidateHwnd(a3);
    v8 = v7;
    if ( v7 )
    {
      DdeConv = FindDdeConv(v7, a1);
      v17 = DdeConv;
      if ( DdeConv )
      {
        AnticipatePost(
          DdeConv,
          (unsigned int (*)(unsigned int *, __int64 *, struct tagDDECONV *))xxxDupConvTerminate,
          0LL,
          0LL,
          0LL,
          0);
        PostMessage((unsigned __int64)v8, 0x3E1u, *(_QWORD *)a1, 0LL);
      }
      else if ( (unsigned int)NewConversation(&v12, &v17, a1, v8) )
      {
        v11 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_qq(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v11,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            (__int64)gFullLog,
            4u,
            0xEu,
            0xAu,
            (__int64)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids,
            *(_QWORD *)a1,
            a3,
            v12);
        return 1LL;
      }
    }
    return 0LL;
  }
  return a2 == 992;
}
