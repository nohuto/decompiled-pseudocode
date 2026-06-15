/*
 * XREFs of sub_1800D2F6C @ 0x1800D2F6C
 * Callers:
 *     sub_1800D32F4 @ 0x1800D32F4 (sub_1800D32F4.c)
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

void __fastcall sub_1800D2F6C(__int64 *a1, int a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rcx

  v3 = a3;
  if ( !a1 || a2 < 0 || !a3 )
    sub_1800B8610(-2147024809);
  if ( *a1 == a3 )
  {
    if ( a2 <= 128 )
    {
      *a1 = a3;
    }
    else
    {
      v3 = o_calloc(a2, 2LL);
      *a1 = v3;
    }
  }
  else
  {
    v5 = *a1;
    if ( a2 <= 128 )
    {
      _o_free(v5);
    }
    else
    {
      v3 = o__recalloc(v5, a2, 2LL);
      if ( !v3 )
        goto LABEL_14;
    }
    *a1 = v3;
  }
  if ( !v3 )
LABEL_14:
    sub_1800B8610(-2147024882);
}
