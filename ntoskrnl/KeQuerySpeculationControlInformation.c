/*
 * XREFs of KeQuerySpeculationControlInformation @ 0x14097183C
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeKvaShadowingActive @ 0x1402FE9A0 (KeKvaShadowingActive.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HvlQueryL1tfMitigationInformation @ 0x14053D758 (HvlQueryL1tfMitigationInformation.c)
 *     KiIsFbClearSupported @ 0x140576DE0 (KiIsFbClearSupported.c)
 */

__int64 __fastcall KeQuerySpeculationControlInformation(void *a1, size_t Size, unsigned int *a3)
{
  size_t v3; // r15
  unsigned int v6; // r12d
  ULONG_PTR v7; // rdi
  int v8; // eax
  int v9; // ebx
  __int64 v10; // r14
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // edi
  bool v14; // zf
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // eax
  int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  char v21; // [rsp+68h] [rbp+10h]
  unsigned __int64 Src; // [rsp+78h] [rbp+20h] BYREF

  v3 = (unsigned int)Size;
  if ( (unsigned int)Size < 4 )
  {
    *a3 = 8;
    return 3221225476LL;
  }
  v6 = Size;
  if ( (unsigned int)Size >= 8 )
    v6 = 8;
  *a3 = v6;
  Src = ((((KiSpeculationFeatures & 0x1000000000LL) != 0) ^ (unsigned __int8)((unsigned __int64)KiSpeculationFeatures >> 33)) & 2 ^ ((KiSpeculationFeatures & 0x1000000000LL) != 0) ^ (unsigned __int8)((unsigned __int64)KiSpeculationFeatures >> 33)) & 4 ^ (((KiSpeculationFeatures & 0x1000000000LL) != 0) ^ (unsigned __int8)((unsigned __int64)KiSpeculationFeatures >> 33)) & 2 ^ ((unsigned __int64)KiSpeculationFeatures >> 36) & 1;
  if ( (KiSpeculationFeatures & 0x10) != 0 || (KiSpeculationFeatures & 0x40) != 0 )
    LODWORD(Src) = Src | 8;
  if ( (KiSpeculationFeatures & 4) != 0 )
    LODWORD(Src) = Src | 0x10;
  if ( (KiSpeculationFeatures & 0x1000000000LL) != 0 && (KiSpeculationFeatures & 0x2000000000LL) != 0 )
    LODWORD(Src) = Src | 0x2000;
  LODWORD(Src) = ((unsigned __int8)Src ^ (unsigned __int8)(2 * KiSpeculationFeatures)) & 0x20 ^ Src;
  LODWORD(Src) = ((unsigned __int8)Src ^ (unsigned __int8)KiSpeculationFeatures) & 0x40 ^ Src;
  LODWORD(Src) = Src & 0xFFFFFF7F | (4 * KiSpeculationFeatures) & 0x80 | 0x100;
  LODWORD(Src) = ((unsigned __int16)Src ^ (unsigned __int16)(4 * KiSpeculationFeatures)) & 0x200 ^ Src;
  LODWORD(Src) = ((unsigned __int16)Src ^ (unsigned __int16)((unsigned __int64)KiSpeculationFeatures >> 28)) & 0x400 ^ Src;
  LODWORD(Src) = ((unsigned __int16)Src ^ (unsigned __int16)((unsigned __int64)KiSpeculationFeatures >> 28)) & 0x800 ^ Src;
  LODWORD(Src) = ((unsigned __int16)Src ^ (unsigned __int16)~(16 * KiSpeculationFeatures)) & 0x1000 ^ Src;
  LODWORD(Src) = ((unsigned __int16)Src ^ (unsigned __int16)((unsigned __int64)KiSpeculationFeatures >> 27)) & 0x4000 ^ Src;
  LODWORD(Src) = (Src ^ ((unsigned __int64)KiSpeculationFeatures >> 27)) & 0x8000 ^ Src;
  v7 = KeFeatureBits2;
  v21 = KiKvaShadow;
  if ( !KiKvaShadow || (v8 = 637534208, (KeFeatureBits2 & 8) == 0) )
    v8 = 603979776;
  v9 = v8 | Src & 0xFCFEFFFF | ((_DWORD)KeFeatureBits2 << 19) & 0x1000000 | ((KiSpeculationFeatures & 1 | 0x80) << 16) & 0xFDFFFFFF;
  v10 = (unsigned __int16)KeFeatureBits2 & 0x8000;
  if ( (KeFeatureBits2 & 0x8000) != 0 && KiDisableTsx || !KiTsxSupported )
  {
    v11 = v9 | 0x18000000;
  }
  else if ( (KeFeatureBits2 & 0x10000) != 0 || (KeFeatureBits2 & 0x28) == 8 && (unsigned int)KeKvaShadowingActive() )
  {
    v11 = v9 & 0xE7FFFFFF | 0x10000000;
  }
  else if ( v10 )
  {
    v11 = v9 & 0xE7FFFFFF | 0x8000000;
  }
  else
  {
    v11 = v9 & 0xE7FFFFFF;
  }
  if ( (v7 & 0x10000) != 0 || !KiTsxSupportedAtBoot )
    v12 = 0x40000000;
  else
    v12 = 0;
  LODWORD(Src) = v12 | v11 & 0xBFFFFFFF;
  HvlQueryL1tfMitigationInformation((int *)&Src);
  v13 = HIDWORD(Src) ^ (BYTE4(Src) ^ (unsigned __int8)(v7 >> 19)) & 7;
  if ( !v21 || (v14 = !KiIsFbClearSupported(), v15 = 1048, v14) )
    v15 = 1040;
  HIDWORD(Src) = v15 | v13 & 0xFFFFFFF7;
  if ( (KiSpeculationFeatures & 0x8000) != 0 )
  {
    if ( (KiSpeculationFeatures & 0x400000000LL) != 0
      || (KiSpeculationFeatures & 0x2000000000LL) != 0
      || (KiSpeculationFeatures & 0x100000000000LL) != 0 )
    {
      v16 = HIDWORD(Src) & 0xFFFFFCFF | 0x100;
    }
    else if ( (KiSpeculationFeatures & 0x800000000LL) != 0 || (KiSpeculationFeatures & 0x200000000000LL) != 0 )
    {
      v16 = HIDWORD(Src) & 0xFFFFFCFF;
    }
    else
    {
      v16 = HIDWORD(Src) | 0x300;
    }
  }
  else
  {
    v16 = HIDWORD(Src) & 0xFFFFFCFF | 0x200;
  }
  HIDWORD(Src) = v16 & 0xFFFFEFFF | (((KeFeatureBits2 >> 4) & 1) << 12) | 0x20800;
  if ( (KiSpeculationFeatures & 0x200000) != 0 )
  {
    if ( (KiSpeculationFeatures & 0x400000000LL) != 0
      || (KiSpeculationFeatures & 0x2000000000LL) != 0
      || (KiSpeculationFeatures & 0x800000000000LL) != 0 )
    {
      v17 = HIDWORD(Src) & 0xFFF3FFFF | 0x40000;
    }
    else if ( (KiSpeculationFeatures & 0x800000000LL) != 0 || (KiSpeculationFeatures & 0x1000000000000LL) != 0 )
    {
      v17 = HIDWORD(Src) & 0xFFF3FFFF;
    }
    else
    {
      v17 = HIDWORD(Src) | 0xC0000;
    }
  }
  else
  {
    v17 = HIDWORD(Src) & 0xFFF3FFFF | 0x80000;
  }
  HIDWORD(Src) = v17 | 0x100000;
  v18 = v17 | 0x100000;
  if ( (KiSpeculationFeatures & 0x400000) != 0 )
    v19 = v18 | 0x200000;
  else
    v19 = v18 & 0xFFDFFFFF;
  HIDWORD(Src) = v19 | 0x400000;
  if ( (KiSpeculationFeatures & 0x800000) != 0 )
  {
    if ( (KiSpeculationFeatures & 0x2000000000000LL) == 0 )
    {
      if ( (KiSpeculationFeatures & 0x4000000000000LL) != 0 )
        HIDWORD(Src) &= 0xFE7FFFFF;
      else
        HIDWORD(Src) |= 0x1800000u;
      goto LABEL_65;
    }
    v20 = HIDWORD(Src) & 0xFE7FFFFF | 0x800000;
  }
  else
  {
    v20 = HIDWORD(Src) & 0xFE7FFFFF | 0x1000000;
  }
  HIDWORD(Src) = v20;
LABEL_65:
  if ( (KiSpeculationFeatures & 0x10000) != 0 )
  {
    if ( (KiSpeculationFeatures & 0x10000000000000LL) != 0 || (KiSpeculationFeatures & 0x400000000LL) != 0 )
    {
      HIDWORD(Src) |= 0x40u;
    }
    else if ( (KiSpeculationFeatures & 0x20000000000000LL) != 0 || (KiSpeculationFeatures & 0x800000000LL) != 0 )
    {
      HIDWORD(Src) |= 0x80u;
    }
    else if ( (KiSpeculationFeatures & 0x40000000000000LL) != 0 || (KiSpeculationFeatures & 0x80000000000000LL) != 0 )
    {
      HIDWORD(Src) |= 0x20u;
    }
  }
  memset(a1, 0, v3);
  memmove(a1, &Src, v6);
  return 0LL;
}
