void CalculateMouseTable(void)
{
  signed int v0; // ebx
  __int64 v1; // rdi
  signed int v2; // r9d
  ULONG v3; // r14d
  int v4; // esi
  int v5; // ebp
  int v6; // r10d
  int v7; // r8d
  signed int v8; // eax
  int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rax

  v0 = 50 * dword_1C02D1578;
  v1 = 256LL;
  v2 = 0;
  v3 = 50000 * dword_1C02D1578 / (20 * dword_1C02D157C);
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  do
  {
    v8 = v2 + v3;
    v2 = v0;
    if ( v8 <= v0 )
      v2 = v8;
    v4 += v2;
    v9 = (v4 - 1000 * v5 + 500) / 1000;
    v5 += v9;
    if ( v2 < v0 )
    {
      if ( v7 < 128 )
      {
        v11 = v7++;
        gMouseCursor[v11 + 1] = v9;
      }
    }
    else if ( v2 == v0 && v6 < 128 )
    {
      v10 = v6++;
      gMouseCursor[v10 + 130] = v9;
    }
    --v1;
  }
  while ( v1 );
  gMouseCursor[0] = v7;
  byte_1C02D14B1 = v6;
}
