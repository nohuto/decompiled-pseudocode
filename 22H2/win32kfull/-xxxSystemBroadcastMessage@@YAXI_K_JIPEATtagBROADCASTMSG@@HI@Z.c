/*
 * XREFs of ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C012D100
 * Callers:
 *     xxxBroadcastMessageEx @ 0x1C003FDE8 (xxxBroadcastMessageEx.c)
 *     xxxSendNotifyMessage @ 0x1C00402D0 (xxxSendNotifyMessage.c)
 * Callees:
 *     ExchangeW32ThreadLock @ 0x1C003EC8C (ExchangeW32ThreadLock.c)
 *     xxxBroadcastMessageEx @ 0x1C003FDE8 (xxxBroadcastMessageEx.c)
 *     PushW32ThreadLock @ 0x1C00BFA20 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00C1530 (PopAndFreeW32ThreadLock.c)
 */

void __fastcall xxxSystemBroadcastMessage(
        unsigned int a1,
        unsigned __int64 a2,
        struct _LARGE_STRING *a3,
        unsigned int a4,
        union tagBROADCASTMSG *a5,
        int a6,
        unsigned int a7)
{
  unsigned int v8; // ebp
  _QWORD *v9; // rdi
  unsigned int v10; // esi
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  _QWORD *v13; // [rsp+40h] [rbp-78h]
  __int128 v14; // [rsp+48h] [rbp-70h] BYREF
  __int64 v15; // [rsp+58h] [rbp-60h]
  __int128 v16; // [rsp+60h] [rbp-58h] BYREF
  __int64 v17; // [rsp+70h] [rbp-48h]

  v8 = a4;
  v16 = 0LL;
  v17 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  PushW32ThreadLock(0LL, &v16, UserDereferenceObject);
  PushW32ThreadLock(0LL, &v14, UserDereferenceObject);
  v9 = (_QWORD *)grpWinStaList;
  v13 = (_QWORD *)grpWinStaList;
  if ( grpWinStaList )
  {
    do
    {
      if ( v8 || (v10 = 1, v9 == *(_QWORD **)(*(_QWORD *)(gptiCurrent + 456LL) + 40LL)) )
        v10 = v8;
      if ( v9 )
        ObfReferenceObject(v9);
      ExchangeW32ThreadLock((__int64)v9, (__int64)&v16);
      v11 = (_QWORD *)v9[2];
      if ( v11 )
      {
        do
        {
          ObfReferenceObject(v11);
          ExchangeW32ThreadLock((__int64)v11, (__int64)&v14);
          v12 = *(_QWORD *)(v11[1] + 24LL);
          if ( v12 )
            xxxBroadcastMessageEx(v12, a1, a2, a3, v10, a5, a6, a7);
          v11 = (_QWORD *)v11[4];
        }
        while ( v11 );
        v9 = v13;
        v8 = a4;
      }
      v9 = (_QWORD *)v9[1];
      v13 = v9;
    }
    while ( v9 );
  }
  PopAndFreeW32ThreadLock((__int64)&v14);
  PopAndFreeW32ThreadLock((__int64)&v16);
}
