__int64 __fastcall HalpAllocateMapRegisters(__int64 a1, unsigned int a2, unsigned int a3, __int64 *a4)
{
  __int64 v5; // rdi
  __int64 v7; // rsi
  int v8; // r8d
  __int64 v9; // r12
  unsigned int v11; // eax
  unsigned int v12; // ebx
  __int64 *v13; // r15
  __int64 MapRegisters; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax

  v5 = a3;
  v7 = HalpDmaExtractFromVerifierShadowAdapter(a1);
  v9 = *(_QWORD *)(v7 + 160);
  if ( *(_DWORD *)(v7 + 384) != -1 )
    return 3221225488LL;
  if ( (_DWORD)v5 * a2 && *(_BYTE *)(v7 + 440) )
  {
    if ( (unsigned int)v5 * a2 > 0x800 )
      return 3221225626LL;
    v11 = *(_DWORD *)(v7 + 232);
    if ( !v11 )
      return 3221225626LL;
    if ( a2 > v11 )
      return 3221225485LL;
    v12 = 0;
    if ( v8 )
    {
      v13 = a4;
      do
      {
        MapRegisters = HalpDmaAllocateMapRegisters(v7, a2);
        *v13 = MapRegisters;
        if ( !MapRegisters )
        {
          v15 = (a2 + 16) << 12;
          if ( *(_BYTE *)(v7 + 442) )
            HalpDmaGrowScatterMapBuffers(v9, v15);
          else
            HalpDmaGrowContiguousMapBuffers(v9, v15);
          v16 = HalpDmaAllocateMapRegisters(v7, a2);
          *v13 = v16;
          if ( !v16 )
            break;
        }
        ++v12;
        v13 += 2;
      }
      while ( v12 < (unsigned int)v5 );
    }
    if ( v12 != (_DWORD)v5 )
    {
      while ( v12 )
      {
        --v12;
        IoFreeMapRegistersThunk(v7);
      }
      return 3221225626LL;
    }
  }
  else if ( v8 )
  {
    v17 = v5;
    do
    {
      *a4 = 0LL;
      a4 += 2;
      --v17;
    }
    while ( v17 );
  }
  return 0LL;
}
