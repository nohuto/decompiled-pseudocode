__int64 __fastcall ACPIAmliDoubleToNameWide(_WORD *a1, unsigned int a2, char a3)
{
  _WORD *v3; // r9
  __int64 result; // rax

  v3 = a1;
  if ( a3 )
  {
    v3 = a1 + 1;
    *a1 = 42;
  }
  *v3 = ((a2 >> 2) & 0x1F) + 64;
  v3[7] = 0;
  v3[1] = ((a2 >> 13) & 7) + 8 * ((a2 & 3) + 8);
  v3[2] = ((a2 >> 8) & 0x1F) + 64;
  v3[3] = a0123456789abcd[BYTE2(a2) >> 4];
  v3[4] = a0123456789abcd[BYTE2(a2) & 0xF];
  v3[5] = a0123456789abcd[(unsigned __int64)a2 >> 28];
  result = a0123456789abcd[HIBYTE(a2) & 0xF];
  v3[6] = result;
  return result;
}
