void __fastcall vUnlinkAllEudcFromRFONTList(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v1; // rbx
  __int64 i; // rax
  __int64 v3; // rsi
  struct RFONT *v4; // rbx
  struct RFONT *v5; // rbx
  char *v6; // rcx
  unsigned int j; // edi
  char *v8; // rcx
  unsigned int k; // edi
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v1 = Gre::Base::Globals(a1);
  v13 = *((_QWORD *)v1 + 6);
  GreAcquireSemaphore(v13);
  v12 = *((_QWORD *)v1 + 3);
  GreAcquireSemaphore(v12);
  for ( i = hdevEnumerateAll(0LL); ; i = hdevEnumerateAll(v3) )
  {
    v3 = i;
    if ( !i )
      break;
    v10 = i;
    v4 = PDEVOBJ::prfntActive((PDEVOBJ *)&v10);
    if ( v4 )
    {
      v11 = 0LL;
      do
      {
        if ( *((_QWORD *)v4 + 90) )
          vMakeInactiveHelper((char *)v4 + 720);
        if ( *((_QWORD *)v4 + 91) )
          vMakeInactiveHelper((char *)v4 + 728);
        if ( *((_QWORD *)v4 + 92) )
          vMakeInactiveHelper((char *)v4 + 736);
        v6 = (char *)*((_QWORD *)v4 + 93);
        if ( v6 )
        {
          for ( j = 0; j < *((_DWORD *)v4 + 210); ++j )
          {
            if ( *(_QWORD *)&v6[8 * j] )
            {
              vMakeInactiveHelper(&v6[8 * j]);
              v6 = (char *)*((_QWORD *)v4 + 93);
            }
          }
          if ( v6 != (char *)v4 + 752 )
            Win32FreePool(v6);
          *(_QWORD *)((char *)v4 + 836) = 0LL;
          *((_QWORD *)v4 + 93) = 0LL;
          *((_DWORD *)v4 + 208) = 0;
        }
        *(_QWORD *)(*((_QWORD *)v4 + 15) + 120LL) = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v11);
        v4 = (struct RFONT *)*((_QWORD *)v4 + 84);
      }
      while ( v4 );
    }
    v5 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v10);
    if ( v5 )
    {
      v10 = 0LL;
      do
      {
        if ( *((_QWORD *)v5 + 90) )
          vMakeInactiveHelper((char *)v5 + 720);
        if ( *((_QWORD *)v5 + 91) )
          vMakeInactiveHelper((char *)v5 + 728);
        if ( *((_QWORD *)v5 + 92) )
          vMakeInactiveHelper((char *)v5 + 736);
        v8 = (char *)*((_QWORD *)v5 + 93);
        if ( v8 )
        {
          for ( k = 0; k < *((_DWORD *)v5 + 210); ++k )
          {
            if ( *(_QWORD *)&v8[8 * k] )
            {
              vMakeInactiveHelper(&v8[8 * k]);
              v8 = (char *)*((_QWORD *)v5 + 93);
            }
          }
          if ( v8 != (char *)v5 + 752 )
            Win32FreePool(v8);
          *(_QWORD *)((char *)v5 + 836) = 0LL;
          *((_QWORD *)v5 + 93) = 0LL;
          *((_DWORD *)v5 + 208) = 0;
        }
        *(_QWORD *)(*((_QWORD *)v5 + 15) + 120LL) = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v10);
        v5 = (struct RFONT *)*((_QWORD *)v5 + 84);
      }
      while ( v5 );
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v12);
  SEMOBJ::vUnlock((SEMOBJ *)&v13);
}
