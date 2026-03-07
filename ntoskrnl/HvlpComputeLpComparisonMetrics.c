__int64 __fastcall HvlpComputeLpComparisonMetrics(unsigned int a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r14
  unsigned int v6; // ebp
  __int64 v7; // rdi
  unsigned int v8; // r13d
  __int64 result; // rax
  unsigned int v10; // r15d
  unsigned int v11; // r12d
  int v12; // edx
  int v13; // ecx
  int v14; // r13d
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  int v20; // [rsp+78h] [rbp+10h]
  int v21; // [rsp+80h] [rbp+18h]
  unsigned int v22; // [rsp+88h] [rbp+20h] BYREF

  v4 = a3;
  v22 = 0;
  v6 = 0;
  v7 = 5LL * a3;
  *(_DWORD *)(a2 + 8 * v7 + 20) = -1;
  *(_DWORD *)(a2 + 8 * v7 + 16) = 0;
  *(_QWORD *)(a2 + 8 * v7 + 24) = 0LL;
  *(_QWORD *)(a2 + 8 * v7 + 32) = 0LL;
  v8 = *(_DWORD *)(a2 + 40LL * a3 + 4);
  result = v8 >> 4;
  v10 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore * KeGetCurrentPrcb()->CoresPerPhysicalProcessor - 1);
  v11 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore - 1);
  v12 = (unsigned __int16)result;
  v13 = v11 & v8;
  v20 = (unsigned __int16)result;
  v14 = v10 & v8;
  v21 = v13;
  if ( a1 )
  {
    result = a1;
    v15 = a2 + 4;
    do
    {
      if ( v6 != (_DWORD)v4 )
      {
        if ( *(_WORD *)(v15 + 4) == *(_WORD *)(a2 + 40 * v4 + 8) && v6 < (unsigned int)v4 )
          ++*(_DWORD *)(a2 + 40 * v4 + 36);
        if ( *(_BYTE *)(v15 - 3) )
        {
          if ( *(_WORD *)(v15 + 8) == *(_WORD *)(a2 + 40 * v4 + 12) )
            ++*(_DWORD *)(a2 + 40 * v4 + 16);
          if ( (*(_DWORD *)v15 & v10) == v14 )
            ++*(_DWORD *)(a2 + 40 * v4 + 24);
          if ( (*(_DWORD *)v15 & v11) == v13 )
            ++*(_DWORD *)(a2 + 40 * v4 + 28);
          if ( (unsigned __int16)(*(_DWORD *)v15 >> 4) == v12 )
            ++*(_DWORD *)(a2 + 40 * v4 + 32);
          v16 = *(unsigned __int16 *)(v15 + 6);
          v17 = *(unsigned __int16 *)(a2 + 40 * v4 + 10);
          if ( (_WORD)v16 == (_WORD)v17 || !HvlpQueryNodeDistance )
          {
            v13 = v21;
            v12 = v20;
          }
          else
          {
            v18 = HvlpQueryNodeDistance(v17, v16, &v22);
            v13 = v21;
            v12 = v20;
            if ( v18 >= 0 && v22 < *(_DWORD *)(a2 + 40 * v4 + 20) )
              *(_DWORD *)(a2 + 40 * v4 + 20) = v22;
          }
        }
        result = a1;
      }
      ++v6;
      v15 += 40LL;
    }
    while ( v6 < (unsigned int)result );
  }
  return result;
}
