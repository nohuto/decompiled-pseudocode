__int64 HalpPowerInitNvsRegionData()
{
  __int64 v0; // rbx
  __int64 result; // rax
  int v2; // edx
  unsigned __int64 v3; // rcx
  unsigned int v4; // r9d
  __int64 v5; // r8
  unsigned int v6; // edi
  __int64 v7; // r10
  unsigned int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax

  v0 = HalpAcpiMultiNode;
  result = 0LL;
  v2 = 0;
  if ( HalpAcpiMultiNode )
  {
    v3 = *(_QWORD *)(HalpAcpiMultiNode + 8);
    if ( v3 )
    {
      v4 = 0;
      v5 = 0LL;
      do
      {
        if ( *(_DWORD *)(HalpAcpiMultiNode + 24 * v5 + 32) == 4 )
        {
          result = (unsigned int)(*(_DWORD *)(HalpAcpiMultiNode + 24 * v5 + 24) + result);
          ++v2;
        }
        v5 = ++v4;
      }
      while ( v4 < v3 );
      if ( (_DWORD)result )
      {
        HalpNvsRegionCount = v2;
        v6 = 24 * v2;
        HalpNvsPreservedDataSize = result;
        result = HalpMmAllocateMemoryInternal(24 * v2, 1u);
        HalpNvsRegionData = result;
        if ( !result )
          KeBugCheckEx(0xACu, v6, 1uLL, (ULONG_PTR)"minkernel\\hals\\lib\\power\\pmsleep.c", 0x73BuLL);
        v7 = 0LL;
        v8 = 0;
        if ( *(_QWORD *)(v0 + 8) )
        {
          result = 0LL;
          do
          {
            if ( *(_DWORD *)(v0 + 24 * result + 32) == 4 )
            {
              v9 = 3 * v7;
              v10 = HalpNvsRegionData;
              *(_QWORD *)(HalpNvsRegionData + 8 * v9) = *(_QWORD *)(v0 + 24 * result + 16);
              v11 = *(_DWORD *)(v0 + 24 * result + 24);
              *(_QWORD *)(v10 + 8 * v9 + 16) = 0LL;
              v7 = (unsigned int)(v7 + 1);
              *(_DWORD *)(v10 + 8 * v9 + 8) = v11;
            }
            result = ++v8;
          }
          while ( (unsigned __int64)v8 < *(_QWORD *)(v0 + 8) );
        }
      }
    }
  }
  return result;
}
