/*
 * XREFs of xxxDDETrackSendHook @ 0x1C0218378
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C0078850 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     _PostMessage @ 0x1C00A5270 (_PostMessage.c)
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C0214DD8 (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C0214F2C (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 *     ?NewConversation@@YAHPEAPEAUtagDDECONV@@0PEAUtagWND@@1@Z @ 0x1C02150FC (-NewConversation@@YAHPEAPEAUtagDDECONV@@0PEAUtagWND@@1@Z.c)
 *     xxxMessageEvent @ 0x1C0242C68 (xxxMessageEvent.c)
 */

_BOOL8 __fastcall xxxDDETrackSendHook(struct tagWND *a1, int a2, __int64 a3, int a4)
{
  struct tagWND *v7; // rax
  struct tagWND *v8; // rbx
  struct tagDDECONV *DdeConv; // rax
  int v11; // edx
  int v12; // r8d
  struct tagDDECONV *v13; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v14[2]; // [rsp+58h] [rbp-40h] BYREF
  __int128 v15; // [rsp+68h] [rbp-30h]
  __int128 v16; // [rsp+78h] [rbp-20h]
  __int64 v17; // [rsp+88h] [rbp-10h]
  struct tagDDECONV *v18; // [rsp+A0h] [rbp+8h] BYREF

  v18 = 0LL;
  if ( (MonitorFlags & 0x2000000) != 0 )
  {
    v15 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    v14[0] = (unsigned __int16)a4;
    v14[1] = HIWORD(a4);
    xxxMessageEvent((_DWORD)a1, a2, a3, a4, 0x2000000, (__int64)v14);
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
      if ( DdeConv )
      {
        AnticipatePost(
          DdeConv,
          (unsigned int (*)(unsigned int *, __int64 *, struct tagDDECONV *))xxxDupConvTerminate,
          0LL,
          0LL,
          0LL,
          0);
        PostMessage((int)v8, 993, *(_QWORD *)a1, 0);
      }
      else if ( (unsigned int)NewConversation(&v18, &v13, a1, v8) )
      {
        LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_qq(
            WPP_GLOBAL_Control->AttachedDevice,
            v11,
            v12,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            14,
            10,
            (__int64)&WPP_b8232c44b11d3b42055fa312fd74cb4b_Traceguids,
            *(_QWORD *)a1,
            a3);
        }
        return 1LL;
      }
    }
    return 0LL;
  }
  return a2 == 992;
}
