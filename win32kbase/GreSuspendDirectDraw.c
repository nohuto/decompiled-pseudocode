void __fastcall GreSuspendDirectDraw(__int64 a1, char a2)
{
  int v4; // eax
  __int64 j; // rcx
  __int64 v6; // rax
  __int64 v7; // rdi
  int v8; // ecx
  __int64 DxgkWin32kInterface; // rax
  char v10; // al
  __int64 v11; // rdx
  _BOOL8 v12; // rdx
  __int64 i; // rcx
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // [rsp+40h] [rbp+20h] BYREF
  char v18; // [rsp+48h] [rbp+28h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 1928LL)
                                                  + 1573008LL));
  DisplayScenarioJournalDisplayUniquenessIncremented();
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v17);
  v17 = a1;
  if ( a1 )
  {
    v4 = *(_DWORD *)(a1 + 40);
    if ( (v4 & 1) != 0 )
    {
      if ( (v4 & 0x20000) != 0 )
      {
        for ( i = 0LL; ; i = v16 )
        {
          v15 = hdevEnumerate<1>(i);
          v16 = v15;
          if ( !v15 )
            break;
          v14 = *(_DWORD *)(v15 + 40) & 0x20001;
          v17 = v15;
          if ( v14 == 1 && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v17) && *(_QWORD *)(v16 + 24) == a1 )
            DxLddmPrimaryLockCleanUpSinglePDev((struct PDEVOBJ *)&v17);
        }
      }
      else if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v17) )
      {
        DxLddmPrimaryLockCleanUpSinglePDev((struct PDEVOBJ *)&v17);
      }
    }
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v17);
  if ( (a2 & 1) != 0 && (unsigned int)UserIsWddmConnectedSession() )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v17);
    for ( j = 0LL; ; j = v7 )
    {
      v6 = hdevEnumerate<1>(j);
      v7 = v6;
      if ( !v6 )
        break;
      v8 = *(_DWORD *)(v6 + 40) & 0x20401;
      v17 = v6;
      if ( v8 == 1 && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v17) )
      {
        GreLockVisRgn(v7);
        GreLockDisplayDevice(v7);
        v18 = 0;
        DxgkWin32kInterface = DxDdGetDxgkWin32kInterface();
        v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(DxgkWin32kInterface + 448))(
                *(_QWORD *)(*(_QWORD *)(v7 + 2552) + 232LL),
                *(unsigned int *)(*(_QWORD *)(v7 + 2552) + 248LL),
                &v18);
        *(_DWORD *)(v7 + 2592) = 1;
        if ( ((a2 & 8) == 0 || v10) && *(_QWORD *)(v7 + 2704) )
        {
          if ( (a2 & 4) != 0 && v18 )
            v11 = 0LL;
          else
            LOBYTE(v11) = 1;
          DrvDxgkDisplayOnOff(v7, v11, 3LL);
          v12 = (a2 & 4) == 0 || !v18;
          (*(void (__fastcall **)(_QWORD, _BOOL8))(v7 + 2704))(*(_QWORD *)(v7 + 1768), v12);
        }
        *(_DWORD *)(v7 + 2592) = 0;
        GreUnlockDisplayDevice(v7);
        GreUnlockVisRgn(v7);
      }
    }
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v17);
  }
}
