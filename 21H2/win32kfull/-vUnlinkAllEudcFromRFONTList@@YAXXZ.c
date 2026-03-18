/*
 * XREFs of ?vUnlinkAllEudcFromRFONTList@@YAXXZ @ 0x1C015EA48
 * Callers:
 *     bDeleteAllFlEntry @ 0x1C015E790 (bDeleteAllFlEntry.c)
 * Callees:
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C000AD50 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00153D0 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0019ED8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     vMakeInactiveHelper @ 0x1C02971C8 (vMakeInactiveHelper.c)
 */

void vUnlinkAllEudcFromRFONTList(void)
{
  struct PDEV *i; // rsi
  struct RFONT *v1; // rbx
  struct RFONT *v2; // rcx
  unsigned int j; // edi
  struct RFONT *v4; // rbx
  struct RFONT *v5; // rcx
  unsigned int k; // edi
  struct PDEV *v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  v10 = ghsemDriverMgmt;
  GreAcquireSemaphore(ghsemDriverMgmt);
  v9 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  for ( i = gppdevList; i; i = *(struct PDEV **)i )
  {
    v7 = i;
    v1 = PDEVOBJ::prfntActive((PDEVOBJ *)&v7);
    if ( v1 )
    {
      v8 = 0LL;
      do
      {
        if ( *((_QWORD *)v1 + 90) )
          ((void (*)(void))vMakeInactiveHelper)();
        if ( *((_QWORD *)v1 + 91) )
          ((void (*)(void))vMakeInactiveHelper)();
        if ( *((_QWORD *)v1 + 92) )
          ((void (*)(void))vMakeInactiveHelper)();
        v2 = (struct RFONT *)*((_QWORD *)v1 + 93);
        if ( v2 )
        {
          for ( j = 0; j < *((_DWORD *)v1 + 210); ++j )
          {
            v2 = (struct RFONT *)*((_QWORD *)v1 + 93);
            if ( *((_QWORD *)v2 + j) )
            {
              vMakeInactiveHelper((char *)v2 + 8 * j);
              v2 = (struct RFONT *)*((_QWORD *)v1 + 93);
            }
          }
          if ( v2 != (struct RFONT *)((char *)v1 + 752) )
            Win32FreePool(v2);
          *(_QWORD *)((char *)v1 + 836) = 0LL;
          *((_QWORD *)v1 + 93) = 0LL;
          *((_DWORD *)v1 + 208) = 0;
        }
        *(_QWORD *)(*((_QWORD *)v1 + 15) + 120LL) = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v8);
        v1 = (struct RFONT *)*((_QWORD *)v1 + 84);
      }
      while ( v1 );
    }
    v4 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v7);
    if ( v4 )
    {
      v7 = 0LL;
      do
      {
        if ( *((_QWORD *)v4 + 90) )
          vMakeInactiveHelper((char *)v4 + 720);
        if ( *((_QWORD *)v4 + 91) )
          vMakeInactiveHelper((char *)v4 + 728);
        if ( *((_QWORD *)v4 + 92) )
          vMakeInactiveHelper((char *)v4 + 736);
        v5 = (struct RFONT *)*((_QWORD *)v4 + 93);
        if ( v5 )
        {
          for ( k = 0; k < *((_DWORD *)v4 + 210); ++k )
          {
            v5 = (struct RFONT *)*((_QWORD *)v4 + 93);
            if ( *((_QWORD *)v5 + k) )
            {
              vMakeInactiveHelper((char *)v5 + 8 * k);
              v5 = (struct RFONT *)*((_QWORD *)v4 + 93);
            }
          }
          if ( v5 != (struct RFONT *)((char *)v4 + 752) )
            Win32FreePool(v5);
          *(_QWORD *)((char *)v4 + 836) = 0LL;
          *((_QWORD *)v4 + 93) = 0LL;
          *((_DWORD *)v4 + 208) = 0;
        }
        *(_QWORD *)(*((_QWORD *)v4 + 15) + 120LL) = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v7);
        v4 = (struct RFONT *)*((_QWORD *)v4 + 84);
      }
      while ( v4 );
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v9);
  SEMOBJ::vUnlock((SEMOBJ *)&v10);
}
