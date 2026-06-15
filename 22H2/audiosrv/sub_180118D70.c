/*
 * XREFs of sub_180118D70 @ 0x180118D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_180118D70(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *a1;
  if ( v2 )
  {
    _o_free(v2);
    *a1 = 0LL;
  }
  v3 = a1[1];
  if ( v3 )
  {
    _o_free(v3);
    a1[1] = 0LL;
  }
  *((_DWORD *)a1 + 4) = 0;
}
