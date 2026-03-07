__int64 __fastcall KiShadowProcessorAllocation(__int64 a1, unsigned __int64 a2)
{
  int v4; // esi
  unsigned __int64 v6; // rax
  _DWORD *v7; // rax
  unsigned int v8; // edx

  if ( !KiKvaShadow )
    return 1LL;
  if ( (unsigned int)MmCreateShadowMapping(a2, 20480LL) )
  {
    v4 = 0;
    if ( !(unsigned int)MmCreateShadowMapping(a1 + 40576, 4096LL) )
      goto LABEL_11;
    v4 = 1;
    if ( !*(_DWORD *)(a1 + 36) )
    {
      v6 = RtlImageNtHeader(0x140000000LL);
      v7 = (_DWORD *)RtlSectionTableFromVirtualAddress(
                       v6,
                       0x140000000LL,
                       (unsigned int)KiDivideErrorFaultShadow - 0x40000000);
      v8 = v7[2];
      if ( v8 <= v7[4] )
        v8 = v7[4];
      if ( !(unsigned int)MmCreateShadowMapping(0x140000000LL + (unsigned int)v7[3], (v8 + 4095) & 0xFFFFF000) )
      {
LABEL_11:
        MmDeleteShadowMapping(a2, 0x5000uLL);
        if ( v4 )
          MmDeleteShadowMapping(a1 + 40576, 0x1000uLL);
        return 0LL;
      }
    }
    return 1LL;
  }
  return 0LL;
}
