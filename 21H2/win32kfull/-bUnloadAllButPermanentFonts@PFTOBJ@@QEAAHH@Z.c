/*
 * XREFs of ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C000BF1C
 * Callers:
 *     ?bCleanupFontTable@@YAHPEAPEAVPFT@@@Z @ 0x1C00EF5FC (-bCleanupFontTable@@YAHPEAPEAVPFT@@@Z.c)
 * Callees:
 *     ?vKill@PFFOBJ@@QEAAXXZ @ 0x1C000BD98 (-vKill@PFFOBJ@@QEAAXXZ.c)
 *     prfntKillList @ 0x1C000BDE0 (prfntKillList.c)
 *     ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C000C12C (-vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z.c)
 *     bKillPFFOBJ @ 0x1C000CDC0 (bKillPFFOBJ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C0012A20 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     vKillRFONTList @ 0x1C027108C (vKillRFONTList.c)
 */

__int64 __fastcall PFTOBJ::bUnloadAllButPermanentFonts(PFTOBJ *this)
{
  int v2; // r13d
  __int64 v3; // rdx
  unsigned int v4; // ebx
  unsigned int v5; // eax
  unsigned int v6; // eax
  char *v7; // rbp
  __int64 *v8; // rsi
  char *v9; // rdi
  unsigned __int64 i; // rcx
  __int64 v11; // r12
  int v12; // r15d
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // r14
  unsigned __int64 v20; // rdi
  _DWORD *v21; // rsi
  __int64 v23[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v24; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  v24 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v3 = *(_QWORD *)this;
  v4 = 1;
  v5 = *(_DWORD *)(*(_QWORD *)this + 28LL);
  if ( !v5 )
    goto LABEL_32;
  if ( v5 > 0x40 )
  {
    v6 = 48 * v5;
    if ( v6 )
    {
      v7 = (char *)Win32AllocPool(v6, 1769367111LL);
      if ( v7 )
      {
        v3 = *(_QWORD *)this;
        v2 = 1;
        goto LABEL_6;
      }
    }
    v4 = 0;
LABEL_32:
    SEMOBJ::vUnlock((SEMOBJ *)&v24);
    return v4;
  }
  v7 = (char *)&gFntVict;
LABEL_6:
  v8 = (__int64 *)(v3 + 40);
  v9 = v7;
  for ( i = v3 + 8LL * *(unsigned int *)(v3 + 24) + 40;
        (unsigned __int64)v8 < i;
        i = v3 + 8 * (*(unsigned int *)(v3 + 24) + 5LL) )
  {
    v18 = *v8;
    if ( *v8 )
    {
      do
      {
        v11 = *(_QWORD *)(v18 + 8);
        v12 = *(_DWORD *)(v18 + 52) & 0x200;
        *(_DWORD *)(v18 + 56) = 0;
        *(_DWORD *)(v18 + 60) = 0;
        v23[0] = v18;
        PFFOBJ::vKill((PFFOBJ *)v23);
        if ( *v8 == v13 )
          *v8 = *(_QWORD *)(v13 + 8);
        v14 = *(_QWORD *)(v13 + 8);
        if ( v14 )
          *(_QWORD *)(v14 + 16) = *(_QWORD *)(v13 + 16);
        v15 = *(_QWORD *)(v13 + 16);
        if ( v15 )
          *(_QWORD *)(v15 + 8) = *(_QWORD *)(v13 + 8);
        *(_QWORD *)v9 = v13;
        PFFOBJ::vRemoveHash((PFFOBJ *)v23);
        v16 = *(_QWORD *)this;
        if ( !v12 )
          ++*(_DWORD *)(v16 + 32);
        --*(_DWORD *)(v16 + 28);
        v17 = prfntKillList(v23);
        *((_QWORD *)v9 + 1) = v17;
        if ( !v17 )
          *((_DWORD *)v9 + 10) = bKillPFFOBJ(v23, v9 + 16);
        v9 += 48;
        v18 = v11;
      }
      while ( v11 );
      v3 = *(_QWORD *)this;
    }
    ++v8;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v24);
  v19 = 0LL;
  v20 = 0xAAAAAAAAAAAAAAABuLL * ((v9 - v7) >> 4);
  if ( (_DWORD)v20 )
  {
    v21 = v7 + 40;
    do
    {
      if ( *((_QWORD *)v21 - 4) )
      {
        v23[0] = *((_QWORD *)v21 - 5);
        vKillRFONTList((PFFOBJ *)v23);
      }
      else if ( *v21 )
      {
        vCleanupFontFile((struct PFFCLEANUP *)&v7[48 * v19 + 16]);
      }
      v19 = (unsigned int)(v19 + 1);
      v21 += 12;
    }
    while ( (unsigned int)v19 < (unsigned int)v20 );
  }
  if ( v2 )
    Win32FreePool(v7);
  return v4;
}
