/*
 * XREFs of ?vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ @ 0x1C014FD94
 * Callers:
 *     ?dtorHelper@RFONTOBJ@@QEAAXXZ @ 0x1C02B70B0 (-dtorHelper@RFONTOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C011DDEC (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C012F7B8 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 */

void __fastcall RFONTOBJ::vUnlockEUDCFontsGlyphCache(RFONTOBJ *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  int v5; // eax
  __int64 i; // rdi
  __int64 v7; // rax
  __int64 v8; // [rsp+30h] [rbp+10h] BYREF

  v2 = *(_QWORD *)this;
  if ( (*(_DWORD *)(v2 + 712) & 0x180) == 0x80 )
  {
    v3 = *(_QWORD *)(v2 + 720);
    if ( v3 )
    {
      if ( (unsigned int)GreIsSemaphoreOwnedByCurrentThread(*(_QWORD *)(v3 + 504)) )
      {
        v8 = *(_QWORD *)(*(_QWORD *)this + 720LL);
        RFONTOBJ::vReleaseCache((RFONTOBJ *)&v8);
        *(_DWORD *)(*(_QWORD *)this + 712LL) &= ~0x80u;
        RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v8);
      }
    }
  }
  v4 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 712LL) & 0x101) == 1 )
  {
    v5 = *(_DWORD *)(v4 + 840) - 1;
    for ( i = v5; i >= 0; --i )
    {
      v7 = *(_QWORD *)(v4 + 744);
      if ( *(_QWORD *)(v7 + 8 * i) )
      {
        v8 = *(_QWORD *)(v7 + 8 * i);
        RFONTOBJ::vReleaseCache((RFONTOBJ *)&v8);
        RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v8);
        v4 = *(_QWORD *)this;
      }
    }
    if ( *(_QWORD *)(v4 + 736) )
    {
      v8 = *(_QWORD *)(v4 + 736);
      RFONTOBJ::vReleaseCache((RFONTOBJ *)&v8);
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v8);
    }
    if ( *(_QWORD *)(*(_QWORD *)this + 728LL) )
    {
      v8 = *(_QWORD *)(*(_QWORD *)this + 728LL);
      RFONTOBJ::vReleaseCache((RFONTOBJ *)&v8);
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v8);
    }
  }
}
