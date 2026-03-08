/*
 * XREFs of _guard_check_icall @ 0x140421180
 * Callers:
 *     bsearch @ 0x1403D4280 (bsearch.c)
 *     bsearch_s @ 0x1403D4390 (bsearch_s.c)
 *     qsort @ 0x1403D48B0 (qsort.c)
 *     qsort_s @ 0x1403D4C90 (qsort_s.c)
 *     sub_1403DE9F0 @ 0x1403DE9F0 (sub_1403DE9F0.c)
 *     sub_1403DF9D0 @ 0x1403DF9D0 (sub_1403DF9D0.c)
 *     sub_1403DFAB0 @ 0x1403DFAB0 (sub_1403DFAB0.c)
 *     sub_1403EBD40 @ 0x1403EBD40 (sub_1403EBD40.c)
 *     KeGuardCheckICall @ 0x140B107B0 (KeGuardCheckICall.c)
 * Callees:
 *     <none>
 */

void __fastcall guard_check_icall(uintptr_t Target)
{
  __int64 v1; // rdx
  uintptr_t v2; // r10
  unsigned __int64 v3; // r10

  if ( (Target & 0x8000000000000000uLL) == 0LL )
    goto LABEL_8;
  if ( !guard_icall_bitmap )
    return;
  v1 = *(_QWORD *)(guard_icall_bitmap + 8 * (Target >> 9));
  v2 = Target >> 3;
  if ( (Target & 0xF) == 0 )
  {
    if ( _bittest64(&v1, v2) )
      return;
LABEL_8:
    guard_icall_bugcheck(Target);
  }
  v3 = v2 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( !_bittest64(&v1, v3) || !_bittest64(&v1, v3 | 1) )
    goto LABEL_8;
}
