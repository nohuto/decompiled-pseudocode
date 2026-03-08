/*
 * XREFs of MiDispatchFault @ 0x14026A900
 * Callers:
 *     MmAccessFault @ 0x140267D40 (MmAccessFault.c)
 *     MiInPagePageTable @ 0x140345FA0 (MiInPagePageTable.c)
 * Callees:
 *     MiComputeMaximumFaultCluster @ 0x14026AFC0 (MiComputeMaximumFaultCluster.c)
 *     MiResolveDemandZeroFault @ 0x14026B720 (MiResolveDemandZeroFault.c)
 *     MiResolveProtoPteFault @ 0x140270A50 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140271760 (MiResolveTransitionFault.c)
 *     KeShouldYieldProcessor @ 0x1402C9870 (KeShouldYieldProcessor.c)
 *     MiCheckProtoAccess @ 0x1402DF228 (MiCheckProtoAccess.c)
 *     MiAdjustFaultList @ 0x1402E0A34 (MiAdjustFaultList.c)
 *     MiAccessCheck @ 0x1402E4134 (MiAccessCheck.c)
 *     KiRspInIstStack @ 0x1402EDCB0 (KiRspInIstStack.c)
 *     MiPageTableLockIsContended @ 0x140347920 (MiPageTableLockIsContended.c)
 *     MiAdvanceFaultList @ 0x140363F9C (MiAdvanceFaultList.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     MiResolvePageFileFault @ 0x140668EDC (MiResolvePageFileFault.c)
 */

__int64 __fastcall MiDispatchFault(__int64 a1, _QWORD *a2)
{
  __m128i v3; // xmm3
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __m128i v6; // xmm2
  __m128i v7; // xmm4
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int64 v11; // r13
  ULONG_PTR v12; // r14
  unsigned int v13; // r15d
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rbx
  int v20; // ecx
  __int16 v21; // ax
  bool v22; // dl
  void *v23; // rcx
  __int8 v24; // al
  int v25; // ecx
  __int64 v26; // xmm1_8
  __int64 v28; // rax
  __int64 v29; // rdx
  _DWORD *v30; // rax
  unsigned __int64 v31; // rdx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v38; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v39; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v40; // [rsp+50h] [rbp-B8h]
  _QWORD *v41; // [rsp+58h] [rbp-B0h]
  __m128i v42; // [rsp+68h] [rbp-A0h] BYREF
  __m128i v43; // [rsp+78h] [rbp-90h]
  __int128 v44; // [rsp+88h] [rbp-80h]
  __m256i v45; // [rsp+98h] [rbp-70h]
  __int128 v46; // [rsp+B8h] [rbp-50h]
  __int128 v47; // [rsp+C8h] [rbp-40h]
  __int128 v48; // [rsp+D8h] [rbp-30h]
  __int64 v49; // [rsp+E8h] [rbp-20h]

  *a2 = 0LL;
  v3 = *(__m128i *)a1;
  v4 = *(_OWORD *)(a1 + 32);
  v41 = a2;
  v5 = *(_OWORD *)(a1 + 80);
  v38 = 0LL;
  v6 = *(__m128i *)(a1 + 48);
  v7 = *(__m128i *)(a1 + 16);
  v44 = v4;
  v8 = *(_OWORD *)(a1 + 64);
  v46 = v5;
  v9 = *(_OWORD *)(a1 + 112);
  *(_OWORD *)&v45.m256i_u64[2] = v8;
  v10 = *(_OWORD *)(a1 + 96);
  v48 = v9;
  v42 = v3;
  v47 = v10;
  *(_QWORD *)&v10 = *(_QWORD *)(a1 + 128);
  *(__m128i *)v45.m256i_i8 = v6;
  v42.m128i_i64[1] = _mm_srli_si128(v3, 8).m128i_u64[0];
  v11 = v42.m128i_i8[8] & 2;
  v49 = v10;
  v43 = v7;
  v40 = _mm_srli_si128(v6, 8).m128i_u64[0];
  v12 = (((unsigned __int64)v3.m128i_i64[0] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = 0;
  if ( (_mm_cvtsi128_si32(v7) & 1) != 0
    && (*(_BYTE *)(v43.m128i_i64[0] & 0xFFFFFFFFFFFFFFFEuLL) == 5
     || *(_BYTE *)(v43.m128i_i64[0] & 0xFFFFFFFFFFFFFFFEuLL) == 2
     || *(_BYTE *)(v43.m128i_i64[0] & 0xFFFFFFFFFFFFFFFEuLL) == 1) )
  {
    v39 = v43.m128i_i64[0] & 0xFFFFFFFFFFFFFFFEuLL;
  }
  else
  {
    v39 = 0LL;
  }
  v14 = 0LL;
  v15 = MiComputeMaximumFaultCluster(&v42, 0LL);
  v18 = v15;
  if ( v15 > 1 )
  {
    v45.m256i_i8[21] |= 4u;
    v45.m256i_i8[21] &= ~2u;
    goto LABEL_5;
  }
  v45.m256i_i8[21] &= ~2u;
  if ( v15 )
  {
    do
    {
LABEL_5:
      if ( (v45.m256i_i8[21] & 8) != 0 )
      {
        if ( (*(_DWORD *)(v40 + 188) & 2) != 0
          || (*(_BYTE *)(v40 + 184) & 0x40) != 0
          && (unsigned __int64)(*(_QWORD *)(v40 + 128) + 1LL) >= *(_QWORD *)(v40 + 120) )
        {
          break;
        }
        v30 = (*(_BYTE *)(v40 + 184) & 7) == 2 ? &unk_140C69E00 : (_DWORD *)(v40 + 192);
        if ( (*v30 & 0x40000000) != 0
          || (v45.m256i_i8[21] & 1) != 0
          || (unsigned int)MiPageTableLockIsContended(v40, ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)
          || KeShouldYieldProcessor() )
        {
          break;
        }
      }
      v19 = *(_QWORD *)v12;
      if ( v12 >= 0xFFFFF6FB7DBED000uLL
        && v12 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v19 & 1) != 0
        && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v33 = *((_QWORD *)&Flink->Flink + ((v12 >> 3) & 0x1FF));
          if ( (v33 & 0x20) != 0 )
            v19 |= 0x20uLL;
          if ( (v33 & 0x42) != 0 )
            v19 |= 0x42uLL;
        }
      }
      if ( !v19 || (v19 & 1) != 0 )
      {
        v20 = 0;
        goto LABEL_23;
      }
      LODWORD(v37) = 256;
      if ( (v19 & 0x400) != 0 )
      {
        if ( (_QWORD)v47 )
          goto LABEL_11;
        v28 = MiCheckProtoAccess(v12, &v37);
        if ( !v28 )
        {
          v20 = -1073741819;
          goto LABEL_23;
        }
        LODWORD(v29) = v37;
        *(_QWORD *)&v47 = v28;
      }
      else
      {
        if ( (v45.m256i_i8[21] & 8) == 0 )
          goto LABEL_11;
        v29 = (v19 >> 5) & 0x1F;
      }
      if ( (_DWORD)v29 == 256 )
        goto LABEL_11;
      if ( (v29 & 0xFFFFFFF8) == 0x10 && (v45.m256i_i8[21] & 8) != 0 )
      {
        v20 = -1073741819;
        goto LABEL_23;
      }
      v20 = MiAccessCheck(v12, v43.m128i_i64[0], 0);
      if ( !v20 )
      {
LABEL_11:
        if ( (v43.m128i_i8[0] & 1) != 0 && *(_BYTE *)(v43.m128i_i64[0] & 0xFFFFFFFFFFFFFFFEuLL) == 2 )
          MiAdjustFaultList(&v42);
        if ( (v19 & 0x400) != 0 )
        {
          v20 = MiResolveProtoPteFault(&v42, v11, &v38);
          goto LABEL_23;
        }
        if ( (v19 & 0x800) != 0 )
        {
          v20 = MiResolveTransitionFault(&v42, v12, 0LL, v11, &v38);
          goto LABEL_23;
        }
        if ( (v19 & 4) != 0 )
        {
          if ( (v45.m256i_i8[21] & 8) != 0 )
          {
            if ( v39 )
              MiAdvanceFaultList(v39);
            v20 = -1073740748;
          }
          else
          {
            v20 = MiResolvePageFileFault(&v42, v12, 0LL, &v38);
          }
        }
        else
        {
          v20 = 0;
          if ( (v43.m128i_i8[0] & 1) != 0 )
          {
            if ( *(_BYTE *)(v43.m128i_i64[0] & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
            {
              if ( (*(_DWORD *)((v43.m128i_i64[0] & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 0x4000) == 0 )
                goto LABEL_23;
            }
            else if ( *(_BYTE *)(v43.m128i_i64[0] & 0xFFFFFFFFFFFFFFFEuLL) != 3
                   && *(_BYTE *)(v43.m128i_i64[0] & 0xFFFFFFFFFFFFFFFEuLL) != 6 )
            {
LABEL_22:
              v20 = MiResolveDemandZeroFault(&v42, v12, 0LL, v11);
              goto LABEL_23;
            }
            if ( *(_BYTE *)(v43.m128i_i64[0] & 0xFFFFFFFFFFFFFFFEuLL) == 6 )
              goto LABEL_22;
          }
          else
          {
            if ( !v43.m128i_i64[0] )
              goto LABEL_22;
            v21 = *(_WORD *)(v43.m128i_i64[0] + 368);
            v22 = 0;
            if ( v21 == 16 )
            {
              if ( (*(_DWORD *)(v43.m128i_i64[0] + 376) & 0x200) == 0
                && ((unsigned int)KiRspInIstStack(3LL, *(_QWORD *)(v43.m128i_i64[0] + 384), v16, v17)
                 || (unsigned int)KiRspInIstStack(2LL, v34, v35, v36)) )
              {
                goto LABEL_22;
              }
              v23 = &ExpInterlockedPopEntrySListFault;
              v31 = *(_QWORD *)(v43.m128i_i64[0] + 360);
              v22 = KiDynamicTraceEnabled && v31 >= qword_140D1F2A8 && v31 < qword_140D1F2B0 && KeGetCurrentIrql() == 15;
            }
            else
            {
              if ( v21 != 51 )
                goto LABEL_22;
              v23 = (void *)qword_140D1F370;
            }
            if ( *(void **)(v43.m128i_i64[0] + 360) != v23 && !v22 )
              goto LABEL_22;
          }
          if ( v42.m128i_i64[0] < 0xFFFF800000000000uLL )
            goto LABEL_22;
          LODWORD(v37) = (v19 >> 5) & 0x1F;
          if ( ((v19 >> 5) & 0x18) != 0x10 )
            goto LABEL_22;
          v20 = -1073741819;
        }
      }
LABEL_23:
      if ( (v45.m256i_i8[21] & 8) == 0 )
        v13 = v20;
      if ( v20 < 0 )
      {
        if ( v20 != -1073741802 )
          break;
        v25 = v46;
        if ( (v46 & 0x80u) != 0LL )
          *(_DWORD *)(a1 + 80) |= 0x80u;
        goto LABEL_31;
      }
      v12 += 8LL;
      v42.m128i_i64[0] += 4096LL;
      v24 = v45.m256i_i8[21] | 8;
      ++v14;
      v45.m256i_i8[21] = v24;
      v43.m128i_i64[1] = v12;
      if ( (v24 & 2) != 0 )
      {
        v45.m256i_i8[21] = v24 & 0xFD;
        if ( v14 == v18 )
          break;
        v18 = MiComputeMaximumFaultCluster(&v42, v18 - v14);
        if ( v18 == 1 && (v45.m256i_i8[21] & 4) != 0 )
          v45.m256i_i8[21] &= ~4u;
        v14 = 0LL;
      }
      *(_QWORD *)&v47 = 0LL;
      if ( (v43.m128i_i8[0] & 1) == 0 || *(_BYTE *)(v43.m128i_i64[0] & 0xFFFFFFFFFFFFFFFEuLL) != 2 )
      {
        v42.m128i_i64[1] &= ~2uLL;
        v11 = 0LL;
        if ( (v43.m128i_i8[0] & 1) == 0 )
          continue;
      }
      if ( *(_BYTE *)(v43.m128i_i64[0] & 0xFFFFFFFFFFFFFFFEuLL) == 5 )
        v43.m128i_i64[0] &= ~1uLL;
    }
    while ( v14 < v18 );
  }
  v25 = v46;
LABEL_31:
  v26 = v45.m256i_i64[3];
  *(_OWORD *)(a1 + 112) = v48;
  *(_QWORD *)(a1 + 128) = v49;
  *(_QWORD *)(a1 + 104) = *((_QWORD *)&v47 + 1);
  *(_OWORD *)(a1 + 56) = *(_OWORD *)&v45.m256i_u64[1];
  *(_QWORD *)(a1 + 72) = v26;
  if ( (v25 & 0x40) != 0 )
    *(_DWORD *)(a1 + 80) ^= (*(_DWORD *)(a1 + 80) ^ v25) & 0x40;
  if ( v13 == -1073532109 )
    *v41 = v38;
  return v13;
}
