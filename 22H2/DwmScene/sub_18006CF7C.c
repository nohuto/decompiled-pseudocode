/*
 * XREFs of sub_18006CF7C @ 0x18006CF7C
 * Callers:
 *     sub_180072158 @ 0x180072158 (sub_180072158.c)
 *     sub_18007240C @ 0x18007240C (sub_18007240C.c)
 * Callees:
 *     sub_18006D178 @ 0x18006D178 (sub_18006D178.c)
 *     sub_180072244 @ 0x180072244 (sub_180072244.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_18006CF7C(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 *v5; // rdi
  __int64 *v6; // rbx

  v4 = *a1;
  v5 = *(__int64 **)(v4 + 8);
  if ( !*((_BYTE *)v5 + 25) )
  {
    do
    {
      sub_18006D178(a1, a2, v5[2]);
      v6 = v5;
      v5 = (__int64 *)*v5;
      sub_180072244(v6 + 4);
      j_j__o_free(v6);
    }
    while ( !*((_BYTE *)v5 + 25) );
    v4 = *a1;
  }
  return j_j__o_free(v4);
}
