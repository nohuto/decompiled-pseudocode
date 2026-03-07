unsigned __int64 __fastcall MiTransferSoftwarePte(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v4; // r10
  unsigned __int64 v5; // r10
  unsigned __int64 result; // rax
  __int64 updated; // rax
  char v8; // r9
  __int16 v9; // r10

  v4 = -9LL;
  if ( (a1 & 0x400) != 0 )
    v4 = -2049LL;
  v5 = a1 & v4;
  result = v5;
  if ( (a1 & 0x400) == 0 && (a4 & 4) == 0 )
    result = v5 & 0xFFFFFFFFFFFFFFF9uLL;
  if ( a2 )
  {
    if ( result )
      updated = MiUpdatePageFileHighInPte(result, a3);
    else
      updated = MiSwizzleInvalidPte((unsigned __int64)a3 << 32);
    result = (unsigned __int16)(updated ^ (v9 << 12)) & 0xF000 ^ (unsigned __int64)updated;
    if ( (v8 & 1) != 0 )
      result |= 4uLL;
    if ( (v8 & 2) != 0 )
      result |= 2uLL;
  }
  return result;
}
