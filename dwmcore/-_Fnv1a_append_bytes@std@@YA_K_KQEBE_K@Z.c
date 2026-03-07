__int64 __fastcall std::_Fnv1a_append_bytes(__int64 a1, const unsigned __int8 *const a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r9
  __int64 i; // rcx
  __int64 v5; // rax

  v3 = 0LL;
  for ( i = 0xCBF29CE484222325uLL; v3 < a3; i = 0x100000001B3LL * (v5 ^ i) )
    v5 = a2[v3++];
  return i;
}
