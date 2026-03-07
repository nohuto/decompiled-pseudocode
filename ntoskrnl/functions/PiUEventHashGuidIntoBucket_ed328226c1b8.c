unsigned __int64 __fastcall PiUEventHashGuidIntoBucket(unsigned __int8 *a1)
{
  unsigned __int64 v2; // r8
  __int64 v3; // r10
  __int64 v4; // rax

  v2 = 314159LL;
  v3 = 2LL;
  do
  {
    v4 = *a1;
    a1 += 8;
    v2 = *(a1 - 1)
       + 37
       * (*(a1 - 2)
        + 37
        * (*(a1 - 3) + 37 * (*(a1 - 4) + 37 * (*(a1 - 5) + 37 * (*(a1 - 6) + 37 * (*(a1 - 7) + 37 * (v4 + 37 * v2)))))));
    --v3;
  }
  while ( v3 );
  return v2 % 0xD;
}
