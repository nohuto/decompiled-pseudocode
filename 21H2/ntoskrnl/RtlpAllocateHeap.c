/*
 * XREFs of RtlpAllocateHeap @ 0x140588D60
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x1402237C8 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     DbgPrint @ 0x140272780 (DbgPrint.c)
 *     ExGenRandom @ 0x1402D1110 (ExGenRandom.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x140315890 (RtlpHpHeapCheckCommitLimit.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x1403F8718 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlCompareMemoryUlong @ 0x140408410 (RtlCompareMemoryUlong.c)
 *     memset @ 0x140414300 (memset.c)
 *     RtlpCreateSplitBlock @ 0x140589AB0 (RtlpCreateSplitBlock.c)
 *     RtlpExtendHeap @ 0x14058A8E4 (RtlpExtendHeap.c)
 *     RtlpLogHeapFailure @ 0x14059379C (RtlpLogHeapFailure.c)
 *     RtlpAnalyzeHeapFailure @ 0x1405937F0 (RtlpAnalyzeHeapFailure.c)
 *     RtlpFindEntry @ 0x140593EC4 (RtlpFindEntry.c)
 *     RtlpHeapRemoveListEntry @ 0x1405942B8 (RtlpHeapRemoveListEntry.c)
 *     RtlGetNtGlobalFlags @ 0x140915200 (RtlGetNtGlobalFlags.c)
 */

_DWORD *__fastcall RtlpAllocateHeap(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        char a5,
        _DWORD *a6)
{
  unsigned __int64 v6; // r14
  __int16 v7; // bx
  char v8; // di
  _DWORD *v10; // r15
  char v11; // r12
  unsigned __int64 v12; // r13
  __int64 v14; // r14
  unsigned __int64 v15; // r13
  __int64 Entry; // rax
  __int64 v17; // rbx
  unsigned __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 *v20; // r8
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 **v23; // rdx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 *v29; // rdi
  __int64 v30; // rax
  __int64 **v31; // rdx
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rdi
  char v34; // cl
  SIZE_T v35; // rdi
  SIZE_T v36; // rax
  __int64 v37; // rdi
  unsigned __int64 v38; // r14
  __int64 v39; // r8
  unsigned __int64 v40; // r14
  char v41; // cl
  __int64 v42; // rax
  unsigned __int64 v43; // rdx
  __int64 v44; // rdi
  char v45; // bl
  void *v46; // r8
  unsigned __int64 v47; // rdx
  _OWORD *v48; // rax
  unsigned __int64 v49; // r14
  void *v50; // rcx
  char *v51; // rax
  char *v52; // rdi
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // r8
  __int64 *v55; // rax
  char v56; // [rsp+40h] [rbp-F8h]
  int v57; // [rsp+48h] [rbp-F0h]
  __int64 *v58; // [rsp+50h] [rbp-E8h]
  __int64 *v59; // [rsp+50h] [rbp-E8h]
  __int64 v60; // [rsp+60h] [rbp-D8h]
  __int64 v61; // [rsp+68h] [rbp-D0h]
  ULONG_PTR v62; // [rsp+98h] [rbp-A0h] BYREF
  __int64 v63; // [rsp+A0h] [rbp-98h]
  __int64 v64; // [rsp+A8h] [rbp-90h]
  __int64 v65; // [rsp+B0h] [rbp-88h]
  unsigned __int64 v66; // [rsp+B8h] [rbp-80h]
  __int64 v67; // [rsp+C0h] [rbp-78h]
  ULONG_PTR v68; // [rsp+C8h] [rbp-70h]
  char *v69; // [rsp+D0h] [rbp-68h]
  unsigned __int64 v70; // [rsp+D8h] [rbp-60h]
  __int64 v71; // [rsp+E0h] [rbp-58h]
  unsigned __int64 v72; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v73; // [rsp+F0h] [rbp-48h]
  char v74; // [rsp+148h] [rbp+10h]
  unsigned __int64 v76; // [rsp+158h] [rbp+20h] BYREF

  v76 = a4;
  v74 = a2;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  v64 = 0LL;
  v57 = 1;
  v65 = 0LL;
  a5 = 0;
  v10 = 0LL;
  v69 = 0LL;
  v62 = 0LL;
  v68 = 0LL;
  if ( (a2 & 0x3C010F60) != 0 || a3 >= 0x80000000 )
  {
    v57 = 0;
    *a6 = 4;
    if ( a3 > 0x7FFFFFFFFFFFFFFFLL )
      return 0LL;
    v14 = a3;
    if ( !a3 )
      v14 = 1LL;
    v6 = *(_QWORD *)(a1 + 264) & (*(_QWORD *)(a1 + 256) + v14);
    if ( v6 < 0x20 )
      v6 = 32LL;
    v76 = v6;
    v11 = (a2 >> 4) & 0xE0 | 1;
    if ( (a2 & 0x3C000100) != 0 || (v15 = v6, *(_QWORD *)(a1 + 328)) )
    {
      v11 = (a2 >> 4) & 0xE0 | 3;
      v15 = v6 + 16;
      v6 = v15;
      v76 = v15;
    }
    v12 = v15 >> 4;
  }
  else
  {
    v11 = 1;
    v12 = a4 >> 4;
    if ( a4 >> 4 < 2 )
    {
      v6 = a4 + 16;
      v76 = a4 + 16;
      v12 = 2LL;
    }
    *a6 = 3;
  }
  if ( (a2 & 0x800000) != 0 && (RtlGetNtGlobalFlags() & 0x800) == 0 )
    v11 |= 8u;
  if ( (v8 & 1) == 0 )
  {
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 352), 1u);
    a5 = 1;
  }
  if ( v12 > *(unsigned int *)(a1 + 148) )
  {
    if ( (*(_DWORD *)(a1 + 112) & 2) != 0 )
    {
      v49 = v6 + 48;
      v76 = v49 + 8;
      if ( (unsigned int)RtlpHpHeapCheckCommitLimit(
                           (v49 + 4103) & 0xFFFFFFFFFFFFF000uLL,
                           *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664),
                           a1,
                           (unsigned __int64 *)(a1 + 376)) )
      {
        v68 = (ExGenRandom(1) & 0xF) << 12;
        v51 = RtlpHpAllocVirtBlockCommitFirst(v50, &v76, v68, &v62);
        v52 = v51;
        v69 = v51;
        if ( v51 )
        {
          v53 = v76;
          *((_WORD *)v51 + 28) = v76 - v7;
          v51[58] = v11 | 2;
          *((_QWORD *)v51 + 4) = v53;
          *((_QWORD *)v51 + 5) = v62;
          v51[63] = 4;
          *(_QWORD *)(a1 + 592) += v53;
          if ( *(_DWORD *)(a1 + 124) )
          {
            v51[59] = v51[56] ^ v51[57] ^ v51[58];
            *((_DWORD *)v51 + 14) ^= *(_DWORD *)(a1 + 136);
          }
          v54 = a1 + 272;
          v55 = *(__int64 **)(a1 + 280);
          if ( *v55 == a1 + 272 )
          {
            *(_QWORD *)v52 = v54;
            *((_QWORD *)v52 + 1) = v55;
            *v55 = (__int64)v52;
            *(_QWORD *)(a1 + 280) = v52;
          }
          else
          {
            RtlpLogHeapFailure(13, 0, v54, 0, *v55, 0LL);
          }
          v10 = v52 + 64;
        }
        else
        {
          v10 = 0LL;
          ++*(_DWORD *)(a1 + 632);
        }
        goto LABEL_114;
      }
    }
    goto LABEL_113;
  }
  v70 = a1 + 336;
  Entry = RtlpFindEntry(a1, v12);
  v71 = Entry;
  if ( a1 + 336 == Entry )
  {
LABEL_40:
    v26 = RtlpExtendHeap(a1);
    v17 = v26;
    v63 = v26;
    if ( v26 )
    {
      v27 = v26 + 16;
      v28 = *(_QWORD *)(v26 + 16);
      v60 = v28;
      v29 = *(__int64 **)(v26 + 24);
      v59 = v29;
      v30 = *v29;
      v22 = *(_QWORD *)(v28 + 8);
      if ( *v29 != v22 || v30 != v27 )
      {
        RtlpLogHeapFailure(13, a1, v27, v22, v30, 0LL);
        goto LABEL_114;
      }
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v17 + 8);
      v31 = *(__int64 ***)(a1 + 312);
      if ( v31 )
      {
        v32 = *(unsigned __int16 *)(v17 + 8);
        while ( 1 )
        {
          v33 = *((unsigned int *)v31 + 2);
          if ( v32 < v33 )
            break;
          if ( !*v31 )
          {
            LODWORD(v32) = v33 - 1;
            break;
          }
          v31 = (__int64 **)*v31;
        }
        RtlpHeapRemoveListEntry(a1, (_DWORD)v31, v27, v27, v32, *(unsigned __int16 *)(v17 + 8));
        v28 = v60;
        v29 = v59;
      }
      *v29 = v28;
      *(_QWORD *)(v28 + 8) = v29;
LABEL_50:
      LOBYTE(v22) = *(_BYTE *)(v17 + 10);
      v56 = v22;
      v34 = v57;
      if ( !v57 && (v22 & 4) != 0 )
      {
        v35 = 16LL * *(unsigned __int16 *)(v17 + 8) - 32;
        if ( (v22 & 2) != 0 && v35 > 4 )
          v35 = 16LL * *(unsigned __int16 *)(v17 + 8) - 36;
        v36 = RtlCompareMemoryUlong((PVOID)(v17 + 32), v35, 0xFEEEFEEE);
        if ( v36 != v35 )
        {
          DbgPrint(
            "HEAP: Free Heap block %p modified at %p after it was freed\n",
            (const void *)v17,
            (const void *)(v17 + v36 + 32));
          if ( (_BYTE)KdDebuggerEnabled )
            __debugbreak();
        }
        LOBYTE(v22) = v56;
        v34 = 0;
      }
      v64 = v17;
      if ( (*(_BYTE *)(v17 + 10) & 1) != 0 )
      {
        RtlpLogHeapFailure(3, a1, v17, 0, 0LL, 0LL);
        goto LABEL_114;
      }
      *(_BYTE *)(v17 + 10) = v11;
      v37 = *(unsigned __int16 *)(v17 + 8) - v12;
      v65 = v37;
      *(_WORD *)(v17 + 8) = v12;
      v38 = v6 - a3;
      v72 = v38;
      v39 = 16 * v12;
      if ( v38 >= 0x3F )
      {
        *(_QWORD *)(v39 + v17) = v38;
        *(_BYTE *)(v17 + 15) = 63;
      }
      else
      {
        *(_BYTE *)(v17 + 15) = v38;
      }
      *(_BYTE *)(v17 + 11) = 0;
      if ( v37 )
      {
        if ( v37 == 1 )
        {
          ++*(_WORD *)(v17 + 8);
          v40 = v38 + 16;
          v73 = v40;
          if ( v40 >= 0x3F )
          {
            *(_QWORD *)(v17 + 16 * (v12 + 1)) = v40;
            *(_BYTE *)(v17 + 15) = 63;
          }
          else
          {
            *(_BYTE *)(v17 + 15) = v40;
          }
        }
        else
        {
          v41 = v34 ^ 1;
          v42 = *(unsigned __int8 *)(v17 + 14);
          if ( (_BYTE)v42 )
            v43 = (v17 & 0xFFFFFFFFFFFF0000uLL) + ((1 - v42) << 16);
          else
            v43 = a1;
          v66 = v43;
          if ( !(unsigned __int8)RtlpCreateSplitBlock(a1, v43, (int)v17 + (int)v39, v22, v41, v12, v37) )
            goto LABEL_114;
        }
      }
      v10 = (_DWORD *)(v17 + 16);
      v44 = 16LL * *(unsigned __int16 *)(v17 + 8);
      if ( (*(_BYTE *)(v17 + 15) & 0x3F) == 0x3F )
        v44 -= 8LL;
      if ( v57 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_BYTE *)(v17 + 11) = *(_BYTE *)(v17 + 8) ^ *(_BYTE *)(v17 + 9) ^ *(_BYTE *)(v17 + 10);
          *(_DWORD *)(v17 + 8) ^= *(_DWORD *)(a1 + 136);
        }
        v45 = a5;
        if ( a5 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(a1 + 352));
          a5 = 0;
          v45 = 0;
        }
        if ( (v74 & 8) != 0 )
          memset(v10, 0, v44 - 8);
        goto LABEL_115;
      }
      if ( (v74 & 8) != 0 )
      {
        memset((void *)(v17 + 16), 0, v44 - 8);
LABEL_92:
        if ( (*(_DWORD *)(a1 + 112) & 0x20) != 0 )
        {
          *(__m128i *)((char *)v10 + a3) = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
          *(_BYTE *)(v17 + 10) |= 4u;
        }
        *(_BYTE *)(v17 + 11) = 0;
        if ( (*(_BYTE *)(v17 + 10) & 2) != 0 )
        {
          if ( *(_BYTE *)(v17 + 15) == 4 )
            v48 = (_OWORD *)(v17 - 32);
          else
            v48 = (_OWORD *)(v17 + 16LL * *(unsigned __int16 *)(v17 + 8) - 16);
          *v48 = 0LL;
        }
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_BYTE *)(v17 + 11) = *(_BYTE *)(v17 + 8) ^ *(_BYTE *)(v17 + 9) ^ *(_BYTE *)(v17 + 10);
          *(_DWORD *)(v17 + 8) ^= *(_DWORD *)(a1 + 136);
        }
        goto LABEL_114;
      }
      if ( (*(_DWORD *)(a1 + 112) & 0x40) == 0 )
        goto LABEL_92;
      v46 = (void *)(v17 + 16);
      v67 = v17 + 16;
      v47 = (a3 & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
      if ( !v47 )
        goto LABEL_92;
      if ( ((unsigned __int8)v10 & 4) != 0 )
      {
        *v10 = -1163005939;
        if ( !--v47 )
          goto LABEL_92;
        v46 = (void *)(v17 + 20);
        v67 = v17 + 20;
      }
      memset64(v46, 0xBAADF00DBAADF00DuLL, v47 >> 1);
      if ( (v47 & 1) != 0 )
        *((_DWORD *)v46 + v47 - 1) = -1163005939;
      goto LABEL_92;
    }
LABEL_113:
    v10 = 0LL;
    goto LABEL_114;
  }
  v17 = Entry - 16;
  v63 = Entry - 16;
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_DWORD *)(v17 + 8) ^= *(_DWORD *)(a1 + 136);
    if ( *(_BYTE *)(v17 + 11) != (*(_BYTE *)(v17 + 8) ^ (unsigned __int8)(*(_BYTE *)(v17 + 9) ^ *(_BYTE *)(v17 + 10))) )
      RtlpAnalyzeHeapFailure(a1, v17);
  }
  v18 = *(unsigned __int16 *)(v17 + 8);
  if ( v18 < v12 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v17 + 11) = *(_BYTE *)(v17 + 8) ^ *(_BYTE *)(v17 + 9) ^ *(_BYTE *)(v17 + 10);
      *(_DWORD *)(v17 + 8) ^= *(_DWORD *)(a1 + 136);
    }
    goto LABEL_40;
  }
  v19 = *(_QWORD *)(v17 + 16);
  v61 = v19;
  v20 = *(__int64 **)(v17 + 24);
  v58 = v20;
  v21 = *v20;
  v22 = *(_QWORD *)(v19 + 8);
  if ( *v20 == v22 && v21 == v17 + 16 )
  {
    *(_QWORD *)(a1 + 192) -= v18;
    v23 = *(__int64 ***)(a1 + 312);
    if ( v23 )
    {
      v24 = *(unsigned __int16 *)(v17 + 8);
      while ( 1 )
      {
        v25 = *((unsigned int *)v23 + 2);
        if ( v24 < v25 )
          break;
        if ( !*v23 )
        {
          LODWORD(v24) = v25 - 1;
          break;
        }
        v23 = (__int64 **)*v23;
      }
      RtlpHeapRemoveListEntry(a1, (_DWORD)v23, (_DWORD)v20, v17 + 16, v24, *(unsigned __int16 *)(v17 + 8));
      v19 = v61;
      v20 = v58;
    }
    *v20 = v19;
    *(_QWORD *)(v19 + 8) = v20;
    goto LABEL_50;
  }
  RtlpLogHeapFailure(13, a1, v17 + 16, v22, v21, 0LL);
LABEL_114:
  v45 = a5;
LABEL_115:
  if ( v45 )
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 352));
  return v10;
}
