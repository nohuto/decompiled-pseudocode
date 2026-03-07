char HalpLbrInitialize()
{
  unsigned int v9; // ecx
  unsigned __int64 v15; // rax
  int v16; // eax
  int v17; // eax
  int v22; // ecx
  unsigned __int8 v24; // [rsp+20h] [rbp-20h] BYREF
  char v25; // [rsp+21h] [rbp-1Fh] BYREF
  unsigned __int8 v26[6]; // [rsp+22h] [rbp-1Eh] BYREF
  __int128 v27; // [rsp+28h] [rbp-18h] BYREF

  LOBYTE(_RAX) = HalpFeatureBits;
  v25 = 0;
  v26[0] = 0;
  v24 = 0;
  HalpLbrIsInitialized = 0;
  v27 = 0LL;
  if ( (HalpFeatureBits & 1) == 0 )
    return (char)_RAX;
  if ( HalpIsHvPresent() )
  {
    LOBYTE(_RAX) = HviGetHypervisorFeatures(&v27);
    if ( (HIDWORD(v27) & 0x4000000) == 0 )
      return (char)_RAX;
  }
  LOBYTE(_RAX) = HalpGetCpuInfo(&v25, 0LL, v26, &v24);
  if ( !(_BYTE)_RAX || v24 != 2 )
    return (char)_RAX;
  _RAX = 7LL;
  __asm { cpuid }
  if ( (_RDX & 0x80000) != 0 )
  {
    _RAX = 28LL;
    __asm { cpuid }
    _BitScanReverse((unsigned int *)&_RAX, (unsigned __int8)_RAX);
    LODWORD(_RAX) = 8 * (_DWORD)_RAX + 8;
    HalpLbrStackSize = (int)_RAX;
    if ( (_RBX & 1) != 0 )
      HalpArchLbrCplFilteringCap = 1;
    if ( (_RBX & 2) != 0 )
      HalpArchLbrBranchFilteringCap = 1;
    if ( (_RBX & 4) != 0 )
      HalpArchLbrCallstackModeCap = 1;
    HalpArchLbrSupported = 1;
    goto LABEL_15;
  }
  if ( v25 != 6 )
    goto LABEL_15;
  if ( v26[0] <= 0x55u )
  {
    if ( v26[0] == 85 )
      goto LABEL_14;
    if ( v26[0] > 0x3Au )
    {
      if ( v26[0] == 60 || v26[0] == 61 || v26[0] == 62 || v26[0] == 63 || v26[0] == 69 || v26[0] == 70 || v26[0] == 71 )
        goto LABEL_43;
      v22 = v26[0] - 78;
      if ( v26[0] == 78 )
      {
LABEL_14:
        HalpLbrStackSize = 32;
        goto LABEL_15;
      }
    }
    else
    {
      switch ( v26[0] )
      {
        case 0x3Au:
          goto LABEL_43;
        case 0x1Au:
          goto LABEL_43;
        case 0x1Eu:
          goto LABEL_43;
        case 0x1Fu:
          goto LABEL_43;
        case 0x25u:
          goto LABEL_43;
        case 0x2Au:
          goto LABEL_43;
        case 0x2Cu:
          goto LABEL_43;
        case 0x2Du:
          goto LABEL_43;
      }
      v22 = v26[0] - 46;
      if ( v26[0] == 46 )
        goto LABEL_43;
    }
    if ( v22 != 1 )
      goto LABEL_15;
    goto LABEL_43;
  }
  if ( v26[0] > 0x7Du )
  {
    if ( v26[0] == 126
      || v26[0] == 140
      || v26[0] == 141
      || v26[0] == 142
      || v26[0] == 158
      || v26[0] == 165
      || v26[0] == 166
      || (unsigned int)v26[0] - 167 <= 1 )
    {
      goto LABEL_14;
    }
LABEL_15:
    if ( !HalpLbrStackSize )
      return (char)_RAX;
    goto LABEL_16;
  }
  if ( v26[0] == 125 )
    goto LABEL_14;
  if ( v26[0] != 86 )
  {
    if ( v26[0] == 92
      || v26[0] == 94
      || v26[0] == 95
      || v26[0] == 102
      || v26[0] == 103
      || v26[0] == 106
      || v26[0] == 108
      || v26[0] == 122 )
    {
      goto LABEL_14;
    }
    goto LABEL_15;
  }
LABEL_43:
  HalpLbrStackSize = 16;
LABEL_16:
  _RAX = 10LL;
  __asm { cpuid }
  v9 = (unsigned __int8)_RAX;
  if ( (_BYTE)_RAX )
  {
    _RAX = 1LL;
    HalpLbrIsFreezeLegacy = v9 <= 3;
    __asm { cpuid }
    if ( (_RCX & 0x8000) == 0 )
      goto LABEL_21;
    v15 = __readmsr(0x345u);
    v16 = (v15 & 0x3F) - 3;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( !v17 )
      {
        HalpLbrMostSignificantFromAddrBit = 60;
        goto LABEL_21;
      }
      if ( v17 != 2 )
      {
LABEL_21:
        HalpLbrIsInitialized = 1;
        off_140C01D98[0] = (__int64 (__fastcall *)())HalpLbrCaptureStack;
        off_140C01DA0[0] = (__int64 (__fastcall *)())HalpLbrClearStack;
        off_140C01DA8[0] = (__int64 (__fastcall *)())HalpLbrConfigureRecording;
        off_140C01DB0[0] = (__int64 (__fastcall *)())HalpLbrGetInformation;
        off_140C01DB8[0] = (__int64 (__fastcall *)())HalpLbrResumeRecording;
        off_140C01DC0[0] = (__int64 (__fastcall *)())HalpLbrStartRecording;
        _RAX = HalpLbrStopRecording;
        off_140C01DC8[0] = (__int64 (__fastcall *)())HalpLbrStopRecording;
        return (char)_RAX;
      }
      HalpLbrMostSignificantToAddrBit = 47;
    }
    HalpLbrMostSignificantFromAddrBit = 62;
    goto LABEL_21;
  }
  return (char)_RAX;
}
