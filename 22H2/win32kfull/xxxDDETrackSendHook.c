/*
 * XREFs of xxxDDETrackSendHook @ 0x1C021CDFC
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x1C00598F0 (xxxSendTransformableMessageTimeout.c)
 * Callees:
 *     _PostMessage @ 0x1C002DBA0 (_PostMessage.c)
 *     WPP_RECORDER_SF_qq @ 0x1C004F2B4 (WPP_RECORDER_SF_qq.c)
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C021A548 (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C021A698 (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 *     ?NewConversation@@YAHPEAPEAUtagDDECONV@@0PEAUtagWND@@1@Z @ 0x1C021A800 (-NewConversation@@YAHPEAPEAUtagDDECONV@@0PEAUtagWND@@1@Z.c)
 *     xxxMessageEvent @ 0x1C0246A78 (xxxMessageEvent.c)
 */

_BOOL8 __fastcall xxxDDETrackSendHook(struct tagWND *a1, int a2, __int64 a3, int a4)
{
  struct tagWND *v7; // rax
  struct tagWND *v8; // rdi
  struct tagDDECONV *DdeConv; // rax
  __int64 v11; // rcx
  struct tagDDECONV *v12; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v13[2]; // [rsp+48h] [rbp-40h] BYREF
  __int128 v14; // [rsp+58h] [rbp-30h]
  __int128 v15; // [rsp+68h] [rbp-20h]
  __int64 v16; // [rsp+78h] [rbp-10h]
  struct tagDDECONV *v17; // [rsp+90h] [rbp+8h] BYREF

  v17 = 0LL;
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
      else if ( (unsigned int)NewConversation(&v17, &v12, a1, v8) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qq(
            v11,
            4u,
            0xEu,
            0xAu,
            (__int64)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids,
            *(_QWORD *)a1,
            a3);
        return 1LL;
      }
    }
    return 0LL;
  }
  return a2 == 992;
}
