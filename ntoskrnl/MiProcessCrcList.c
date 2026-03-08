/*
 * XREFs of MiProcessCrcList @ 0x1406A8670
 * Callers:
 *     MiCombineWorkingSet @ 0x140650E28 (MiCombineWorkingSet.c)
 *     MiCombineWorkingSetTail @ 0x140651030 (MiCombineWorkingSetTail.c)
 *     MiCombineAllPhysicalMemory @ 0x1407C7D50 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiSharePages @ 0x140228990 (MiSharePages.c)
 *     MiValidCombineProtection @ 0x140229F1C (MiValidCombineProtection.c)
 *     MiLocateCombineBlock @ 0x140229F50 (MiLocateCombineBlock.c)
 *     MiCompareActiveCrcEntries @ 0x14022A0D4 (MiCompareActiveCrcEntries.c)
 *     MiCapturePfnVm @ 0x14022A10C (MiCapturePfnVm.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     RtlAvlInsertNodeEx @ 0x140331710 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x140333B40 (RtlAvlRemoveNode.c)
 *     qsort @ 0x1403D48B0 (qsort.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiProcessCrcList(__int64 a1, unsigned __int64 *a2, size_t a3, int a4)
{
  unsigned __int64 *v4; // r12
  __int64 v5; // r13
  int v7; // ebx
  __int64 v8; // rax
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *v10; // r9
  __int64 v11; // rbx
  unsigned __int64 *v12; // rdi
  ULONG_PTR v13; // r13
  unsigned __int64 v14; // r15
  unsigned int v15; // esi
  unsigned __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // r11
  unsigned __int64 v20; // rdx
  unsigned __int64 *v21; // r14
  _QWORD *CombineBlock; // rax
  size_t v23; // r12
  __int64 *v24; // r14
  _QWORD *v25; // rax
  __int64 v26; // r8
  _QWORD *j; // rcx
  _QWORD *i; // rax
  _QWORD **v29; // rax
  _QWORD *v30; // rdx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r12
  unsigned __int64 v33; // rcx
  _QWORD *v34; // rsi
  _QWORD *Pool; // rax
  _QWORD *v36; // rdx
  bool v37; // r8
  _QWORD *v38; // rax
  unsigned __int64 v39; // rax
  __int64 v40; // r15
  _QWORD *v41; // rdx
  size_t v42; // rdi
  __int64 *v43; // rsi
  __int64 v44; // r15
  __int64 v45; // rdx
  _QWORD *v46; // rdi
  _QWORD *v47; // rax
  size_t k; // rsi
  size_t m; // rdx
  _QWORD *v50; // r8
  void *v51; // rcx
  unsigned __int64 v52; // [rsp+48h] [rbp-39h]
  PVOID P; // [rsp+50h] [rbp-31h] BYREF
  int v54; // [rsp+58h] [rbp-29h] BYREF
  PVOID Object; // [rsp+60h] [rbp-21h] BYREF
  unsigned int v56; // [rsp+68h] [rbp-19h]
  size_t NumOfElements; // [rsp+70h] [rbp-11h]
  unsigned __int64 v58; // [rsp+78h] [rbp-9h] BYREF
  unsigned __int64 v59; // [rsp+80h] [rbp-1h] BYREF
  __int64 v60; // [rsp+88h] [rbp+7h]
  struct _KTHREAD *v61; // [rsp+90h] [rbp+Fh]
  __int64 v64; // [rsp+F8h] [rbp+77h]
  int v65; // [rsp+F8h] [rbp+77h]

  if ( a3 )
  {
    v4 = a2;
    v5 = *(_QWORD *)a1;
    v7 = a4;
    v56 = *(_DWORD *)(a1 + 140);
    v8 = *(_QWORD *)(a1 + 8);
    v58 = 0LL;
    v54 = 0;
    v59 = 0LL;
    P = 0LL;
    v64 = v8;
    v60 = v5;
    qsort(a2, a3, 0x28uLL, MiCombinePageSortByHash);
    CurrentThread = KeGetCurrentThread();
    v10 = 0LL;
    v61 = CurrentThread;
    NumOfElements = 0LL;
    v52 = (unsigned __int64)&v4[5 * a3 - 5];
    if ( (unsigned __int64)v4 <= v52 )
    {
      v11 = v64;
      v12 = v4 + 1;
LABEL_4:
      if ( v11 && *(_DWORD *)(v11 + 4) || (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
        goto LABEL_17;
      v13 = 48 * v12[1] - 0x220000000000LL;
      v14 = *(_QWORD *)(v13 + 8) | 0x8000000000000000uLL;
      v15 = (*(_DWORD *)(v13 + 16) >> 5) & 0x1F;
      if ( !MiValidCombineProtection(v15) || v14 < v18 || v14 > v19 )
      {
        *v12 = (unsigned __int64)v10;
        goto LABEL_16;
      }
      v20 = *v12;
      v21 = v12 - 1;
      if ( (v12 - 1 == (unsigned __int64 *)v52 || v20 != v12[5]) && (v20 != v17 || v21 == v4) )
      {
        CombineBlock = MiLocateCombineBlock(v60, v20, v15, 0, v10);
        v10 = 0LL;
        if ( !CombineBlock )
        {
          *v12 = 0LL;
          goto LABEL_15;
        }
        v65 = 2;
      }
      else
      {
        v65 = 1;
        if ( (*(_BYTE *)(v13 + 34) & 0xC0) == 0xC0 )
        {
          *v12 = (unsigned __int64)v10;
          goto LABEL_15;
        }
      }
      Object = v10;
      v31 = MiCapturePfnVm((__int64 *)a1, v13, v56, *v12, &Object, &v58, &v54, &v59);
      v32 = v31;
      if ( !v31 || v58 != v14 || v54 != v15 )
        goto LABEL_94;
      v33 = v59;
      *((_DWORD *)v12 + 6) = v15;
      v34 = P;
      v12[2] = v33;
      if ( v34 )
      {
        do
        {
          if ( v31 > v34[4] )
          {
            v34 = (_QWORD *)v34[1];
          }
          else
          {
            if ( v31 >= v34[4] )
              break;
            v34 = (_QWORD *)*v34;
          }
        }
        while ( v34 );
        if ( v34 )
        {
          if ( Object )
            ObfDereferenceObject(Object);
          goto LABEL_53;
        }
      }
      Pool = MiAllocatePool(64, 0x38uLL, 0x6D56694Du);
      v34 = Pool;
      if ( !Pool )
      {
LABEL_94:
        if ( Object )
          ObfDereferenceObject(Object);
        v4 = a2;
        v10 = 0LL;
        *v12 = 0LL;
        goto LABEL_15;
      }
      v36 = P;
      v37 = 0;
      Pool[4] = v32;
      Pool[5] = Object;
      if ( !v36 )
        goto LABEL_52;
      while ( 1 )
      {
        if ( v32 < (unsigned __int64)(v36 + 4) )
        {
          v38 = (_QWORD *)*v36;
          if ( !*v36 )
            goto LABEL_52;
        }
        else
        {
          v38 = (_QWORD *)v36[1];
          if ( !v38 )
          {
            v37 = 1;
LABEL_52:
            RtlAvlInsertNodeEx((unsigned __int64 *)&P, (unsigned __int64)v36, v37, (unsigned __int64)v34);
LABEL_53:
            v39 = v34[6];
            ++NumOfElements;
            *v21 = v39;
            ++v34[3];
            v34[6] = v21;
            v40 = (__int64)(v14 << 25) >> 16;
            v12[1] = v40;
            v4 = a2;
            if ( v65 == 2 )
              v12[1] = v40 | 1;
            v10 = 0LL;
LABEL_15:
            v16 = v52;
LABEL_16:
            v12 += 5;
            CurrentThread = v61;
            if ( (unsigned __int64)(v12 - 1) > v16 )
            {
LABEL_17:
              v7 = a4;
              v5 = v60;
              break;
            }
            goto LABEL_4;
          }
        }
        v36 = v38;
      }
    }
    v23 = NumOfElements;
    v24 = v10;
    if ( NumOfElements )
    {
      v24 = (__int64 *)MiAllocatePool(256, 8 * NumOfElements, 0x6D56694Du);
      if ( v24 )
      {
        v25 = P;
        v26 = 0LL;
        j = 0LL;
        if ( P )
        {
          do
          {
            j = v25;
            v25 = (_QWORD *)*v25;
          }
          while ( v25 );
        }
        while ( j )
        {
          for ( i = (_QWORD *)j[6]; i; ++v26 )
          {
            if ( i[1] )
              v24[v26] = (__int64)i;
            i = (_QWORD *)*i;
          }
          v29 = (_QWORD **)j[1];
          v30 = j;
          if ( v29 )
          {
            v41 = *v29;
            for ( j = (_QWORD *)j[1]; v41; v41 = (_QWORD *)*v41 )
              j = v41;
          }
          else
          {
            for ( j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL); j; j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL) )
            {
              if ( (_QWORD *)*j == v30 )
                break;
              v30 = j;
            }
          }
        }
        qsort(v24, v23, 8uLL, (int (__cdecl *)(const void *, const void *))MiCombineActiveCrcSortByHash);
        v42 = 0LL;
        if ( v23 )
        {
          v43 = v24 + 1;
          do
          {
            v44 = *(v43 - 1);
            if ( (*(_BYTE *)(v44 + 16) & 1) != 0 )
            {
              if ( !MiLocateCombineBlock(v5, *(_QWORD *)(v44 + 8), *(_DWORD *)(v44 + 32), 0, (_QWORD *)(v44 + 24)) )
                *(_QWORD *)(v44 + 16) = -1LL;
            }
            else if ( !v42
                   || (v45 = *(v43 - 2), *(_QWORD *)(v45 + 16) == -1LL)
                   || (unsigned int)MiCompareActiveCrcEntries(*(v43 - 1), v45) )
            {
              if ( v42 == v23 - 1
                || *(_QWORD *)(*v43 + 16) == -1LL
                || (unsigned int)MiCompareActiveCrcEntries(v44, *v43) )
              {
                *(_QWORD *)(v44 + 16) = -1LL;
              }
            }
            ++v42;
            ++v43;
          }
          while ( v42 < v23 );
        }
      }
    }
    while ( P )
    {
      v46 = P;
      RtlAvlRemoveNode((unsigned __int64 *)&P, (unsigned __int64 *)P);
      if ( v24 )
      {
        v47 = (_QWORD *)v46[6];
        for ( k = 0LL; v47; v47 = (_QWORD *)*v47 )
        {
          if ( v47[2] == -1LL )
            --v46[3];
          else
            v24[k++] = (__int64)v47;
        }
        qsort(v24, k, 8uLL, (int (__cdecl *)(const void *, const void *))MiCombineActiveCrcSortByVa);
        v46[6] = 0LL;
        for ( m = 0LL; m < k; ++m )
        {
          v50 = (_QWORD *)v24[m];
          if ( m && v50[2] == *(_QWORD *)(v24[m - 1] + 16) )
          {
            --v46[3];
          }
          else
          {
            *v50 = v46[6];
            v46[6] = v50;
          }
        }
        if ( v46[3] )
        {
          *(_QWORD *)(a1 + 112) = v46[4];
          MiSharePages((__int64 *)a1, v46, v7);
        }
      }
      v51 = (void *)v46[5];
      if ( v51 )
        ObfDereferenceObject(v51);
      ExFreePoolWithTag(v46, 0);
    }
    if ( v24 )
      ExFreePoolWithTag(v24, 0);
  }
}
