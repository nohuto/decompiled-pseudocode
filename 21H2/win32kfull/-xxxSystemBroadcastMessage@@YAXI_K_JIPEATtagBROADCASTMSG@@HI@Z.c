/*
 * XREFs of ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C00A2A6C
 * Callers:
 *     xxxBroadcastMessageEx @ 0x1C00A9E58 (xxxBroadcastMessageEx.c)
 *     xxxSendNotifyMessage @ 0x1C00ACBA0 (xxxSendNotifyMessage.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C005BDE0 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     ExchangeW32ThreadLock @ 0x1C00A68FC (ExchangeW32ThreadLock.c)
 *     xxxBroadcastMessageEx @ 0x1C00A9E58 (xxxBroadcastMessageEx.c)
 */

void __fastcall xxxSystemBroadcastMessage(unsigned int a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rdi
  __int64 v3; // rcx
  _QWORD *v4; // [rsp+40h] [rbp-78h]
  __int128 v5; // [rsp+48h] [rbp-70h] BYREF
  __int64 v6; // [rsp+58h] [rbp-60h]
  __int128 v7; // [rsp+60h] [rbp-58h] BYREF
  __int64 v8; // [rsp+70h] [rbp-48h]

  v7 = 0LL;
  v8 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  PushW32ThreadLock(0LL, &v7, UserDereferenceObject);
  PushW32ThreadLock(0LL, &v5, UserDereferenceObject);
  v1 = (_QWORD *)grpWinStaList;
  v4 = (_QWORD *)grpWinStaList;
  if ( grpWinStaList )
  {
    do
    {
      if ( v1 )
        ObfReferenceObject(v1);
      ExchangeW32ThreadLock(v1, &v7);
      v2 = (_QWORD *)v1[2];
      if ( v2 )
      {
        do
        {
          ObfReferenceObject(v2);
          ExchangeW32ThreadLock(v2, &v5);
          v3 = *(_QWORD *)(v2[1] + 24LL);
          if ( v3 )
            xxxBroadcastMessageEx(v3, a1);
          v2 = (_QWORD *)v2[4];
        }
        while ( v2 );
        v1 = v4;
      }
      v1 = (_QWORD *)v1[1];
      v4 = v1;
    }
    while ( v1 );
  }
  PopAndFreeW32ThreadLock((__int64)&v5);
  PopAndFreeW32ThreadLock((__int64)&v7);
}
