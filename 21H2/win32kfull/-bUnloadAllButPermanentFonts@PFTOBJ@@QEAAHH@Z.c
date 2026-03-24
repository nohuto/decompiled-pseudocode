/*
 * XREFs of ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C00A5720
 * Callers:
 *     ?bCleanupFontTable@@YAHPEAPEAVPFT@@@Z @ 0x1C00E674C (-bCleanupFontTable@@YAHPEAPEAVPFT@@@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C009FE48 (PALLOCMEM2.c)
 *     ?vKill@PFFOBJ@@QEAAXXZ @ 0x1C00A5498 (-vKill@PFFOBJ@@QEAAXXZ.c)
 *     prfntKillList @ 0x1C00A54E0 (prfntKillList.c)
 *     ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C00A594C (-vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z.c)
 *     bKillPFFOBJ @ 0x1C00A59D8 (bKillPFFOBJ.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C00BA214 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C016AAC0 (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C026D7BC (--1SEMOBJ@@QEAA@XZ.c)
 *     vKillRFONTList @ 0x1C027320C (vKillRFONTList.c)
 */

__int64 __fastcall PFTOBJ::bUnloadAllButPermanentFonts(PFTOBJ *this)
{
  int v2; // r12d
  __int64 v3; // rdx
  unsigned int v4; // ebx
  unsigned int v5; // eax
  _DWORD *v6; // rsi
  struct PFF **v7; // rdi
  _DWORD *v8; // r14
  unsigned __int64 i; // rcx
  struct PFF *j; // rcx
  struct PFF *v11; // r13
  int v12; // ebp
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  struct PFF *v18; // rax
  __int64 v19; // rbp
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // r14
  _DWORD *v22; // rdi
  __int64 v24[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v25; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  v25 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v3 = *(_QWORD *)this;
  v4 = 1;
  v5 = *(_DWORD *)(*(_QWORD *)this + 28LL);
  if ( !v5 )
    goto LABEL_5;
  if ( v5 <= 0x40 )
  {
    v6 = &gFntVict;
  }
  else
  {
    v6 = PALLOCMEM2(48 * v5, 1769367111LL, 0);
    if ( !v6 )
    {
      v4 = 0;
LABEL_5:
      SEMOBJ::~SEMOBJ((SEMOBJ *)&v25);
      return v4;
    }
    v3 = *(_QWORD *)this;
    v2 = 1;
  }
  v7 = (struct PFF **)(v3 + 40);
  v8 = v6;
  for ( i = v3 + 8 * (*(unsigned int *)(v3 + 24) + 5LL);
        (unsigned __int64)v7 < i;
        i = *(_QWORD *)this + 8LL * *(unsigned int *)(*(_QWORD *)this + 24LL) + 40 )
  {
    for ( j = *v7; ; j = v11 )
    {
      v18 = SkipInvalidPff(j);
      if ( !v18 )
        break;
      v11 = (struct PFF *)*((_QWORD *)v18 + 1);
      v12 = *((_DWORD *)v18 + 13) & 0x200;
      *((_DWORD *)v18 + 14) = 0;
      *((_DWORD *)v18 + 15) = 0;
      v24[0] = (__int64)v18;
      PFFOBJ::vKill((PFFOBJ *)v24);
      if ( *v7 == (struct PFF *)v13 )
        *v7 = *(struct PFF **)(v13 + 8);
      v14 = *(_QWORD *)(v13 + 8);
      if ( v14 )
        *(_QWORD *)(v14 + 16) = *(_QWORD *)(v13 + 16);
      v15 = *(_QWORD *)(v13 + 16);
      if ( v15 )
        *(_QWORD *)(v15 + 8) = *(_QWORD *)(v13 + 8);
      *(_QWORD *)v8 = v13;
      PFFOBJ::vRemoveHash((PFFOBJ *)v24);
      v16 = *(_QWORD *)this;
      if ( !v12 )
        ++*(_DWORD *)(v16 + 32);
      --*(_DWORD *)(v16 + 28);
      v17 = prfntKillList(v24);
      *((_QWORD *)v8 + 1) = v17;
      if ( !v17 )
        v8[10] = bKillPFFOBJ(v24, v8 + 4);
      v8 += 12;
    }
    ++v7;
  }
  SEMOBJ::~SEMOBJ((SEMOBJ *)&v25);
  v19 = 0LL;
  v20 = (__int64)((unsigned __int128)(((char *)v8 - (char *)v6) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  v21 = (v20 >> 63) + v20;
  if ( (_DWORD)v21 )
  {
    v22 = v6 + 10;
    do
    {
      if ( *((_QWORD *)v22 - 4) )
      {
        v24[0] = *((_QWORD *)v22 - 5);
        vKillRFONTList((PFFOBJ *)v24);
      }
      else if ( *v22 )
      {
        vCleanupFontFile((struct PFFCLEANUP *)&v6[12 * v19 + 4]);
      }
      v19 = (unsigned int)(v19 + 1);
      v22 += 12;
    }
    while ( (unsigned int)v19 < (unsigned int)v21 );
  }
  if ( v2 )
    Win32FreePool(v6);
  return v4;
}
