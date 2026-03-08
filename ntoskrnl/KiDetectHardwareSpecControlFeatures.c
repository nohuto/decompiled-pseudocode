/*
 * XREFs of KiDetectHardwareSpecControlFeatures @ 0x14037EC84
 * Callers:
 *     KiSetHardwareSpeculationControlFeatures @ 0x14037DE1C (KiSetHardwareSpeculationControlFeatures.c)
 *     KiIsKvaShadowNeededForBranchConfusion @ 0x14037E13C (KiIsKvaShadowNeededForBranchConfusion.c)
 *     KiDetermineRetpolineEnablement @ 0x1403ACCB4 (KiDetermineRetpolineEnablement.c)
 * Callees:
 *     HviGetEnlightenmentInformation @ 0x14037E1E0 (HviGetEnlightenmentInformation.c)
 *     KiIsBranchConfusionPresent @ 0x14037F118 (KiIsBranchConfusionPresent.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x14037F140 (HviIsHypervisorMicrosoftCompatible.c)
 *     HviIsAnyHypervisorPresent @ 0x14037F1D0 (HviIsAnyHypervisorPresent.c)
 *     HviGetHypervisorFeatures @ 0x14037F8A0 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiIsRfdsPresent @ 0x14040AD00 (KiIsRfdsPresent.c)
 *     KiIsSrsoPresent @ 0x14040ADE4 (KiIsSrsoPresent.c)
 */

char *__fastcall KiDetectHardwareSpecControlFeatures(__int64 a1, char a2, __int64 a3, char *a4)
{
  int v4; // r15d
  char v5; // r13
  char v8; // r14
  bool v9; // r9
  __int64 v10; // rdi
  int v21; // r8d
  unsigned __int64 v22; // rax
  char v23; // cl
  int v34; // ecx
  __int64 v35; // rcx
  int v36; // ecx
  char v37; // bl
  __int64 v38; // rdx
  char v39; // cl
  char v40; // al
  char v41; // al
  __int64 v42; // rdi
  char *result; // rax
  char v44; // [rsp+20h] [rbp-60h]
  char v45; // [rsp+21h] [rbp-5Fh]
  char v46; // [rsp+22h] [rbp-5Eh]
  __int128 v47; // [rsp+28h] [rbp-58h]
  __int128 v50; // [rsp+50h] [rbp-30h] BYREF
  __int128 v51; // [rsp+60h] [rbp-20h] BYREF

  v5 = *(_BYTE *)(a1 + 64);
  LOBYTE(v4) = *(_BYTE *)(a1 + 67);
  v44 = 0;
  v47 = 0LL;
  v46 = *(_BYTE *)(a1 + 141);
  v8 = 0;
  v50 = 0LL;
  DWORD2(v47) = 72;
  v51 = 0LL;
  v45 = 1;
  if ( (unsigned __int8)HviIsHypervisorMicrosoftCompatible() )
  {
    HviGetEnlightenmentInformation(&v51);
    v50 = 0LL;
    HviGetHypervisorFeatures(&v50);
    if ( (v50 & 0x100000000000LL) == 0 || (v51 & 0x1000) != 0 )
    {
      v9 = 1;
    }
    else
    {
      v9 = 0;
      v45 = 0;
    }
  }
  else
  {
    v9 = (unsigned __int8)HviIsAnyHypervisorPresent() != 0;
    v45 = v9;
  }
  v10 = v47;
  _RAX = 0LL;
  __asm { cpuid }
  if ( (unsigned int)_RAX < 7 )
  {
    v21 = 0;
  }
  else
  {
    _RAX = 7LL;
    __asm { cpuid }
    v21 = _RDX;
    if ( (_RDX & 0x20000000) != 0 )
    {
      v22 = __readmsr(0x10Au);
      if ( (v22 & 2) != 0 )
      {
        v23 = 1;
        v10 = v47 | 0x201;
        v8 = 1;
        *(_QWORD *)&v47 = v47 | 0x201;
      }
      else
      {
        v23 = 0;
      }
      v44 = v23;
      if ( (v22 & 0x10) != 0 )
      {
        v10 |= 0x100uLL;
        v8 = 1;
        *(_QWORD *)&v47 = v10;
      }
      if ( (v22 & 4) != 0 )
      {
        v10 |= 0x200uLL;
        v44 = v23;
        *(_QWORD *)&v47 = v10;
        v8 = 1;
      }
    }
  }
  if ( v46 == 1 )
  {
    _RAX = 0x80000000LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX < 0x80000008 )
    {
      LODWORD(_RBX) = 0;
    }
    else
    {
      _RAX = 2147483656LL;
      __asm { cpuid }
    }
    if ( (_RBX & 0x1000) != 0 )
    {
      v10 |= 4uLL;
      v8 = 1;
      *(_QWORD *)&v47 = v10;
    }
    if ( (_RBX & 0x4000) != 0 )
    {
      v10 |= 0x10uLL;
      v8 = 1;
      *(_QWORD *)&v47 = v10;
    }
    if ( (_RBX & 0x8000) != 0 )
    {
      v10 |= 0x40uLL;
      v8 = 1;
      *(_QWORD *)&v47 = v10;
    }
    if ( (_RBX & 0x1000000) != 0 )
    {
      v10 |= 0x80uLL;
      *(_QWORD *)&v47 = v10;
    }
    if ( (_RBX & 0x4000000) != 0 )
    {
      v10 |= 0x180uLL;
      *(_QWORD *)&v47 = v10;
    }
    if ( (v47 & 0x80u) != 0LL )
      goto LABEL_39;
  }
  else
  {
    if ( (v21 & 0x4000000) != 0 )
    {
      v10 |= 0x14uLL;
      v8 = 1;
      *(_QWORD *)&v47 = v10;
    }
    if ( (v21 & 0x8000000) != 0 )
    {
      v10 |= 0x44uLL;
      v8 = 1;
      *(_QWORD *)&v47 = v10;
    }
    if ( v21 < 0 )
    {
      v10 |= 0x80uLL;
      *(_QWORD *)&v47 = v10;
LABEL_39:
      v8 = 1;
    }
  }
  if ( (a2 & 1) != 0 || KiKvaShadowMode == 1 )
  {
    v10 |= 0x20uLL;
    *(_QWORD *)&v47 = v10;
  }
  if ( v46 == 2 && v5 == 6 )
  {
    if ( (unsigned __int8)(v4 - 78) <= 0x19u && (v34 = 50397313, _bittest(&v34, v4 - 78))
      || (_BYTE)v4 == 0x8E
      || (_BYTE)v4 == 0x9E )
    {
      v10 |= 0x200uLL;
      *(_QWORD *)&v47 = v10;
    }
    if ( (unsigned __int8)(v4 - 55) <= 0x37u && (v35 = 0x80404800680001LL, _bittest64(&v35, (unsigned int)(v4 - 55)))
      || (_BYTE)v4 == 117 )
    {
      v10 |= 0x200uLL;
      *(_QWORD *)&v47 = v10;
    }
  }
  if ( (v47 & 0x14) != 0x14 )
  {
    v37 = v44;
    goto LABEL_72;
  }
  if ( v9 && (KiFeatureSettings & 0x8000) == 0 )
    goto LABEL_68;
  v36 = *(_DWORD *)(a1 + 1740);
  if ( (v36 & 2) != 0 )
  {
    v10 |= 0x400uLL;
    *(_QWORD *)&v47 = v10;
  }
  if ( (v36 & 4) != 0 )
  {
    v10 |= 0x800uLL;
    *(_QWORD *)&v47 = v10;
    if ( (KiFeatureSettings & 0x4000) != 0 )
    {
      v10 |= 1uLL;
      *(_QWORD *)&v47 = v10;
    }
  }
  if ( v46 == 2 )
  {
    v37 = v44;
    if ( !v9 && !v44 || (v36 & 3) != 0 )
    {
      v10 |= 0x1000uLL;
LABEL_67:
      *(_QWORD *)&v47 = v10;
    }
  }
  else
  {
LABEL_68:
    v37 = v44;
    if ( v46 == 1 )
    {
      v10 |= 0x1000uLL;
      *(_QWORD *)&v47 = v10;
      if ( (v10 & 0x40) != 0 )
      {
        v10 |= 0x4000uLL;
        goto LABEL_67;
      }
    }
  }
LABEL_72:
  if ( (KeFeatureBits2 & 0x20000) != 0 && (KiFeatureSettings & 0x400000) == 0 )
  {
    v10 |= 0x2000uLL;
    *(_QWORD *)&v47 = v10;
  }
  if ( (unsigned int)KiIsBranchConfusionPresent(a1) )
  {
    v10 |= 0x8000uLL;
    *(_QWORD *)&v47 = v10;
  }
  if ( v46 != 1 || (KeFeatureBits2 & 0x2000000) != 0 )
  {
    v10 |= 8uLL;
    *(_QWORD *)&v47 = v10;
  }
  BYTE12(v47) = 0;
  if ( v46 == 2 )
  {
    LOBYTE(v38) = v45;
    if ( (KeFeatureBits2 & 0x4000000) == 0 && (v45 || v37) )
    {
      v10 |= 0x10000uLL;
      *(_QWORD *)&v47 = v10;
    }
    if ( (v10 & 0x10000) != 0 )
    {
      if ( (KeFeatureBits2 & 0x8000000) != 0 )
      {
        v10 |= 0x20000uLL;
        *(_QWORD *)&v47 = v10;
      }
      if ( KiTsxSupported )
      {
        BYTE12(v47) = 3;
      }
      else if ( (KeFeatureBits2 & 0x8000000) != 0
             || *(_BYTE *)(a1 + 64) == 6
             && ((v39 = *(_BYTE *)(a1 + 67), v39 == -105) && ((v40 = *(_BYTE *)(a1 + 66), v40 == 2) || v40 == 5)
              || v39 == -102 && ((v41 = *(_BYTE *)(a1 + 66), v41 == 3) || v41 == 4))
             || (BYTE12(v47) = 1, v45) )
      {
        BYTE12(v47) = 2;
      }
    }
  }
  if ( (KiFeatureSettings & 0x10000) != 0 )
  {
    v10 &= 0xFFFFFFFFFFFFF7FEuLL;
    *(_QWORD *)&v47 = v10;
  }
  if ( (unsigned int)KiIsSrsoPresent(a1, v38, 0x10000LL) )
  {
    v10 |= 0x200000uLL;
    *(_QWORD *)&v47 = v10;
  }
  if ( v46 == 1 )
  {
    v10 |= 0x400000uLL;
    *(_QWORD *)&v47 = v10;
  }
  if ( (unsigned int)KiIsRfdsPresent() )
  {
    v42 = v10 | 0x800000;
    *(_QWORD *)&v47 = v42;
    if ( _bittest64((const signed __int64 *)&KeFeatureBits2, 0x24u) )
      *(_QWORD *)&v47 = v42 | 0x1000000;
  }
  *(_OWORD *)a3 = v47;
  *(_QWORD *)(a3 + 16) = 4LL;
  result = a4;
  if ( a4 )
    *a4 = v8;
  return result;
}
