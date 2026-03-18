/*
 * XREFs of ??0RGNMEMOBJ@@QEAA@W4DestructorDisposition@0@@Z @ 0x1C009C430
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1C0025B30 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 */

_DWORD *__fastcall RGNMEMOBJ::RGNMEMOBJ(_DWORD *a1, int a2)
{
  struct REGION *Region; // rax
  struct REGION *v4; // rcx
  __int64 v5; // rax
  _QWORD *v6; // rax

  a1[2] = a2;
  Region = RGNMEMOBJ::AllocateRegion(0x70u);
  *(_QWORD *)a1 = Region;
  v4 = Region;
  if ( Region )
  {
    *((_DWORD *)Region + 20) = 16;
    *((_DWORD *)Region + 21) = 1;
    *((_QWORD *)Region + 12) = 0LL;
    *((_QWORD *)Region + 13) = 0LL;
    v5 = *((_QWORD *)Region + 11);
    *(_DWORD *)v5 = 0;
    *(_DWORD *)(v5 + 4) = 0x80000000;
    *(_QWORD *)(v5 + 8) = 0x7FFFFFFFLL;
    *((_QWORD *)v4 + 5) = v5 + 16;
    *(_DWORD *)(*(_QWORD *)a1 + 24LL) = 112;
    *(_DWORD *)(*(_QWORD *)a1 + 32LL) = 0;
    *(_DWORD *)(*(_QWORD *)a1 + 28LL) = 0;
    *(_DWORD *)(*(_QWORD *)a1 + 36LL) = 0;
    v6 = (_QWORD *)(*(_QWORD *)a1 + 48LL);
    v6[1] = v6;
    *v6 = v6;
  }
  return a1;
}
