/*
 * XREFs of ?ValidUmpdHooks@@YAHPEAVPDEVOBJ@@K@Z @ 0x1C02C9CD0
 * Callers:
 *     NtGdiEngAssociateSurface @ 0x1C02CAF00 (NtGdiEngAssociateSurface.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidUmpdHooks(struct PDEVOBJ *a1, int a2)
{
  unsigned int v2; // r9d

  v2 = 0;
  if ( ((a2 & 1) == 0 || *(_QWORD *)(*(_QWORD *)a1 + 2808LL))
    && ((a2 & 2) == 0 || *(_QWORD *)(*(_QWORD *)a1 + 2824LL))
    && ((a2 & 4) == 0 || *(_QWORD *)(*(_QWORD *)a1 + 3224LL))
    && ((a2 & 8) == 0 || *(_QWORD *)(*(_QWORD *)a1 + 2848LL))
    && ((a2 & 0x20) == 0 || *(_QWORD *)(*(_QWORD *)a1 + 2776LL))
    && ((a2 & 0x40) == 0 || *(_QWORD *)(*(_QWORD *)a1 + 2784LL))
    && ((a2 & 0x80u) == 0 || *(_QWORD *)(*(_QWORD *)a1 + 2792LL))
    && ((a2 & 0x400) == 0 || *(_QWORD *)(*(_QWORD *)a1 + 2816LL))
    && ((a2 & 0x100) == 0 || *(_QWORD *)(*(_QWORD *)a1 + 2912LL))
    && ((a2 & 0x2000) == 0 || *(_QWORD *)(*(_QWORD *)a1 + 3216LL))
    && ((a2 & 0x8000) == 0 || *(_QWORD *)(*(_QWORD *)a1 + 3256LL))
    && ((a2 & 0x10000) == 0 || *(_QWORD *)(*(_QWORD *)a1 + 3232LL))
    && ((a2 & 0x20000) == 0 || *(_QWORD *)(*(_QWORD *)a1 + 3208LL)) )
  {
    return 1;
  }
  return v2;
}
