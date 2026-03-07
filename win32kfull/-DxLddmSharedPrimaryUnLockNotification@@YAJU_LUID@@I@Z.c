__int64 __fastcall DxLddmSharedPrimaryUnLockNotification(struct _LUID a1, int a2)
{
  DWORD LowPart; // ebx
  int v3; // edi
  unsigned int v4; // r14d
  int v5; // r15d
  __int64 i; // rsi
  __int64 v7; // rdi
  unsigned int CurrentProcessId; // eax
  __int64 ProcessEntry; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  Gre::Base *v13; // rcx
  LONG HighPart; // [rsp+64h] [rbp+44h]
  __int64 v17; // [rsp+70h] [rbp+50h] BYREF

  HighPart = a1.HighPart;
  LowPart = a1.LowPart;
  v3 = a2;
  v4 = 0;
  v5 = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v17);
  for ( i = hdevEnumerateDisplayOnly(0LL); i; i = hdevEnumerateDisplayOnly(i) )
  {
    v17 = i;
    if ( (*(_DWORD *)(i + 40) & 0x20400) == 0
      && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v17)
      && LowPart == PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v17)->LowPart
      && HighPart == PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v17)->HighPart
      && *(_DWORD *)(*(_QWORD *)(v17 + 2552) + 248LL) == v3 )
    {
      GreLockVisRgn(v17);
      GreLockSprite(v17);
      GreLockDisplayDevice(v17);
      v7 = v17;
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      ProcessEntry = DxLddmFindProcessEntry(v7 + 2600, CurrentProcessId & 0xFFFFFFFC);
      v10 = ProcessEntry;
      if ( ProcessEntry )
      {
        if ( *(_DWORD *)(ProcessEntry + 20) )
        {
          v11 = v17;
          if ( *(_QWORD *)(v17 + 2624) )
          {
            (*(void (__fastcall **)(_QWORD, __int64))(v17 + 2624))(*(_QWORD *)(v17 + 1768), v10 + 28);
            v11 = v17;
          }
          --*(_DWORD *)(v11 + 2616);
          if ( (*(_DWORD *)(v10 + 20))-- == 1 )
          {
            vSpUnTearDownSprites(v17, v10 + 28, 1LL);
            if ( *(_DWORD *)(v10 + 44) != *((_DWORD *)Gre::Base::Globals(v13) + 1629) )
              v5 = 1;
          }
        }
      }
      else
      {
        v4 = -1073741811;
      }
      GreUnlockDisplayDevice(v17);
      GreUnlockSprite(v17);
      GreUnlockVisRgn(v17);
      v3 = a2;
    }
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v17);
  if ( v5 )
    UserRedrawDesktop();
  return v4;
}
