/*
 * XREFs of MiProcessCrcList @ 0x140726CE0
 * Callers:
 *     MiCombineWorkingSetTail @ 0x14055CD40 (MiCombineWorkingSetTail.c)
 *     MiCombineAllPhysicalMemory @ 0x140727470 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140234490 (RtlAvlRemoveNode.c)
 *     MiProtectionToCacheAttribute @ 0x1402417B0 (MiProtectionToCacheAttribute.c)
 *     MiAllocatePool @ 0x14025A5D0 (MiAllocatePool.c)
 *     RtlAvlInsertNodeEx @ 0x140296BD0 (RtlAvlInsertNodeEx.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     MiDecrementCombinedPte @ 0x140366814 (MiDecrementCombinedPte.c)
 *     MiValidCombineProtection @ 0x140367730 (MiValidCombineProtection.c)
 *     MiAllocateCombineProto @ 0x140367760 (MiAllocateCombineProto.c)
 *     MiCompareActiveCrcEntries @ 0x1403679E8 (MiCompareActiveCrcEntries.c)
 *     MiCapturePfnVm @ 0x140367A50 (MiCapturePfnVm.c)
 *     MiSharePages @ 0x140367CB0 (MiSharePages.c)
 *     MiPushCombineBlock @ 0x14036A7D8 (MiPushCombineBlock.c)
 *     MiFreeCombineBlock @ 0x14036B080 (MiFreeCombineBlock.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     qsort @ 0x1403D23C0 (qsort.c)
 *     MiPopulateCombineMdls @ 0x140726B30 (MiPopulateCombineMdls.c)
 *     MiFreeCombineMdls @ 0x140726C28 (MiFreeCombineMdls.c)
 *     MiDereferenceCombineCrc @ 0x1407279FC (MiDereferenceCombineCrc.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 *__fastcall MiProcessCrcList(__int64 a1, __int64 *a2, size_t a3, int a4)
{
  int v4; // ebx
  __int64 *result; // rax
  __int64 v7; // r12
  __int64 v8; // r13
  size_t v9; // r10
  __int64 v10; // rdx
  unsigned __int64 v11; // r8
  __int64 *v12; // r14
  PADAPTER_OBJECT v13; // rbx
  __int64 CombineProto; // r13
  ULONG_PTR v15; // rsi
  unsigned __int64 v16; // r15
  unsigned int v17; // edi
  __int64 v18; // rdx
  __int64 *v19; // r9
  unsigned __int64 v20; // r11
  __int64 v21; // rcx
  char *v22; // rsi
  __int64 v23; // rax
  _QWORD *v24; // rdi
  _QWORD *Pool; // rax
  char *v26; // rdx
  bool v27; // r8
  char *v28; // rax
  char *v29; // r15
  _QWORD *v30; // rax
  __int64 v31; // r8
  _QWORD *j; // rcx
  __int64 i; // rax
  _QWORD **v34; // rax
  _QWORD *v35; // rdx
  _QWORD *v36; // rdx
  _QWORD *v37; // r12
  size_t v38; // rsi
  _QWORD **v39; // r14
  _QWORD *v40; // rdi
  unsigned __int64 v41; // r10
  __int64 v42; // rdx
  __int64 *v43; // r12
  _QWORD *v44; // rdi
  size_t v45; // r14
  __int64 v46; // rsi
  _QWORD *v47; // rax
  size_t k; // rsi
  __int64 v49; // rcx
  __int64 v50; // rdx
  struct _DMA_ADAPTER *v51; // rcx
  __int64 v52; // rcx
  _QWORD *v53; // rdx
  int v54; // eax
  __int64 v55; // rax
  size_t NumOfElements; // [rsp+48h] [rbp-79h]
  PVOID P; // [rsp+50h] [rbp-71h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+58h] [rbp-69h] BYREF
  __int64 *v59; // [rsp+60h] [rbp-61h]
  int v60; // [rsp+68h] [rbp-59h] BYREF
  int v61; // [rsp+6Ch] [rbp-55h]
  __int64 v62[2]; // [rsp+70h] [rbp-51h] BYREF
  __int64 v63; // [rsp+80h] [rbp-41h] BYREF
  __int64 *v64; // [rsp+88h] [rbp-39h]
  unsigned int v65; // [rsp+90h] [rbp-31h]
  __int64 v66; // [rsp+98h] [rbp-29h]
  unsigned __int64 v67; // [rsp+A0h] [rbp-21h] BYREF
  unsigned __int64 v68; // [rsp+A8h] [rbp-19h]
  __int64 v69; // [rsp+B0h] [rbp-11h] BYREF
  __int128 v70; // [rsp+B8h] [rbp-9h] BYREF
  __int64 v71; // [rsp+C8h] [rbp+7h]

  v4 = a4;
  v59 = a2;
  v64 = (__int64 *)a1;
  result = a2;
  v61 = a4;
  v67 = 0LL;
  v60 = 0;
  v63 = 0LL;
  v71 = 0LL;
  v70 = 0LL;
  if ( a3 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    v8 = *(_QWORD *)a1;
    v65 = *(_DWORD *)(a1 + 60);
    P = 0LL;
    v66 = v8;
    v69 = v8;
    qsort(a2, a3, 0x28uLL, MiCombinePageSortByHash);
    DmaAdapter = (PADAPTER_OBJECT)KeGetCurrentThread();
    v9 = 0LL;
    NumOfElements = 0LL;
    v62[1] = (__int64)v62;
    v10 = 0LL;
    v11 = (unsigned __int64)&v59[5 * a3 - 5];
    v12 = v59;
    v68 = v11;
    v62[0] = (__int64)v62;
    if ( (unsigned __int64)v59 <= v11 )
    {
      v13 = DmaAdapter;
      while ( 1 )
      {
        if ( v7 && *(_DWORD *)(v7 + 4) || (*(_DWORD *)&v13[81].Version & 1) != 0 )
        {
LABEL_55:
          v4 = v61;
          v8 = v66;
          goto LABEL_56;
        }
        CombineProto = 0LL;
        v15 = 48 * v12[1] - 0x58000000000LL;
        v16 = *(_QWORD *)(v15 + 8) | 0x8000000000000000uLL;
        v17 = (*(_DWORD *)(v15 + 16) >> 5) & 0x1F;
        if ( !MiValidCombineProtection(v17) || v16 < v20 || v16 > 0xFFFFF6FFFFFFFFFFuLL )
          goto LABEL_15;
        v21 = *v12;
        if ( (v12 == (__int64 *)v11 || v21 != v12[5]) && (v21 != v18 || v12 == v19) )
        {
          CombineProto = MiAllocateCombineProto(v66, *v12, v17, 0LL, 0);
          if ( !CombineProto )
            goto LABEL_14;
          v21 = *v12;
        }
        else if ( (*(_BYTE *)(v15 + 34) & 0xC0u) >= 0xC0 )
        {
          *v12 = 0LL;
          goto LABEL_15;
        }
        DmaAdapter = 0LL;
        v22 = MiCapturePfnVm(v64, v15, v65, v21, (unsigned __int64 *)&DmaAdapter, &v67, &v60, &v63);
        if ( !v22 || v67 != v16 || v60 != v17 )
        {
          if ( DmaAdapter )
            HalPutDmaAdapter(DmaAdapter);
          if ( CombineProto )
            MiDecrementCombinedPte(0LL, CombineProto + 48);
LABEL_49:
          *v12 = 0LL;
LABEL_14:
          v9 = NumOfElements;
          goto LABEL_15;
        }
        if ( !CombineProto )
          goto LABEL_23;
        v23 = v63;
        if ( *(_QWORD *)(CombineProto + 64) != v63 )
          break;
LABEL_24:
        *((_DWORD *)v12 + 8) = v17;
        v12[3] = v23;
        if ( CombineProto )
          v12[4] = CombineProto;
        v24 = P;
        if ( !P )
          goto LABEL_34;
        while ( (unsigned __int64)v22 > v24[4] )
        {
          v24 = (_QWORD *)v24[1];
LABEL_33:
          if ( !v24 )
            goto LABEL_34;
        }
        if ( (unsigned __int64)v22 < v24[4] )
        {
          v24 = (_QWORD *)*v24;
          goto LABEL_33;
        }
        if ( v24 )
        {
          if ( DmaAdapter )
            HalPutDmaAdapter(DmaAdapter);
          goto LABEL_42;
        }
LABEL_34:
        Pool = MiAllocatePool(64, 0x38uLL, 0x6D56694Du);
        v24 = Pool;
        if ( !Pool )
        {
          if ( DmaAdapter )
            HalPutDmaAdapter(DmaAdapter);
          if ( CombineProto )
          {
            MiDecrementCombinedPte(0LL, CombineProto + 48);
            v12[4] = 0LL;
            goto LABEL_49;
          }
          goto LABEL_14;
        }
        v26 = (char *)P;
        v27 = 0;
        Pool[4] = v22;
        Pool[5] = DmaAdapter;
        if ( !v26 )
          goto LABEL_41;
        while ( 2 )
        {
          if ( v22 < v26 + 32 )
          {
            v28 = *(char **)v26;
            if ( !*(_QWORD *)v26 )
              goto LABEL_41;
            goto LABEL_38;
          }
          v28 = (char *)*((_QWORD *)v26 + 1);
          if ( v28 )
          {
LABEL_38:
            v26 = v28;
            continue;
          }
          break;
        }
        v27 = 1;
LABEL_41:
        RtlAvlInsertNodeEx((unsigned __int64 *)&P, (unsigned __int64)v26, v27, v24);
LABEL_42:
        v9 = NumOfElements + 1;
        v12[2] = v24[6];
        ++v24[3];
        ++NumOfElements;
        v24[6] = v12;
        v12[1] = (__int64)(v16 << 25) >> 16;
LABEL_15:
        v10 = *v12;
        v12 += 5;
        if ( (unsigned __int64)v12 > v68 )
          goto LABEL_55;
        v11 = v68;
      }
      MiDecrementCombinedPte(0LL, CombineProto + 48);
      CombineProto = MiAllocateCombineProto(v66, *v12, v17, &v63, 0);
      if ( !CombineProto )
      {
        if ( !DmaAdapter )
          goto LABEL_49;
        HalPutDmaAdapter(DmaAdapter);
        *v12 = 0LL;
        goto LABEL_14;
      }
LABEL_23:
      v23 = v63;
      goto LABEL_24;
    }
LABEL_56:
    v29 = 0LL;
    if ( v9 && (v29 = (char *)MiAllocatePool(256, 8 * v9, 0x6D56694Du)) != 0LL )
    {
      v30 = P;
      v31 = 0LL;
      j = 0LL;
      if ( P )
      {
        do
        {
          j = v30;
          v30 = (_QWORD *)*v30;
        }
        while ( v30 );
      }
      while ( j )
      {
        for ( i = j[6]; i; i = *(_QWORD *)(i + 16) )
          *(_QWORD *)&v29[8 * v31++] = i;
        v34 = (_QWORD **)j[1];
        v35 = j;
        if ( v34 )
        {
          v36 = *v34;
          for ( j = (_QWORD *)j[1]; v36; v36 = (_QWORD *)*v36 )
            j = v36;
        }
        else
        {
          for ( j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL); j; j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL) )
          {
            if ( (_QWORD *)*j == v35 )
              break;
            v35 = j;
          }
        }
      }
      qsort(v29, NumOfElements, 8uLL, (int (__cdecl *)(const void *, const void *))MiCombineActiveCrcSortByHash);
      v37 = 0LL;
      v38 = 0LL;
      if ( NumOfElements )
      {
        v39 = (_QWORD **)(v29 + 8);
        while ( 1 )
        {
          v40 = *(v39 - 1);
          v41 = v40[4];
          if ( v41 <= 0x100 )
          {
            if ( (v38 && !(unsigned int)MiCompareActiveCrcEntries(*(v39 - 1), *(v39 - 2))
               || v38 != NumOfElements - 1 && !(unsigned int)MiCompareActiveCrcEntries(v40, *v39))
              && v42 )
            {
              if ( v37 && !(unsigned int)MiCompareActiveCrcEntries(v37, v40) )
                goto LABEL_79;
              v53 = (_QWORD *)MiAllocateCombineProto(v8, *v40, v41, v40 + 3, 1);
              if ( !v53 )
                goto LABEL_79;
LABEL_110:
              if ( v53[3] )
              {
                v40[4] = v53;
              }
              else
              {
                MiPushCombineBlock(v62, v53);
                v54 = MiProtectionToCacheAttribute(*((_DWORD *)v40 + 8));
                ++*((_QWORD *)&v70 + v54);
              }
              v37 = v40;
              goto LABEL_79;
            }
            v53 = (_QWORD *)MiAllocateCombineProto(v8, *v40, v41, v40 + 3, 0);
            if ( v53 )
              goto LABEL_110;
            v40[1] = -1LL;
          }
LABEL_79:
          ++v38;
          ++v39;
          if ( v38 >= NumOfElements )
          {
            v4 = v61;
            break;
          }
        }
      }
      v43 = v64;
      MiPopulateCombineMdls((char *)v64, v4, (__int64)&v70);
    }
    else
    {
      v43 = v64;
    }
    while ( P )
    {
      v44 = P;
      RtlAvlRemoveNode((unsigned __int64 *)&P, (unsigned __int64 *)P);
      v45 = v44[3];
      v46 = v44[6];
      if ( v29 )
      {
        if ( v46 )
        {
          v47 = v29;
          do
          {
            *v47++ = v46;
            v46 = *(_QWORD *)(v46 + 16);
          }
          while ( v46 );
        }
        qsort(v29, v45, 8uLL, (int (__cdecl *)(const void *, const void *))MiCombineActiveCrcSortByVa);
        v44[6] = 0LL;
        for ( k = 0LL; k < v45; ++k )
        {
          v49 = *(_QWORD *)&v29[8 * k];
          v50 = *(_QWORD *)(v49 + 8);
          if ( v50 == -1 || k && v50 == *(_QWORD *)(*(_QWORD *)&v29[8 * k - 8] + 8LL) )
          {
            MiDereferenceCombineCrc(v49);
            --v44[3];
          }
          else
          {
            *(_QWORD *)(v49 + 16) = v44[6];
            v44[6] = v49;
          }
        }
        if ( v44[3] )
          MiSharePages((__int64)v43, v44, (unsigned __int64 *)v62, &v69, v4);
      }
      else
      {
        for ( ; v46; v46 = *(_QWORD *)(v46 + 16) )
          MiDereferenceCombineCrc(v46);
      }
      v51 = (struct _DMA_ADAPTER *)v44[5];
      if ( v51 )
        HalPutDmaAdapter(v51);
      ExFreePoolWithTag(v44, 0);
    }
    if ( v29 )
      ExFreePoolWithTag(v29, 0);
    if ( (*((_DWORD *)v43 + 15) & 2) == 0 )
      MiFreeCombineMdls((__int64)v43, v10, v11);
    while ( 1 )
    {
      v52 = v62[0];
      result = v62;
      if ( (__int64 *)v62[0] == v62 )
        break;
      if ( *(__int64 **)(v62[0] + 8) != v62 || (v55 = *(_QWORD *)v62[0], *(_QWORD *)(*(_QWORD *)v62[0] + 8LL) != v62[0]) )
        __fastfail(3u);
      v62[0] = *(_QWORD *)v62[0];
      *(_QWORD *)(v55 + 8) = v62;
      *(_QWORD *)(v52 + 32) = 0LL;
      MiFreeCombineBlock(v52);
    }
  }
  return result;
}
