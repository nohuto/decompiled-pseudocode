void __fastcall CleanupFreedTLCInfo(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  __int64 i; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rcx
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  __int64 j; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  char v13; // [rsp+30h] [rbp+8h] BYREF

  v1 = SGDGetUserSessionState(a1);
  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v13, (struct _KTHREAD **)(v1 + 288));
  v3 = *(_QWORD **)(SGDGetUserSessionState(v2) + 376);
  for ( i = SGDGetUserSessionState(v4); v3 != (_QWORD *)(i + 376); i = SGDGetUserSessionState(v7) )
  {
    v7 = v3;
    v3 = (_QWORD *)*v3;
    if ( !(*((_DWORD *)v7 + 5) | *((_DWORD *)v7 + 6) | *((_DWORD *)v7 + 8) | *((_DWORD *)v7 + 9)) )
      FreeHidTLCInfo(v7);
  }
  v8 = *(_QWORD **)(SGDGetUserSessionState(v6) + 392);
  for ( j = SGDGetUserSessionState(v9); v8 != (_QWORD *)(j + 392); j = SGDGetUserSessionState(v11) )
  {
    v11 = v8;
    v8 = (_QWORD *)*v8;
    if ( !*((_DWORD *)v11 + 5) )
    {
      if ( (_QWORD *)v8[1] != v11 || (v12 = (_QWORD *)v11[1], (_QWORD *)*v12 != v11) )
        __fastfail(3u);
      *v12 = v8;
      v8[1] = v12;
      Win32FreePool(v11);
    }
  }
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v13);
}
