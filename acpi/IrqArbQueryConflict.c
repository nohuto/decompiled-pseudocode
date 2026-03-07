__int64 __fastcall IrqArbQueryConflict(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  bool v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2[1];
  v6 = 0;
  if ( (*(_BYTE *)(v2 + 4) & 0x20) != 0 )
    return IrqArbpQueryConflictIsa(a1, a2);
  if ( (int)PcisuppIsPciDevice(*a2, &v6) < 0 )
    return ArbQueryConflict(a1, a2);
  if ( !v6 )
    return IrqArbpQueryConflictIsa(a1, a2);
  a2[2] = 0LL;
  return 0LL;
}
