/*
 * XREFs of RtlpQueryExtendedInformationHeap @ 0x18007B8F0
 * Callers:
 *     RtlpQueryExtendedHeapInformation @ 0x1800750CC (RtlpQueryExtendedHeapInformation.c)
 * Callees:
 *     RtlpWalkHeapInternal @ 0x180002560 (RtlpWalkHeapInternal.c)
 *     RtlpGetHeapProtection @ 0x18000EE34 (RtlpGetHeapProtection.c)
 *     RtlpHpHeapReportCounters @ 0x18007BAE4 (RtlpHpHeapReportCounters.c)
 *     RtlpEstimateAllocatedSize @ 0x18007BBA8 (RtlpEstimateAllocatedSize.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1000 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A4600 (memset.c)
 *     RtlpGetContainingRange @ 0x1800F3DB4 (RtlpGetContainingRange.c)
 *     RtlpQueryMemoryUsageHeap @ 0x1800F4890 (RtlpQueryMemoryUsageHeap.c)
 */

__int64 __fastcall RtlpQueryExtendedInformationHeap(__int64 a1, __int64 a2)
{
  int v2; // ebx
  bool v3; // zf
  __int64 v5; // r12
  unsigned int v6; // r15d
  char v7; // r14
  _QWORD *v8; // rsi
  __int64 result; // rax
  unsigned int NumberOfHeaps; // ecx
  __int64 v11; // rax
  _DWORD *v12; // rax
  int v13; // ecx
  __int64 *v14; // rax
  int v15; // ecx
  __int64 v16; // rax
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // r15
  __int16 v19; // si
  int v20; // r15d
  __int64 v21; // rsi
  int HeapProtection; // esi
  unsigned __int64 v23; // rax
  __int64 v24; // r14
  unsigned __int64 v25; // rsi
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // r14
  __int64 v32; // rax
  int v33; // eax
  _QWORD *v34; // rcx
  __int64 v35; // rax
  int v36; // eax
  int v37; // eax
  char v38; // [rsp+30h] [rbp-D0h]
  int v39; // [rsp+34h] [rbp-CCh] BYREF
  __int64 (__fastcall *v40)(_QWORD *, __int64); // [rsp+38h] [rbp-C8h]
  unsigned int v41; // [rsp+40h] [rbp-C0h]
  __int64 v42; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v43; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v44; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v45; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v46; // [rsp+70h] [rbp-90h]
  __int128 v47; // [rsp+80h] [rbp-80h]
  __int64 v48; // [rsp+90h] [rbp-70h]
  __int64 v49; // [rsp+98h] [rbp-68h]
  _QWORD v50[22]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v51[16]; // [rsp+150h] [rbp+50h] BYREF
  _QWORD v52[12]; // [rsp+160h] [rbp+60h] BYREF

  v2 = 0;
  v3 = *(_DWORD *)(a1 + 16) == -571548178;
  v5 = *(_QWORD *)(a2 + 16);
  v6 = *(_DWORD *)a2;
  v40 = *(__int64 (__fastcall **)(_QWORD *, __int64))(a2 + 8);
  v41 = v6;
  v42 = v5;
  v49 = 0LL;
  if ( v3 )
  {
    v7 = 1;
    v38 = 1;
    v8 = (_QWORD *)a1;
    v48 = a1;
  }
  else
  {
    v3 = (*(_DWORD *)(a1 + 116) & 0x1000000) == 0;
    v7 = 0;
    v38 = 0;
    v8 = 0LL;
    v48 = 0LL;
    if ( !v3 )
      return 3221225474LL;
  }
  memset(v50, 0, 0xA8uLL);
  if ( v6 != 0x80000000 )
  {
    LODWORD(v50[0]) = 2;
    v50[1] = 64LL;
    v50[2] = a1;
    if ( v7 )
    {
      v50[4] = v8[16] << 12;
      v50[4] += v8[11] << 12;
      v50[5] = v8[17] << 12;
      v50[5] += v8[12] << 12;
      result = 0LL;
      LODWORD(v50[3]) = 0;
    }
    else
    {
      LODWORD(v50[3]) = *(unsigned __int8 *)(a1 + 418);
      result = RtlpQueryMemoryUsageHeap(a1, &v50[4], &v50[5]);
    }
    if ( (int)result < 0 )
      return result;
    result = v40(v50, v5);
    if ( (int)result < 0 || v6 < 3 )
      return result;
    v45 = 0LL;
    v43 = 0LL;
    v17 = 0LL;
    v46 = 0LL;
    v18 = 0LL;
    v44 = 0LL;
    v47 = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        result = RtlpWalkHeapInternal(a1, (__int64)&v45);
        if ( (_DWORD)result == -2147483622 )
          return 0LL;
        if ( (int)result < 0 )
          return result;
        v19 = WORD1(v46);
        if ( (BYTE2(v46) & 2) == 0 )
          break;
        if ( v7 || (WORD1(v46) & 0x8000) != 0 )
        {
          v20 = v49;
          v21 = v45;
        }
        else
        {
          v20 = v45;
          v21 = v45;
          v49 = v45;
          if ( (_QWORD)v45 + 24LL == *(_QWORD *)(a1 + 288) )
            v21 = a1;
        }
        memset(v50, 0, 0xA8uLL);
        v50[3] = DWORD2(v46) + (unsigned __int64)HIDWORD(v46);
        v50[4] = DWORD2(v46);
        LODWORD(v50[0]) = 3;
        v50[1] = 56LL;
        v50[2] = v21;
        result = v40(v50, v42);
        if ( (int)result < 0 )
          return result;
        if ( v7 )
        {
          v17 = v45;
          v18 = v45 + DWORD2(v46);
          v43 = v45;
          v44 = v18;
          HeapProtection = (*(_DWORD *)(v48 + 20) & 0x40000000) != 0 ? 64 : 4;
          v39 = HeapProtection;
        }
        else if ( (WORD1(v46) & 0x8000) != 0 )
        {
          v17 = v45;
          v18 = v45 + DWORD2(v46);
          v43 = v45;
          v44 = v18;
          HeapProtection = RtlpGetHeapProtection((_DWORD *)a1, 0);
          v39 = HeapProtection;
        }
        else
        {
          RtlpGetContainingRange(v20, v20, (unsigned int)&v43, (unsigned int)&v44, (__int64)v51, (__int64)&v39);
          v17 = v43;
          v18 = v44;
          HeapProtection = v39;
        }
        memset(v50, 0, 0xA8uLL);
        v50[2] = v17;
        v23 = v18 - v17;
        LODWORD(v50[4]) = 1;
        HIDWORD(v50[4]) = HeapProtection;
LABEL_70:
        v50[3] = v23;
        v50[1] = 56LL;
        LODWORD(v50[0]) = 4;
        result = v40(v50, v42);
        if ( (int)result < 0 )
          return result;
      }
      if ( (WORD1(v46) & 0x4000) != 0 )
        break;
      if ( (WORD1(v46) & 0x1000) != 0 )
      {
        if ( v41 >= 4 )
        {
          memset(v50, 0, 0xA8uLL);
          v23 = *((_QWORD *)&v45 + 1);
          v50[2] = v45;
          v50[4] = 0x100000002LL;
          goto LABEL_70;
        }
      }
      else
      {
        v3 = v7 == 0;
        v31 = v45;
        if ( v3 && ((unsigned __int64)v45 < v17 || (unsigned __int64)v45 > v18) )
        {
          RtlpGetContainingRange(v49, v45, (unsigned int)&v43, (unsigned int)&v44, (__int64)v51, (__int64)&v39);
          if ( v41 < 4 )
          {
            v17 = v43;
            v18 = v44;
            goto LABEL_99;
          }
          memset(v50, 0, 0xA8uLL);
          v17 = v43;
          v18 = v44;
          LODWORD(v50[0]) = 4;
          v50[3] = v44 - v43;
          HIDWORD(v50[4]) = v39;
          v50[1] = 56LL;
          v50[2] = v43;
          LODWORD(v50[4]) = 1;
          result = v40(v50, v42);
          if ( (int)result < 0 )
            return result;
          v19 = WORD1(v46);
          v31 = v45;
        }
        if ( v41 < 4 )
        {
          v7 = v38;
        }
        else
        {
LABEL_80:
          if ( (v19 & 0xF0) == 0 )
          {
            memset(v50, 0, 0xA8uLL);
            v50[4] = *((_QWORD *)&v45 + 1);
            v35 = *(_QWORD *)((char *)&v47 + 4);
            LODWORD(v50[0]) = 5;
            v50[1] = 56LL;
            v50[2] = v31;
            if ( (v19 & 2) != 0 )
              v35 = (unsigned __int8)v46;
            v50[5] = v35;
            v36 = v50[3];
            if ( (v19 & 1) != 0 )
              v36 = 1;
            LODWORD(v50[3]) = v36;
            if ( (v19 & 0x4000) != 0 )
            {
              v37 = v36 | 4;
              goto LABEL_96;
            }
            if ( v19 < 0 )
            {
              v37 = v36 | 8;
LABEL_96:
              LODWORD(v50[3]) = v37;
            }
            v34 = v50;
            goto LABEL_98;
          }
          memset(v52, 0, 0x58uLL);
          v52[4] = *((_QWORD *)&v45 + 1);
          v32 = *(_QWORD *)((char *)&v47 + 4);
          LODWORD(v52[0]) = 5;
          v52[1] = 88LL;
          v52[2] = v31;
          if ( (v19 & 2) != 0 )
            v32 = (unsigned __int8)v46;
          v52[5] = v32;
          v33 = 2;
          if ( (v19 & 0x4000) != 0 )
            v33 = 6;
          LODWORD(v52[3]) = v33;
          if ( (v19 & 1) != 0 )
            LODWORD(v52[3]) = v33 | 1;
          v52[9] = *((_QWORD *)&v46 + 1);
          LODWORD(v52[10]) = v47;
          HIDWORD(v52[7]) = 1;
          v34 = v52;
          v52[8] = 32LL;
LABEL_98:
          result = v40(v34, v42);
          if ( (int)result < 0 )
            return result;
LABEL_99:
          v7 = v38;
        }
      }
    }
    memset(v50, 0, 0xA8uLL);
    v24 = 0LL;
    LODWORD(v50[0]) = 3;
    v25 = 0LL;
    v50[1] = 56LL;
    if ( v38 )
    {
      v50[2] = v45;
      v25 = *(_QWORD *)(v48 + 72);
      if ( (*(_BYTE *)(v48 + 80) & 1) != 0 )
      {
        if ( v25 )
          v25 ^= v48 + 72;
        else
          v25 = 0LL;
      }
      while ( v25 )
      {
        v28 = *(_QWORD *)(v25 + 24) & 0xFFFFFFFFFFFF0000uLL;
        if ( (unsigned __int64)v45 < v28 )
        {
          v29 = *(_QWORD *)v25;
        }
        else
        {
          if ( (unsigned __int64)v45 <= v28 )
            break;
          v29 = *(_QWORD *)(v25 + 8);
        }
        if ( (*(_BYTE *)(v48 + 80) & 1) != 0 && v29 )
          v25 ^= v29;
        else
          v25 = v29;
      }
      v50[3] = (*(_QWORD *)(v25 + 32) & 0xFFFFFFFFFFFFF000uLL) + 4096;
      v27 = *(_QWORD *)(v25 + 32) & 0xFFFFFFFFFFFFF000uLL;
    }
    else
    {
      v26 = v45 - 16;
      _m_prefetchw((const void *)(v45 - 16));
      if ( *(_BYTE *)(v26 + 15) == 5 )
        v26 -= 16LL * *(unsigned __int8 *)(v26 + 14);
      v24 = v26 - 48;
      v50[2] = (v26 - 48) & 0xFFFFFFFFFFFF0000uLL;
      v50[3] = *(_QWORD *)(v26 - 48 + 40);
      v27 = *(_QWORD *)(v26 - 48 + 32);
    }
    v50[4] = v27;
    result = v40(v50, v42);
    if ( (int)result < 0 )
      return result;
    memset(v50, 0, 0xA8uLL);
    LODWORD(v50[0]) = 4;
    v50[1] = 56LL;
    if ( v38 )
    {
      v50[2] = v45;
      v30 = *(_QWORD *)(v25 + 32) & 0xFFFFFFFFFFFFF000uLL;
      LODWORD(v50[4]) = 1;
      v50[3] = v30;
      HIDWORD(v50[4]) = (*(_DWORD *)(v48 + 20) & 0x40000000) != 0 ? 64 : 4;
    }
    else
    {
      v50[2] = v24;
      v50[3] = *(_QWORD *)(v24 + 32);
      LODWORD(v50[4]) = 1;
      HIDWORD(v50[4]) = RtlpGetHeapProtection((_DWORD *)a1, 0);
    }
    result = v40(v50, v42);
    if ( (int)result < 0 )
      return result;
    v19 = WORD1(v46);
    v31 = v45;
    goto LABEL_80;
  }
  LODWORD(v50[0]) = v6;
  v50[1] = 168LL;
  if ( v7 )
  {
    RtlpHpHeapReportCounters(v8, v50);
  }
  else
  {
    LODWORD(v50[3]) = *(unsigned __int16 *)(a1 + 208);
    HIDWORD(v50[2]) = 1;
    v50[4] = a1;
    NumberOfHeaps = NtCurrentPeb()->NumberOfHeaps;
    v50[5] = *(_QWORD *)(a1 + 568);
    v11 = *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664);
    HIDWORD(v50[3]) = NumberOfHeaps - 1;
    v50[6] = v11;
    v50[10] = RtlpEstimateAllocatedSize(a1);
    v50[11] = 16LL * *(_QWORD *)(a1 + 192);
    LODWORD(v50[9]) = *(_DWORD *)(a1 + 604);
    LODWORD(v50[13]) = *(_DWORD *)(a1 + 592);
    v50[8] = *(_QWORD *)(a1 + 584);
    LODWORD(v50[7]) = *(_DWORD *)(a1 + 600);
    HIDWORD(v50[13]) = *(_DWORD *)(a1 + 608);
    LODWORD(v50[14]) = HIDWORD(v50[13]);
    v12 = *(_DWORD **)(a1 + 312);
    if ( v12 )
    {
      v13 = v12[4];
      LODWORD(v50[12]) = v13;
      if ( *(_QWORD *)v12 )
        LODWORD(v50[12]) = *(_DWORD *)(*(_QWORD *)v12 + 16LL) + v13;
    }
    v14 = *(__int64 **)(a1 + 352);
    v15 = *(_DWORD *)(a1 + 620);
    HIDWORD(v50[12]) = v15;
    if ( v14 )
    {
      v16 = *v14;
      if ( v16 != -1 )
        v2 = *(_DWORD *)(v16 + 36);
      HIDWORD(v50[12]) = v2 + v15;
    }
  }
  return v40(v50, v5);
}
