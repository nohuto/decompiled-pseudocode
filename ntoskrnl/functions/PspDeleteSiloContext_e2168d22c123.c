__int64 (*__fastcall PspDeleteSiloContext(__int64 a1))(void)
{
  __int64 v1; // rax
  __int64 (*result)(void); // rax

  if ( (*(_BYTE *)(a1 - 48 + 26) & 0x40) != 0 )
    v1 = *(_QWORD *)(a1 - 48 - ObpInfoMaskToOffset[*(_BYTE *)(a1 - 48 + 26) & 0x7F]) + 40LL;
  else
    v1 = 8LL;
  result = *(__int64 (**)(void))v1;
  if ( result )
    return (__int64 (*)(void))result();
  return result;
}
