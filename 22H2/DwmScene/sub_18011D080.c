/*
 * XREFs of sub_18011D080 @ 0x18011D080
 * Callers:
 *     <none>
 * Callees:
 *     sub_180068FF4 @ 0x180068FF4 (sub_180068FF4.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     _Mtx_destroy_in_situ @ 0x18011F9AC (_Mtx_destroy_in_situ.c)
 */

__int64 __fastcall sub_18011D080(__int64 a1, char a2)
{
  _QWORD *v2; // rbx

  v2 = (_QWORD *)(a1 + 96);
  sub_180068FF4(a1 + 96, a1 + 96, *(__int64 **)(*(_QWORD *)(a1 + 96) + 8LL));
  j_j__o_free(*v2);
  Mtx_destroy_in_situ((_Mtx_t)(a1 + 8));
  *(_QWORD *)a1 = &Spectre::Utils::ICancellationToken::`vftable';
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
