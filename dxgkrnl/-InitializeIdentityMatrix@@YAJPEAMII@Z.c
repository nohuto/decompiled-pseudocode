__int64 __fastcall InitializeIdentityMatrix(float *a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // edx
  __int64 v6; // r9
  unsigned int v7; // ecx
  __int64 v8; // rcx

  memset(a1, 0, 12LL * a3);
  v5 = 0;
  v6 = 0LL;
  do
  {
    v7 = v5++;
    v8 = v6 + a3 * v7;
    ++v6;
    a1[v8] = 1.0;
  }
  while ( v5 < 3 );
  return 0LL;
}
