/*
 * XREFs of prfntKillList @ 0x1C00A54E0
 * Callers:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C00A21FC (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C00A5720 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009032C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009AF04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C009D690 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C009E450 (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C009E4E8 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C009F174 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?cInactive@PDEVOBJ@@QEAAIXZ @ 0x1C00E8DF0 (-cInactive@PDEVOBJ@@QEAAIXZ.c)
 */

unsigned __int64 __fastcall prfntKillList(__int64 *a1)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  struct PDEV *v7; // rbx
  struct RFONT *v8; // rsi
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  struct PDEV *v11; // rdx
  struct RFONT *v12; // rsi
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  struct PDEV *v15; // rdx
  unsigned int v16; // ecx
  unsigned __int64 v18; // [rsp+20h] [rbp-20h] BYREF
  __int64 v19; // [rsp+28h] [rbp-18h] BYREF
  __int64 v20; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v21; // [rsp+78h] [rbp+38h] BYREF
  struct PDEV *v22; // [rsp+80h] [rbp+40h] BYREF
  unsigned __int64 v23; // [rsp+88h] [rbp+48h] BYREF

  v2 = 0LL;
  v23 = 0LL;
  v20 = ghsemDriverMgmt;
  GreAcquireSemaphore(ghsemDriverMgmt);
  v19 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  GreAcquireHmgrSemaphore(v4, v3, v5, v6);
  v7 = gppdevList;
  if ( gppdevList )
  {
    do
    {
      if ( (*((_DWORD *)v7 + 10) & 1) != 0 )
      {
        v22 = v7;
        v8 = PDEVOBJ::prfntActive((PDEVOBJ *)&v22);
        while ( v8 )
        {
          v9 = *a1;
          v10 = (unsigned __int64)v8;
          v8 = (struct RFONT *)*((_QWORD *)v8 + 84);
          v21 = v10;
          if ( *(_QWORD *)(v10 + 128) == v9 && *(int *)(v10 + 660) <= 0 )
          {
            v18 = *(_QWORD *)(v9 + 72);
            RFONTOBJ::vRemove((__int64)&v21, &v18, 0);
            *(_QWORD *)(*a1 + 72) = v18;
            if ( (*((_DWORD *)v7 + 10) & 0x800000) != 0 )
              v11 = (struct PDEV *)*((_QWORD *)v7 + 440);
            else
              v11 = v7;
            RFONTOBJ::vRemove((__int64)&v21, (unsigned __int64 *)v11 + 190, 1);
            RFONTOBJ::vInsert(&v21, &v23, 1);
          }
          v21 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v21);
        }
        v12 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v22);
        while ( v12 )
        {
          v13 = *a1;
          v14 = (unsigned __int64)v12;
          v12 = (struct RFONT *)*((_QWORD *)v12 + 84);
          v21 = v14;
          if ( *(_QWORD *)(v14 + 128) == v13 )
          {
            v18 = *(_QWORD *)(v13 + 72);
            RFONTOBJ::vRemove((__int64)&v21, &v18, 0);
            *(_QWORD *)(*a1 + 72) = v18;
            if ( (*((_DWORD *)v7 + 10) & 0x800000) != 0 )
              v15 = (struct PDEV *)*((_QWORD *)v7 + 440);
            else
              v15 = v7;
            RFONTOBJ::vRemove((__int64)&v21, (unsigned __int64 *)v15 + 191, 1);
            RFONTOBJ::vInsert(&v21, &v23, 1);
            v16 = PDEVOBJ::cInactive((PDEVOBJ *)&v22) - 1;
            if ( (*((_DWORD *)v7 + 10) & 0x800000) != 0 )
              *(_DWORD *)(*((_QWORD *)v7 + 440) + 1536LL) = v16;
            else
              *((_DWORD *)v7 + 384) = v16;
          }
          v21 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v21);
        }
      }
      v7 = *(struct PDEV **)v7;
    }
    while ( v7 );
    v2 = v23;
  }
  GreReleaseHmgrSemaphore();
  SEMOBJ::vUnlock((SEMOBJ *)&v19);
  SEMOBJ::vUnlock((SEMOBJ *)&v20);
  return v2;
}
