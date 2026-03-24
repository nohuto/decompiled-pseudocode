/*
 * XREFs of MiIdentifyPfn @ 0x1402C9940
 * Callers:
 *     MiDeletePteRun @ 0x1402365D0 (MiDeletePteRun.c)
 *     MiCopyOnWrite @ 0x14023EC70 (MiCopyOnWrite.c)
 *     MiMakePageAvoidRead @ 0x1402A4700 (MiMakePageAvoidRead.c)
 *     MiIdentifyPfnWrapper @ 0x1402C9880 (MiIdentifyPfnWrapper.c)
 *     MiConvertPrivateToProto @ 0x1403699A0 (MiConvertPrivateToProto.c)
 *     MiDemoteCombinedPte @ 0x14036ABB0 (MiDemoteCombinedPte.c)
 *     MmSetPfnListInfo @ 0x1403733C4 (MmSetPfnListInfo.c)
 *     MmTryIdentifyPage @ 0x1405347A8 (MmTryIdentifyPage.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140230F30 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiGetSubsectionDriverProtos @ 0x14027D460 (MiGetSubsectionDriverProtos.c)
 *     MiStartingOffset @ 0x14029EAA0 (MiStartingOffset.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     MiGetTopLevelPfn @ 0x140333500 (MiGetTopLevelPfn.c)
 *     MiGetLeafPfnBuddy @ 0x1403801FC (MiGetLeafPfnBuddy.c)
 *     MiGetSharedProtos @ 0x1403A5B08 (MiGetSharedProtos.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 *     MiGetBaseResidentPage @ 0x1403F5DB4 (MiGetBaseResidentPage.c)
 *     MiGetPfnPageSizeIndex @ 0x1403F6158 (MiGetPfnPageSizeIndex.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     MiIsActivePfnCold @ 0x1405506DC (MiIsActivePfnCold.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5AE8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B5CCC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiIdentifyPfn(__m128i *a1, unsigned __int64 *a2)
{
  __m128i v2; // xmm0
  __m128i v5; // xmm1
  __m128i v6; // xmm2
  __int64 v7; // r15
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // r8
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rbx
  __int64 BaseResidentPage; // rax
  __m128i *v15; // r8
  unsigned int v16; // r9d
  __int64 PfnPageSizeIndex; // r10
  unsigned __int64 v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rsi
  unsigned __int64 v22; // rbx
  __int64 result; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // r8
  _DWORD *v28; // r9
  __int64 v29; // rsi
  __int64 v30; // rax
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // r8
  unsigned __int64 v35; // rdx
  __int64 v36; // rsi
  __int64 v37; // r12
  struct _KPRCB *CurrentPrcb; // r15
  _DWORD *SchedulerAssist; // rcx
  int v40; // eax
  _DWORD *v41; // rcx
  int v42; // eax
  __int64 v43; // rdx
  bool v44; // zf
  unsigned __int32 v45; // eax
  struct _KPRCB *v46; // rcx
  _DWORD *v47; // rdx
  int v48; // eax
  unsigned __int64 v49; // rdx
  __int16 v50; // r8
  unsigned __int64 v51; // rbx
  unsigned __int64 v52; // rbx
  unsigned __int64 v53; // rbx
  int v54; // eax
  __int64 v55; // rsi
  unsigned __int64 v56; // r15
  unsigned int v57; // r14d
  unsigned __int64 v58; // r15
  unsigned int SystemRegionType; // ecx
  __int64 v60; // r9
  __int64 v61; // rdx
  ULONG_PTR v62; // rbx
  __int64 TopLevelPfn; // rax
  unsigned __int64 v64; // rcx
  int v65; // eax
  unsigned __int64 v66; // rcx
  unsigned __int64 v67; // rsi
  __int64 v68; // r8
  unsigned __int64 v69; // rdx
  ULONG_PTR v70; // r8
  ULONG_PTR v71; // rbx
  int v72; // esi
  __int64 v73; // rcx
  __int64 v74; // r13
  __int64 *v75; // rcx
  __int64 v76; // rax
  char v77; // [rsp+30h] [rbp-59h]
  int v78; // [rsp+34h] [rbp-55h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-51h]
  __int64 v80; // [rsp+40h] [rbp-49h] BYREF
  __m128i v81; // [rsp+48h] [rbp-41h] BYREF
  __m128i v82; // [rsp+58h] [rbp-31h]
  __m128i v83; // [rsp+68h] [rbp-21h]
  __int64 v84; // [rsp+78h] [rbp-11h]
  _OWORD v85[2]; // [rsp+80h] [rbp-9h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+5Fh]

  v2 = *a1;
  v5 = a1[1];
  BugCheckParameter2 = (ULONG_PTR)a1;
  v6 = a1[2];
  v81 = v2;
  v82 = v5;
  v83 = v6;
  v7 = (__int64)a1[0x5800000000LL].m128i_i64 / 48;
  v84 = v7;
  a2[1] = v7;
  v78 = _mm_cvtsi128_si32(_mm_srli_si128(v6, 2));
  v8 = v78 & 7;
  LOBYTE(v10) = _mm_cvtsi128_si32(_mm_srli_si128(v6, 3));
  v11 = (unsigned __int8)v10;
  LOBYTE(v11) = (v10 & 8) != 0;
  v77 = v11;
  if ( (v10 & 8) != 0 )
    v10 = 5;
  else
    v10 = (unsigned __int8)v10;
  v12 = v83.m128i_u64[1];
  v9 = *a2 & 0xFFFFFFFFFFFFFF8FuLL | (16LL * (v78 & 7));
  v13 = v9 ^ (v9 ^ ((unsigned __int64)v10 << 57)) & 0xE00000000000000LL;
  *a2 = v13;
  if ( (v12 & 0x1000000000LL) == 0 )
  {
    switch ( (int)v8 )
    {
      case 0:
      case 1:
      case 5:
        return 1LL;
      case 2:
      case 3:
      case 4:
        if ( v83.m128i_i16[0] )
        {
          v13 |= 0x100uLL;
          *a2 = v13;
        }
        if ( (v82.m128i_i64[1] & 0x4000000000000000LL) != 0 )
        {
          if ( !(unsigned int)MI_PFN_IS_PROTO(&v81) )
            a2[2] = (v81.m128i_i64[1] << 25 >> 16) & 0xFFFFFFFFFFFFF000uLL;
          *a2 = v13 & 0xFFFFFFFFFFFFFFF0uLL;
          return 1LL;
        }
        if ( (unsigned int)MiIsActivePfnCold(&v81) )
        {
          v13 |= 0x80uLL;
LABEL_33:
          *a2 = v13;
        }
LABEL_34:
        if ( (unsigned int)MI_PFN_IS_PROTO(&v81) )
        {
          v29 = v82.m128i_i64[0];
          if ( (v82.m128i_i16[0] & 0x400) != 0 )
          {
            if ( qword_140C4DF40 && (v82.m128i_i8[0] & 0x10) == 0 )
              v29 = v82.m128i_i64[0] & ~qword_140C4DF40;
            v36 = v29 >> 16;
            v37 = *(_QWORD *)v36;
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              LOBYTE(v26) = -1;
              ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v37 + 72, v26);
            }
            else
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v78 = 0;
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              if ( SchedulerAssist )
              {
                if ( CurrentPrcb->NestingLevel <= 1u )
                {
                  v40 = SchedulerAssist[6];
                  SchedulerAssist[6] = v40 + 1;
                  if ( v40 == -1 )
                    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
              }
              if ( _interlockedbittestandset((volatile signed __int32 *)(v37 + 72), 0x1Fu) )
              {
                v41 = CurrentPrcb->SchedulerAssist;
                if ( v41 )
                {
                  if ( CurrentPrcb->NestingLevel <= 1u )
                  {
                    v42 = v41[6] - 1;
                    v41[6] = v42;
                    if ( !v42 )
                      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                  }
                }
                LOBYTE(v26) = -1;
                v78 = ExpWaitForSpinLockExclusiveAndAcquire(v37 + 72, v26, v27, v28);
              }
              v43 = *(unsigned int *)(v37 + 72);
              if ( (*(_DWORD *)(v37 + 72) & 0xBFFFFFFF) != 0x80000000 )
              {
                do
                {
                  if ( (v43 & 0x40000000) == 0 )
                  {
                    v45 = _InterlockedCompareExchange((volatile signed __int32 *)(v37 + 72), v43 | 0x40000000, v43);
                    v44 = (_DWORD)v43 == v45;
                    v43 = v45;
                    if ( !v44 )
                      continue;
                  }
                  KeYieldProcessorEx(&v78, v43, v27, (__int64)v28);
                  v43 = *(unsigned int *)(v37 + 72);
                }
                while ( (v43 & 0xBFFFFFFF) != 0x80000000 );
              }
            }
            if ( (*(_QWORD *)(v37 + 64) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
            {
              a2[2] = *(_QWORD *)((*(_QWORD *)(v37 + 64) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18);
              if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
                ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v37 + 72, retaddr);
              else
                *(_DWORD *)(v37 + 72) = 0;
              v46 = KeGetCurrentPrcb();
              v47 = v46->SchedulerAssist;
              if ( v47 )
              {
                if ( v46->NestingLevel <= 1u )
                {
                  v48 = v47[6] - 1;
                  v47[6] = v48;
                  if ( !v48 )
                    KiRemoveSystemWorkPriorityKick(v46);
                }
              }
              a2[2] ^= (*((_DWORD *)a2 + 4) ^ (*(_DWORD *)(v37 + 56) >> 5)) & 1;
              v49 = *(_QWORD *)(v36 + 8);
              if ( v49 )
              {
                v50 = *(_WORD *)(v36 + 34);
                if ( (v50 & 2) != 0 && (*(_DWORD *)(v37 + 56) & 0x4000000) != 0 )
                {
                  *a2 ^= (*a2 ^ MiStartingOffset((__int64 *)v36, v49, 0xFFFFFFFF)) & 0x1FFFFFFFFFFFE00LL;
                }
                else
                {
                  v51 = v81.m128i_i64[1] | 0x8000000000000000uLL;
                  if ( (*(_DWORD *)(*(_QWORD *)v36 + 56LL) & 0x20) != 0 )
                  {
                    if ( v51 < v49 || v51 >= v49 + 8LL * *(unsigned int *)(v36 + 44) )
                    {
                      if ( (v50 & 2) != 0 )
                        v52 = (v51 << 9) - (*(_QWORD *)(MiGetSharedProtos(*(_QWORD *)v36, 0xFFFFFFFFLL, v36) + 72) << 9);
                      else
                        v52 = (v51 << 9) - (*(_QWORD *)(MiGetSubsectionDriverProtos((_QWORD *)v36) + 72) << 9);
                    }
                    else
                    {
                      v52 = (v51 << 9) - (v49 << 9);
                    }
                    v53 = ((unsigned __int64)*(unsigned int *)(v36 + 36) << 9) + (v52 & 0xFFFFFFFFFFFFF000uLL);
                  }
                  else
                  {
                    v53 = ((__int64)(v51 - v49) >> 3 << 12)
                        + ((*(unsigned int *)(v36 + 36) | ((unsigned __int64)(*(_WORD *)(v36 + 32) & 0xFFC0) << 26)) << 12);
                  }
                  *a2 ^= (*a2 ^ v53) & 0x1FFFFFFFFFFFE00LL;
                }
              }
              v54 = *(_DWORD *)(v37 + 56);
              if ( (v54 & 8) == 0 || (v54 & 1) != 0 )
                *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 1;
              else
                *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 8;
            }
            else
            {
              *a2 = *a2 & 0xFFFFFFFFFFFFFE8FuLL | 0x10;
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v37 + 72));
            }
          }
          else
          {
            v30 = v81.m128i_i64[1];
            v31 = v81.m128i_i64[1] | 0x8000000000000000uLL;
            a2[2] = v81.m128i_i64[1] | 0x8000000000000000uLL;
            if ( v30 > 0 )
            {
              a2[2] = v31 | 1;
              v32 = *(_QWORD *)(v31 - 16);
              if ( v32 >= 0x1000000000000LL )
                v32 = 0xFFFFFFFFFFFFLL;
              v13 = *a2 ^ (*a2 ^ (v32 << 9)) & 0x1FFFFFFFFFFFE00LL;
            }
            *a2 = v13 & 0xFFFFFFFFFFFFFFF0uLL | 2;
          }
          return 1LL;
        }
        v55 = v81.m128i_i64[1];
        v56 = v81.m128i_u64[1];
        if ( v81.m128i_i64[1] && ((v12 >> 60) & 7) != 1 )
          v56 = v81.m128i_i64[1] | 0x8000000000000000uLL;
        if ( (unsigned int)MiGetSystemRegionType(v56) == 5 )
        {
          *a2 = (v13 ^ (v13 ^ ((v56 - 1432) << 9)) & 0x1FFFFFFFFFFFE00LL) & 0xFFFFFFFFFFFFFFF0uLL | 3;
          a2[2] = 0xFFFFF6FB7DBED000uLL;
          return 1LL;
        }
        if ( v56 == -8LL )
        {
          *a2 = v13 & 0xFFFFFFFFFFFFFFF0uLL | 5;
          a2[2] = (unsigned __int64)MmBadPointer;
          return 1LL;
        }
        v80 = (v12 >> 60) & 7;
        if ( v80 != 1 )
        {
          v57 = 0;
          if ( v56 )
            v58 = (__int64)(v56 << 25) >> 16;
          else
            v58 = 0LL;
          SystemRegionType = MiGetSystemRegionType(v58);
          if ( SystemRegionType == 5 )
          {
            a2[2] = v58;
            *a2 = v13 & 0xFFFFFFFFFFFFFFF0uLL | 5;
            return 1LL;
          }
          v61 = 0xFFFFFFFFFLL;
          a2[2] = v58 & 0xFFFFFFFFFFFFF000uLL;
          if ( (v83.m128i_i64[1] & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
          {
            result = 1LL;
            if ( SystemRegionType == 9 )
              *a2 = v13 & 0xFFFFFFFFFFFFFFF0uLL | 6;
            else
              *a2 = v13 & 0xFFFFFFFFFFFFFFF0uLL | 0xA;
            return result;
          }
          if ( v58 > 0x7FFFFFFEFFFFLL )
          {
            if ( v80 == 2 )
            {
              *a2 = v13 & 0xFFFFFFFFFFFFFFF0uLL | 0xB;
              return 1LL;
            }
            if ( SystemRegionType == 1 )
            {
              v62 = BugCheckParameter2;
              TopLevelPfn = MiGetTopLevelPfn(BugCheckParameter2);
              if ( (*(_QWORD *)(TopLevelPfn + 24) & 0x4000000000000000LL) != 0 )
              {
                *a2 &= 0xFE000000000001FFuLL;
                v64 = *a2;
              }
              else
              {
                v64 = *a2 & 0xFF000000000001FFuLL | ((*(_QWORD *)TopLevelPfn & 0xFFFFFFFFFFE0000LL | 0x1000000000000000uLL) >> 4);
                *a2 = v64;
              }
              if ( TopLevelPfn != v62 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
                v64 = *a2;
              }
              *a2 = v64 & 0xFFFFFFFFFFFFFFF0uLL | 7;
              return 1LL;
            }
            if ( SystemRegionType == 6 )
            {
              *a2 = v13 & 0xFFFFFFFFFFFFFFF0uLL | 4;
              return 1LL;
            }
            if ( SystemRegionType <= 0xE )
            {
              v65 = 20992;
              if ( _bittest(&v65, SystemRegionType) )
              {
                *a2 = v13 & 0xFFFFFFFFFFFFFFF0uLL | 6;
                return 1LL;
              }
            }
          }
          if ( (v78 & 7) == 6 && ((v81.m128i_i8[0] & 1) == 0 || v77) )
          {
            if ( v58 > 0x7FFFFFFEFFFFLL )
            {
              v66 = (((unsigned __int64)qword_140C4FB38 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              v67 = v55 | 0x8000000000000000uLL;
              if ( v67 >= 0xFFFFF68000000000uLL )
              {
                while ( 1 )
                {
                  if ( v67 > 0xFFFFF6FFFFFFFFFFuLL )
                    goto LABEL_144;
                  if ( v67 >= v66
                    && v67 <= (((unsigned __int64)qword_140C4E368 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
                  {
                    break;
                  }
                  ++v57;
                  v66 &= 0xFFFFFFFFFFFFF000uLL;
                  v67 = (__int64)(v67 << 25) >> 16;
                  if ( v67 < 0xFFFFF68000000000uLL )
                    goto LABEL_144;
                }
                v68 = MiGetTopLevelPfn(BugCheckParameter2);
                v69 = *a2 & 0xFF000000000001FFuLL | ((*(_QWORD *)v68 & 0xFFFFFFFFFFE0000LL | 0x1000000000000000uLL) >> 4);
                *a2 = v69;
                if ( v68 != BugCheckParameter2 )
                {
                  _InterlockedAnd64((volatile signed __int64 *)(v68 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  v69 = *a2;
                }
                *a2 = v69 & 0xFFFFFFFFFFFFFFF0uLL | 0xC;
                return 1LL;
              }
            }
LABEL_144:
            if ( v58 < 0xFFFFF68000000000uLL || v58 > 0xFFFFF6FFFFFFFFFFuLL )
            {
              *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 5;
              return 1LL;
            }
          }
          else
          {
            v70 = BugCheckParameter2;
            v71 = BugCheckParameter2;
            v72 = 0;
            memset(v85, 0, sizeof(v85));
            v73 = *(_QWORD *)(BugCheckParameter2 + 40);
            if ( (v73 & 0xFFFFFFFFFLL) != v84 )
            {
              do
              {
                v74 = v73 & 0xFFFFFFFFFLL;
                v71 = 48 * (v73 & 0xFFFFFFFFFLL) - 0x58000000000LL;
                if ( (unsigned int)++v72 > 4 )
                  KeBugCheckEx(0x1Au, 0x9696uLL, BugCheckParameter2, 0LL, 0LL);
                LODWORD(v80) = 0;
                *((_QWORD *)v85 + (unsigned int)(v72 - 1)) = v71;
                if ( _interlockedbittestandset64((volatile signed __int32 *)(v71 + 24), 0x3FuLL) )
                {
                  do
                  {
                    do
                      KeYieldProcessorEx(&v80, v61, v70, v60);
                    while ( *(__int64 *)(v71 + 24) < 0 );
                  }
                  while ( _interlockedbittestandset64((volatile signed __int32 *)(v71 + 24), 0x3FuLL) );
                  v61 = 0xFFFFFFFFFLL;
                }
                v73 = *(_QWORD *)(v71 + 40);
              }
              while ( (v73 & 0xFFFFFFFFFLL) != v74 );
              v70 = BugCheckParameter2;
            }
            v75 = (__int64 *)v85;
            do
            {
              v76 = *v75;
              if ( !*v75 )
                break;
              if ( v76 != v71 )
                _InterlockedAnd64((volatile signed __int64 *)(v76 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              ++v57;
              ++v75;
            }
            while ( v57 < 4 );
            *a2 = *a2 & 0xFF000000000001FFuLL | ((*(_QWORD *)v71 & 0xFFFFFFFFFFE0000LL | 0x1000000000000000uLL) >> 4);
            if ( v71 != v70 )
              _InterlockedAnd64((volatile signed __int64 *)(v71 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v58 < 0xFFFFF68000000000uLL || v58 > 0xFFFFF6FFFFFFFFFFuLL )
            {
              if ( v58 < qword_140C4FB38 || v58 > qword_140C4E368 )
                *a2 &= 0xFFFFFFFFFFFFFFF0uLL;
              else
                *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 0xC;
              return 1LL;
            }
          }
          *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 3;
          return 1LL;
        }
LABEL_52:
        *a2 = (v13 ^ (v13 ^ (MiGetLeafPfnBuddy(&v81, v33, v34) << 9)) & 0x1FFFFFFFFFFFE00LL) & 0xFFFFFFFFFFFFFFF0uLL | 9;
        return 1LL;
      case 6:
        if ( (v81.m128i_i8[0] & 1) != 0 && !(_BYTE)v11 && v83.m128i_i16[0] <= 1u )
          goto LABEL_34;
        v13 |= 0x100uLL;
        goto LABEL_33;
      case 7:
        v13 |= 0x100uLL;
        *a2 = v13;
        if ( !(unsigned int)MI_PFN_IS_PROTO(&v81) )
          a2[2] = (v81.m128i_i64[1] << 25 >> 16) & 0xFFFFFFFFFFFFF000uLL;
        if ( ((v12 >> 60) & 7) == 1 )
          goto LABEL_52;
        v35 = v13 & 0xFFFFFFFFFFFFFFF0uLL;
        if ( (v12 & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
          v35 = v13 & 0xFFFFFFFFFFFFFFF0uLL | 0xA;
        *a2 = v35;
        return 1LL;
    }
  }
  BaseResidentPage = MiGetBaseResidentPage(a1, v8, v11);
  PfnPageSizeIndex = (unsigned int)MiGetPfnPageSizeIndex(BaseResidentPage);
  if ( v16 == 6 && (unsigned int)MiIsActivePfnCold(v15) )
    *a2 |= 0x80uLL;
  v18 = v15->m128i_u64[1];
  if ( v18 && (((unsigned __int64)v15[2].m128i_i64[1] >> 60) & 7) != 1 )
    v18 |= 0x8000000000000000uLL;
  if ( v15 != a1 )
    _InterlockedAnd64(&v15[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  v19 = MiLargePageSizes[PfnPageSizeIndex];
  v20 = v7 & ~(v19 - 1);
  v21 = v20 + v19 - v7;
  if ( v16 == 6 )
  {
    v22 = *a2 & 0xFFFFFFFFFFFFFE8FuLL | 0x160;
    *a2 = v22;
    if ( v18 )
      v18 += 8 * (v7 - v20);
    if ( (unsigned int)MiGetSystemRegionType(v18) == 5 )
    {
      *a2 = (v22 ^ (v22 ^ ((v18 - 1432) << 9)) & 0x1FFFFFFFFFFFE00LL) & 0xFFFFFFFFFFFFFFF0uLL | 3;
      result = v21;
      a2[2] = 0xFFFFF6FB7DBED000uLL;
    }
    else
    {
      if ( v18 )
        v18 = (__int64)(v18 << 25) >> 16;
      if ( (unsigned int)MiGetSystemRegionType(v18) == 5 )
      {
        a2[2] = v18;
        result = v21;
        *a2 = v22 & 0xFFFFFFFFFFFFFFF0uLL | 5;
      }
      else
      {
        a2[2] = v18 & 0xFFFFFFFFFFFFF000uLL;
        v24 = v22 & 0xFFFFFFFFFFFFFFF0uLL | 6;
        v25 = v22 & 0xFFFFFFFFFFFFFFF0uLL | 0xD;
        if ( v18 > 0x7FFFFFFEFFFFLL )
          v25 = v24;
        result = v21;
        *a2 = v25;
      }
    }
  }
  else
  {
    if ( v16 == 5 )
      v16 = 1;
    result = v21;
    *a2 = *a2 & 0xF1FFFFFFFFFFFF8FuLL | (16LL * v16) & 0xF1FFFFFFFFFFFFFFuLL;
  }
  return result;
}
