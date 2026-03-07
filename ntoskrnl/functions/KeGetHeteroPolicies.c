char __fastcall KeGetHeteroPolicies(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // edx
  __int64 v8; // r8
  int *v9; // r9
  __int64 v10; // r10
  __int64 v11; // r11
  char v12; // al
  char result; // al

  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 8) = 0;
  *(_WORD *)(a2 + 12) = 0;
  *(_QWORD *)a3 = 0LL;
  v7 = 0;
  *(_DWORD *)(a3 + 8) = 0;
  *(_WORD *)(a3 + 12) = 0;
  v8 = 0LL;
  *(_QWORD *)a4 = 0LL;
  *(_DWORD *)(a4 + 8) = 0;
  *(_WORD *)(a4 + 12) = 0;
  v9 = KiDynamicHeteroCpuPolicy;
  do
  {
    v10 = (unsigned int)(2 * v7);
    v11 = 2LL;
    do
    {
      v12 = *(_BYTE *)v9++;
      *(_BYTE *)(v10 + a2) = v12;
      *(_BYTE *)(v10 + a3) = KiMultiCoreHeteroLowerArchThreshold[v8];
      result = KiMultiCoreHeteroUpperArchThreshold[v8++];
      *(_BYTE *)(v10 + a4) = result;
      v10 = (unsigned int)(v10 + 1);
      --v11;
    }
    while ( v11 );
    ++v7;
  }
  while ( v7 < 7 );
  return result;
}
