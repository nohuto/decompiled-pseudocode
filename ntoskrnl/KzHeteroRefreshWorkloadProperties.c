/*
 * XREFs of KzHeteroRefreshWorkloadProperties @ 0x14045A1C0
 * Callers:
 *     KiQuantumEnd @ 0x140254F30 (KiQuantumEnd.c)
 * Callees:
 *     KiComputeHeteroThreadQos @ 0x1402569B0 (KiComputeHeteroThreadQos.c)
 *     KiSetThreadQosLevelUnsafe @ 0x14045A058 (KiSetThreadQosLevelUnsafe.c)
 */

char KzHeteroRefreshWorkloadProperties(__int64 a1, unsigned __int8 a2, __int64 a3, ...)
{
  int v3; // esi
  _BYTE *v6; // rax
  int v7; // ecx
  unsigned int v8; // ecx
  va_list v9; // r8
  __int64 v10; // r10
  __int64 v11; // r9
  unsigned int v12; // edx
  char v13; // al
  char v14; // al
  int v15; // ecx
  unsigned int v16; // ecx
  va_list v17; // r8
  __int64 v18; // r10
  __int64 v19; // r9
  unsigned int v20; // edx
  char v21; // al
  char v22; // al
  __int64 v24; // [rsp+48h] [rbp+20h] BYREF
  va_list va; // [rsp+48h] [rbp+20h]
  va_list va1; // [rsp+50h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v24 = va_arg(va1, _QWORD);
  v3 = a2;
  LODWORD(v6) = KiComputeHeteroThreadQos(a1, 0LL);
  if ( (_DWORD)v6 != (unsigned __int8)*(_DWORD *)(a1 + 512) )
    LOBYTE(v6) = KiSetThreadQosLevelUnsafe(a1, (int)v6);
  if ( v3 == 2 )
  {
    if ( !*(_QWORD *)(a3 + 16) )
    {
      v15 = *(_DWORD *)(a1 + 120) >> 1;
      v24 = a3;
      if ( (v15 & 1) != 0 )
      {
        v6 = *(_BYTE **)(a3 + 34904);
        v16 = (unsigned __int8)*v6;
        v17 = v6 + 8;
        if ( !*v6 )
          return (char)v6;
      }
      else
      {
        va_copy(v17, va);
        v16 = 1;
      }
      v18 = v16;
      do
      {
        v6 = *(_BYTE **)v17;
        v19 = *(_QWORD *)(*(_QWORD *)v17 + 56LL);
        if ( KeHeteroSystem )
        {
          v20 = *(_DWORD *)(a1 + 80);
          v21 = (*(_BYTE *)(a1 + 512) ^ *(_BYTE *)(v19 + 64)) & 7 ^ *(_BYTE *)(v19 + 64);
          v22 = (v21 ^ (8 * *(_BYTE *)(a1 + 516))) & 0x38 ^ v21;
          if ( v20 <= *(_DWORD *)(a1 + 84) )
            v20 = *(_DWORD *)(a1 + 84);
          LOBYTE(v6) = (v20 >= KiDynamicHeteroCpuPolicyExpectedCycles ? 0x40 : 0) | v22 & 0xBF;
          *(_BYTE *)(v19 + 64) = (_BYTE)v6;
        }
        v17 += 8;
        --v18;
      }
      while ( v18 );
    }
  }
  else if ( v3 == 3 )
  {
    v7 = *(_DWORD *)(a1 + 120) >> 1;
    v24 = a3;
    if ( (v7 & 1) != 0 )
    {
      v6 = *(_BYTE **)(a3 + 34904);
      v8 = (unsigned __int8)*v6;
      v9 = v6 + 8;
      if ( !*v6 )
        return (char)v6;
    }
    else
    {
      va_copy(v9, va);
      v8 = 1;
    }
    v10 = v8;
    do
    {
      v6 = *(_BYTE **)v9;
      v11 = *(_QWORD *)(*(_QWORD *)v9 + 56LL);
      if ( KeHeteroSystem )
      {
        v12 = *(_DWORD *)(a1 + 80);
        v13 = (*(_BYTE *)(a1 + 512) ^ *(_BYTE *)(v11 + 64)) & 7 ^ *(_BYTE *)(v11 + 64);
        v14 = (v13 ^ (8 * *(_BYTE *)(a1 + 516))) & 0x38 ^ v13;
        if ( v12 <= *(_DWORD *)(a1 + 84) )
          v12 = *(_DWORD *)(a1 + 84);
        LOBYTE(v6) = (v12 >= KiDynamicHeteroCpuPolicyExpectedCycles ? 0x40 : 0) | v14 & 0xBF;
        *(_BYTE *)(v11 + 64) = (_BYTE)v6;
      }
      v9 += 8;
      --v10;
    }
    while ( v10 );
  }
  return (char)v6;
}
