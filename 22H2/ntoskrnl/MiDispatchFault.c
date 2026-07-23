/*
 * XREFs of MiDispatchFault @ 0x14020EEC0
 * Callers:
 *     MmAccessFault @ 0x14020D050 (MmAccessFault.c)
 *     MiInPagePageTable @ 0x14028C440 (MiInPagePageTable.c)
 * Callees:
 *     MiComputeMaximumFaultCluster @ 0x14020F610 (MiComputeMaximumFaultCluster.c)
 *     MiResolveDemandZeroFault @ 0x14020FB10 (MiResolveDemandZeroFault.c)
 *     MiResolveProtoPteFault @ 0x140215390 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140216750 (MiResolveTransitionFault.c)
 *     MiPageTableLockIsContended @ 0x140288AE0 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x14028BE50 (MiWorkingSetIsContended.c)
 *     MiResolvePageFileFault @ 0x1402E0F08 (MiResolvePageFileFault.c)
 *     MiCheckProtoAccess @ 0x1402E3120 (MiCheckProtoAccess.c)
 *     MiAdvanceFaultList @ 0x1402E40E8 (MiAdvanceFaultList.c)
 *     KeShouldYieldProcessor @ 0x1402F1320 (KeShouldYieldProcessor.c)
 *     MiAdjustFaultList @ 0x140315E38 (MiAdjustFaultList.c)
 *     MiAccessCheck @ 0x14031A8E8 (MiAccessCheck.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRspInIstStack @ 0x140518B38 (KiRspInIstStack.c)
 */

__int64 __fastcall MiDispatchFault(__int64 a1, _QWORD *a2)
{
  __m128i v2; // xmm3
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __m128i v6; // xmm2
  __int128 v7; // xmm4
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int64 v11; // r13
  ULONG_PTR v12; // r15
  unsigned int v13; // esi
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r14
  __int64 v17; // r11
  unsigned __int64 v18; // rbx
  int v19; // ecx
  __int64 v20; // r10
  __int16 v21; // ax
  bool v22; // dl
  void *v23; // rcx
  int v24; // eax
  int v25; // ebx
  __int8 v26; // al
  char v27; // dl
  __int64 v28; // xmm1_8
  __int64 v30; // rax
  __int64 v31; // rcx
  int v32; // eax
  int v33; // eax
  int v34; // eax
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  __int64 v37; // r8
  int v38; // eax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v44; // [rsp+40h] [rbp-C8h]
  __int64 v45; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v46; // [rsp+50h] [rbp-B8h]
  _QWORD *v47; // [rsp+58h] [rbp-B0h]
  __m128i v48; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v49; // [rsp+78h] [rbp-90h]
  __int128 v50; // [rsp+88h] [rbp-80h]
  __m256i v51; // [rsp+98h] [rbp-70h]
  __int128 v52; // [rsp+B8h] [rbp-50h]
  __int128 v53; // [rsp+C8h] [rbp-40h]
  __int128 v54; // [rsp+D8h] [rbp-30h]
  __int64 v55; // [rsp+E8h] [rbp-20h]

  *a2 = 0LL;
  v2 = *(__m128i *)a1;
  v4 = *(_OWORD *)(a1 + 32);
  v5 = *(_OWORD *)(a1 + 80);
  v6 = *(__m128i *)(a1 + 48);
  v7 = *(_OWORD *)(a1 + 16);
  v47 = a2;
  v50 = v4;
  v8 = *(_OWORD *)(a1 + 64);
  v45 = 0LL;
  v52 = v5;
  v9 = *(_OWORD *)(a1 + 112);
  *(_OWORD *)&v51.m256i_u64[2] = v8;
  v10 = *(_OWORD *)(a1 + 96);
  v54 = v9;
  v48 = v2;
  v53 = v10;
  *(_QWORD *)&v10 = *(_QWORD *)(a1 + 128);
  *(__m128i *)v51.m256i_i8 = v6;
  v48.m128i_i64[1] = _mm_srli_si128(v2, 8).m128i_u64[0];
  v11 = v48.m128i_i8[8] & 2;
  v55 = v10;
  v46 = _mm_srli_si128(v6, 8).m128i_u64[0];
  v12 = (((unsigned __int64)v2.m128i_i64[0] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v49 = v7;
  v13 = 0;
  if ( (v7 & 1) == 0 || (v44 = v7 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(v7 & 0xFFFFFFFFFFFFFFFEuLL) != 5) )
  {
    if ( (v7 & 1) == 0
      || (v44 = v7 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(v7 & 0xFFFFFFFFFFFFFFFEuLL) != 2)
      && ((v7 & 1) == 0 || (v44 = v7 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(v7 & 0xFFFFFFFFFFFFFFFEuLL) != 1)) )
    {
      v44 = 0LL;
    }
  }
  v14 = 0LL;
  v15 = MiComputeMaximumFaultCluster(&v48, 0LL);
  v16 = v15;
  if ( v15 > 1 )
    v51.m256i_i8[21] |= 4u;
  v51.m256i_i8[21] &= ~2u;
  if ( !v15 )
    goto LABEL_35;
  v17 = v49;
  while ( 1 )
  {
    if ( (v51.m256i_i8[21] & 8) != 0 )
    {
      if ( (*(_BYTE *)(v46 + 187) & 8) != 0
        || (*(_BYTE *)(v46 + 184) & 0x40) != 0
        && (unsigned __int64)(*(_QWORD *)(v46 + 120) + 1LL) >= *(_QWORD *)(v46 + 152)
        || (unsigned int)MiWorkingSetIsContended(v46)
        || (v51.m256i_i8[21] & 1) != 0
        || (unsigned int)MiPageTableLockIsContended(v37)
        || KeShouldYieldProcessor() )
      {
        goto LABEL_35;
      }
      v17 = v49;
    }
    v18 = *(_QWORD *)v12;
    if ( v12 >= 0xFFFFF6FB7DBED000uLL && v12 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
    {
      if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v18 & 1) != 0
        && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v40 = *((_QWORD *)&Flink->Flink + ((v12 >> 3) & 0x1FF));
          v41 = v18 | 0x20;
          if ( (v40 & 0x20) == 0 )
            v41 = *(_QWORD *)v12;
          v18 = v41;
          if ( (v40 & 0x42) != 0 )
            v18 = v41 | 0x42;
        }
      }
      v17 = v49;
    }
    if ( !v18 || (v18 & 1) != 0 )
    {
      v19 = 0;
      goto LABEL_27;
    }
    LODWORD(v43) = 256;
    if ( (v18 & 0x400) != 0 )
    {
      if ( (_QWORD)v53 )
        goto LABEL_14;
      v30 = MiCheckProtoAccess(v12, &v43);
      v17 = v49;
      if ( !v30 )
      {
        v19 = -1073741819;
        goto LABEL_27;
      }
      LODWORD(v31) = v43;
      *(_QWORD *)&v53 = v30;
    }
    else
    {
      if ( (v51.m256i_i8[21] & 8) == 0 )
        goto LABEL_14;
      v31 = (v18 >> 5) & 0x1F;
    }
    if ( (_DWORD)v31 == 256 )
      goto LABEL_14;
    if ( (v31 & 0xFFFFFFF8) == 0x10 && (v51.m256i_i8[21] & 8) != 0 )
    {
      v19 = -1073741819;
      goto LABEL_27;
    }
    v32 = MiAccessCheck(v12, v17, 0);
    v17 = v49;
    v19 = v32;
    if ( !v32 )
    {
LABEL_14:
      if ( (v49 & 1) != 0 && *(_BYTE *)(v17 & 0xFFFFFFFFFFFFFFFEuLL) == 2 )
      {
        MiAdjustFaultList(&v48);
        v17 = v49;
      }
      if ( (v18 & 0x400) != 0 )
      {
        v33 = MiResolveProtoPteFault(&v48, v11, &v45);
        v17 = v49;
        v19 = v33;
        goto LABEL_27;
      }
      if ( (v18 & 0x800) != 0 )
      {
        v34 = MiResolveTransitionFault(&v48, v12, 0LL, v11, &v45);
        v17 = v49;
        v19 = v34;
        goto LABEL_27;
      }
      if ( (v18 & 4) != 0 )
      {
        if ( (v51.m256i_i8[21] & 8) != 0 )
        {
          if ( v44 )
          {
            MiAdvanceFaultList(v44);
            v17 = v49;
          }
          v19 = -1073740748;
        }
        else
        {
          v38 = MiResolvePageFileFault(&v48, v12, 0LL, &v45);
          v17 = v49;
          v19 = v38;
        }
        goto LABEL_27;
      }
      v19 = 0;
      v20 = v17 & 1;
      if ( (v17 & 1) != 0
        && *(_BYTE *)(v17 & 0xFFFFFFFFFFFFFFFEuLL) == 1
        && (*(_DWORD *)((v17 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 0x4000) == 0 )
      {
        goto LABEL_27;
      }
      if ( (v17 & 1) == 0 )
        goto LABEL_20;
      if ( *(_BYTE *)(v17 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
      {
        if ( (v17 & 1) == 0 )
          goto LABEL_20;
        if ( *(_BYTE *)(v17 & 0xFFFFFFFFFFFFFFFEuLL) == 3 )
          goto LABEL_98;
        if ( (v17 & 1) == 0 )
        {
LABEL_20:
          if ( !v17 )
            goto LABEL_26;
          v21 = *(_WORD *)(v17 + 368);
          v22 = 0;
          if ( v21 == 16 )
          {
            if ( (*(_DWORD *)(v17 + 376) & 0x200) == 0
              && ((unsigned int)KiRspInIstStack(3LL, *(_QWORD *)(v17 + 384)) || (unsigned int)KiRspInIstStack(2LL, v42)) )
            {
              goto LABEL_26;
            }
            v23 = &ExpInterlockedPopEntrySListFault;
            v35 = *(_QWORD *)(v17 + 360);
            v22 = KiDynamicTraceEnabled && v35 >= ControlPc && v35 < qword_140CFCBE0 && KeGetCurrentIrql() == 15;
          }
          else
          {
            if ( v21 != 51 )
              goto LABEL_26;
            v23 = (void *)KeUserPopEntrySListFault;
          }
          if ( *(void **)(v17 + 360) != v23 && !v22 )
            goto LABEL_26;
          goto LABEL_98;
        }
        if ( *(_BYTE *)(v17 & 0xFFFFFFFFFFFFFFFEuLL) != 6 )
        {
          if ( (v17 & 1) != 0 )
            goto LABEL_26;
          goto LABEL_20;
        }
      }
LABEL_98:
      if ( v20 && *(_BYTE *)(v17 & 0xFFFFFFFFFFFFFFFEuLL) == 6
        || v48.m128i_i64[0] < 0xFFFF800000000000uLL
        || ((v18 >> 5) & 0x18) != 0x10 )
      {
LABEL_26:
        v24 = MiResolveDemandZeroFault(&v48, v12, 0LL, v11);
        v17 = v49;
        v19 = v24;
        goto LABEL_27;
      }
      v19 = -1073741819;
    }
LABEL_27:
    v25 = v19;
    if ( (v51.m256i_i8[21] & 8) != 0 )
      v25 = v13;
    if ( v19 < 0 )
      break;
    v48.m128i_i64[0] += 4096LL;
    v26 = v51.m256i_i8[21] | 8;
    v12 += 8LL;
    v51.m256i_i8[21] = v26;
    ++v14;
    *((_QWORD *)&v49 + 1) = v12;
    if ( (v26 & 2) != 0 )
    {
      v13 = v25;
      v51.m256i_i8[21] = v26 & 0xFD;
      if ( v14 == v16 )
        goto LABEL_35;
      v16 = MiComputeMaximumFaultCluster(&v48, v16 - v14);
      if ( v16 == 1 && (v51.m256i_i8[21] & 4) != 0 )
        v51.m256i_i8[21] &= ~4u;
      v17 = v49;
      v14 = 0LL;
    }
    *(_QWORD *)&v53 = 0LL;
    if ( (v17 & 1) == 0 || *(_BYTE *)(v17 & 0xFFFFFFFFFFFFFFFEuLL) != 2 )
    {
      v11 = 0LL;
      v48.m128i_i64[1] &= ~2uLL;
    }
    if ( (v17 & 1) != 0 )
    {
      v36 = v17 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( *(_BYTE *)(v17 & 0xFFFFFFFFFFFFFFFEuLL) == 5 )
      {
        v17 &= ~1uLL;
        *(_QWORD *)&v49 = v36;
      }
    }
    v13 = v25;
    if ( v14 >= v16 )
      goto LABEL_35;
  }
  v13 = v25;
  if ( v19 != -1073741802 )
  {
LABEL_35:
    v27 = v52;
    goto LABEL_36;
  }
  v27 = v52;
  if ( (v52 & 0x100) != 0 )
    *(_DWORD *)(a1 + 80) |= 0x100u;
LABEL_36:
  v28 = v51.m256i_i64[3];
  *(_OWORD *)(a1 + 112) = v54;
  *(_QWORD *)(a1 + 128) = v55;
  *(_QWORD *)(a1 + 104) = *((_QWORD *)&v53 + 1);
  *(_OWORD *)(a1 + 56) = *(_OWORD *)&v51.m256i_u64[1];
  *(_QWORD *)(a1 + 72) = v28;
  if ( v27 < 0 )
    *(_DWORD *)(a1 + 80) ^= ((unsigned __int8)v27 ^ (unsigned __int8)*(_DWORD *)(a1 + 80)) & 0x80;
  if ( v13 == -1073532109 )
    *v47 = v45;
  return v13;
}
