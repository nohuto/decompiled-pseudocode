__int64 __fastcall KiHeteroComputeThreadWorkloadProperties(__int64 a1, __int64 a2)
{
  unsigned int v4; // eax
  __int64 v5; // r10
  unsigned int v6; // ecx
  int v7; // r8d
  char v8; // al
  __int64 result; // rax
  int v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0;
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v4 = KiComputeHeteroThreadQos(a1, &v10);
  v5 = (int)v4;
  if ( v4 != (unsigned __int8)*(_DWORD *)(a1 + 512) )
    KiSetThreadQosLevelUnsafe(a1, v4);
  v6 = *(unsigned __int8 *)(a1 + 125);
  v7 = v10;
  if ( v6 >= 5 )
    v6 = KiDynamicHeteroCpuPolicy[2 * v5 + v10];
  v8 = *(_BYTE *)(a1 + 195);
  *(_DWORD *)(a2 + 12) = v6;
  *(_BYTE *)a2 = v8;
  *(_DWORD *)(a2 + 4) = v5;
  *(_DWORD *)(a2 + 8) = v7;
  *(_BYTE *)(a2 + 16) = *(_BYTE *)(a1 + 516);
  *(_WORD *)(a2 + 18) = KiHeteroComputeThreadImportance(v5, *(_BYTE *)(a1 + 195));
  result = (*(_DWORD *)(a1 + 120) >> 1) & 1;
  *(_DWORD *)(a2 + 20) = result;
  return result;
}
