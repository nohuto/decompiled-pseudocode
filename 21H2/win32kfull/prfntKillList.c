/*
 * XREFs of prfntKillList @ 0x1C000BDE0
 * Callers:
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C000BF1C (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C0011CB0 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 * Callees:
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C000AD50 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C000B034 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?cInactive@PDEVOBJ@@QEAAIXZ @ 0x1C000B838 (-cInactive@PDEVOBJ@@QEAAIXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00153D0 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C00170CC (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0019ED8 (--1RFONTOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall prfntKillList(__int64 *a1)
{
  __int64 v2; // rdi
  struct PDEV *v3; // rbx
  struct RFONT *v5; // rsi
  __int64 v6; // rcx
  struct RFONT *v7; // rax
  struct RFONT *v8; // rsi
  __int64 v9; // rcx
  struct RFONT *v10; // rax
  struct PDEV *v11; // rdx
  struct PDEV *v12; // rdx
  int v13; // ecx
  unsigned __int64 v14; // [rsp+20h] [rbp-20h] BYREF
  __int64 v15; // [rsp+28h] [rbp-18h] BYREF
  __int64 v16; // [rsp+30h] [rbp-10h] BYREF
  struct RFONT *v17; // [rsp+78h] [rbp+38h] BYREF
  struct PDEV *v18; // [rsp+80h] [rbp+40h] BYREF
  __int64 v19; // [rsp+88h] [rbp+48h] BYREF

  v2 = 0LL;
  v19 = 0LL;
  v16 = ghsemDriverMgmt;
  GreAcquireSemaphore(ghsemDriverMgmt);
  v15 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  GreAcquireHmgrSemaphore();
  v3 = gppdevList;
  if ( gppdevList )
  {
    do
    {
      if ( (*((_DWORD *)v3 + 10) & 1) != 0 )
      {
        v18 = v3;
        v5 = PDEVOBJ::prfntActive((PDEVOBJ *)&v18);
        while ( v5 )
        {
          v6 = *a1;
          v7 = v5;
          v5 = (struct RFONT *)*((_QWORD *)v5 + 84);
          v17 = v7;
          if ( *((_QWORD *)v7 + 16) == v6 && !*((_DWORD *)v7 + 165) )
          {
            v14 = *(_QWORD *)(v6 + 72);
            RFONTOBJ::vRemove((__int64)&v17, &v14, 0);
            *(_QWORD *)(*a1 + 72) = v14;
            if ( (*((_DWORD *)v3 + 10) & 0x800000) != 0 )
              v11 = (struct PDEV *)*((_QWORD *)v3 + 437);
            else
              v11 = v3;
            RFONTOBJ::vRemove((__int64)&v17, (unsigned __int64 *)v11 + 189, 1);
            RFONTOBJ::vInsert(&v17, &v19, 1LL);
          }
          v17 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v17);
        }
        v8 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v18);
        while ( v8 )
        {
          v9 = *a1;
          v10 = v8;
          v8 = (struct RFONT *)*((_QWORD *)v8 + 84);
          v17 = v10;
          if ( *((_QWORD *)v10 + 16) == v9 )
          {
            v14 = *(_QWORD *)(v9 + 72);
            RFONTOBJ::vRemove((__int64)&v17, &v14, 0);
            *(_QWORD *)(*a1 + 72) = v14;
            if ( (*((_DWORD *)v3 + 10) & 0x800000) != 0 )
              v12 = (struct PDEV *)*((_QWORD *)v3 + 437);
            else
              v12 = v3;
            RFONTOBJ::vRemove((__int64)&v17, (unsigned __int64 *)v12 + 190, 1);
            RFONTOBJ::vInsert(&v17, &v19, 1LL);
            v13 = PDEVOBJ::cInactive((PDEVOBJ *)&v18) - 1;
            if ( (*((_DWORD *)v3 + 10) & 0x800000) != 0 )
              *(_DWORD *)(*((_QWORD *)v3 + 437) + 1528LL) = v13;
            else
              *((_DWORD *)v3 + 382) = v13;
          }
          v17 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v17);
        }
      }
      v3 = *(struct PDEV **)v3;
    }
    while ( v3 );
    v2 = v19;
  }
  GreReleaseHmgrSemaphore();
  SEMOBJ::vUnlock((SEMOBJ *)&v15);
  SEMOBJ::vUnlock((SEMOBJ *)&v16);
  return v2;
}
