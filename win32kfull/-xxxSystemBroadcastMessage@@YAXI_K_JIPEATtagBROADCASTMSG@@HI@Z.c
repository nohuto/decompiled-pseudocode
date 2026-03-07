void __fastcall xxxSystemBroadcastMessage(
        unsigned int a1,
        unsigned __int64 a2,
        __int128 *a3,
        unsigned int a4,
        union tagBROADCASTMSG *a5,
        int a6,
        unsigned int a7)
{
  unsigned int v8; // ebp
  _QWORD *v9; // rbx
  unsigned int v10; // esi
  _QWORD *v11; // rdi
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
      ExchangeW32ThreadLock(v9, &v16);
      v11 = (_QWORD *)v9[2];
      if ( v11 )
      {
        do
        {
          ObfReferenceObject(v11);
          ExchangeW32ThreadLock(v11, &v14);
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
  PopAndFreeW32ThreadLock(&v14);
  PopAndFreeW32ThreadLock(&v16);
}
