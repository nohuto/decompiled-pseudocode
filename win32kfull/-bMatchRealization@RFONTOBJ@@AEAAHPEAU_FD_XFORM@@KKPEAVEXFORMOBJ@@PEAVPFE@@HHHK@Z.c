/*
 * XREFs of ?bMatchRealization@RFONTOBJ@@AEAAHPEAU_FD_XFORM@@KKPEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C014FBFC
 * Callers:
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C02B8F58 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RFONTOBJ::bMatchRealization(
        RFONTOBJ *this,
        struct _FD_XFORM *a2,
        int a3,
        int a4,
        struct EXFORMOBJ *a5,
        struct PFE *a6,
        int a7,
        int a8,
        int a9,
        unsigned int a10)
{
  __int64 v11; // rdx
  int v15; // r9d
  int v16; // r8d
  unsigned int v17; // ebx
  int v18; // r8d
  int v19; // r11d
  __int64 v20; // rcx

  v11 = *(_QWORD *)this;
  if ( *(struct PFE **)(*(_QWORD *)this + 120LL) != a6 )
    return 0LL;
  if ( a10 != (*(_DWORD *)(v11 + 84) & 6) )
    return 0LL;
  v15 = *(_DWORD *)(v11 + 12);
  v16 = a3 ^ v15;
  if ( (v16 & 0xE000) != 0 )
    return 0LL;
  v17 = 0;
  v18 = v16 & 0x50010000;
  if ( v18 )
  {
    v19 = v18 & 0x50000000;
    if ( (v15 & 0x20000) == 0 || (a3 & 0x10000) == 0 )
      v19 = v18;
    if ( ((v15 & 0x12000000) != 0x2000000 || (a3 & 0x10000000) == 0) && v19 )
      return 0LL;
  }
  if ( *(_DWORD *)(v11 + 40) != a4 )
    return 0LL;
  v20 = *(_QWORD *)&a2->eXX - *(_QWORD *)(v11 + 136);
  if ( *(_QWORD *)&a2->eXX == *(_QWORD *)(v11 + 136) )
    v20 = *(_QWORD *)&a2->eYX - *(_QWORD *)(v11 + 144);
  if ( v20
    || a7 != *(_DWORD *)(v11 + 656)
    || a5 && !EXFORMOBJ::bEqualExceptTranslations(a5, (struct MATRIX *)(v11 + 172))
    || *(_DWORD *)(*(_QWORD *)this + 208LL) != a8 )
  {
    return 0LL;
  }
  if ( a9 )
    return 1LL;
  LOBYTE(v17) = *(_DWORD *)(*(_QWORD *)this + 640LL) == 0;
  return v17;
}
