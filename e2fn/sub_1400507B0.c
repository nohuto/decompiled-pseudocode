char __fastcall sub_1400507B0(__int64 a1, unsigned int a2)
{
  if ( a2 >= 0x20 )
    return 0;
  _mm_lfence();
  return *(_BYTE *)(a2 + a1 + 1360);
}
