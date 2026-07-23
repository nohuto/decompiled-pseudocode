/*
 * XREFs of IopCreateFile @ 0x14060B920
 * Callers:
 *     IoCreateFile @ 0x14060B630 (IoCreateFile.c)
 *     IoCreateFileEx @ 0x14060B6D0 (IoCreateFileEx.c)
 *     NtOpenFile @ 0x14060B820 (NtOpenFile.c)
 *     NtCreateFile @ 0x14060B890 (NtCreateFile.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140252644 (ExFreeToNPagedLookasideList.c)
 *     PsGetCurrentProcess @ 0x1402BBC90 (PsGetCurrentProcess.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1402D37D0 (ExAllocatePoolWithQuotaTag.c)
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 *     PsGetCurrentSilo @ 0x140345940 (PsGetCurrentSilo.c)
 *     RtlpInterlockedPopEntrySList @ 0x140406FB0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140406FF0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14060CE40 (FsRtlFreeExtraCreateParameter.c)
 *     IoCheckEaBufferValidity @ 0x14060CF10 (IoCheckEaBufferValidity.c)
 *     ObCloseHandle @ 0x14061AFE0 (ObCloseHandle.c)
 *     IopCloseFile @ 0x14064A140 (IopCloseFile.c)
 *     ObOpenObjectByNameEx @ 0x1406CEA90 (ObOpenObjectByNameEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopCreateFile(
        HANDLE *a1,
        int a2,
        _SLIST_ENTRY *a3,
        NTSTATUS *a4,
        HANDLE *a5,
        int a6,
        int a7,
        unsigned int a8,
        int a9,
        unsigned __int64 a10,
        unsigned int a11,
        int a12,
        _SLIST_ENTRY *a13,
        int a14,
        int a15,
        __int16 *Src)
{
  int v16; // r15d
  char v17; // cl
  char PreviousMode; // al
  struct _KPRCB *CurrentPrcb; // rsi
  _GENERAL_LOOKASIDE *P; // rbx
  PSLIST_ENTRY v21; // rdi
  _GENERAL_LOOKASIDE *L; // rbx
  struct _KPRCB *v23; // rdx
  _GENERAL_LOOKASIDE *v24; // rcx
  _SLIST_ENTRY *v26; // r13
  struct _KPRCB *v27; // rdx
  _GENERAL_LOOKASIDE *v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  HANDLE v31; // rbx
  unsigned __int64 v32; // rcx
  __int16 v33; // dx
  struct _KPRCB *v34; // rdx
  _GENERAL_LOOKASIDE *v35; // rcx
  unsigned __int64 v36; // rsi
  ULONG v37; // r14d
  struct _KPRCB *v38; // rdx
  _GENERAL_LOOKASIDE *v39; // rcx
  unsigned __int64 v40; // rax
  PVOID PoolWithQuotaTag; // rax
  int v42; // eax
  int v43; // ecx
  NTSTATUS *v44; // r14
  unsigned __int64 v45; // rcx
  __int16 v46; // dx
  __int64 v47; // r14
  ULONG v48; // esi
  PVOID PoolWithTag; // rax
  struct _KPRCB *v50; // rdx
  _GENERAL_LOOKASIDE *v51; // rcx
  NTSTATUS v52; // esi
  struct _KPRCB *v53; // rdx
  _GENERAL_LOOKASIDE *v54; // rcx
  KPROCESSOR_MODE v55; // r15
  size_t v56; // r8
  struct _KTHREAD *CurrentThread; // rax
  int v58; // r12d
  void *v59; // rcx
  __int64 v60; // r13
  int v61; // eax
  __int64 **v62; // rsi
  __int64 *v63; // rax
  __int64 v64; // rcx
  _QWORD *v65; // r14
  __int64 v66; // r15
  void (__fastcall *v67)(_QWORD *, _QWORD *); // rax
  __int64 v68; // rcx
  __int64 *v69; // rbx
  __int64 *v70; // rcx
  __int64 *v71; // rdx
  __int64 **v72; // rax
  int Next; // ebx
  int v74; // ecx
  __int64 v75; // rcx
  unsigned __int64 v76; // rcx
  __int64 v77; // rax
  struct _DMA_ADAPTER *v78; // rcx
  unsigned int v79; // [rsp+44h] [rbp-64h]
  unsigned __int8 v80; // [rsp+4Ch] [rbp-5Ch]
  HANDLE Handle; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int64 v82; // [rsp+68h] [rbp-40h]
  int v87; // [rsp+118h] [rbp+70h]

  v16 = a9;
  v17 = 0;
  v82 = 0LL;
  Handle = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (a14 & 0x100) == 0 )
    v17 = PreviousMode;
  v80 = v17;
  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[8].P;
  ++P->TotalAllocates;
  v21 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( !v21 )
  {
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[8].L;
    ++L->TotalAllocates;
    v21 = RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !v21 )
    {
      ++L->AllocateMisses;
      v21 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))L->AllocateEx)(
                            (unsigned int)L->Type,
                            L->Size,
                            L->Tag);
    }
  }
  if ( !v21 )
    return 3221225626LL;
  LODWORD(v21->Next) = CurrentPrcb->Number;
  if ( !v80 && (a14 & 0x200) == 0 )
    goto LABEL_50;
  if ( (a6 & 0xFFA50048) != 0
    || (a7 & 0xFFFFFFF8) != 0
    || a8 > 5
    || (a9 & 0xEF000000) != 0
    || (a9 & 0x30) != 0 && (a2 & 0x100000) == 0
    || (a9 & 0x1000) != 0 && (a2 & 0x10000) == 0
    || (a9 & 0x30) == 0x30
    || (a9 & 0x41) == 1 && ((a9 & 0xEF5E0ACC) != 0 || a8 - 1 > 2)
    || (a9 & 0x100100) == 0x100100
    || (a9 & 0x10100) == 0x10100
    || (a9 & 0x110000) == 0x110000
    || (a9 & 8) != 0 && (a2 & 4) != 0 )
  {
    goto LABEL_41;
  }
  if ( IopFailZeroAccessCreate && !a2 )
  {
    v23 = KeGetCurrentPrcb();
    v24 = v23->PPLookasideList[8].P;
    ++v24->TotalFrees;
    if ( LOWORD(v24->ListHead.Alignment) < v24->Depth
      || (++v24->FreeMisses,
          v24 = v23->PPLookasideList[8].L,
          ++v24->TotalFrees,
          LOWORD(v24->ListHead.Alignment) < v24->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v24->ListHead, v21);
      return 3221225506LL;
    }
    else
    {
      ++v24->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v24->FreeEx)(v21);
      return 3221225506LL;
    }
  }
  if ( !a12 )
  {
LABEL_50:
    v26 = a13;
    goto LABEL_51;
  }
  v26 = a13;
  if ( a12 != 1 )
  {
    if ( a12 != 2 )
      goto LABEL_51;
    if ( a13 && (a7 & 4) == 0 && (a7 & 0xFFFFFFFD) != 0 && a8 == 2 )
      goto LABEL_40;
LABEL_41:
    v27 = KeGetCurrentPrcb();
    v28 = v27->PPLookasideList[8].P;
    ++v28->TotalFrees;
    if ( LOWORD(v28->ListHead.Alignment) < v28->Depth
      || (++v28->FreeMisses,
          v28 = v27->PPLookasideList[8].L,
          ++v28->TotalFrees,
          LOWORD(v28->ListHead.Alignment) < v28->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v28->ListHead, v21);
      return 3221225485LL;
    }
    else
    {
      ++v28->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v28->FreeEx)(v21);
      return 3221225485LL;
    }
  }
  if ( !a13
    || ((__int64)a13->Next & 0xFFFFFFFC) != 0
    || HIDWORD(a13->Next) > 1
    || *((_DWORD *)&a13->Next + 2) > 1u
    || (a7 & 4) != 0
    || a8 - 1 > 2 )
  {
    goto LABEL_41;
  }
LABEL_40:
  if ( (a9 & 0xFFFFFFCD) != 0 )
    goto LABEL_41;
LABEL_51:
  if ( !v80 )
  {
    v16 = a9 & 0x7FFFFFFF;
    if ( a9 >= 0 )
      v16 = a9;
    v43 = a14 | 0x400;
    if ( a9 >= 0 )
      v43 = a14;
    v87 = v43;
    if ( a5 )
    {
      v31 = *a5;
      if ( (__int64)*a5 < 0 )
        goto LABEL_41;
      Handle = *a5;
    }
    else
    {
      v31 = Handle;
    }
    if ( (v16 & 0x10000000) != 0 )
    {
      v45 = PsGetCurrentProcess()[1].AffinityPadding[10];
      if ( v45 && ((v46 = *(_WORD *)(v45 + 8), v46 == 332) || v46 == 452) )
      {
        if ( a11 < 0x10 )
          goto LABEL_41;
        *((_QWORD *)&v21[13].Next + 1) = *(_QWORD *)a10;
        v47 = *(int *)(a10 + 8);
        v82 = v47;
        v48 = *(_DWORD *)(a10 + 12);
        v43 = v87;
      }
      else
      {
        if ( a11 < 0x18 )
          goto LABEL_41;
        *((_QWORD *)&v21[13].Next + 1) = *(_QWORD *)a10;
        v47 = *(_QWORD *)(a10 + 8);
        v82 = v47;
        v48 = *(_DWORD *)(a10 + 16);
        v43 = v87;
      }
    }
    else
    {
      *((_QWORD *)&v21[13].Next + 1) = 0LL;
      v47 = a10;
      v82 = a10;
      v48 = a11;
    }
    if ( !v47 || !v48 )
    {
      *((_QWORD *)&v21[4].Next + 1) = 0LL;
      goto LABEL_132;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v48, 0x61456F49u);
    *((_QWORD *)&v21[4].Next + 1) = PoolWithTag;
    if ( PoolWithTag )
    {
      LODWORD(v21[5].Next) = v48;
      memmove(PoolWithTag, (const void *)v47, v48);
      v44 = a4;
      v52 = IoCheckEaBufferValidity(*((PFILE_FULL_EA_INFORMATION *)&v21[4].Next + 1), v48, (PULONG)a4 + 2);
      v79 = v52;
      if ( v52 < 0 )
      {
        ExFreePoolWithTag(*((PVOID *)&v21[4].Next + 1), 0);
        *a4 = v52;
LABEL_126:
        v53 = KeGetCurrentPrcb();
        v54 = v53->PPLookasideList[8].P;
        ++v54->TotalFrees;
        if ( LOWORD(v54->ListHead.Alignment) < v54->Depth
          || (++v54->FreeMisses,
              v54 = v53->PPLookasideList[8].L,
              ++v54->TotalFrees,
              LOWORD(v54->ListHead.Alignment) < v54->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v54->ListHead, v21);
          return v79;
        }
        else
        {
          ++v54->FreeMisses;
          ((void (__fastcall *)(PSLIST_ENTRY))v54->FreeEx)(v21);
          return v79;
        }
      }
      v43 = v87;
LABEL_133:
      LODWORD(v21->Next) = 14680072;
      LODWORD(v21[2].Next) = 0;
      *((_QWORD *)&v21[1].Next + 1) = 0LL;
      *((_QWORD *)&v21[3].Next + 1) = v31;
      LODWORD(v21[4].Next) = v16 & 0xFFFFFF;
      WORD2(v21[4].Next) = a6;
      HIWORD(v21[4].Next) = a7;
      *((_DWORD *)&v21[5].Next + 2) = a8;
      *((_WORD *)&v21[8].Next + 4) = 0;
      *((_BYTE *)&v21[8].Next + 10) = 0;
      HIDWORD(v21[5].Next) = v43;
      *((_QWORD *)&v21[2].Next + 1) = 0LL;
      v21[3].Next = a3;
      *((_DWORD *)&v21[7].Next + 2) = a12;
      v21[8].Next = v26;
      *((_DWORD *)&v21[9].Next + 2) = a15;
      v55 = v80;
      *((_BYTE *)&v21[9].Next + 12) = v80;
      v21[10] = 0LL;
      v21[11] = 0LL;
      LOWORD(v21[10].Next) = 40;
      v21[12].Next = (_SLIST_ENTRY *)1;
      if ( Src )
      {
        v56 = *Src;
        if ( v56 > 0x28 )
          v56 = 40LL;
        memmove(&v21[10], Src, v56);
      }
      if ( v21[12].Next == (_SLIST_ENTRY *)1 )
        v21[12].Next = (_SLIST_ENTRY *)PsGetCurrentSilo();
      LODWORD(v21[1].Next) = 0;
      *((_QWORD *)&v21->Next + 1) = 0LL;
      CurrentThread = KeGetCurrentThread();
      ++CurrentThread->OtherOperationCount;
      __incgsdword(0x2EE4u);
      v58 = ObOpenObjectByNameEx(a3, IoFileObjectType, v80, 0LL, a2, v21, v21[12].Next, &Handle);
      v79 = v58;
      v59 = (void *)*((_QWORD *)&v21[4].Next + 1);
      if ( v59 )
        ExFreePoolWithTag(v59, 0);
      v60 = *((_QWORD *)&v21[10].Next + 1);
      if ( v60 )
      {
        v61 = *(_DWORD *)(v60 + 4);
        if ( (v61 & 0x3F0) != 0 )
        {
          *(_DWORD *)(v60 + 4) = v61 - 16;
          v60 = 0LL;
          *((_QWORD *)&v21[10].Next + 1) = 0LL;
        }
        else
        {
          v62 = (__int64 **)(v60 + 8);
          if ( (v61 & 1) != 0 )
          {
            v69 = *v62;
            v60 = 0LL;
            while ( v69 != (__int64 *)v62 )
            {
              v70 = v69;
              v69 = (__int64 *)*v69;
              if ( (v70[5] & 1) == 0 )
              {
                v71 = (__int64 *)*v70;
                v72 = (__int64 **)v70[1];
                if ( *(__int64 **)(*v70 + 8) != v70 || *v72 != v70 )
LABEL_174:
                  __fastfail(3u);
                *v72 = v71;
                v71[1] = (__int64)v72;
                v70[1] = 0LL;
                *v70 = 0LL;
                FsRtlFreeExtraCreateParameter(v70 + 8);
              }
            }
          }
          else
          {
            while ( 1 )
            {
              v63 = *v62;
              if ( *v62 == (__int64 *)v62 )
                break;
              v64 = *v63;
              if ( (__int64 **)v63[1] != v62 || *(__int64 **)(v64 + 8) != v63 )
                goto LABEL_174;
              *v62 = (__int64 *)v64;
              *(_QWORD *)(v64 + 8) = v62;
              v63[1] = 0LL;
              *v63 = 0LL;
              v65 = v63 + 8;
              v66 = 0LL;
              v67 = (void (__fastcall *)(_QWORD, _QWORD))v63[4];
              if ( v67 )
                v67(v65, v65 - 6);
              if ( (*(_DWORD *)(v65 - 3) & 0x20) != 0 && FltMgrCallbacks )
              {
                v66 = *(v65 - 1);
                (*(void (__fastcall **)(__int64, _QWORD *))FltMgrCallbacks)(v66, v65);
              }
              v68 = *(v65 - 2);
              if ( v68 )
              {
                if ( (*(_DWORD *)(v65 - 3) & 0x40) != 0 )
                {
                  ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)v68, v65 - 9);
                }
                else
                {
                  ++*(_DWORD *)(v68 + 28);
                  if ( *(_WORD *)v68 < *(_WORD *)(v68 + 16) )
                  {
                    RtlpInterlockedPushEntrySList((PSLIST_HEADER)v68, (PSLIST_ENTRY)(v65 - 9));
                  }
                  else
                  {
                    ++*(_DWORD *)(v68 + 32);
                    (*(void (__fastcall **)(_QWORD *))(v68 + 56))(v65 - 9);
                  }
                }
              }
              else
              {
                ExFreePoolWithTag(v65 - 9, 0);
              }
              if ( v66 )
                (*(void (__fastcall **)(__int64))(FltMgrCallbacks + 8))(v66);
            }
            if ( (*(_DWORD *)(v60 + 4) & 4) != 0 )
            {
              ++dword_140CDB55C;
              if ( LOWORD(FsRtlEcpListLookaside.Alignment) < (unsigned __int16)word_140CDB550 )
              {
                RtlpInterlockedPushEntrySList(&FsRtlEcpListLookaside, (PSLIST_ENTRY)v60);
              }
              else
              {
                ++dword_140CDB560;
                ((void (__fastcall *)(__int64))qword_140CDB578)(v60);
              }
            }
            else
            {
              ExFreePoolWithTag((PVOID)v60, 0);
            }
            v44 = a4;
            v55 = v80;
            v60 = 0LL;
            *((_QWORD *)&v21[10].Next + 1) = 0LL;
          }
        }
      }
      Next = (int)v21[2].Next;
      if ( v58 >= 0 )
      {
        if ( Next == -1096154543 )
        {
          *(_DWORD *)(*((_QWORD *)&v21->Next + 1) + 80LL) |= 0x40000u;
          *(_DWORD *)(*((_QWORD *)&v21->Next + 1) + 80LL) &= ~0x2000000u;
          *a1 = Handle;
          *((_QWORD *)v44 + 1) = *((_QWORD *)&v21[1].Next + 1);
          *v44 = (NTSTATUS)v21[1].Next;
          v79 = (unsigned int)v21[1].Next;
LABEL_194:
          if ( Next == -1096154543 )
          {
            v78 = (struct _DMA_ADAPTER *)*((_QWORD *)&v21->Next + 1);
            if ( v78 )
              HalPutDmaAdapter(v78);
          }
          goto LABEL_126;
        }
        ObCloseHandle(Handle, v55);
        v58 = -1073741788;
        v79 = -1073741788;
      }
      v74 = (int)v21[1].Next;
      if ( v74 >= 0 )
      {
        v75 = *((_QWORD *)&v21->Next + 1);
        if ( v75 )
        {
          if ( Next == -1096154543 )
          {
            if ( (*(_DWORD *)(v75 + 80) & 0x40000) == 0 )
              IopCloseFile(0LL, *((_QWORD *)&v21->Next + 1), 1LL);
          }
          else
          {
            if ( *(_WORD *)(v75 + 88) )
            {
              ExFreePoolWithTag(*(PVOID *)(v75 + 96), 0);
              v75 = *((_QWORD *)&v21->Next + 1);
            }
            *(_QWORD *)(v75 + 8) = v60;
            HalPutDmaAdapter(*((PADAPTER_OBJECT *)&v21->Next + 1));
          }
        }
      }
      else
      {
        v58 = (int)v21[1].Next;
        v79 = v58;
        if ( (v74 & 0xC0000000) == 0x80000000 || v74 == -1073741191 )
        {
          *v44 = v74;
          *((_QWORD *)v44 + 1) = *((_QWORD *)&v21[1].Next + 1);
        }
      }
      if ( v58 == -1073741772 )
      {
        v76 = *((_QWORD *)&v21[1].Next + 1) - 2684354563LL;
        if ( v76 <= 0x16 )
        {
          v77 = 4194817LL;
          if ( _bittest64(&v77, v76) )
            v79 = -1073741184;
        }
      }
      goto LABEL_194;
    }
    v50 = KeGetCurrentPrcb();
    v51 = v50->PPLookasideList[8].P;
    ++v51->TotalFrees;
    if ( LOWORD(v51->ListHead.Alignment) < v51->Depth
      || (++v51->FreeMisses,
          v51 = v50->PPLookasideList[8].L,
          ++v51->TotalFrees,
          LOWORD(v51->ListHead.Alignment) < v51->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v51->ListHead, v21);
    }
    else
    {
      ++v51->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v51->FreeEx)(v21);
    }
    return 3221225626LL;
  }
  v29 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
    v29 = (__int64)a1;
  *(_QWORD *)v29 = *(_QWORD *)v29;
  v30 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
    v30 = (__int64)a4;
  *(_DWORD *)v30 = *(_DWORD *)v30;
  if ( a5 )
  {
    if ( ((unsigned __int8)a5 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v31 = *a5;
    Handle = v31;
    if ( (__int64)v31 < 0 )
      RtlRaiseStatus(-1073741811);
  }
  else
  {
    v31 = 0LL;
    Handle = 0LL;
  }
  if ( (a9 & 0x10000000) == 0 )
  {
    *((_QWORD *)&v21[13].Next + 1) = 0LL;
    v36 = a10;
    v82 = a10;
    v37 = a11;
LABEL_90:
    *((_QWORD *)&v21[4].Next + 1) = 0LL;
    if ( v36 && v37 )
    {
      if ( (v36 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v40 = v37 + v36;
      if ( v40 > 0x7FFFFFFF0000LL || v40 < v36 )
        MEMORY[0x7FFFFFFF0000] = 0;
      PoolWithQuotaTag = ExAllocatePoolWithQuotaTag(NonPagedPoolNx, v37, 0x61456F49u);
      *((_QWORD *)&v21[4].Next + 1) = PoolWithQuotaTag;
      LODWORD(v21[5].Next) = v37;
      memmove(PoolWithQuotaTag, (const void *)v36, v37);
      v42 = IoCheckEaBufferValidity(*((PFILE_FULL_EA_INFORMATION *)&v21[4].Next + 1), v37, (PULONG)a4 + 2);
      if ( v42 < 0 )
      {
        *a4 = v42;
        RtlRaiseStatus(v42);
      }
      v43 = a14;
      v44 = a4;
      goto LABEL_133;
    }
    v43 = a14;
LABEL_132:
    v44 = a4;
    LODWORD(v21[5].Next) = 0;
    goto LABEL_133;
  }
  v32 = PsGetCurrentProcess()[1].AffinityPadding[10];
  if ( v32 )
  {
    v33 = *(_WORD *)(v32 + 8);
    if ( v33 == 332 || v33 == 452 )
    {
      if ( a11 )
      {
        if ( (a10 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( a10 + a11 > 0x7FFFFFFF0000LL || a10 + a11 < a10 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      if ( a11 < 0x10 )
      {
        v34 = KeGetCurrentPrcb();
        v35 = v34->PPLookasideList[8].P;
        ++v35->TotalFrees;
        if ( LOWORD(v35->ListHead.Alignment) < v35->Depth
          || (++v35->FreeMisses,
              v35 = v34->PPLookasideList[8].L,
              ++v35->TotalFrees,
              LOWORD(v35->ListHead.Alignment) < v35->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v35->ListHead, v21);
        }
        else
        {
          ++v35->FreeMisses;
          ((void (__fastcall *)(PSLIST_ENTRY))v35->FreeEx)(v21);
        }
        return 3221225485LL;
      }
      *((_QWORD *)&v21[13].Next + 1) = *(_QWORD *)a10;
      v36 = *(unsigned int *)(a10 + 8);
      v82 = v36;
      v37 = *(_DWORD *)(a10 + 12);
      goto LABEL_90;
    }
  }
  if ( a11 )
  {
    if ( (a10 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a10 + a11 > 0x7FFFFFFF0000LL || a10 + a11 < a10 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  if ( a11 >= 0x18 )
  {
    *((_QWORD *)&v21[13].Next + 1) = *(_QWORD *)a10;
    v36 = *(_QWORD *)(a10 + 8);
    v82 = v36;
    v37 = *(_DWORD *)(a10 + 16);
    goto LABEL_90;
  }
  v38 = KeGetCurrentPrcb();
  v39 = v38->PPLookasideList[8].P;
  ++v39->TotalFrees;
  if ( LOWORD(v39->ListHead.Alignment) < v39->Depth
    || (++v39->FreeMisses,
        v39 = v38->PPLookasideList[8].L,
        ++v39->TotalFrees,
        LOWORD(v39->ListHead.Alignment) < v39->Depth) )
  {
    RtlpInterlockedPushEntrySList(&v39->ListHead, v21);
  }
  else
  {
    ++v39->FreeMisses;
    ((void (__fastcall *)(PSLIST_ENTRY))v39->FreeEx)(v21);
  }
  return 3221225485LL;
}
