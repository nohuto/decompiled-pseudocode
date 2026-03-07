__int64 __fastcall EtwpAllocateTraceBufferPool(_DWORD *a1)
{
  unsigned int SystemMaximumBufferCount; // eax
  int v3; // r10d
  int v4; // edx
  unsigned int v5; // r8d
  unsigned int v6; // edi
  unsigned int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v12; // ecx

  EtwpQueryUsedProcessorCount((__int64)a1);
  SystemMaximumBufferCount = EtwpGetSystemMaximumBufferCount(a1);
  v4 = a1[3];
  v5 = 2 * v3;
  if ( (v4 & 0x4000000) != 0 && (v4 & 0x400) != 0 )
    v5 += 4;
  v6 = v5;
  if ( SystemMaximumBufferCount >= v5 )
    v6 = SystemMaximumBufferCount;
  v7 = a1[59];
  v8 = v6;
  if ( v7 <= v5 )
    v7 = v5;
  if ( v7 < v6 )
    v8 = v7;
  v9 = a1[56];
  a1[59] = v8;
  if ( v9 <= v5 )
    v9 = v5;
  if ( v9 < v6 )
    v6 = v9;
  a1[56] = v6;
  if ( v6 > v8 )
  {
    a1[59] = v6;
    v8 = v6;
  }
  if ( (v4 & 0x400) != 0 )
  {
    a1[59] = v6;
    v8 = v6;
  }
  if ( (v4 & 0x40000) != 0 )
    return 0LL;
  v10 = a1[53];
  if ( v10 )
  {
    v12 = v8 - v3 - 1;
    if ( v10 > v12 )
      a1[53] = v12;
  }
  return (unsigned int)EtwpAllocateFreeBuffers((__int64)a1, v6) < v6 ? 0xC0000017 : 0;
}
