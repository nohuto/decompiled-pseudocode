/*
 * XREFs of ?ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z @ 0x1C007CAB0
 * Callers:
 *     GreGetPaletteEntries @ 0x1C007BA80 (GreGetPaletteEntries.c)
 *     EngQueryPalette @ 0x1C0293F70 (EngQueryPalette.c)
 *     NtGdiColorCorrectPalette @ 0x1C02D0DA0 (NtGdiColorCorrectPalette.c)
 *     GreGetSystemPaletteEntries @ 0x1C02D3540 (GreGetSystemPaletteEntries.c)
 *     PALOBJ_cGetColors @ 0x1C02DAFE0 (PALOBJ_cGetColors.c)
 *     XLATEOBJ_cGetPalette @ 0x1C02DDE00 (XLATEOBJ_cGetPalette.c)
 *     ?bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z @ 0x1C02E0688 (-bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall XEPALOBJ::ulGetEntries(
        XEPALOBJ *this,
        unsigned int a2,
        unsigned int a3,
        struct tagPALETTEENTRY *a4,
        int a5)
{
  __int64 v5; // rdi
  struct tagPALETTEENTRY *v6; // rbx
  __int64 result; // rax
  unsigned int v8; // eax
  struct tagPALETTEENTRY *v9; // rcx

  v5 = a3;
  v6 = a4;
  result = *(unsigned int *)(*(_QWORD *)this + 28LL);
  if ( a4 )
  {
    if ( a2 >= (unsigned int)result )
    {
      return 0LL;
    }
    else
    {
      v8 = result - a2;
      if ( a3 > v8 )
        v5 = v8;
      memmove(a4, (const void *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 4LL * a2), 4 * v5);
      if ( a5 )
      {
        v9 = &v6[v5];
        while ( v6 < v9 )
        {
          v6->peFlags = 0;
          ++v6;
        }
      }
      return (unsigned int)v5;
    }
  }
  return result;
}
