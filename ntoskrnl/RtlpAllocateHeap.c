/*
 * XREFs of RtlpAllocateHeap @ 0x1405A8E28
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x1402E0BC8 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExGenRandom @ 0x14027E2F0 (ExGenRandom.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x1402B738C (RtlpHpHeapCheckCommitLimit.c)
 *     DbgPrint @ 0x1402BDD20 (DbgPrint.c)
 *     RtlCompareMemoryUlong @ 0x140420E50 (RtlCompareMemoryUlong.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlpCreateSplitBlock @ 0x1405A9BA8 (RtlpCreateSplitBlock.c)
 *     RtlpExtendHeap @ 0x1405AA9D8 (RtlpExtendHeap.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x1405AB400 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlpLogHeapFailure @ 0x1405B2884 (RtlpLogHeapFailure.c)
 *     RtlpAnalyzeHeapFailure @ 0x1405B28D8 (RtlpAnalyzeHeapFailure.c)
 *     RtlpFindEntry @ 0x1405B2FB0 (RtlpFindEntry.c)
 *     RtlpHeapRemoveListEntry @ 0x1405B33A0 (RtlpHeapRemoveListEntry.c)
 *     RtlGetNtGlobalFlags @ 0x1409BA7C0 (RtlGetNtGlobalFlags.c)
 */

_DWORD *__fastcall RtlpAllocateHeap(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        char a5,
        _DWORD *a6)
{
  unsigned __int64 v6; // r15
  __int16 v7; // bx
  char v8; // di
  _DWORD *v10; // r14
  char v11; // r13
  unsigned __int64 v12; // r12
  __int64 v14; // r15
  unsigned __int64 v15; // r12
  __int64 Entry; // rax
  __int64 v17; // rbx
  unsigned __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdi
  __int64 *v21; // r10
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 **v24; // rdx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 *v29; // r10
  __int64 **v30; // rdx
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rdi
  char v33; // al
  char v34; // r10
  char v35; // dl
  SIZE_T v36; // rdi
  SIZE_T v37; // rax
  __int64 v38; // r9
  unsigned __int64 v39; // rax
  __int64 v40; // rcx
  unsigned __int64 v41; // r15
  char v42; // di
  int v43; // eax
  int v44; // edx
  __int64 v45; // rdi
  __int64 v46; // r8
  char v47; // bl
  _DWORD *v48; // rcx
  void *v49; // r9
  unsigned __int64 v50; // rdx
  _OWORD *v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  _QWORD *v54; // rdi
  unsigned __int64 v55; // rcx
  __int64 v56; // r8
  __int64 *v57; // rax
  __int64 v58; // [rsp+30h] [rbp-F8h]
  char v59; // [rsp+40h] [rbp-E8h]
  int v60; // [rsp+48h] [rbp-E0h]
  __int64 *v61; // [rsp+58h] [rbp-D0h]
  __int64 v62; // [rsp+58h] [rbp-D0h]
  __int64 *v63; // [rsp+60h] [rbp-C8h]
  __int64 v64; // [rsp+68h] [rbp-C0h]
  __int64 v65; // [rsp+98h] [rbp-90h] BYREF
  __int64 v66; // [rsp+A0h] [rbp-88h]
  __int64 v67; // [rsp+A8h] [rbp-80h]
  __int64 v68; // [rsp+B0h] [rbp-78h]
  __int64 v69; // [rsp+B8h] [rbp-70h]
  __int64 v70; // [rsp+C0h] [rbp-68h]
  __int64 v71; // [rsp+C8h] [rbp-60h]
  __int64 v72; // [rsp+D0h] [rbp-58h]
  __int64 v73; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v74; // [rsp+E0h] [rbp-48h]
  unsigned __int64 v75; // [rsp+E8h] [rbp-40h]
  char v76; // [rsp+138h] [rbp+10h]
  unsigned __int64 v78; // [rsp+148h] [rbp+20h] BYREF

  v78 = a4;
  v76 = a2;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  v67 = 0LL;
  v60 = 1;
  v68 = 0LL;
  a5 = 0;
  v10 = 0LL;
  v71 = 0LL;
  v65 = 0LL;
  v70 = 0LL;
  if ( (a2 & 0x3C010F60) != 0 || a3 >= 0x80000000 )
  {
    v60 = 0;
    *a6 = 4;
    if ( a3 > 0x7FFFFFFFFFFFFFFFLL )
      return 0LL;
    v14 = a3;
    if ( !a3 )
      v14 = 1LL;
    v6 = *(_QWORD *)(a1 + 264) & (*(_QWORD *)(a1 + 256) + v14);
    if ( v6 < 0x20 )
      v6 = 32LL;
    v78 = v6;
    v11 = (a2 >> 4) & 0xE0 | 1;
    if ( (a2 & 0x3C000100) != 0 || (v15 = v6, *(_QWORD *)(a1 + 328)) )
    {
      v11 = (a2 >> 4) & 0xE0 | 3;
      v15 = v6 + 16;
      v6 = v15;
      v78 = v15;
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
      v78 = a4 + 16;
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
      v78 = v6 + 56;
      if ( (unsigned int)RtlpHpHeapCheckCommitLimit(
                           (v6 + 4151) & 0xFFFFFFFFFFFFF000uLL,
                           *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664),
                           a1,
                           (unsigned __int64 *)(a1 + 376)) )
      {
        v70 = (ExGenRandom(1) & 0xF) << 12;
        v53 = RtlpHpAllocVirtBlockCommitFirst(v52, &v78, v70, &v65);
        v54 = (_QWORD *)v53;
        v71 = v53;
        if ( v53 )
        {
          v55 = v78;
          *(_WORD *)(v53 + 56) = v78 - v7;
          *(_BYTE *)(v53 + 58) = v11 | 2;
          *(_QWORD *)(v53 + 32) = v55;
          *(_QWORD *)(v53 + 40) = v65;
          *(_BYTE *)(v53 + 63) = 4;
          *(_QWORD *)(a1 + 592) += v55;
          if ( *(_DWORD *)(a1 + 124) )
          {
            *(_BYTE *)(v53 + 59) = *(_BYTE *)(v53 + 56) ^ *(_BYTE *)(v53 + 57) ^ *(_BYTE *)(v53 + 58);
            *(_DWORD *)(v53 + 56) ^= *(_DWORD *)(a1 + 136);
          }
          v56 = a1 + 272;
          v57 = *(__int64 **)(a1 + 280);
          if ( *v57 == a1 + 272 )
          {
            *v54 = v56;
            v54[1] = v57;
            *v57 = (__int64)v54;
            *(_QWORD *)(a1 + 280) = v54;
          }
          else
          {
            RtlpLogHeapFailure(13, 0, v56, 0, *v57, 0LL);
          }
          v10 = v54 + 8;
        }
        else
        {
          v10 = 0LL;
          ++*(_DWORD *)(a1 + 632);
        }
        goto LABEL_116;
      }
    }
    goto LABEL_115;
  }
  v72 = a1 + 336;
  Entry = RtlpFindEntry(a1, v12);
  v73 = Entry;
  if ( a1 + 336 != Entry )
  {
    v17 = Entry - 16;
    v66 = Entry - 16;
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v17 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v17 + 11) != (*(_BYTE *)(v17 + 8) ^ (unsigned __int8)(*(_BYTE *)(v17 + 9) ^ *(_BYTE *)(v17 + 10))) )
        RtlpAnalyzeHeapFailure(a1, v17);
    }
    v18 = *(unsigned __int16 *)(v17 + 8);
    if ( v18 >= v12 )
    {
      v19 = v17 + 16;
      v20 = *(_QWORD *)(v17 + 16);
      v64 = v20;
      v21 = *(__int64 **)(v17 + 24);
      v61 = v21;
      v22 = *v21;
      v23 = *(_QWORD *)(v20 + 8);
      if ( *v21 == v23 && v22 == v19 )
      {
        *(_QWORD *)(a1 + 192) -= v18;
        v24 = *(__int64 ***)(a1 + 312);
        if ( v24 )
        {
          v25 = *(unsigned __int16 *)(v17 + 8);
          while ( 1 )
          {
            v26 = *((unsigned int *)v24 + 2);
            if ( v25 < v26 )
              break;
            if ( !*v24 )
            {
              LODWORD(v25) = v26 - 1;
              break;
            }
            v24 = (__int64 **)*v24;
          }
          RtlpHeapRemoveListEntry(a1, (_DWORD)v24, v19, v17 + 16, v25, *(unsigned __int16 *)(v17 + 8));
          v20 = v64;
          v21 = v61;
        }
        *v21 = v20;
        *(_QWORD *)(v20 + 8) = v21;
LABEL_50:
        v33 = 1;
        goto LABEL_53;
      }
      goto LABEL_52;
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v17 + 11) = *(_BYTE *)(v17 + 8) ^ *(_BYTE *)(v17 + 9) ^ *(_BYTE *)(v17 + 10);
      *(_DWORD *)(v17 + 8) ^= *(_DWORD *)(a1 + 136);
    }
  }
  v27 = RtlpExtendHeap(a1);
  v17 = v27;
  v66 = v27;
  if ( !v27 )
  {
LABEL_115:
    v10 = 0LL;
    goto LABEL_116;
  }
  v19 = v27 + 16;
  v28 = *(_QWORD *)(v27 + 16);
  v62 = v28;
  v29 = *(__int64 **)(v27 + 24);
  v63 = v29;
  v22 = *v29;
  v23 = *(_QWORD *)(v28 + 8);
  if ( *v29 == v23 && v22 == v19 )
  {
    *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v17 + 8);
    v30 = *(__int64 ***)(a1 + 312);
    if ( v30 )
    {
      v31 = *(unsigned __int16 *)(v17 + 8);
      while ( 1 )
      {
        v32 = *((unsigned int *)v30 + 2);
        if ( v31 < v32 )
          break;
        if ( !*v30 )
        {
          LODWORD(v31) = v32 - 1;
          break;
        }
        v30 = (__int64 **)*v30;
      }
      RtlpHeapRemoveListEntry(a1, (_DWORD)v30, v19, v19, v31, *(unsigned __int16 *)(v17 + 8));
      v28 = v62;
      v29 = v63;
    }
    *v29 = v28;
    *(_QWORD *)(v28 + 8) = v29;
    goto LABEL_50;
  }
LABEL_52:
  RtlpLogHeapFailure(13, a1, v19, v23, v22, 0LL);
  v33 = 0;
LABEL_53:
  if ( v33 )
  {
    v34 = *(_BYTE *)(v17 + 10);
    v59 = v34;
    v35 = v60;
    if ( !v60 && (v34 & 4) != 0 )
    {
      v36 = 16LL * *(unsigned __int16 *)(v17 + 8) - 32;
      if ( (v34 & 2) != 0 && v36 > 4 )
        v36 = 16LL * *(unsigned __int16 *)(v17 + 8) - 36;
      v37 = RtlCompareMemoryUlong((PVOID)(v17 + 32), v36, 0xFEEEFEEE);
      if ( v37 != v36 )
      {
        DbgPrint(
          "HEAP: Free Heap block %p modified at %p after it was freed\n",
          (const void *)v17,
          (const void *)(v17 + v37 + 32));
        if ( (_BYTE)KdDebuggerEnabled )
          __debugbreak();
      }
      v34 = v59;
      v35 = 0;
    }
    v67 = v17;
    if ( (*(_BYTE *)(v17 + 10) & 1) != 0 )
    {
      RtlpLogHeapFailure(3, a1, v17, 0, 0LL, 0LL);
      goto LABEL_116;
    }
    *(_BYTE *)(v17 + 10) = v11;
    v38 = *(unsigned __int16 *)(v17 + 8) - v12;
    v68 = v38;
    *(_WORD *)(v17 + 8) = v12;
    v39 = v6 - a3;
    v74 = v6 - a3;
    v40 = 16 * v12;
    if ( v6 - a3 >= 0x3F )
    {
      *(_QWORD *)(v40 + v17) = v39;
      *(_BYTE *)(v17 + 15) = 63;
    }
    else
    {
      *(_BYTE *)(v17 + 15) = v39;
    }
    *(_BYTE *)(v17 + 11) = 0;
    if ( v38 )
    {
      if ( v38 == 1 )
      {
        ++*(_WORD *)(v17 + 8);
        v41 = v6 - a3 + 16;
        v75 = v41;
        if ( v41 >= 0x3F )
        {
          *(_QWORD *)(v40 + v17 + 16) = v41;
          *(_BYTE *)(v17 + 15) = 63;
        }
        else
        {
          *(_BYTE *)(v17 + 15) = v41;
        }
      }
      else
      {
        v42 = v35 ^ 1;
        v43 = *(unsigned __int8 *)(v17 + 14);
        if ( (_BYTE)v43 )
          v44 = (v17 & 0xFFFF0000) + ((1 - v43) << 16);
        else
          v44 = a1;
        v58 = v38;
        LOBYTE(v38) = v34;
        if ( !(unsigned __int8)RtlpCreateSplitBlock(a1, v44, (int)v40 + (int)v17, v38, v42, v12, v58) )
          goto LABEL_116;
      }
    }
    v10 = (_DWORD *)(v17 + 16);
    v45 = 16LL * *(unsigned __int16 *)(v17 + 8);
    v46 = v45;
    if ( (*(_BYTE *)(v17 + 15) & 0x3F) == 0x3F )
    {
      v46 = v45 - 8;
      v45 -= 8LL;
    }
    if ( v60 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v17 + 11) = *(_BYTE *)(v17 + 8) ^ *(_BYTE *)(v17 + 9) ^ *(_BYTE *)(v17 + 10);
        *(_DWORD *)(v17 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      v47 = a5;
      if ( a5 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(a1 + 352));
        a5 = 0;
        v47 = 0;
      }
      if ( (v76 & 8) != 0 )
        memset(v10, 0, v45 - 8);
      goto LABEL_117;
    }
    if ( (v76 & 8) != 0 )
    {
      memset((void *)(v17 + 16), 0, v46 - 8);
      v48 = (_DWORD *)(a1 + 112);
LABEL_95:
      if ( (*v48 & 0x20) != 0 )
      {
        *(__m128i *)((char *)v10 + a3) = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
        *(_BYTE *)(v17 + 10) |= 4u;
      }
      *(_BYTE *)(v17 + 11) = 0;
      if ( (*(_BYTE *)(v17 + 10) & 2) != 0 )
      {
        if ( *(_BYTE *)(v17 + 15) == 4 )
          v51 = (_OWORD *)(v17 - 32);
        else
          v51 = (_OWORD *)(v17 + 16LL * *(unsigned __int16 *)(v17 + 8) - 16);
        *v51 = 0LL;
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v17 + 11) = *(_BYTE *)(v17 + 8) ^ *(_BYTE *)(v17 + 9) ^ *(_BYTE *)(v17 + 10);
        *(_DWORD *)(v17 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      goto LABEL_116;
    }
    v48 = (_DWORD *)(a1 + 112);
    if ( (*(_DWORD *)(a1 + 112) & 0x40) == 0 )
      goto LABEL_95;
    v49 = (void *)(v17 + 16);
    v69 = v17 + 16;
    v50 = (a3 & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
    if ( !v50 )
      goto LABEL_95;
    if ( ((unsigned __int8)v10 & 4) != 0 )
    {
      *v10 = -1163005939;
      if ( !--v50 )
        goto LABEL_95;
      v49 = (void *)(v17 + 20);
      v69 = v17 + 20;
    }
    memset64(v49, 0xBAADF00DBAADF00DuLL, v50 >> 1);
    v48 = (_DWORD *)(a1 + 112);
    if ( (v50 & 1) != 0 )
      *((_DWORD *)v49 + v50 - 1) = -1163005939;
    goto LABEL_95;
  }
LABEL_116:
  v47 = a5;
LABEL_117:
  if ( v47 )
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 352));
  return v10;
}
