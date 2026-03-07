__int64 **__fastcall MiFreeSystemCacheView(__int64 a1, int a2, __int64 *a3)
{
  __int64 v3; // r9
  __int64 **result; // rax

  v3 = 32LL * (a2 & 3) + a1 + 1848;
  if ( !*(_QWORD *)(v3 + 16) )
    *(_DWORD *)(v3 + 24) = a2;
  a3[4] = a3[4] & 0x3FFFFFFFFFFFFFFFLL | 0x4000000000000000LL;
  result = *(__int64 ***)(v3 + 8);
  if ( *result != (__int64 *)v3 )
    __fastfail(3u);
  *a3 = v3;
  a3[1] = (__int64)result;
  *result = a3;
  *(_QWORD *)(v3 + 8) = a3;
  ++*(_QWORD *)(v3 + 16);
  return result;
}
