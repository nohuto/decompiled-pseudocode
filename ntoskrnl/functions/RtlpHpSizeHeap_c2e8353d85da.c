__int64 __fastcall RtlpHpSizeHeap(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // edi
  int v5; // edx
  __int64 v6; // rax
  __int64 v7; // rbx

  v4 = *(_DWORD *)(a1 + 20) | a3;
  v5 = *(_DWORD *)(a1 + 220);
  if ( v5 && v5 == KeGetCurrentThread()[1].CurrentRunTime )
    v4 |= 1u;
  if ( !a2 )
    return -1LL;
  if ( (a2 & 0xF) != 0 )
    return -1LL;
  v6 = RtlpHpSizeHeapInternal(a1, a2, v4, 0LL);
  v7 = v6;
  if ( v6 != -1
    && (v4 & 0x10000000) != 0
    && RtlCompareMemory((const void *)(v6 + a2), CheckHeapFillPattern, 0x10uLL) != 16 )
  {
    return -1LL;
  }
  return v7;
}
