__int64 __fastcall IvtBuildScalableModeContextEntry(__int64 a1, __int64 a2, char a3, char a4, int a5, __int64 *a6)
{
  __int64 result; // rax
  void *v10; // rcx
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  LONGLONG v12; // rcx
  unsigned int v13; // edx
  LONGLONG v14; // rdx
  __int64 v15; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  a6[1] = 0LL;
  a6[2] = 0LL;
  a6[3] = 0LL;
  *a6 = 0LL;
  if ( a2 )
  {
    v10 = *(void **)(a2 + 48);
    *a6 = 1LL;
    PhysicalAddress = MmGetPhysicalAddress(v10);
    v12 = PhysicalAddress.QuadPart ^ (*(_DWORD *)a6 ^ PhysicalAddress.LowPart) & 0xFFF;
    result = (*(_DWORD *)(a2 + 36) >> 6) & 0x3FFF;
    if ( (unsigned int)result < 0x200 )
      result = 512LL;
    a6[1] &= 0xFFFFFFFFFFF00000uLL;
    _BitScanReverse(&v13, result);
    v14 = v12 ^ ((unsigned __int16)v12 ^ (unsigned __int16)(((_WORD)v13 + 1) << 9)) & 0xE00;
    *a6 = v14;
    if ( a4 )
    {
      v15 = v14 | 0x1C;
    }
    else
    {
      if ( !a3 )
        return result;
      v15 = v14 | 4;
    }
    *a6 = v15;
  }
  return result;
}
