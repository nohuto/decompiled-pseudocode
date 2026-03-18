/*
 * XREFs of ?bAllocFontLinks@UMPDOBJ@@QEAAHI@Z @ 0x1C02C0538
 * Callers:
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C02BFF40 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 * Callees:
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 */

__int64 __fastcall UMPDOBJ::bAllocFontLinks(UMPDOBJ *this, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rsi
  void *v7; // rcx
  __int64 v8; // rax
  void *v9; // rcx

  v4 = 0;
  v5 = a2;
  if ( a2 > *((_DWORD *)this + 108) )
  {
    v7 = (void *)*((_QWORD *)this + 50);
    if ( v7 )
    {
      Win32FreePool(v7);
      *((_DWORD *)this + 108) = 0;
    }
    if ( 4 * (_DWORD)v5 )
      v8 = Win32AllocPool((unsigned int)(4 * v5), 1886221639LL, a3, a4);
    else
      v8 = 0LL;
    *((_QWORD *)this + 50) = v8;
  }
  v9 = (void *)*((_QWORD *)this + 50);
  if ( v9 )
  {
    *((_DWORD *)this + 108) = v5;
    memset_0(v9, 0, 4 * v5);
  }
  LOBYTE(v4) = *((_QWORD *)this + 50) != 0LL;
  return v4;
}
