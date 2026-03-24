/*
 * XREFs of ?vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z @ 0x1C00E7994
 * Callers:
 *     GreGetGlyphOutlineInternal @ 0x1C009C154 (GreGetGlyphOutlineInternal.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C00E7118 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009AE74 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vLockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ @ 0x1C00E7A80 (-vLockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ.c)
 */

void __fastcall RFONTOBJ::vLockEUDCFontsGlyphCache(RFONTOBJ *this, int a2)
{
  __int64 v2; // r8
  unsigned int v5; // eax
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned int v8; // ecx
  unsigned int v9; // edx
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v18[8]; // [rsp+28h] [rbp-40h]
  __int64 v19; // [rsp+70h] [rbp+8h] BYREF
  __int64 v20; // [rsp+80h] [rbp+18h] BYREF
  __int64 v21; // [rsp+88h] [rbp+20h] BYREF

  v2 = *(_QWORD *)this;
  v5 = *(_DWORD *)(*(_QWORD *)this + 840LL);
  if ( v5 <= 0x20 )
  {
    v18[0] = *(_QWORD *)(v2 + 736);
    v18[1] = *(_QWORD *)(v2 + 728);
    v6 = 0LL;
    v7 = v5 + 2;
    while ( 1 )
    {
      v8 = *(unsigned __int8 *)(v6 + *(_QWORD *)this + 856);
      v9 = *(_DWORD *)(*(_QWORD *)this + 840LL);
      if ( v8 < v9 )
        break;
      v12 = v8 - v9;
      if ( (unsigned int)v12 < 2 )
      {
        _mm_lfence();
        v10 = v18[v12];
LABEL_6:
        if ( v10 )
        {
          if ( a2 )
          {
            v11 = *(_QWORD *)(*(_QWORD *)this + 720LL);
            if ( v11 )
            {
              if ( *(_QWORD *)(v11 + 120) < *(_QWORD *)(v10 + 120) )
                RFONTOBJ::vLockSystemTTGlyphCache(this);
            }
          }
          GreAcquireSemaphore(*(_QWORD *)(v10 + 504));
          v19 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v19);
        }
      }
      ++v6;
      if ( !--v7 )
      {
        if ( a2 )
          RFONTOBJ::vLockSystemTTGlyphCache(this);
        return;
      }
    }
    _mm_lfence();
    v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 744LL) + 8LL * *(unsigned __int8 *)(v6 + *(_QWORD *)this + 856));
    goto LABEL_6;
  }
  if ( a2 )
  {
    RFONTOBJ::vLockSystemTTGlyphCache(this);
    v2 = *(_QWORD *)this;
  }
  v13 = *(_QWORD *)(v2 + 728);
  if ( v13 )
  {
    GreAcquireSemaphore(*(_QWORD *)(v13 + 504));
    v20 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v20);
    v2 = *(_QWORD *)this;
  }
  v14 = *(_QWORD *)(v2 + 736);
  if ( v14 )
  {
    GreAcquireSemaphore(*(_QWORD *)(v14 + 504));
    v21 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v21);
    v2 = *(_QWORD *)this;
  }
  v15 = 0LL;
  if ( *(_DWORD *)(v2 + 840) )
  {
    do
    {
      v16 = *(_QWORD *)(*(_QWORD *)(v2 + 744) + 8 * v15);
      if ( v16 )
      {
        GreAcquireSemaphore(*(_QWORD *)(v16 + 504));
        v17 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v17);
      }
      v2 = *(_QWORD *)this;
      v15 = (unsigned int)(v15 + 1);
    }
    while ( (unsigned int)v15 < *(_DWORD *)(*(_QWORD *)this + 840LL) );
  }
}
