/*
 * XREFs of ?bMatchRealization@RFONTOBJ@@AEAAHPEAU_FD_XFORM@@KKPEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C00E883C
 * Callers:
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C00E85E8 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
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
  __int64 v10; // r10
  int v15; // ecx
  int v16; // r9d
  __int64 v17; // rcx
  BOOL v18; // eax
  bool v19; // r8
  bool v20; // cf
  int v21; // ecx
  int v22; // eax

  v10 = *(_QWORD *)this;
  if ( *(struct PFE **)(*(_QWORD *)this + 120LL) != a6 )
    return 0LL;
  if ( a10 != (*(_DWORD *)(v10 + 84) & 6) )
    return 0LL;
  v15 = *(_DWORD *)(v10 + 12);
  if ( ((a3 ^ v15) & 0xE000) != 0 )
    return 0LL;
  v16 = (a3 ^ v15) & 0x50010000;
  if ( v16 )
  {
    v19 = (a3 & 0x10000000) != 0 && (v15 & 0x12000000) == 0x2000000;
    v20 = (v15 & 0x20000) != 0;
    v21 = v16 & 0x50000000;
    if ( (a3 & 0x10000) == 0 || !v20 )
      v21 = v16;
    v22 = 0;
    if ( !v19 )
      v22 = v21;
    if ( v22 )
      return 0LL;
  }
  if ( *(_DWORD *)(v10 + 40) != a4 )
    return 0LL;
  v17 = *(_QWORD *)&a2->eXX - *(_QWORD *)(v10 + 136);
  if ( *(_QWORD *)&a2->eXX == *(_QWORD *)(v10 + 136) )
    v17 = *(_QWORD *)&a2->eYX - *(_QWORD *)(v10 + 144);
  if ( !v17
    && a7 == *(_DWORD *)(v10 + 656)
    && (!a5 || EXFORMOBJ::bEqualExceptTranslations(a5, (struct MATRIX *)(v10 + 172)))
    && *(_DWORD *)(*(_QWORD *)this + 208LL) == a8
    && (a9 ? (v18 = 1) : (v18 = *(_DWORD *)(*(_QWORD *)this + 640LL) == 0), v18) )
  {
    return 1LL;
  }
  else
  {
    return 0LL;
  }
}
