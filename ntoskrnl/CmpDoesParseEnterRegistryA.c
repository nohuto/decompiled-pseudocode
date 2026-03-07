bool __fastcall CmpDoesParseEnterRegistryA(__int64 a1, __int64 a2)
{
  _WORD *v2; // r8

  if ( *(_QWORD *)(a1 + 8) != *((_QWORD *)CmpRegistryRootObject + 1) )
    return 0;
  if ( !*(_WORD *)a2 )
    return 0;
  v2 = *(_WORD **)(a2 + 8);
  if ( ((*v2 - 65) & 0xFFDF) != 0 )
    return 0;
  if ( *(_WORD *)a2 <= 2u )
    return 1;
  return v2[1] == 92;
}
