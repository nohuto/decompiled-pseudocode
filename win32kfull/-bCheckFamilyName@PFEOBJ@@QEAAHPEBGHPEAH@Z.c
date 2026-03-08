/*
 * XREFs of ?bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z @ 0x1C00E3648
 * Callers:
 *     vLinkEudcPFEsWorker @ 0x1C0114EE8 (vLinkEudcPFEsWorker.c)
 *     ?bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C01155D8 (-bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_E.c)
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C011B94C (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PFEOBJ::bCheckFamilyName(PFEOBJ *this, const unsigned __int16 *a2, int a3, unsigned int *a4)
{
  const wchar_t *v8; // rbx
  unsigned int v9; // edx
  __int64 v10; // rax
  const wchar_t *v11; // rbx
  bool v13; // zf
  __int64 v14; // rax

  if ( a4 )
    *a4 = 0;
  v8 = (const wchar_t *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + *(int *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + 8LL));
  if ( a3 && *v8 == 64 )
    ++v8;
  if ( _wcsicmp(a2, v8) )
  {
    v9 = 0;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + 48LL) & 0x8000000) != 0 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( v8[v10] );
      v11 = &v8[v10 + 1];
      do
      {
        if ( !*v11 )
          break;
        if ( a3 && *v11 == 64 )
          ++v11;
        v13 = _wcsicmp(a2, v11) == 0;
        v14 = -1LL;
        v9 = v13;
        do
          ++v14;
        while ( v11[v14] );
        v11 += v14 + 1;
      }
      while ( !v13 );
      if ( a4 )
        *a4 = v9;
    }
  }
  else
  {
    return 1;
  }
  return v9;
}
