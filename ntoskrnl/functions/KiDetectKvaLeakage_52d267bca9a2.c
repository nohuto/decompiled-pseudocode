char __fastcall KiDetectKvaLeakage(__int64 a1)
{
  _BYTE *v1; // rsi
  __int64 v4; // rcx
  bool v13; // zf
  __int64 v14; // rdx
  int v15; // ecx
  ULONG_PTR v16; // rdx
  char v17; // dl
  char v18; // dl
  int v29[6]; // [rsp+30h] [rbp-20h] BYREF

  v29[0] = 0;
  v1 = (_BYTE *)(a1 + 141);
  LODWORD(_RAX) = KiIsKvaShadowNeededForBranchConfusion(a1);
  if ( (_DWORD)_RAX )
    goto LABEL_10;
  LOBYTE(_RAX) = *v1;
  if ( *v1 == 2 )
  {
    _RAX = *(unsigned __int8 *)(a1 + 67);
    if ( (unsigned __int8)_RAX <= 0x36u && *(_BYTE *)(a1 + 64) == 6 )
    {
      v4 = 0x6000C010000000LL;
      if ( _bittest64(&v4, _RAX) )
        return _RAX;
    }
  }
  else if ( (_BYTE)_RAX != 3 || *(_BYTE *)(a1 + 64) == 6 && *(_BYTE *)(a1 + 67) == 13 )
  {
    return _RAX;
  }
  _RAX = 0LL;
  __asm { cpuid }
  if ( (unsigned int)_RAX < 7 )
    goto LABEL_45;
  _RAX = 7LL;
  __asm { cpuid }
  if ( (_RDX & 0x20000000) == 0 )
    goto LABEL_45;
  _RAX = __readmsr(0x10Au);
  if ( (_RAX & 1) == 0 )
    goto LABEL_45;
  KiMicrocodeTrackerEnabled = 1;
  LOBYTE(_RAX) = 0;
  v17 = (KeFeatureBits2 & 0x28) == 8;
  if ( (KeFeatureBits2 & 0x380000) != 0x380000 )
  {
    LOBYTE(_RAX) = KiIsFbClearSupported();
    v17 = _RAX | v18;
  }
  if ( v17 )
  {
LABEL_45:
    if ( !KiKvaLeakage && *(_DWORD *)(a1 + 36) )
      KeBugCheckEx(0x5Du, 0x4B56414CuLL, 0LL, 0LL, 0LL);
LABEL_10:
    v13 = *v1 == 2;
    KiKvaLeakage = 1;
    if ( !v13 || (KeFeatureBits2 & 0x10) != 0 )
    {
      if ( !*(_DWORD *)(a1 + 36) )
        KiImplementedPhysicalBits = -1;
    }
    else
    {
      LOBYTE(_RAX) = HvlGetImplementedPhysicalBits(v29);
      if ( (_BYTE)_RAX )
      {
        v15 = v29[0];
      }
      else
      {
        v14 = 0LL;
        _RAX = 0LL;
        v15 = 46;
        while ( *(_DWORD *)((char *)KiCpuTable + _RAX) != (unsigned __int8)*v1
             || *(_DWORD *)((char *)KiCpuTable + _RAX + 4) != *(_DWORD *)(a1 + 1736) )
        {
          ++v14;
          _RAX = 20 * v14;
          if ( *((_DWORD *)&KiCpuTable[1] + 5 * v14) == 19 )
            goto LABEL_19;
        }
        LOBYTE(_RAX) = 5 * v14;
        v15 = *((_DWORD *)&KiCpuTable[1] + 5 * v14 + 1);
        if ( !v15 )
        {
          _RAX = 0x80000000LL;
          __asm { cpuid }
          if ( (unsigned int)_RAX < 0x80000008 )
          {
            LOBYTE(_RAX) = 36;
          }
          else
          {
            _RAX = 2147483656LL;
            __asm { cpuid }
          }
          v15 = (unsigned __int8)_RAX;
        }
      }
LABEL_19:
      v16 = *(unsigned int *)(a1 + 36);
      if ( (_DWORD)v16 )
      {
        LOBYTE(_RAX) = KiImplementedPhysicalBits;
        if ( v15 != KiImplementedPhysicalBits && !KiKvaLeakageSimulate )
          KeBugCheckEx(0x5Du, 0x4C315446uLL, v16, v15, KiImplementedPhysicalBits);
      }
      else
      {
        KiImplementedPhysicalBits = v15;
      }
    }
  }
  return _RAX;
}
