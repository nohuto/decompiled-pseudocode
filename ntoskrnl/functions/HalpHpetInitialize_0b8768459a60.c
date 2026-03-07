__int64 __fastcall HalpHpetInitialize(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v2; // ebx
  unsigned int v4; // eax
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = HalpHpetBaseAddress;
  v2 = 0;
  if ( HalpHpetBaseAddress
    || (HalpHpetBaseAddress = (__int64)HalMapIoSpace(HalpHpetPhysicalAddress, 0x400uLL, MmNonCached),
        (v1 = HalpHpetBaseAddress) != 0) )
  {
    if ( HalpHpetLegacyInterrupts )
      v4 = *(_DWORD *)(v1 + 16) | 3;
    else
      v4 = *(_DWORD *)(v1 + 16) & 0xFFFFFFFC | 1;
    *(_DWORD *)(v1 + 16) = v4;
    _InterlockedOr(v6, 0);
    *(_DWORD *)(v1 + 16) = v4;
    _InterlockedOr(v6, 0);
    *(_DWORD *)(a1 + 8) = 0;
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v2;
}
