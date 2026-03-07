void GreDxDwmShutdown()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 DxgkWin32kInterface; // rax
  __int64 v3; // rcx
  __int64 HDEV; // rax
  __int64 i; // rcx
  int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned int)UserIsWddmConnectedSession() )
  {
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v1, v0);
    (*(void (__fastcall **)(__int64))(DxgkWin32kInterface + 120))(-1LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v15);
    HDEV = UserGetHDEV(v3);
    GreLockVisRgn(HDEV);
    for ( i = 0LL; ; i = v13 )
    {
      v11 = hdevEnumerateDisplayOnly(i);
      v13 = v11;
      if ( !v11 )
        break;
      v6 = *(_DWORD *)(v11 + 40) & 0x20401;
      v15 = v11;
      if ( v6 == 1 && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v15) )
      {
        GreLockDisplayDevice(v13);
        v9 = DxDdGetDxgkWin32kInterface(v8, v7);
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(v9 + 288))(
               *(_QWORD *)(*(_QWORD *)(v13 + 2552) + 232LL),
               *(unsigned int *)(*(_QWORD *)(v13 + 2552) + 248LL)) )
        {
          if ( *(_QWORD *)(v13 + 2704) )
          {
            LOBYTE(v10) = 1;
            DrvDxgkDisplayOnOff(v13, v10, 3LL);
            (*(void (__fastcall **)(_QWORD, __int64))(v13 + 2704))(*(_QWORD *)(v13 + 1768), 1LL);
          }
        }
        GreUnlockDisplayDevice(v13);
      }
    }
    v14 = UserGetHDEV(v12);
    GreUnlockVisRgn(v14);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v15);
  }
}
