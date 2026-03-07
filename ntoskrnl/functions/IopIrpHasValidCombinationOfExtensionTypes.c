bool __fastcall IopIrpHasValidCombinationOfExtensionTypes(__int64 a1, int a2)
{
  __int64 v3; // r8
  int v4; // edx
  __int16 v5; // ax
  __int16 v7; // cx

  if ( *(char *)(a1 + 71) < 0 )
    return 1;
  v3 = *(_QWORD *)(a1 + 200);
  if ( !v3 )
    return 1;
  v4 = 1 << a2;
  if ( (v4 & 0xB2) != 0 )
  {
    v7 = *(_WORD *)(v3 + 2);
    if ( (v7 & 0xB2) != 0 && (v7 & 0xB2) != v4 )
    {
      if ( a2 == 1 || (v7 & 2) == 0 )
        return 0;
      *(_QWORD *)(v3 + 40) = 0LL;
      *(_WORD *)(v3 + 2) = v7 & 0xFFFE;
    }
    return 1;
  }
  if ( (v4 & 0x200) == 0 )
    return 1;
  v5 = *(_WORD *)(v3 + 2);
  return (v5 & 0x200) == 0 || (v5 & 0x200) == v4;
}
