/*
 * XREFs of RaspAddCacheEntry @ 0x140AEAB60
 * Callers:
 *     BgpRasPrintGlyph @ 0x140381CD4 (BgpRasPrintGlyph.c)
 *     RaspGetXExtent @ 0x140382254 (RaspGetXExtent.c)
 * Callees:
 *     RaspDestroyCachedBitmap @ 0x140AEAB20 (RaspDestroyCachedBitmap.c)
 */

__int64 __fastcall RaspAddCacheEntry(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  int v3; // edx
  int v4; // eax
  _QWORD *v5; // rax
  __int64 *v6; // rdx

  result = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 )
    goto LABEL_9;
  *a2 = result;
  a2[1] = a1;
  *(_QWORD *)(result + 8) = a2;
  *(_QWORD *)a1 = a2;
  v3 = *(_DWORD *)(a1 + 48);
  if ( !v3 )
    return result;
  v4 = *(_DWORD *)(a1 + 52);
  if ( v4 != v3 )
  {
    result = (unsigned int)(v4 + 1);
    *(_DWORD *)(a1 + 52) = result;
    return result;
  }
  v5 = *(_QWORD **)(a1 + 8);
  if ( *v5 != a1 || (v6 = (__int64 *)v5[1], (_QWORD *)*v6 != v5) )
LABEL_9:
    __fastfail(3u);
  *(_QWORD *)(a1 + 8) = v6;
  *v6 = a1;
  return RaspDestroyCachedBitmap((__int64)v5);
}
