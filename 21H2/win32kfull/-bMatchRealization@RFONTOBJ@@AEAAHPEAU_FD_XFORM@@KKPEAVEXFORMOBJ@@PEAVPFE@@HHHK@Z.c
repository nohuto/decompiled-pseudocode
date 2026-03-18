/*
 * XREFs of ?bMatchRealization@RFONTOBJ@@AEAAHPEAU_FD_XFORM@@KKPEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C02A6A04
 * Callers:
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C02A67E0 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RFONTOBJ::bMatchRealization(
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
  int v17; // r8d
  int v18; // r11d
  __int64 v19; // rcx

  v11 = *(_QWORD *)this;
  if ( *(struct PFE **)(*(_QWORD *)this + 120LL) != a6 )
    return 0LL;
  if ( a10 != (*(_DWORD *)(v11 + 84) & 6) )
    return 0LL;
  v15 = *(_DWORD *)(v11 + 12);
  v16 = a3 ^ v15;
  if ( (v16 & 0xE000) != 0 )
    return 0LL;
  v17 = v16 & 0x50010000;
  if ( v17 )
  {
    v18 = v17 & 0x50000000;
    if ( (a3 & 0x10000) == 0 || (v15 & 0x20000) == 0 )
      v18 = v17;
    if ( ((v15 & 0x12000000) != 0x2000000 || (a3 & 0x10000000) == 0) && v18 )
      return 0LL;
  }
  if ( *(_DWORD *)(v11 + 40) != a4 )
    return 0LL;
  v19 = *(_QWORD *)&a2->eXX - *(_QWORD *)(v11 + 136);
  if ( *(_QWORD *)&a2->eXX == *(_QWORD *)(v11 + 136) )
    v19 = *(_QWORD *)&a2->eYX - *(_QWORD *)(v11 + 144);
  return !v19
      && a7 == *(_DWORD *)(v11 + 656)
      && (!a5 || EXFORMOBJ::bEqualExceptTranslations(a5, (struct MATRIX *)(v11 + 172)))
      && *(_DWORD *)(*(_QWORD *)this + 208LL) == a8
      && (a9 || !*(_DWORD *)(*(_QWORD *)this + 640LL));
}
