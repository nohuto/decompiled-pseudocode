/*
 * XREFs of ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C00B7040
 * Callers:
 *     ?bCleanupFontTable@@YAHPEAPEAVPFT@@@Z @ 0x1C00B6EE0 (-bCleanupFontTable@@YAHPEAPEAVPFT@@@Z.c)
 * Callees:
 *     prfntKillList @ 0x1C00B724C (prfntKillList.c)
 *     bKillPFFOBJ @ 0x1C00B72FC (bKillPFFOBJ.c)
 *     ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C00B75A4 (-vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z.c)
 *     ?vKill@PFFOBJ@@QEAAXXZ @ 0x1C00B75D8 (-vKill@PFFOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C01172D8 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     vKillRFONTList @ 0x1C026E230 (vKillRFONTList.c)
 */

__int64 __fastcall PFTOBJ::bUnloadAllButPermanentFonts(PFTOBJ *this)
{
  int v2; // r13d
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // edi
  unsigned int v7; // edx
  _DWORD *v8; // rsi
  __int64 v9; // rcx
  _DWORD *v10; // rbx
  __int64 *i; // r14
  __int64 v12; // r12
  int v13; // ebp
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // r14
  unsigned __int64 v21; // rbx
  _DWORD *v22; // rbp
  _QWORD v24[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v25; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  v25 = *((_QWORD *)Gre::Base::Globals(this) + 6);
  GreAcquireSemaphore(v25);
  v6 = 1;
  v7 = *(_DWORD *)(*(_QWORD *)this + 28LL);
  if ( !v7 )
    goto LABEL_31;
  if ( v7 > 0x40 )
  {
    if ( 48 * v7 )
    {
      v8 = (_DWORD *)Win32AllocPool(48 * v7, 1769367111LL, v4, v5);
      if ( v8 )
      {
        v2 = 1;
        goto LABEL_6;
      }
    }
    v6 = 0;
LABEL_31:
    SEMOBJ::vUnlock((SEMOBJ *)&v25);
    return v6;
  }
  v8 = (_DWORD *)(*(_QWORD *)(SGDGetSessionState(v3) + 32) + 20296LL);
LABEL_6:
  v9 = *(_QWORD *)this;
  v10 = v8;
  for ( i = (__int64 *)(*(_QWORD *)this + 40LL);
        (unsigned __int64)i < v9 + 8 * (unsigned __int64)*(unsigned int *)(v9 + 24) + 40;
        ++i )
  {
    v19 = *i;
    if ( *i )
    {
      do
      {
        v12 = *(_QWORD *)(v19 + 8);
        v13 = *(_DWORD *)(v19 + 52) & 0x200;
        *(_DWORD *)(v19 + 56) = 0;
        *(_DWORD *)(v19 + 60) = 0;
        v24[0] = v19;
        PFFOBJ::vKill((PFFOBJ *)v24);
        if ( *i == v14 )
          *i = *(_QWORD *)(v14 + 8);
        v15 = *(_QWORD *)(v14 + 8);
        if ( v15 )
        {
          *(_QWORD *)(v15 + 16) = *(_QWORD *)(v14 + 16);
          v15 = *(_QWORD *)(v14 + 8);
        }
        v16 = *(_QWORD *)(v14 + 16);
        if ( v16 )
          *(_QWORD *)(v16 + 8) = v15;
        *(_QWORD *)v10 = v14;
        PFFOBJ::vRemoveHash((PFFOBJ *)v24);
        v17 = *(_QWORD *)this;
        if ( !v13 )
          ++*(_DWORD *)(v17 + 32);
        --*(_DWORD *)(v17 + 28);
        v18 = prfntKillList(v24);
        *((_QWORD *)v10 + 1) = v18;
        if ( !v18 )
          v10[10] = bKillPFFOBJ(v24, v10 + 4);
        v10 += 12;
        v19 = v12;
      }
      while ( v12 );
    }
    v9 = *(_QWORD *)this;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v25);
  v20 = 0LL;
  v21 = 0xAAAAAAAAAAAAAAABuLL * (((char *)v10 - (char *)v8) >> 4);
  if ( (_DWORD)v21 )
  {
    v22 = v8 + 10;
    do
    {
      if ( *((_QWORD *)v22 - 4) )
      {
        v24[0] = *((_QWORD *)v22 - 5);
        vKillRFONTList((PFFOBJ *)v24);
      }
      else if ( *v22 )
      {
        vCleanupFontFile((struct PFFCLEANUP *)&v8[12 * v20 + 4]);
      }
      v20 = (unsigned int)(v20 + 1);
      v22 += 12;
    }
    while ( (unsigned int)v20 < (unsigned int)v21 );
  }
  if ( v2 )
    Win32FreePool(v8);
  return v6;
}
