__int64 __fastcall xxxSendMessageBSM(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        struct tagBROADCASTSYSTEMMSGPARAMS *a5,
        int a6)
{
  unsigned int v6; // esi
  _QWORD *v10; // rbx
  _QWORD *i; // rdi
  __int64 v13; // rcx
  __int128 v14; // [rsp+30h] [rbp-30h] BYREF
  void (*v15)(void); // [rsp+40h] [rbp-20h]
  __int128 v16; // [rsp+48h] [rbp-18h] BYREF
  __int64 v17; // [rsp+58h] [rbp-8h]

  v6 = 0;
  if ( (*(_DWORD *)a5 & 0x10) == 0 )
    return (unsigned int)xxxSendBSMtoDesktop(a1, a2, a3, a4, a5, a6);
  v17 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v14 = 0LL;
  PushW32ThreadLock(0LL, &v16, UserDereferenceObject);
  PushW32ThreadLock(0LL, &v14, UserDereferenceObject);
  v10 = (_QWORD *)grpWinStaList;
LABEL_4:
  if ( !v10 )
  {
    PopAndFreeW32ThreadLock((__int64)&v14);
    PopAndFreeW32ThreadLock((__int64)&v16);
    return v6;
  }
  ObfReferenceObject(v10);
  ExchangeW32ThreadLock((__int64)v10, (__int64)&v16);
  for ( i = (_QWORD *)v10[2]; ; i = (_QWORD *)i[4] )
  {
    if ( !i )
    {
      v10 = (_QWORD *)v10[1];
      goto LABEL_4;
    }
    ObfReferenceObject(i);
    v13 = *((_QWORD *)&v14 + 1);
    *((_QWORD *)&v14 + 1) = i;
    if ( v13 )
      v15();
    v6 = xxxSendBSMtoDesktop(*(struct tagWND **)(i[1] + 24LL), a2, a3, a4, a5, a6);
    if ( !v6 && (*((_DWORD *)a5 + 1) & 1) != 0 )
      break;
  }
  PopAndFreeW32ThreadLock((__int64)&v14);
  PopAndFreeW32ThreadLock((__int64)&v16);
  return 0LL;
}
