/*
 * XREFs of RaspGetCacheEntry @ 0x1403823F4
 * Callers:
 *     BgpRasPrintGlyph @ 0x140381CD4 (BgpRasPrintGlyph.c)
 *     RaspGetXExtent @ 0x140382254 (RaspGetXExtent.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RaspGetCacheEntry(__int64 **a1, __int16 a2, int a3, int a4, __int64 a5, _QWORD *a6)
{
  __int64 *v6; // rax
  __int64 *v7; // r10
  __int64 *v8; // rdx
  __int64 **v9; // r8
  __int64 *v10; // rdx
  _QWORD *result; // rax

  v6 = *a1;
  v7 = 0LL;
  if ( *a1 != (__int64 *)a1 )
  {
    while ( *((_WORD *)v6 + 30) != a2 || *((_DWORD *)v6 + 10) != a3 || *((_DWORD *)v6 + 9) != a4 || v6[3] != a5 )
    {
      v6 = (__int64 *)*v6;
      if ( v6 == (__int64 *)a1 )
        goto LABEL_12;
    }
    v8 = (__int64 *)*v6;
    v7 = v6;
    if ( *(__int64 **)(*v6 + 8) != v6
      || (v9 = (__int64 **)v6[1], *v9 != v6)
      || (*v9 = v8, v8[1] = (__int64)v9, v10 = *a1, (__int64 **)(*a1)[1] != a1) )
    {
      __fastfail(3u);
    }
    *v6 = (__int64)v10;
    v6[1] = (__int64)a1;
    v10[1] = (__int64)v6;
    *a1 = v6;
  }
LABEL_12:
  result = a6;
  *a6 = v7;
  return result;
}
