/*
 * XREFs of xxxSendMessageBSM @ 0x1C003EB40
 * Callers:
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1C00EABE8 (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 *     xxxWrapSendMessageBSM @ 0x1C011D180 (xxxWrapSendMessageBSM.c)
 * Callees:
 *     ExchangeW32ThreadLock @ 0x1C003EC8C (ExchangeW32ThreadLock.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C003ECB8 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     PushW32ThreadLock @ 0x1C00BFA20 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00C1530 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxSendMessageBSM(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        struct tagBROADCASTSYSTEMMSGPARAMS *a5,
        int a6)
{
  unsigned int v6; // esi
  _QWORD *v10; // rdi
  _QWORD *i; // rbx
  __int128 v13; // [rsp+30h] [rbp-30h] BYREF
  __int64 v14; // [rsp+40h] [rbp-20h]
  __int128 v15; // [rsp+48h] [rbp-18h] BYREF
  __int64 v16; // [rsp+58h] [rbp-8h]

  v6 = 0;
  if ( (*(_DWORD *)a5 & 0x10) == 0 )
    return (unsigned int)xxxSendBSMtoDesktop(a1, a2, a3, a4, a5, a6);
  v16 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v13 = 0LL;
  PushW32ThreadLock(0LL, &v15, UserDereferenceObject);
  PushW32ThreadLock(0LL, &v13, UserDereferenceObject);
  v10 = (_QWORD *)grpWinStaList;
LABEL_4:
  if ( !v10 )
  {
    PopAndFreeW32ThreadLock(&v13);
    PopAndFreeW32ThreadLock(&v15);
    return v6;
  }
  ObfReferenceObject(v10);
  ExchangeW32ThreadLock(v10, &v15);
  for ( i = (_QWORD *)v10[2]; ; i = (_QWORD *)i[4] )
  {
    if ( !i )
    {
      v10 = (_QWORD *)v10[1];
      goto LABEL_4;
    }
    ObfReferenceObject(i);
    ExchangeW32ThreadLock(i, &v13);
    v6 = xxxSendBSMtoDesktop(*(struct tagWND **)(i[1] + 24LL), a2, a3, a4, a5, a6);
    if ( !v6 && (*((_DWORD *)a5 + 1) & 1) != 0 )
      break;
  }
  PopAndFreeW32ThreadLock(&v13);
  PopAndFreeW32ThreadLock(&v15);
  return 0LL;
}
