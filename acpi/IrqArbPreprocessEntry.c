__int64 __fastcall IrqArbPreprocessEntry(__int64 a1, __int64 a2)
{
  char v3; // r8
  char v4; // r8
  __int64 Pool2; // rax

  v3 = *(_BYTE *)(a2 + 66);
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 40LL) + 4LL) & 1) != 0 )
    v4 = v3 & 0xCF | 0x20;
  else
    v4 = v3 & 0xCF | 0x10;
  *(_BYTE *)(a2 + 66) = v4;
  if ( (*(_BYTE *)(a2 + 64) & 0x10) == 0 )
  {
    Pool2 = ExAllocatePool2(256LL, 40LL, 1232102209LL);
    if ( !Pool2 )
      return 3221225626LL;
    *(_WORD *)(a2 + 64) |= 0x10u;
    *(_QWORD *)(a2 + 72) = Pool2;
  }
  return 0LL;
}
