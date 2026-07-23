/*
 * XREFs of MiBuildMdlForMappedFileFault @ 0x14023D740
 * Callers:
 *     MiResolveMappedFileFault @ 0x140299B10 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiInitializeHardFaultPfn @ 0x14023DF10 (MiInitializeHardFaultPfn.c)
 *     MiProtectionToCacheAttribute @ 0x1402417B0 (MiProtectionToCacheAttribute.c)
 *     MiSetPfnBlink @ 0x1402987B0 (MiSetPfnBlink.c)
 *     MiSwizzleInvalidPte @ 0x1402AA620 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     RtlSetBits @ 0x1402D9750 (RtlSetBits.c)
 *     MiAdvanceFaultList @ 0x1402E40E8 (MiAdvanceFaultList.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiReduceMappedFileReadBehind @ 0x14031F27C (MiReduceMappedFileReadBehind.c)
 *     MiReduceMappedFileReadAhead @ 0x1403225EC (MiReduceMappedFileReadAhead.c)
 *     RtlSetAllBits @ 0x1403536C0 (RtlSetAllBits.c)
 *     MiGetHardFaultPages @ 0x1403592E4 (MiGetHardFaultPages.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 */

__int64 __fastcall MiBuildMdlForMappedFileFault(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  unsigned __int64 v10; // rdi
  __int64 v13; // r9
  unsigned int v14; // esi
  unsigned __int64 i; // rbx
  __int64 v16; // r14
  __int64 v17; // rdx
  unsigned __int64 v18; // r8
  __int64 v19; // r12
  unsigned __int64 v20; // rax
  __int64 v21; // rbx
  __int64 result; // rax
  ULONG v23; // ebx
  int v24; // eax
  __int64 v25; // r13
  unsigned int v26; // r11d
  unsigned int SizeOfBitMap; // r8d
  _QWORD *v28; // rbx
  unsigned __int64 v29; // rdx
  unsigned int v30; // r15d
  ULONG v31; // esi
  unsigned int *v32; // r9
  unsigned int *v33; // rax
  __int64 v34; // r10
  unsigned int *v35; // rax
  unsigned int v36; // ecx
  __int64 v37; // rcx
  __int64 *v38; // r14
  int v39; // r15d
  __int16 v40; // r8
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // r13
  __int64 v45; // rax
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  unsigned int v54; // [rsp+40h] [rbp-C0h]
  __int64 v55; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v56; // [rsp+50h] [rbp-B0h]
  ULONG v57; // [rsp+58h] [rbp-A8h]
  __int64 v58; // [rsp+60h] [rbp-A0h]
  _QWORD *v59; // [rsp+68h] [rbp-98h]
  __int64 v60; // [rsp+70h] [rbp-90h]
  unsigned __int64 v61; // [rsp+78h] [rbp-88h]
  __int64 v62; // [rsp+80h] [rbp-80h]
  int v63; // [rsp+88h] [rbp-78h]
  unsigned int v64; // [rsp+8Ch] [rbp-74h]
  __int64 v65; // [rsp+90h] [rbp-70h]
  __int64 v66; // [rsp+98h] [rbp-68h]
  __int64 *v67; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v68; // [rsp+A8h] [rbp-58h]
  _RTL_BITMAP BitMapHeader; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v70[4]; // [rsp+C0h] [rbp-40h] BYREF

  v10 = *(_QWORD *)(a1 + 168);
  v65 = a8;
  v62 = a10;
  v67 = *(__int64 **)(a1 + 232);
  v60 = a1;
  BitMapHeader.Buffer = (unsigned int *)v70;
  v58 = a4;
  v61 = a2;
  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 512LL;
  memset(v70, 0, sizeof(v70));
  v68 = v10;
  RtlSetAllBits(&BitMapHeader);
  v66 = 0LL;
  v14 = 0;
  for ( i = a2; i <= a3; i += 8LL )
  {
    if ( MI_READ_PTE_LOCK_FREE(i) == v10 )
    {
      _bittestandreset((signed __int32 *)BitMapHeader.Buffer, ((unsigned int)i >> 3) & 0x1FF);
      ++v14;
    }
  }
  v16 = a5;
  v17 = 0xFFFFFFFFFLL;
  v18 = 0xFFFFFA8000000000uLL;
  if ( v14 <= (unsigned __int64)a5 )
    v16 = v14;
  if ( a6 == -1 )
  {
    v55 = 0LL;
    v19 = 0LL;
  }
  else
  {
    MiSetPfnBlink(48 * a6 - 0x58000000000LL, 0xFFFFFFFFFLL, 0LL);
    v17 = 0xFFFFFFFFFLL;
    v18 = 0xFFFFFA8000000000uLL;
    v55 = 48 * a6 - 0x58000000000LL;
    v19 = 1LL;
  }
  v56 = v19;
  if ( v19 == v16 )
  {
    v21 = v65;
  }
  else
  {
    v20 = v10;
    if ( (v10 & 0x400) == 0 )
    {
      if ( qword_140C4DF40 && (v10 & 0x10) == 0 )
        v20 = v10 & ~qword_140C4DF40;
      v66 = 48 * ((v20 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v20 = *(_QWORD *)(v66 + 16);
    }
    v21 = v65;
    MiGetHardFaultPages((unsigned int)&v55, v16, v58, v65, a9, v60, v20, v62);
    v19 = v56;
  }
  if ( v19 == v14 )
    goto LABEL_26;
  if ( v19 )
  {
    v23 = ((unsigned int)v67 >> 3) & 0x1FF;
    if ( v19 != v14 - (unsigned int)MiReduceMappedFileReadBehind(&BitMapHeader, v23) )
      MiReduceMappedFileReadAhead(&BitMapHeader, v23);
LABEL_26:
    v64 = v19;
    v24 = MiProtectionToCacheAttribute(a7, v17, v18, v13);
    v25 = v60;
    v26 = 0;
    SizeOfBitMap = BitMapHeader.SizeOfBitMap;
    v63 = v24;
    v28 = (_QWORD *)(v60 + 320);
    v59 = (_QWORD *)(v60 + 320);
    if ( !BitMapHeader.SizeOfBitMap )
    {
LABEL_86:
      result = v64;
      *(_DWORD *)(v25 + 184) = (unsigned int)(((__int64)v28 - v25 - 320) >> 3) << 12;
      return result;
    }
    v29 = v61 & 0xFFFFFFFFFFFFF000uLL;
    v61 &= 0xFFFFFFFFFFFFF000uLL;
    while ( 1 )
    {
      v54 = v26;
      v30 = v26;
      if ( SizeOfBitMap <= v26 )
      {
        v31 = 0;
        goto LABEL_52;
      }
      v32 = &BitMapHeader.Buffer[(unsigned __int64)(SizeOfBitMap - 1) >> 5];
      v33 = &BitMapHeader.Buffer[(unsigned __int64)v26 >> 5];
      if ( v33 != v32 )
      {
        v34 = v26 & 0x1F;
        if ( (*v33 | *((_DWORD *)qword_1400127A0 + v34)) == 0xFFFFFFFF )
        {
          ++v33;
          v30 = v26 - v34 + 32;
          v54 = v30;
          if ( v33 < v32 )
          {
            do
            {
              if ( *v33 != -1 )
                break;
              ++v33;
              v30 += 32;
            }
            while ( v33 < v32 );
            v54 = v30;
          }
        }
      }
      if ( v30 < SizeOfBitMap )
      {
        do
        {
          SizeOfBitMap = BitMapHeader.SizeOfBitMap;
          if ( !_bittest((const signed __int32 *)BitMapHeader.Buffer, v30) )
            break;
          v54 = ++v30;
        }
        while ( v30 < BitMapHeader.SizeOfBitMap );
      }
      v31 = 0;
      if ( v33 == v32 )
        goto LABEL_47;
      if ( (~*((_DWORD *)qword_1400127A0 + (v30 & 0x1F)) & *v33) != 0 )
        goto LABEL_46;
      v31 = 32 - (v30 & 0x1F);
      if ( v31 != -1 )
        break;
LABEL_62:
      v19 = v56;
LABEL_51:
      v29 = v61;
LABEL_52:
      v57 = v31;
      if ( v26 )
      {
        if ( v30 != v26 )
        {
          v37 = v30 - v26;
          do
          {
            *v28++ = qword_140C4ED78;
            --v37;
          }
          while ( v37 );
          v59 = v28;
        }
        *(_DWORD *)(v25 + 192) |= 0x20000u;
      }
      v38 = (__int64 *)(v29 + 8LL * v30);
      RtlSetBits(&BitMapHeader, v30, v31);
      if ( v31 )
      {
        v39 = v60;
        v40 = v10;
        v10 = (unsigned __int64)v59;
        v41 = v40 & 0x400;
        v42 = v31;
        v43 = v65;
        v58 = (unsigned int)v41;
        v62 = v42;
        while ( 2 )
        {
          v44 = v55;
          v45 = *(_QWORD *)(v55 + 24) & 0xFFFFFFFFFLL;
          if ( v45 == 0xFFFFFFFFFLL )
            v55 = 0LL;
          else
            v55 = 48 * v45 - 0x58000000000LL;
          v56 = --v19;
          v46 = (v44 + 0x58000000000LL) / 48;
          *(_QWORD *)v10 = v46;
          v10 += 8LL;
          if ( v41 )
            v47 = MI_READ_PTE_LOCK_FREE(v38);
          else
            v47 = *(_QWORD *)(v66 + 16);
          *(_QWORD *)(v44 + 16) = v47;
          if ( v43 )
            MiAdvanceFaultList(v43);
          MiInitializeHardFaultPfn(v44, v39, (_DWORD)v38, v38 == v67, v63);
          v41 = v58;
          if ( !v58 )
            goto LABEL_82;
          v48 = MiSwizzleInvalidPte(32 * (a7 & 0x1F | ((v46 & 0xFFFFFFFFFLL) << 7) | 0x40));
          if ( (unsigned int)MiPteInShadowRange(v38, v49) )
          {
            if ( (unsigned int)MiPteHasShadow(v51, v50, v52, v53) )
            {
              if ( !HIBYTE(word_140C4E008) && (v48 & 1) != 0 )
                v48 |= 0x8000000000000000uLL;
              *v38 = v48;
              MiWritePteShadow(v38, v48);
LABEL_81:
              v41 = v58;
LABEL_82:
              ++v38;
              if ( !--v62 )
              {
                v31 = v57;
                v30 = v54;
                v25 = v60;
                v59 = (_QWORD *)v10;
                v28 = (_QWORD *)v10;
                LOWORD(v10) = v68;
                goto LABEL_84;
              }
              continue;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v48 & 1) != 0 )
            {
              v48 |= 0x8000000000000000uLL;
            }
            v19 = v56;
          }
          break;
        }
        *v38 = v48;
        goto LABEL_81;
      }
LABEL_84:
      if ( v19 )
      {
        SizeOfBitMap = BitMapHeader.SizeOfBitMap;
        v26 = v31 + v30;
        v29 = v61;
        if ( v31 + v30 != BitMapHeader.SizeOfBitMap )
          continue;
      }
      goto LABEL_86;
    }
    v35 = v33 + 1;
    while ( v35 < v32 )
    {
      if ( *v35 )
        break;
      ++v35;
      v31 += 32;
      if ( v31 == -1 )
        goto LABEL_62;
    }
LABEL_46:
    v19 = v56;
    SizeOfBitMap = BitMapHeader.SizeOfBitMap;
LABEL_47:
    v36 = v31 + v30;
    if ( v31 + v30 < SizeOfBitMap )
    {
      do
      {
        if ( _bittest((const signed __int32 *)BitMapHeader.Buffer, v36) )
          break;
        if ( v31 == -1 )
          break;
        ++v36;
        ++v31;
      }
      while ( v36 < BitMapHeader.SizeOfBitMap );
    }
    goto LABEL_51;
  }
  if ( v21 )
  {
    if ( !*(_QWORD *)(a9 + 120) )
      *(_BYTE *)(v21 + 1) = 2;
  }
  return 0LL;
}
