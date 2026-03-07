__int64 __fastcall IvtExtendScalableModePasidTables(__int64 a1, __int64 a2, unsigned int a3)
{
  int v5; // edi
  unsigned int v6; // ebx
  unsigned int v7; // ebx
  unsigned int v8; // r14d
  int v9; // ebp
  LARGE_INTEGER v11; // [rsp+58h] [rbp+10h] BYREF

  v11.QuadPart = 0LL;
  if ( a3 < *(_DWORD *)(a2 + 36) )
  {
    v6 = *(_DWORD *)(a2 + 32);
    v5 = 0;
    if ( v6 <= a3 )
    {
      v7 = (v6 >> 6) & 0x3FFF;
      v8 = ((a3 + 64) >> 6) & 0x3FFF;
      if ( v7 < v8 )
      {
        v9 = (v7 + 1) << 6;
        do
        {
          v5 = ExtEnvAllocatePhysicalMemory(
                 a2 + 8 * (v7 + 7LL),
                 0x1000u,
                 0x1000u,
                 (MEMORY_CACHING_TYPE)*(_DWORD *)(a1 + 272),
                 &v11,
                 a2 + 8 * (v7 + 7LL));
          if ( v5 < 0 )
            break;
          *(_DWORD *)(a2 + 32) = v9;
          IvtInitializeScalableModePasidTables(a1, a2, v7++);
          v9 += 64;
        }
        while ( v7 < v8 );
      }
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v5;
}
