/*
 * XREFs of MiIdentifyPfn @ 0x14025E5D0
 * Callers:
 *     MiIdentifyPfnWrapper @ 0x14025C920 (MiIdentifyPfnWrapper.c)
 *     MiMakePageAvoidRead @ 0x140272670 (MiMakePageAvoidRead.c)
 *     MiDeletePteRun @ 0x140279760 (MiDeletePteRun.c)
 *     MiCombineInitialInstance @ 0x14029CD58 (MiCombineInitialInstance.c)
 *     MiDemoteCombinedPte @ 0x14029DF88 (MiDemoteCombinedPte.c)
 *     MiCopyOnWrite @ 0x140319F00 (MiCopyOnWrite.c)
 *     MiCombineWithExisting @ 0x14034A4C4 (MiCombineWithExisting.c)
 *     MmSetPfnListInfo @ 0x140387180 (MmSetPfnListInfo.c)
 *     MmTryIdentifyPage @ 0x140624300 (MmTryIdentifyPage.c)
 *     MiUpdateBadPfnIdentity @ 0x140628ED0 (MiUpdateBadPfnIdentity.c)
 * Callees:
 *     MiGetTopLevelPfn @ 0x14022A3D0 (MiGetTopLevelPfn.c)
 *     MiStartingOffset @ 0x14028C530 (MiStartingOffset.c)
 *     MiGetSharedProtos @ 0x1402CCDF8 (MiGetSharedProtos.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSubsectionDriverProtos @ 0x1403443A4 (MiGetSubsectionDriverProtos.c)
 *     MiGetLeafVa @ 0x140346C50 (MiGetLeafVa.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140350400 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     MiGetLeafPfnBuddy @ 0x140386E8C (MiGetLeafPfnBuddy.c)
 *     MiHyperPage @ 0x1403B6DD0 (MiHyperPage.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140462ED8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140608CDC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiGetPfnPidSafe @ 0x1406242B4 (MiGetPfnPidSafe.c)
 */

unsigned __int64 __fastcall MiIdentifyPfn(unsigned __int64 a1, _QWORD *a2)
{
  __int64 v4; // r12
  __int128 v5; // xmm0
  ULONG_PTR v6; // rbx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  unsigned __int64 v9; // rcx
  char v10; // r9
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  ULONG_PTR v14; // r12
  unsigned int v15; // r13d
  int v16; // r14d
  ULONG_PTR v17; // rdi
  unsigned int v18; // esi
  int v19; // r10d
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // edx
  __int64 *v23; // rcx
  unsigned __int64 v24; // r11
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  __int64 v27; // r9
  unsigned __int64 v28; // r14
  int v29; // esi
  __int64 v30; // r10
  __int64 v31; // r8
  unsigned __int64 v32; // r10
  unsigned __int64 v33; // r9
  unsigned __int64 result; // rax
  __int64 v35; // rdi
  char v36; // r14
  __int64 v37; // rsi
  unsigned __int64 v38; // rbx
  __int64 v39; // rcx
  unsigned int v40; // r13d
  unsigned __int64 v41; // rbx
  unsigned int v42; // r10d
  ULONG_PTR v43; // r10
  ULONG_PTR v44; // rdi
  unsigned int v45; // r14d
  __int64 v46; // rsi
  __int64 v47; // rcx
  unsigned int v48; // edx
  __int64 *v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rdi
  __int64 v52; // rsi
  unsigned __int64 v53; // rdx
  __int16 v54; // r8
  unsigned __int64 v55; // rbx
  unsigned __int64 v56; // rbx
  unsigned __int64 v57; // rbx
  __int64 v58; // rcx
  unsigned __int64 v59; // rax
  int v60; // ecx
  __int64 v61; // rdx
  unsigned __int64 i; // rcx
  unsigned __int64 v63; // r9
  unsigned __int64 LeafVa; // rax
  __int64 v65; // r9
  __int64 v66; // r10
  __int64 v67; // r8
  unsigned __int64 v68; // r9
  ULONG_PTR v69; // rbx
  __int64 v70; // rax
  __int64 v71; // r8
  unsigned __int64 v72; // rdx
  unsigned __int64 v73; // rcx
  unsigned __int64 v74; // rcx
  unsigned __int64 v75; // rax
  unsigned __int64 LeafPfnBuddy; // rax
  unsigned __int64 v77; // r9
  unsigned int PfnPidSafe; // eax
  __int64 v79; // r8
  _QWORD *v80; // rax
  unsigned __int64 v81; // rsi
  unsigned int v82; // r13d
  __int64 TopLevelPfn; // rax
  __int64 v84; // r8
  unsigned __int64 v85; // r8
  __int64 SharedProtos; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-69h] BYREF
  unsigned __int64 v88; // [rsp+38h] [rbp-61h] BYREF
  int v89; // [rsp+40h] [rbp-59h] BYREF
  __int128 v90; // [rsp+48h] [rbp-51h] BYREF
  __int128 v91; // [rsp+58h] [rbp-41h]
  __int128 v92; // [rsp+68h] [rbp-31h]
  __int128 v93; // [rsp+78h] [rbp-21h] BYREF
  __int64 v94; // [rsp+88h] [rbp-11h]
  _OWORD v95[2]; // [rsp+90h] [rbp-9h] BYREF
  void *retaddr; // [rsp+F8h] [rbp+5Fh]

  v88 = a1;
  if ( qword_140C67A68 )
  {
    v73 = (a1 >> 18) & 0x3FFFFF;
    if ( _bittest64((const signed __int64 *)qword_140C67A68, v73) )
    {
      v74 = *(_QWORD *)(qword_140C67A70 + 8 * v73) & 7LL;
      if ( v74 > 5 )
      {
LABEL_169:
        v75 = *a2 | 0x70LL;
      }
      else
      {
        switch ( (int)v74 )
        {
          case 1:
            v75 = *a2 & 0xFFFFFFFFFFFFFF8FuLL;
            break;
          case 2:
            v75 = *a2 & 0xFFFFFFFFFFFFFF8FuLL | 0x10;
            break;
          case 3:
            v75 = *a2 & 0xFFFFFFFFFFFFFF8FuLL | 0x60;
            break;
          case 4:
            v75 = *a2 & 0xFFFFFFFFFFFFFF8FuLL | 0x50;
            break;
          default:
            goto LABEL_169;
        }
      }
      a2[1] = a1;
      *a2 = v75 & 0xF0000000000000F0uLL | 0x10E;
      return (a1 & 0xFFFFFFFFFFFC0000uLL) - a1 + 0x40000;
    }
  }
  v4 = 48 * a1;
  v5 = *(_OWORD *)(48 * a1 - 0x220000000000LL);
  v6 = 48 * a1 - 0x220000000000LL;
  v7 = *(_OWORD *)(v6 + 16);
  BugCheckParameter2 = v6;
  v90 = v5;
  v8 = *(_OWORD *)(v6 + 32);
  a2[1] = a1;
  v91 = v7;
  v92 = v8;
  v10 = BYTE3(v8) & 8;
  if ( (BYTE3(v8) & 8) != 0 )
    v11 = 5LL;
  else
    v11 = BYTE3(v8);
  v12 = *((_QWORD *)&v92 + 1);
  v9 = *a2 & 0xFFFFFFFFFFFFFF8FuLL | (16LL * (BYTE2(v8) & 7));
  v13 = v9 ^ (v9 ^ (v11 << 57)) & 0xE00000000000000LL;
  *a2 = v13;
  if ( (v12 & 0x10000000000LL) != 0 )
  {
    v94 = 0LL;
    v14 = 0xAAAAAAAAAAAAAAABuLL * (v4 >> 4);
    v93 = 0LL;
    v15 = 0;
    v16 = 2;
    v17 = v14;
    v18 = 0;
    v19 = -1;
    while ( 1 )
    {
      v20 = v18;
      v21 = MiLargePageSizes[v16] - 1;
      if ( (v21 & v17) != 0 )
      {
        v17 &= ~v21;
        v6 = 48 * v17 - 0x220000000000LL;
        if ( ++v18 > 3 )
          KeBugCheckEx(0x1Au, 0x9700uLL, v14, v17, 0LL);
        *((_QWORD *)&v93 + v20) = v6;
        v89 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v89);
            while ( *(__int64 *)(v6 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) );
          v19 = -1;
        }
      }
      if ( (*(_BYTE *)(v6 + 36) & 3) != 0 )
        break;
      if ( !v16 )
        KeBugCheckEx(0x1Au, 0x9701uLL, v14, v17, 0LL);
      --v16;
    }
    v22 = 0;
    v23 = (__int64 *)&v93;
    v24 = 0x7FFFFFFFFFFFFFFFLL;
    do
    {
      v25 = *v23;
      if ( !*v23 )
        break;
      if ( v25 != v6 )
        _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      ++v22;
      ++v23;
    }
    while ( v22 < 3 );
    v26 = *(_QWORD *)(v6 + 40);
    v27 = *(_BYTE *)(v6 + 34) & 7;
    if ( (v26 & 0x10000000000LL) != 0 && (*(_BYTE *)(v6 + 36) & 3) != 0 )
      v19 = 3 - (*(_BYTE *)(v6 + 36) & 3);
    v28 = 0LL;
    v29 = 0;
    v30 = MiLargePageSizes[v19];
    v31 = v88 & ~(v30 - 1);
    v32 = v31 + v30 - v88;
    if ( (_DWORD)v27 == 6 )
    {
      if ( ((v26 >> 60) & 7) == 1 )
      {
        v29 = 1;
      }
      else
      {
        v61 = *(_QWORD *)(v6 + 16) >> 3;
        if ( (*(_QWORD *)(v6 + 16) & 0x400LL) != 0 )
          LOBYTE(v61) = *(_QWORD *)(v6 + 16) >> 11;
        if ( (v61 & 1) != 0 )
          *a2 |= 0x80uLL;
      }
      v28 = *(_QWORD *)(v6 + 8);
      if ( v28 )
      {
        if ( ((*(_QWORD *)(v6 + 40) >> 60) & 7) != 1 )
          v28 |= 0x8000000000000000uLL;
        for ( i = (__int64)(v28 << 25) >> 16; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
        {
          if ( i > 0xFFFFF6FFFFFFFFFFuLL )
            break;
          v28 = i;
        }
        v28 += 8 * (v88 - v31);
        if ( (unsigned __int64)MiGetLeafVa(v28) <= 0x7FFFFFFEFFFFLL )
        {
          if ( (*(_QWORD *)v6 & 0xFFFFFFFFFFuLL) > 0x40000 )
          {
            LeafPfnBuddy = MiGetLeafPfnBuddy(v6);
            if ( LeafPfnBuddy < 0xFFFFDE0000000000uLL || LeafPfnBuddy >= 48 * qword_140C65820 - 0x21FFFFFFFFD0LL )
            {
              if ( *(_QWORD *)LeafPfnBuddy != 399680LL )
                v15 = *(_DWORD *)(LeafPfnBuddy + 1088);
            }
            else
            {
              v27 = 1LL;
            }
          }
          else
          {
            v27 = 1LL;
          }
        }
      }
    }
    if ( v6 != BugCheckParameter2 )
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), v24);
    if ( (_DWORD)v27 == 6 )
    {
      v63 = *a2 & 0xFFFFFFFFFFFFFE8FuLL | 0x160;
      *a2 = v63;
      if ( v29 )
      {
        result = v32;
        *a2 = v63 & 0xFE000000000001F0uLL | 9 | ((unsigned __int64)v15 << 9);
        return result;
      }
      if ( v28 >= 0xFFFF800000000000uLL && byte_140C6A058[((v28 >> 39) & 0x1FF) - 256] == 5 )
      {
        *a2 = v63 & 0xFE000000000001F3uLL | ((unsigned __int64)*(unsigned int *)(v28 - 344) << 9) | 3;
        result = v32;
        a2[2] = 0xFFFFF6FB7DBED000uLL;
        return result;
      }
      LeafVa = MiGetLeafVa(v28);
      if ( LeafVa >= 0xFFFF800000000000uLL && byte_140C6A058[((LeafVa >> 39) & 0x1FF) - 256] == 5 )
      {
        a2[2] = LeafVa;
        result = v32;
        *a2 = v65 & 0xFFFFFFFFFFFFFFF0uLL | 5;
        return result;
      }
      a2[2] = LeafVa & 0xFFFFFFFFFFFFF000uLL;
      if ( LeafVa <= 0x7FFFFFFEFFFFLL )
      {
        v77 = v65 & 0xFE000000000001FFuLL | ((unsigned __int64)v15 << 9);
        *a2 = v77;
        v33 = v77 & 0xFFFFFFFFFFFFFFF0uLL | 0xD;
      }
      else
      {
        v33 = v65 & 0xFFFFFFFFFFFFFFF0uLL | 6;
      }
    }
    else
    {
      if ( (_DWORD)v27 == 5 )
        v27 = 1LL;
      v33 = *a2 & 0xF1FFFFFFFFFFFF8FuLL | (16 * v27) & 0xF1FFFFFFFFFFFFFFuLL;
    }
    *a2 = v33;
    return v32;
  }
  v35 = v91;
  v36 = v90;
  if ( (BYTE2(v8) & 7) == 6 )
  {
    if ( (v90 & 1) == 0 || v10 )
    {
      v37 = v13;
    }
    else
    {
      v37 = v13;
      if ( (unsigned __int16)v92 <= 1u )
        goto LABEL_32;
    }
    v37 |= 0x100uLL;
LABEL_99:
    *a2 = v37;
  }
  else
  {
    v37 = v13;
    switch ( BYTE2(v8) & 7 )
    {
      case 0:
      case 1:
      case 5:
        return 1LL;
      case 2:
      case 3:
      case 4:
        if ( (_WORD)v92 )
        {
          v37 = v13 | 0x100;
          *a2 = v13 | 0x100;
        }
        if ( (*((_QWORD *)&v91 + 1) & 0x4000000000000000LL) != 0 )
        {
          if ( v12 >= 0 )
            a2[2] = ((__int64)(*((_QWORD *)&v90 + 1) << 25) >> 16) & 0xFFFFFFFFFFFFF000uLL;
          *a2 = v37 & 0xFFFFFFFFFFFFFFF0uLL;
          return 1LL;
        }
        if ( (v35 & 0x400) != 0 )
          v59 = (unsigned __int64)v35 >> 11;
        else
          v59 = (unsigned __int64)v35 >> 3;
        if ( (v59 & 1) != 0 )
        {
          v37 |= 0x80uLL;
          goto LABEL_99;
        }
        break;
      case 6:
        break;
      case 7:
        v71 = v13 | 0x100;
        *a2 = v71;
        if ( v12 >= 0 )
          a2[2] = ((__int64)(*((_QWORD *)&v90 + 1) << 25) >> 16) & 0xFFFFFFFFFFFFF000uLL;
        if ( (((unsigned __int64)v12 >> 60) & 7) == 1 )
        {
          PfnPidSafe = MiGetPfnPidSafe(&v90, 3LL);
          v72 = v79 & 0xFE000000000001F9uLL | ((unsigned __int64)PfnPidSafe << 9) | 9;
        }
        else if ( (v12 & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL )
        {
          v72 = v71 & 0xFFFFFFFFFFFFFFF0uLL | 0xA;
        }
        else
        {
          v72 = v71 & 0xFFFFFFFFFFFFFFF0uLL;
        }
        *a2 = v72;
        return 1LL;
    }
  }
LABEL_32:
  if ( v12 < 0 )
  {
    if ( (v35 & 0x400) == 0 )
    {
      v66 = *((_QWORD *)&v90 + 1);
      v67 = v37;
      v68 = *((_QWORD *)&v90 + 1) | 0x8000000000000000uLL;
      a2[2] = *((_QWORD *)&v90 + 1) | 0x8000000000000000uLL;
      if ( v66 >= 0 && (v12 & 0x10000000000LL) == 0 && v66 )
      {
        a2[2] = v68 | 1;
        v85 = *(_QWORD *)(v68 + 24);
        if ( v85 >= 0x1000000000000LL )
          v85 = 0xFFFFFFFFFFFFLL;
        v67 = v37 ^ (v37 ^ (v85 << 9)) & 0x1FFFFFFFFFFFE00LL;
      }
      result = 1LL;
      *a2 = v67 & 0xFFFFFFFFFFFFFFF0uLL | 2;
      return result;
    }
    if ( qword_140C657C0 && (v35 & 0x10) == 0 )
      v35 &= ~qword_140C657C0;
    v51 = v35 >> 16;
    v52 = *(_QWORD *)v51;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      LOBYTE(v12) = -1;
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v52 + 72, v12);
    }
    else
    {
      LODWORD(BugCheckParameter2) = 0;
      if ( _interlockedbittestandset((volatile signed __int32 *)(v52 + 72), 0x1Fu) )
        LODWORD(BugCheckParameter2) = ExpWaitForSpinLockExclusiveAndAcquire(v52 + 72);
      while ( (*(_DWORD *)(v52 + 72) & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (*(_DWORD *)(v52 + 72) & 0x40000000) == 0 )
          _InterlockedOr((volatile signed __int32 *)(v52 + 72), 0x40000000u);
        KeYieldProcessorEx(&BugCheckParameter2);
      }
    }
    if ( (*(_QWORD *)(v52 + 64) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
    {
      a2[2] = *(_QWORD *)((*(_QWORD *)(v52 + 64) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v52 + 72, retaddr);
      else
        *(_DWORD *)(v52 + 72) = 0;
      a2[2] ^= (*((_DWORD *)a2 + 4) ^ (*(_DWORD *)(v52 + 56) >> 5)) & 1;
      v53 = *(_QWORD *)(v51 + 8);
      if ( v53 )
      {
        v54 = *(_WORD *)(v51 + 34) & 2;
        if ( v54 && (*(_DWORD *)(v52 + 56) & 0x8000000) != 0 )
        {
          *a2 ^= (*a2 ^ MiStartingOffset(v51, v53, 0xFFFFFFFFLL)) & 0x1FFFFFFFFFFFE00LL;
        }
        else
        {
          v55 = *((_QWORD *)&v90 + 1) | 0x8000000000000000uLL;
          if ( (*(_DWORD *)(*(_QWORD *)v51 + 56LL) & 0x20) != 0 )
          {
            if ( v55 < v53 || v55 >= v53 + 8LL * *(unsigned int *)(v51 + 44) )
            {
              if ( v54 )
                SharedProtos = MiGetSharedProtos(*(_QWORD *)v51, 0xFFFFFFFFLL, v51);
              else
                SharedProtos = MiGetSubsectionDriverProtos(v51);
              v56 = (v55 << 9) - (*(_QWORD *)(SharedProtos + 72) << 9);
            }
            else
            {
              v56 = (v55 << 9) - (v53 << 9);
            }
            v57 = ((unsigned __int64)*(unsigned int *)(v51 + 36) << 9) + (v56 & 0xFFFFFFFFFFFFF000uLL);
          }
          else
          {
            v57 = ((__int64)(v55 - v53) >> 3 << 12)
                + ((*(unsigned int *)(v51 + 36) | ((unsigned __int64)(*(_WORD *)(v51 + 32) & 0xFFC0) << 26)) << 12);
          }
          *a2 ^= (*a2 ^ v57) & 0x1FFFFFFFFFFFE00LL;
        }
      }
      v58 = *a2;
      if ( (*(_DWORD *)(v52 + 56) & 9) == 8 )
      {
        result = 1LL;
        *a2 = v58 & 0xFFFFFFFFFFFFFFF0uLL | 8;
        return result;
      }
      *a2 = v58 & 0xFFFFFFFFFFFFFFF0uLL | 1;
    }
    else
    {
      *a2 = *a2 & 0xFFFFFFFFFFFFFE8FuLL | 0x10;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v52 + 72));
    }
    return 1LL;
  }
  v38 = *((_QWORD *)&v90 + 1);
  if ( *((_QWORD *)&v90 + 1) && (((unsigned __int64)v12 >> 60) & 7) != 1 )
    v38 = *((_QWORD *)&v90 + 1) | 0x8000000000000000uLL;
  if ( v38 >= 0xFFFF800000000000uLL )
  {
    if ( byte_140C6A058[((v38 >> 39) & 0x1FF) - 256] == 5 )
    {
      *a2 = v37 & 0xFE000000000001F3uLL | ((unsigned __int64)*(unsigned int *)(v38 - 344) << 9) | 3;
      a2[2] = 0xFFFFF6FB7DBED000uLL;
    }
    else
    {
      if ( v38 != -8LL )
        goto LABEL_39;
      *a2 = v37 & 0xFFFFFFFFFFFFFFF0uLL | 5;
      a2[2] = MmBadPointer;
    }
    return 1LL;
  }
LABEL_39:
  v39 = ((unsigned __int64)v12 >> 60) & 7;
  if ( v39 == 1 )
  {
    v80 = (_QWORD *)MiGetLeafPfnBuddy(&v90);
    if ( (unsigned __int64)v80 < 0xFFFFDE0000000000uLL
      || (unsigned __int64)v80 >= 48 * qword_140C65820 - 0x21FFFFFFFFD0LL )
    {
      if ( *v80 == 399680LL )
        v82 = 0;
      else
        v82 = MiGetPfnPidSafe(&v90, 3LL);
      v81 = v37 & 0xFE000000000001FFuLL | ((unsigned __int64)v82 << 9);
    }
    else
    {
      v81 = v37 & 0xFFFFFFFFFFFFFF8FuLL | 0x10;
    }
    *a2 = v81 & 0xFFFFFFFFFFFFFFF0uLL | 9;
    return 1LL;
  }
  v40 = 0;
  if ( !v38 )
  {
    v41 = 0LL;
    goto LABEL_43;
  }
  if ( v38 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    *a2 = v37 & 0xF1FFFFFFFFFFFF8FuLL | 0x10;
    return 1LL;
  }
  v41 = (__int64)(v38 << 25) >> 16;
  if ( v41 >= 0xFFFF800000000000uLL )
  {
    v42 = byte_140C6A058[((v41 >> 39) & 0x1FF) - 256];
    if ( v42 == 5 )
    {
      a2[2] = v41;
      result = 1LL;
      *a2 = v37 & 0xFFFFFFFFFFFFFFF0uLL | 5;
      return result;
    }
    goto LABEL_45;
  }
LABEL_43:
  v42 = 0;
LABEL_45:
  a2[2] = v41 & 0xFFFFFFFFFFFFF000uLL;
  if ( (v12 & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL )
  {
    if ( v42 != 9 )
    {
      result = 1LL;
      *a2 = v37 & 0xFFFFFFFFFFFFFFF0uLL | 0xA;
      return result;
    }
    goto LABEL_108;
  }
  if ( v41 <= 0x7FFFFFFEFFFFLL )
    goto LABEL_47;
  if ( v39 == 2 )
  {
    result = 1LL;
    *a2 = v37 & 0xFFFFFFFFFFFFFFF0uLL | 0xB;
    return result;
  }
  if ( v42 != 1 )
  {
    if ( v42 == 6 )
    {
      result = 1LL;
      *a2 = v37 & 0xFFFFFFFFFFFFFFF0uLL | 4;
      return result;
    }
    if ( v42 > 0x10 || (v60 = 86528, !_bittest(&v60, v42)) )
    {
LABEL_47:
      if ( (BYTE2(v8) & 7) == 6 && ((v36 & 1) == 0 || v10) )
      {
        if ( v41 <= 0x7FFFFFFEFFFFLL || !(unsigned int)MiHyperPage(&v90) )
        {
          if ( v41 < 0xFFFFF68000000000uLL || v41 > 0xFFFFF6FFFFFFFFFFuLL )
          {
            *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 5;
            return 1LL;
          }
LABEL_137:
          *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 3;
          return 1LL;
        }
        TopLevelPfn = MiGetTopLevelPfn(BugCheckParameter2);
        *a2 = *a2 & 0xFE000000000001FFuLL | ((unsigned __int64)(unsigned int)MiGetPfnPidSafe(TopLevelPfn, 2LL) << 9);
        if ( v84 != BugCheckParameter2 )
          _InterlockedAnd64((volatile signed __int64 *)(v84 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        v43 = BugCheckParameter2;
        memset(v95, 0, sizeof(v95));
        v44 = BugCheckParameter2;
        v45 = 0;
        if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFFLL) != 0xAAAAAAAAAAAAAAABuLL * (v4 >> 4) )
        {
          do
          {
            v46 = *(_QWORD *)(v44 + 40) & 0xFFFFFFFFFFLL;
            v47 = v45;
            v44 = 48 * v46 - 0x220000000000LL;
            if ( ++v45 > 4 )
              KeBugCheckEx(0x1Au, 0x9696uLL, BugCheckParameter2, 0LL, 0LL);
            *((_QWORD *)v95 + v47) = v44;
            LODWORD(v88) = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v44 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v88);
              while ( *(__int64 *)(v44 + 24) < 0 );
            }
          }
          while ( (*(_QWORD *)(v44 + 40) & 0xFFFFFFFFFFLL) != v46 );
          v43 = BugCheckParameter2;
        }
        v48 = 0;
        v49 = (__int64 *)v95;
        do
        {
          v50 = *v49;
          if ( !*v49 )
            break;
          if ( v50 != v44 )
            _InterlockedAnd64((volatile signed __int64 *)(v50 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          ++v48;
          ++v49;
        }
        while ( v48 < 4 );
        if ( (*(_QWORD *)(v44 + 24) & 0x4000000000000000LL) == 0 )
          v40 = *(_DWORD *)(((*(_QWORD *)v44 >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL) + 0x440);
        *a2 = *a2 & 0xFE000000000001FFuLL | ((unsigned __int64)v40 << 9);
        if ( v44 != v43 )
          _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v41 >= 0xFFFFF68000000000uLL && v41 <= 0xFFFFF6FFFFFFFFFFuLL )
          goto LABEL_137;
        if ( v41 < qword_140C6A1D8 || v41 > qword_140C66CF0 )
        {
          *a2 &= 0xFFFFFFFFFFFFFFF0uLL;
          return 1LL;
        }
      }
      *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 0xC;
      return 1LL;
    }
LABEL_108:
    result = 1LL;
    *a2 = v37 & 0xFFFFFFFFFFFFFFF0uLL | 6;
    return result;
  }
  v69 = BugCheckParameter2;
  v70 = MiGetTopLevelPfn(BugCheckParameter2);
  if ( (*(_QWORD *)(v70 + 24) & 0x4000000000000000LL) == 0 )
    v40 = *(_DWORD *)(((*(_QWORD *)v70 >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL) + 8);
  *a2 = *a2 & 0xFE000000000001FFuLL | ((unsigned __int64)v40 << 9);
  if ( v70 != v69 )
    _InterlockedAnd64((volatile signed __int64 *)(v70 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 7;
  return 1LL;
}
