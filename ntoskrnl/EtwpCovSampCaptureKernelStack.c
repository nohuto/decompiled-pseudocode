__int64 __fastcall EtwpCovSampCaptureKernelStack(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  int v5; // ecx
  __int64 v6; // rcx
  char v7; // al
  int v8; // edx
  unsigned int v9; // esi
  unsigned int v10; // ebp
  int v11; // eax
  ULONG v12; // eax
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v15; // [rsp+60h] [rbp+18h] BYREF
  __int64 v16; // [rsp+68h] [rbp+20h] BYREF

  v2 = 0;
  v16 = 0LL;
  v14[0] = 0LL;
  v15 = 0;
  if ( !(unsigned __int8)KeQueryCurrentStackInformation((__int64)&v15, (__int64)v14, (__int64)&v16) )
    return (unsigned int)-1073741637;
  if ( v15 <= 9 && (v5 = 929, _bittest(&v5, v15)) )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    v6 = *(unsigned __int16 *)(a1 + 62);
    v7 = a2;
    v8 = *(unsigned __int16 *)(a1 + 60);
    v9 = 0;
    v10 = a2 >> 28;
    v11 = v7 & 2;
    if ( !v11 )
      v9 = v10;
    if ( (unsigned __int16)v8 < (unsigned __int16)v6 )
    {
      return (unsigned int)-1073741595;
    }
    else
    {
      v12 = RtlWalkFrameChain((PVOID *)(a1 + 64 + 8 * v6), v9 + v8 - v6, (v9 << 8) | (v11 != 0 ? 2 : 0));
      if ( v12 > v9 )
      {
        *(_DWORD *)(a1 + 56) |= 1u;
        *(_WORD *)(a1 + 62) += v12 - v9;
        EtwpCovSampCaptureBufferOptimizeIP(a1);
      }
      else
      {
        return (unsigned int)-1073741275;
      }
    }
  }
  return v2;
}
