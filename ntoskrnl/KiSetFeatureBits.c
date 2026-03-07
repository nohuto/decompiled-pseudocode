__int64 __fastcall KiSetFeatureBits(__int64 a1)
{
  char v2; // bl
  unsigned int v3; // ecx
  char v4; // dl
  _DWORD *v5; // r9
  unsigned int ProcessorSignature; // eax
  char v12; // r8
  ULONG_PTR v23; // r13
  unsigned int v24; // edi
  unsigned int v35; // r15d
  ULONG_PTR v36; // r12
  __int64 v37; // rdi
  char v38; // cl
  char v39; // r11
  int v40; // edx
  int v41; // ecx
  unsigned int v42; // eax
  char v43; // r15
  int v44; // r12d
  int v45; // ebx
  char IsHyperThreadingEnabled; // al
  unsigned __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rdx
  unsigned __int64 v56; // rax
  char v57; // r10
  __int64 v62; // r8
  __int64 v63; // rdi
  unsigned __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // r9
  unsigned __int64 v75; // rax
  unsigned int *v76; // rax
  __int64 result; // rax
  unsigned int v78; // ecx
  unsigned int v79; // ecx
  unsigned int v80; // ecx
  unsigned int v81; // ecx
  bool v82; // zf
  char v83; // al
  unsigned __int64 v84; // rcx
  __int64 v85; // rdx
  int v86; // eax
  unsigned int v87; // ecx
  unsigned int v88; // ecx
  unsigned int v89; // ecx
  unsigned int v90; // ecx
  unsigned int v91; // ecx
  unsigned int v92; // ecx
  unsigned int v93; // ecx
  unsigned int v94; // ecx
  unsigned int v95; // ecx
  unsigned int v96; // ecx
  unsigned int v97; // ecx
  unsigned int v98; // ecx
  unsigned int v99; // ecx
  char v100; // dl
  char v101; // al
  unsigned __int8 v102; // cl
  unsigned __int64 v117; // rax
  char v122; // r8
  int v123; // eax
  char v124; // al
  bool v125; // [rsp+30h] [rbp-D8h]
  unsigned int v126; // [rsp+40h] [rbp-C8h]
  unsigned int v127; // [rsp+44h] [rbp-C4h]
  __int16 v128; // [rsp+48h] [rbp-C0h]
  __int128 v129; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v130; // [rsp+60h] [rbp-A8h]
  int v131; // [rsp+68h] [rbp-A0h]
  __int64 v132; // [rsp+70h] [rbp-98h]
  __int128 v133; // [rsp+80h] [rbp-88h] BYREF
  __int128 v134; // [rsp+90h] [rbp-78h] BYREF
  __int128 v135; // [rsp+A0h] [rbp-68h]
  __int128 v136; // [rsp+B0h] [rbp-58h]
  __int128 v137; // [rsp+C0h] [rbp-48h]

  v135 = 0LL;
  v136 = 0LL;
  v137 = 0LL;
  v129 = 0LL;
  v130 = 0LL;
  v131 = 0;
  v2 = *(_BYTE *)(a1 + 64);
  v3 = *(unsigned __int8 *)(a1 + 67);
  v4 = *(_BYTE *)(a1 + 141);
  v125 = (unsigned __int8)(v4 - 1) <= 1u;
  v5 = (_DWORD *)(a1 + 36);
  v132 = a1 + 36;
  if ( *(_DWORD *)(a1 + 36) )
  {
    ProcessorSignature = KiGetProcessorSignature(0LL, 0LL, 0LL, 0LL);
    KiSetProcessorSignature(a1, ProcessorSignature);
    v5 = (_DWORD *)(a1 + 36);
    goto LABEL_3;
  }
  if ( v4 == 2 )
  {
    if ( v2 != 6 )
      goto LABEL_3;
    KiLastExceptionFromBaseMSR = 477;
    KiLastExceptionToBaseMSR = 478;
    if ( v3 <= 0x2D )
    {
      if ( v3 == 45 )
        goto LABEL_118;
      if ( v3 > 0x1F )
      {
        v92 = v3 - 37;
        if ( !v92 )
          goto LABEL_118;
        v93 = v92 - 1;
        if ( v93 )
        {
          v94 = v93 - 1;
          if ( v94 )
          {
            v95 = v94 - 3;
            if ( v95 && v95 != 2 )
            {
LABEL_96:
              if ( KiLastBranchFromBaseMSR )
                KiLastBranchTOSMSR = 457;
              goto LABEL_3;
            }
            goto LABEL_118;
          }
        }
      }
      else
      {
        if ( v3 == 31 )
          goto LABEL_118;
        v87 = v3 - 15;
        if ( v87 )
        {
          v88 = v87 - 8;
          if ( v88 )
          {
            v89 = v88 - 3;
            if ( !v89 )
              goto LABEL_118;
            v90 = v89 - 2;
            if ( v90 )
            {
              v91 = v90 - 1;
              if ( v91 )
              {
                if ( v91 != 1 )
                  goto LABEL_96;
                goto LABEL_118;
              }
            }
          }
        }
      }
    }
    else
    {
      if ( v3 > 0x3A )
      {
        v78 = v3 - 60;
        if ( v78 )
        {
          v79 = v78 - 3;
          if ( v79 )
          {
            v80 = v79 - 6;
            if ( v80 )
            {
              v81 = v80 - 1;
              if ( v81 )
              {
                v82 = v81 == 7;
                goto LABEL_95;
              }
            }
          }
        }
LABEL_118:
        KiLastBranchFromBaseMSR = 1664;
        KiLastBranchToBaseMSR = 1728;
        goto LABEL_96;
      }
      if ( v3 == 58 )
        goto LABEL_118;
      v96 = v3 - 46;
      if ( !v96 )
        goto LABEL_118;
      v97 = v96 - 1;
      if ( !v97 )
        goto LABEL_118;
      v98 = v97 - 6;
      if ( v98 )
      {
        v99 = v98 - 1;
        if ( v99 )
        {
          v82 = v99 == 1;
LABEL_95:
          if ( !v82 )
            goto LABEL_96;
        }
      }
    }
    KiLastBranchFromBaseMSR = 64;
    KiLastBranchToBaseMSR = 96;
    goto LABEL_96;
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
  v127 = _RAX;
  *(_QWORD *)&v135 = __PAIR64__(_RBX, _RAX);
  *((_QWORD *)&v135 + 1) = __PAIR64__(_RDX, _RCX);
  v12 = *(_BYTE *)(a1 + 141);
  if ( v12 == 2 )
  {
    __writemsr(0x8Bu, 0LL);
    _RAX = 1LL;
    __asm { cpuid }
    *(_QWORD *)&v135 = __PAIR64__(_RBX, _RAX);
    *((_QWORD *)&v135 + 1) = __PAIR64__(_RDX, _RCX);
LABEL_5:
    *(_QWORD *)(a1 + 35240) = __readmsr(0x8Bu);
    goto LABEL_6;
  }
  if ( v12 == 1 )
    goto LABEL_5;
LABEL_6:
  _RAX = 1LL;
  __asm { cpuid }
  v23 = (unsigned int)_RDX;
  v128 = _RCX;
  v24 = _RBX;
  *(_QWORD *)&v137 = __PAIR64__(_RBX, _RAX);
  *((_QWORD *)&v137 + 1) = __PAIR64__(_RDX, _RCX);
  _RAX = 0x80000000LL;
  __asm { cpuid }
  v126 = _RAX;
  _RAX = 2147483649LL;
  __asm { cpuid }
  v35 = _RDX;
  v36 = (unsigned int)_RCX;
  *(_QWORD *)&v136 = __PAIR64__(_RBX, _RAX);
  *((_QWORD *)&v136 + 1) = __PAIR64__(_RDX, _RCX);
  if ( !*v5 )
  {
    if ( v12 == 1 )
    {
      v100 = *(_BYTE *)(a1 + 64);
      v101 = *(_BYTE *)(a1 + 67);
      v102 = *(_BYTE *)(a1 + 66);
      if ( v100 == 15 && (v101 == 107 || v101 == 104) && v102 == 1 )
      {
        KiCacheErrataMonitor |= 1uLL;
      }
      else if ( v100 == 16 && (!v101 && v102 <= 2u || v101 == 2 && (v102 <= 2u || v102 == 10) || v101 == 4 && !v102) )
      {
        KiCacheErrataMonitor |= 2uLL;
      }
    }
    if ( !*v5 )
    {
      v83 = *(_BYTE *)(a1 + 141);
      if ( v83 == 1 )
      {
        if ( *(_BYTE *)(a1 + 64) == 23 )
          KiAccessBitErrata = 1;
      }
      else if ( v83 == 2 && *(_BYTE *)(a1 + 64) == 6 )
      {
        if ( (v84 = *(unsigned __int8 *)(a1 + 67), (unsigned __int8)v84 <= 0x36u)
          && (v85 = 0x6000C010000000LL, _bittest64(&v85, v84))
          || (LOBYTE(v84) = v84 - 55, (unsigned __int8)v84 <= 0x16u)
          && (v86 = 4718593, _bittest(&v86, v84))
          && *(_BYTE *)(a1 + 66) <= 7u )
        {
          KiAccessBitErrata = 2;
        }
      }
    }
  }
  KiDetectKvaLeakage(a1);
  _m_prefetchw((const void *)a1);
  if ( *(_BYTE *)(a1 + 141) == 1 )
  {
    v35 |= 0x100000u;
    HIDWORD(v136) = v35;
  }
  *(_DWORD *)(a1 + 212) = HIBYTE(v24);
  *(_DWORD *)(a1 + 232) = (v24 >> 5) & 0x7F8;
  if ( (v23 & 0x789F3FD) != 0x789F3FD
    || (v35 & 0x800) == 0
    || (v35 & 0x100000) == 0
    || (v128 & 0x2000) == 0
    || (v36 & 1) == 0
    || (_DWORD)KiOpPrefetchPatchSkip )
  {
    if ( !*(_DWORD *)(a1 + 36) )
      KdInitSystem(0LL, KeLoaderBlock_0);
    KeBugCheckEx(0x5Du, v23, v35, v36, (unsigned int)KiOpPrefetchPatchSkip);
  }
  v37 = *(_QWORD *)(a1 + 35232) | 0x20113DFELL;
  if ( (*(_QWORD *)(a1 + 35232) & 0x400000000LL) != 0 )
    __writemsr(0xC0000103, *(unsigned __int8 *)(a1 + 209) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 208) << 8));
  __writemsr(0x174u, 0LL);
  __writemsr(0x176u, 0LL);
  __writemsr(0x175u, 0LL);
  if ( (v35 & 0x2000000) != 0 )
    __writemsr(0xC0000080, __readmsr(0xC0000080) | 0x4000);
  *(_DWORD *)(a1 + 160) = 1;
  *(_DWORD *)(a1 + 164) = 1;
  *(_DWORD *)(a1 + 38344) = 1;
  *(_DWORD *)(a1 + 38348) = 1;
  v133 = v137;
  v134 = v136;
  KiComputeTopologyConstants(
    *(unsigned __int8 *)(a1 + 141),
    v127,
    v126,
    (__int64)&v134,
    (unsigned int *)&v133,
    (int *)&v129);
  v38 = v129;
  if ( (v129 & 0x10) != 0 )
    *(_DWORD *)(a1 + 212) = v131;
  v39 = 1;
  if ( (v38 & 1) != 0 )
    *(_DWORD *)(a1 + 164) = DWORD2(v129);
  if ( (v38 & 8) != 0 )
    *(_DWORD *)(a1 + 38348) = HIDWORD(v130);
  if ( (v38 & 2) != 0 )
    *(_DWORD *)(a1 + 160) = HIDWORD(v129);
  if ( (v38 & 4) != 0 )
    *(_DWORD *)(a1 + 38344) = v130;
  *(_BYTE *)(a1 + 143) = *(_BYTE *)(a1 + 164);
  *(_BYTE *)(a1 + 142) = *(_BYTE *)(a1 + 160);
  v40 = (2 * (BYTE4(v129) & 1) + 1) | 4;
  if ( (BYTE4(v129) & 8) == 0 )
    v40 = 2 * (BYTE4(v129) & 1) + 1;
  v41 = v40 | 8;
  if ( (BYTE4(v129) & 4) == 0 )
    v41 = v40;
  v42 = v41 | 0x10;
  if ( (BYTE4(v129) & 2) == 0 )
    v42 = v41;
  _InterlockedOr(&KiExplicitTopologyLevels, v42);
  v43 = *(_BYTE *)(a1 + 141);
  if ( v43 == 1 )
  {
    v37 |= 0x200000uLL;
  }
  else if ( v43 == 2 )
  {
    v37 |= 0x1000000uLL;
  }
  v44 = *(_DWORD *)(a1 + 36);
  v45 = *(_DWORD *)(a1 + 164);
  if ( v44 )
  {
    IsHyperThreadingEnabled = HalIsHyperThreadingEnabled();
    v39 = 1;
    if ( !IsHyperThreadingEnabled )
      v45 *= *(_DWORD *)(a1 + 160);
  }
  *(_DWORD *)(a1 + 220) = -v45;
  if ( (unsigned __int8)(v43 - 1) > 2u || v126 < 0x80000008 )
  {
    if ( v43 == 1 )
      KiMtrrMaxRangeShift = 40;
  }
  else
  {
    _RAX = 2147483656LL;
    __asm { cpuid }
    LODWORD(v135) = _RAX;
    KiMtrrMaxRangeShift = _RAX;
  }
  KiMtrrMaskBase = ((1LL << KiMtrrMaxRangeShift) - 1) & 0xFFFFFFFFFFFFF000uLL;
  KiMtrrMaskMask = ((1LL << KiMtrrMaxRangeShift) - 1) & 0xFFFFFFFFFFFFF000uLL;
  v52 = __readcr4();
  if ( (v37 & 1) != 0 )
    v52 |= 0x100000uLL;
  v53 = v52 | 0x10000;
  if ( (v37 & 0x10000000) == 0 )
    v53 = v52;
  if ( KeSmapEnabled )
    v53 |= 0x200000uLL;
  v54 = v53 | 0x800;
  if ( (KeFeatureBits2 & 4) == 0 )
    v54 = v53;
  _RCX = v54;
  if ( v44 && (v37 & 0x40000000000LL) != 0 && KiFlushPcid )
    _RCX = v54 | 0x20000;
  __writecr4(_RCX);
  if ( KeSmapEnabled )
    __asm { stac }
  if ( (_RCX & 0x20000) != 0 )
  {
    v56 = __readcr3();
    __writecr3(v56 | 2);
  }
  v57 = *(_BYTE *)(a1 + 141);
  if ( v57 == 2 && v127 >= 7 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    if ( (_RBX & 0x8000) != 0 )
    {
      _RAX = 16LL;
      __asm { cpuid }
      if ( (_RBX & 2) != 0 )
        v37 |= 0x100000000000uLL;
    }
  }
  v62 = v37 | 0x20000;
  if ( !v125 )
    v62 = v37;
  v63 = v62;
  if ( v57 != 2 )
  {
    if ( v57 == 1 )
    {
      _RAX = 0x80000000LL;
      __asm { cpuid }
      if ( (unsigned int)_RAX >= 0x8000000A )
      {
        _RAX = 2147483658LL;
        __asm { cpuid }
        v63 = v62 | 0x4000000;
        if ( (_RDX & 1) == 0 )
          v63 = v62;
        if ( (_RDX & 0x20000) != 0 )
          HvlSetHardwareMbecAvailable();
        if ( (_RDX & 0x2000) != 0 )
          HvlSetApicVirtualizationAvailable();
      }
      _RCX = 3221291284LL;
      v117 = __readmsr(0xC0010114);
      if ( (v117 & 0x10) == 0 )
      {
        v63 |= 0x8000000uLL;
        KiVirtFlags |= v39;
      }
    }
    goto LABEL_170;
  }
  _RAX = 1LL;
  __asm { cpuid }
  if ( (_RCX & 0x20) == 0 )
  {
LABEL_170:
    v70 = 0x10000000000LL;
    goto LABEL_80;
  }
  if ( (__readmsr(0x482u) & 0x8000000000000000uLL) == 0LL )
  {
    v70 = 0x10000000000LL;
  }
  else
  {
    v68 = __readmsr(0x48Bu);
    v69 = v62 | 0x4000000;
    if ( (v68 & 0x200000000LL) == 0 )
      v69 = v62;
    v62 = v69;
    if ( (v69 & 1) != 0 && (v68 & 0x40000000000000LL) != 0 )
      HvlSetHardwareMbecAvailable();
    v70 = 0x10000000000LL;
    if ( (v68 & 0x10000000000LL) != 0 )
      HvlSetApicVirtualizationAvailable();
  }
  _RCX = __readmsr(0x3Au);
  v63 = v62 | 0x8000000;
  if ( (_RCX & 5) != 5 )
    v63 = v62;
  if ( (_RCX & 4) != 0 )
    KiVirtFlags |= v39;
  if ( ((unsigned __int8)_RCX & (unsigned __int8)v39) != 0 )
    KiVirtFlags |= 2u;
LABEL_80:
  if ( *(_BYTE *)(a1 + 141) == 2 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    if ( (_RBX & 4) != 0 )
    {
      v75 = __readmsr(0x3Au);
      _RCX = 262145LL;
      if ( (v75 & 0x40001) == 0x40001 )
      {
        _RAX = 18LL;
        __asm { cpuid }
        v122 = _RAX;
        if ( ((unsigned __int8)_RAX & (unsigned __int8)v39) != 0 )
        {
          v63 |= v70;
          _RCX = MmWriteableSharedUserData;
          v123 = *(_DWORD *)(MmWriteableSharedUserData + 876) | 2;
          *(_DWORD *)(MmWriteableSharedUserData + 876) = v123;
          if ( (v122 & 2) != 0 )
          {
            v63 |= 0x80000000000uLL;
            *(_DWORD *)(_RCX + 876) = v123 | 4;
          }
        }
      }
    }
  }
  if ( *(_BYTE *)(a1 + 141) != v39
    || (v124 = *(_BYTE *)(a1 + 64), v124 <= 15)
    || v124 == 17
    || HviIsAnyHypervisorPresent() )
  {
    v76 = (unsigned int *)(a1 + 36);
  }
  else
  {
    _RCX = 3221295145LL;
    __writemsr(0xC0011029, __readmsr(0xC0011029) | 2);
    v76 = (unsigned int *)(a1 + 36);
  }
  KiInitializeHgsPlusWorkloadClasses(_RCX, *v76);
  result = KiInitializeHresetSupport(*(unsigned int *)(a1 + 36));
  *(_QWORD *)(a1 + 35232) = v63;
  return result;
}
