/*
 * XREFs of MiBackSingleImageWithPagefile @ 0x14086FBD4
 * Callers:
 *     MmLoadSystemImageEx @ 0x14072E4EC (MmLoadSystemImageEx.c)
 *     MiBackSystemImageWithPagefile @ 0x14086FAA8 (MiBackSystemImageWithPagefile.c)
 * Callees:
 *     MiMakeDriverPagesPrivate @ 0x1402A6440 (MiMakeDriverPagesPrivate.c)
 *     MiSnapDriverRange @ 0x14072A118 (MiSnapDriverRange.c)
 */

__int64 __fastcall MiBackSingleImageWithPagefile(__int64 a1)
{
  unsigned int v2; // edi
  __int64 result; // rax
  ULONG_PTR *v4; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0LL;
  v4 = 0LL;
  v2 = 0;
  do
  {
    result = MiSnapDriverRange(a1, v2, 8, 0LL, (unsigned __int64 *)&v4, &v5);
    v2 = result;
    if ( v4 )
      result = MiMakeDriverPagesPrivate(a1, v4, v5, 4);
  }
  while ( v2 );
  *(_DWORD *)(a1 + 196) |= 2u;
  return result;
}
