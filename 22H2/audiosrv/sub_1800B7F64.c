/*
 * XREFs of sub_1800B7F64 @ 0x1800B7F64
 * Callers:
 *     sub_1800694B8 @ 0x1800694B8 (sub_1800694B8.c)
 *     sub_18007A092 @ 0x18007A092 (sub_18007A092.c)
 *     sub_1800B7CAC @ 0x1800B7CAC (sub_1800B7CAC.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800B7F64(__int64 a1)
{
  struct _TP_POOL *v2; // rcx

  v2 = *(struct _TP_POOL **)a1;
  if ( v2 )
  {
    CloseThreadpool(v2);
    *(_QWORD *)a1 = 0LL;
  }
  Mtx_destroy_in_situ((_Mtx_t)(a1 + 88));
}
