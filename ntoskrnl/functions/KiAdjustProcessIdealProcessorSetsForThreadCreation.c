__int64 __fastcall KiAdjustProcessIdealProcessorSetsForThreadCreation(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  unsigned int v4; // eax
  int v5; // r8d
  unsigned __int16 v6; // di
  __int64 v7; // r14
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  __int64 v10; // [rsp+30h] [rbp-10h] BYREF
  __int64 v11; // [rsp+90h] [rbp+50h] BYREF
  __int64 v12; // [rsp+98h] [rbp+58h] BYREF

  result = (unsigned int)KiCacheAwareScheduling;
  v10 = 0LL;
  v12 = 0LL;
  if ( (KiCacheAwareScheduling & 0x20) != 0 )
  {
    v3 = a1 + 2560;
    result = *(unsigned int *)(a1 + 2572);
    if ( (result & 1) == 0 )
    {
      v4 = *(_DWORD *)v3 + 0x100000;
      *(_DWORD *)v3 = v4;
      if ( v4 >> 20 > KeMaximumProcessors )
        *(_DWORD *)v3 = (KeMaximumProcessors << 20) + 0xFFFFF;
      result = KiIsConcurrencyCountWithinIdealProcessorSetBreakpoints(a1 + 2564, a1 + 2560, 1LL, 0xFFFFFLL);
      if ( !(_BYTE)result )
      {
        LODWORD(v11) = 0;
        v6 = 0;
        for ( HIDWORD(v11) = -2146435072 - v5; v6 < (unsigned __int16)KiActiveGroups; ++v6 )
        {
          if ( v6 >= *(_WORD *)(v3 + 16) )
            v7 = 0LL;
          else
            v7 = *(_QWORD *)(v3 + 8LL * v6 + 24);
          KiSelectIdealProcessorSetForProcessGroup(a1, v6, *(_DWORD *)v3 >> 20, (unsigned int)&v10, (__int64)&v12);
          KiConstrainIdealProcessorSetBreakpoints(&v11, &v12);
          v8 = v10;
          if ( v7 != v10 )
          {
            *(_QWORD *)(v3 + 8LL * v6 + 24) = v10;
            _BitScanForward64(&v9, v7 ^ v8);
            *(_WORD *)(a1 + 2LL * v6 + 644) = v9;
          }
        }
        result = v11;
        *(_QWORD *)(v3 + 4) = v11;
      }
    }
  }
  return result;
}
