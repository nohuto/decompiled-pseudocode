/*
 * XREFs of KiSetFeatureBits @ 0x14099C42C
 * Callers:
 *     KiInitializeBootStructures @ 0x14099BA20 (KiInitializeBootStructures.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1403A5310 (HviIsAnyHypervisorPresent.c)
 *     HalIsHyperThreadingEnabled @ 0x1403A91A0 (HalIsHyperThreadingEnabled.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     HvlSetApicVirtualizationAvailable @ 0x1404F1B58 (HvlSetApicVirtualizationAvailable.c)
 *     HvlSetHardwareMbecAvailable @ 0x1404F1B68 (HvlSetHardwareMbecAvailable.c)
 *     KiGetProcessorSignature @ 0x14099B768 (KiGetProcessorSignature.c)
 *     KiDetectKvaLeakage @ 0x14099CAB0 (KiDetectKvaLeakage.c)
 *     KiSetProcessorSignature @ 0x14099DF64 (KiSetProcessorSignature.c)
 *     KdInitSystem @ 0x1409B5160 (KdInitSystem.c)
 */

char __fastcall KiSetFeatureBits(__int64 a1)
{
  char v2; // bl
  unsigned __int8 v3; // cl
  char v4; // dl
  __int64 v5; // r8
  unsigned int ProcessorSignature; // eax
  ULONG_PTR v22; // r15
  unsigned int v33; // r12d
  ULONG_PTR v34; // r13
  char v35; // r11
  unsigned int v36; // r9d
  __int64 v37; // r15
  char v38; // cl
  unsigned int v39; // r12d
  int v45; // r11d
  unsigned int v46; // r10d
  unsigned int v52; // ecx
  char v53; // r8
  unsigned int v54; // esi
  char v55; // al
  int v56; // ebx
  char IsHyperThreadingEnabled; // al
  unsigned __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rdx
  unsigned __int64 v67; // rcx
  unsigned __int64 v68; // rax
  char v69; // r10
  __int64 v74; // r8
  __int64 v75; // rsi
  unsigned __int64 v80; // rbx
  __int64 v81; // rcx
  __int64 v82; // r9
  char v87; // al
  unsigned __int64 v88; // rcx
  char v89; // bl
  char v90; // al
  unsigned __int8 v91; // cl
  int v92; // eax
  unsigned __int8 v98; // r8
  int v99; // ecx
  unsigned int v109; // ebx
  unsigned int v115; // ecx
  unsigned __int64 v130; // rax
  char v135; // r8
  unsigned int v137; // [rsp+30h] [rbp-78h]
  bool v138; // [rsp+38h] [rbp-70h]
  unsigned int v139; // [rsp+40h] [rbp-68h]
  int v140; // [rsp+44h] [rbp-64h]
  int v141; // [rsp+48h] [rbp-60h]
  __int16 v142; // [rsp+4Ch] [rbp-5Ch]
  unsigned int v143; // [rsp+50h] [rbp-58h]

  v2 = *(_BYTE *)(a1 + 64);
  v3 = *(_BYTE *)(a1 + 67);
  v4 = *(_BYTE *)(a1 + 141);
  v5 = (unsigned __int8)(v4 - 1) <= 1u;
  v138 = (unsigned __int8)(v4 - 1) <= 1u;
  if ( *(_DWORD *)(a1 + 36) )
  {
    ProcessorSignature = KiGetProcessorSignature(0LL, 0LL, 0LL, 0LL);
    KiSetProcessorSignature(a1, ProcessorSignature);
    goto LABEL_3;
  }
  if ( v4 == 2 )
  {
    if ( v2 != 6 )
      goto LABEL_3;
    KiLastExceptionFromBaseMSR = 477;
    KiLastExceptionToBaseMSR = 478;
    if ( v3 <= 0x27u )
    {
      if ( v3 < 0x26u && v3 != 15 && v3 != 23 )
      {
        if ( v3 == 26 )
          goto LABEL_89;
        if ( v3 != 28 && v3 != 29 )
        {
          if ( v3 > 0x1Du && (v3 <= 0x1Fu || v3 == 37) )
            goto LABEL_89;
          goto LABEL_90;
        }
      }
    }
    else
    {
      if ( v3 > 0x3Au )
      {
        if ( v3 == 60 )
        {
LABEL_89:
          KiLastBranchFromBaseMSR = 1664;
          KiLastBranchToBaseMSR = 1728;
          goto LABEL_90;
        }
        if ( v3 > 0x44u )
        {
          if ( v3 <= 0x46u )
            goto LABEL_89;
          if ( v3 == 77 )
            goto LABEL_121;
        }
LABEL_90:
        if ( KiLastBranchFromBaseMSR )
          KiLastBranchTOSMSR = 457;
        goto LABEL_3;
      }
      if ( v3 == 58 || v3 == 42 )
        goto LABEL_89;
      if ( v3 <= 0x2Bu )
        goto LABEL_90;
      if ( v3 <= 0x2Fu )
        goto LABEL_89;
      if ( v3 <= 0x34u || v3 > 0x37u )
        goto LABEL_90;
    }
LABEL_121:
    KiLastBranchFromBaseMSR = 64;
    KiLastBranchToBaseMSR = 96;
    goto LABEL_90;
  }
  if ( v4 == 1 )
  {
    KiLastBranchFromBaseMSR = 475;
    KiLastBranchToBaseMSR = 476;
    KiLastExceptionFromBaseMSR = 477;
    KiLastExceptionToBaseMSR = 478;
  }
LABEL_3:
  _RAX = 0LL;
  __asm { cpuid }
  v141 = _RDX;
  v137 = _RAX;
  LOBYTE(v5) = *(_BYTE *)(a1 + 141);
  if ( (_BYTE)v5 == 2 )
  {
    __writemsr(0x8Bu, 0LL);
    _RAX = 1LL;
    __asm { cpuid }
    v141 = _RDX;
LABEL_5:
    *(_QWORD *)(a1 + 34216) = __readmsr(0x8Bu);
    goto LABEL_6;
  }
  if ( (_BYTE)v5 == 1 )
  {
    LOBYTE(v5) = 1;
    goto LABEL_5;
  }
LABEL_6:
  _RAX = 1LL;
  __asm { cpuid }
  v22 = (unsigned int)_RDX;
  v140 = _RDX;
  v142 = _RCX;
  v143 = _RBX;
  _RAX = 0x80000000LL;
  __asm { cpuid }
  v139 = _RAX;
  _RAX = 2147483649LL;
  __asm { cpuid }
  v33 = _RDX;
  v34 = (unsigned int)_RCX;
  if ( !*(_DWORD *)(a1 + 36) )
  {
    if ( (_BYTE)v5 == 1 )
    {
      v89 = *(_BYTE *)(a1 + 64);
      v90 = *(_BYTE *)(a1 + 67);
      v91 = *(_BYTE *)(a1 + 66);
      if ( v89 == 15 && (v90 == 107 || v90 == 104) && v91 == 1 )
      {
        KiCacheErrataMonitor |= 1uLL;
      }
      else if ( v89 == 16 && (!v90 && v91 <= 2u || v90 == 2 && (v91 <= 2u || v91 == 10) || v90 == 4 && !v91) )
      {
        KiCacheErrataMonitor |= 2uLL;
      }
    }
    if ( !*(_DWORD *)(a1 + 36) )
    {
      v87 = *(_BYTE *)(a1 + 141);
      if ( v87 == 1 )
      {
        if ( *(_BYTE *)(a1 + 64) == 23 )
          KiAccessBitErrata = 1;
      }
      else if ( v87 == 2 && *(_BYTE *)(a1 + 64) == 6 )
      {
        if ( (v88 = *(unsigned __int8 *)(a1 + 67), (unsigned __int8)v88 <= 0x36u)
          && (_RDX = 0x6000C010000000LL, _bittest64(&_RDX, v88))
          || (LOBYTE(v88) = v88 - 55, (unsigned __int8)v88 <= 0x16u)
          && (v92 = 4718593, _bittest(&v92, v88))
          && *(_BYTE *)(a1 + 66) <= 7u )
        {
          KiAccessBitErrata = 2;
        }
      }
    }
  }
  KiDetectKvaLeakage(a1, _RDX, v5, 1LL);
  _m_prefetchw((const void *)a1);
  v35 = 1;
  if ( *(_BYTE *)(a1 + 141) == 1 )
    v33 |= 0x100000u;
  *(_DWORD *)(a1 + 212) = HIBYTE(v143);
  *(_DWORD *)(a1 + 232) = (v143 >> 5) & 0x7F8;
  v36 = 0;
  if ( (v22 & 0x789F3FD) != 0x789F3FD
    || (v33 & 0x800) == 0
    || (v33 & 0x100000) == 0
    || (v142 & 0x2000) == 0
    || (v34 & 1) == 0
    || (_DWORD)KiOpPrefetchPatchSkip )
  {
    if ( !*(_DWORD *)(a1 + 36) )
      KdInitSystem(0LL, KeLoaderBlock_0);
    KeBugCheckEx(0x5Du, v22, v33, v34, (unsigned int)KiOpPrefetchPatchSkip);
  }
  v37 = *(_QWORD *)(a1 + 34208) | 0x20113DFELL;
  if ( (*(_QWORD *)(a1 + 34208) & 0x400000000LL) != 0 )
    __writemsr(0xC0000103, *(unsigned __int8 *)(a1 + 209) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 208) << 8));
  __writemsr(0x174u, 0LL);
  __writemsr(0x176u, 0LL);
  __writemsr(0x175u, 0LL);
  if ( (v33 & 0x2000000) != 0 )
    __writemsr(0xC0000080, __readmsr(0xC0000080) | 0x4000);
  *(_DWORD *)(a1 + 152) = 1;
  *(_DWORD *)(a1 + 156) = 1;
  v38 = *(_BYTE *)(a1 + 141);
  if ( (unsigned __int8)(v38 - 2) > 1u )
  {
    v54 = v139;
    if ( v38 == 1 && v139 >= 0x80000008 )
    {
      _RAX = 2147483656LL;
      __asm { cpuid }
      v98 = _RCX;
      v99 = (unsigned __int16)_RCX >> 12;
      if ( !v99 )
        _BitScanReverse((unsigned int *)&v99, 2 * v98 + 1);
      *(_DWORD *)(a1 + 152) = 1 << v99;
      if ( v139 >= 0x8000001E && (v34 & 0x400000) != 0 )
      {
        _RAX = 2147483678LL;
        __asm { cpuid }
        LODWORD(_RCX) = BYTE1(_RBX) + 1;
        *(_DWORD *)(a1 + 156) = _RCX;
        *(_DWORD *)(a1 + 152) /= (unsigned int)_RCX;
        *(_DWORD *)(a1 + 212) = _RAX;
      }
    }
    v39 = v137;
  }
  else
  {
    v39 = v137;
    if ( v137 >= 0x1F )
    {
      _RAX = 31LL;
      __asm { cpuid }
      if ( (_DWORD)_RBX )
        v36 = 31;
    }
    else
    {
      LODWORD(_RDX) = v141;
    }
    if ( v36 )
      goto LABEL_27;
    if ( v137 >= 0xB )
    {
      _RAX = 11LL;
      __asm { cpuid }
      if ( (_DWORD)_RBX )
        v36 = 11;
    }
    if ( v36 )
    {
LABEL_27:
      *(_DWORD *)(a1 + 212) = _RDX;
      v45 = 0;
      v46 = 1;
      do
      {
        _RAX = v36;
        __asm { cpuid }
        ++v45;
        v52 = (unsigned int)_RCX >> 8;
        if ( v52 )
        {
          v53 = _RAX & 0x1F;
          if ( v52 == 1 )
            *(_DWORD *)(a1 + 156) = 1 << v53;
          else
            v46 = 1 << v53;
        }
      }
      while ( (_WORD)_RBX );
      *(_DWORD *)(a1 + 152) = v46 / *(_DWORD *)(a1 + 156);
      v39 = v137;
      v35 = 1;
    }
    else
    {
      v109 = 1;
      if ( v137 >= 4 )
      {
        _RAX = 4LL;
        __asm { cpuid }
        _BitScanReverse((unsigned int *)&_RCX, 2 * ((unsigned int)_RAX >> 26) + 1);
        v109 = 1 << _RCX;
        *(_DWORD *)(a1 + 152) = 1 << _RCX;
      }
      if ( (v140 & 0x10000000) != 0 )
      {
        _BitScanReverse(&v115, 2 * BYTE2(v143) - 1);
        *(_DWORD *)(a1 + 156) = (1 << v115) / v109;
      }
    }
    v54 = v139;
  }
  v55 = *(_BYTE *)(a1 + 141);
  if ( v55 == 1 )
  {
    v37 |= 0x200000uLL;
  }
  else if ( v55 == 2 )
  {
    v37 |= 0x1000000uLL;
  }
  *(_BYTE *)(a1 + 142) = *(_BYTE *)(a1 + 152);
  *(_BYTE *)(a1 + 143) = *(_BYTE *)(a1 + 156);
  v56 = *(_DWORD *)(a1 + 156);
  if ( *(_DWORD *)(a1 + 36) )
  {
    IsHyperThreadingEnabled = HalIsHyperThreadingEnabled();
    v35 = 1;
    if ( !IsHyperThreadingEnabled )
      v56 *= *(_DWORD *)(a1 + 152);
  }
  *(_DWORD *)(a1 + 220) = -v56;
  if ( (unsigned __int8)(*(_BYTE *)(a1 + 141) - 1) > 2u || v54 < 0x80000008 )
  {
    if ( *(_BYTE *)(a1 + 141) == 1 )
      KiMtrrMaxRangeShift = 40;
  }
  else
  {
    _RAX = 2147483656LL;
    __asm { cpuid }
    KiMtrrMaxRangeShift = _RAX;
  }
  KiMtrrMaskBase = ((1LL << KiMtrrMaxRangeShift) - 1) & 0xFFFFFFFFFFFFF000uLL;
  KiMtrrMaskMask = ((1LL << KiMtrrMaxRangeShift) - 1) & 0xFFFFFFFFFFFFF000uLL;
  v63 = __readcr4();
  if ( (v37 & 1) != 0 )
    v63 |= 0x100000uLL;
  v64 = v63 | 0x10000;
  if ( (v37 & 0x10000000) == 0 )
    v64 = v63;
  if ( KeSmapEnabled )
    v64 |= 0x200000uLL;
  v65 = v64 | 0x800;
  LOBYTE(_RAX) = KeFeatureBits2 & 4;
  if ( (KeFeatureBits2 & 4) == 0 )
    v65 = v64;
  v67 = v65;
  if ( *(_DWORD *)(a1 + 36) )
  {
    LOBYTE(_RAX) = 0;
    if ( (v37 & 0x40000000000LL) != 0 )
    {
      if ( KiFlushPcid )
        v67 = v65 | 0x20000;
    }
  }
  __writecr4(v67);
  if ( KeSmapEnabled )
    __asm { stac }
  if ( (v67 & 0x20000) != 0 )
  {
    v68 = __readcr3();
    _RAX = v68 | 2;
    __writecr3(_RAX);
  }
  v69 = *(_BYTE *)(a1 + 141);
  if ( v69 == 2 && v39 >= 7 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    if ( (_RBX & 0x8000) != 0 )
    {
      _RAX = 16LL;
      __asm { cpuid }
      if ( (_RBX & 2) != 0 )
      {
        LOBYTE(_RAX) = 0;
        v37 |= 0x100000000000uLL;
      }
    }
  }
  v74 = v37 | 0x20000;
  if ( !v138 )
    v74 = v37;
  v75 = v74;
  if ( v69 != 2 )
  {
    if ( v69 == 1 )
    {
      _RAX = 0x80000000LL;
      __asm { cpuid }
      if ( (unsigned int)_RAX >= 0x8000000A )
      {
        _RAX = 2147483658LL;
        __asm { cpuid }
        v75 = v74 | 0x4000000;
        if ( (_RDX & 1) == 0 )
          v75 = v74;
        if ( (_RDX & 0x20000) != 0 )
          HvlSetHardwareMbecAvailable();
        if ( (_RDX & 0x2000) != 0 )
          HvlSetApicVirtualizationAvailable();
      }
      _RAX = __readmsr(0xC0010114);
      if ( (_RAX & 0x10) == 0 )
      {
        v75 |= 0x8000000uLL;
        KiVirtFlags |= v35;
      }
    }
    goto LABEL_179;
  }
  _RAX = 1LL;
  __asm { cpuid }
  if ( (_RCX & 0x20) == 0 )
  {
LABEL_179:
    v82 = 0x10000000000LL;
    goto LABEL_79;
  }
  if ( (__readmsr(0x482u) & 0x8000000000000000uLL) == 0LL )
  {
    v82 = 0x10000000000LL;
  }
  else
  {
    v80 = __readmsr(0x48Bu);
    v81 = v74 | 0x4000000;
    if ( (v80 & 0x200000000LL) == 0 )
      v81 = v74;
    v74 = v81;
    if ( (v81 & 1) != 0 && (v80 & 0x40000000000000LL) != 0 )
      HvlSetHardwareMbecAvailable();
    v82 = 0x10000000000LL;
    if ( (v80 & 0x10000000000LL) != 0 )
      HvlSetApicVirtualizationAvailable();
  }
  _RAX = __readmsr(0x3Au);
  v75 = v74 | 0x8000000;
  if ( (_RAX & 5) != 5 )
    v75 = v74;
  if ( (_RAX & 4) != 0 )
    KiVirtFlags |= v35;
  if ( ((unsigned __int8)_RAX & (unsigned __int8)v35) != 0 )
    KiVirtFlags |= 2u;
LABEL_79:
  if ( *(_BYTE *)(a1 + 141) == 2 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    if ( (_RBX & 4) != 0 )
    {
      v130 = __readmsr(0x3Au);
      _RAX = v130 & 0x40001;
      if ( _RAX == 262145 )
      {
        _RAX = 18LL;
        __asm { cpuid }
        v135 = _RAX;
        if ( ((unsigned __int8)_RAX & (unsigned __int8)v35) != 0 )
        {
          v75 |= v82;
          LODWORD(_RAX) = MEMORY[0xFFFFF7800000036C] | 2;
          MEMORY[0xFFFFF7800000036C] |= 2u;
          if ( (v135 & 2) != 0 )
          {
            v75 |= 0x80000000000uLL;
            LODWORD(_RAX) = _RAX | 4;
            MEMORY[0xFFFFF7800000036C] = _RAX;
          }
        }
      }
    }
  }
  if ( *(_BYTE *)(a1 + 141) == v35 )
  {
    LOBYTE(_RAX) = *(_BYTE *)(a1 + 64);
    if ( (char)_RAX > 15 && (_BYTE)_RAX != 17 )
    {
      LOBYTE(_RAX) = HviIsAnyHypervisorPresent();
      if ( !(_BYTE)_RAX )
      {
        _RAX = __readmsr(0xC0011029) | 2;
        __writemsr(0xC0011029, _RAX);
      }
    }
  }
  *(_QWORD *)(a1 + 34208) = v75;
  return _RAX;
}
