__int64 __fastcall IopCreateFile(
        HANDLE *a1,
        unsigned int a2,
        __int64 a3,
        int *a4,
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
  int v16; // r14d
  char v17; // cl
  char PreviousMode; // al
  struct _KPRCB *CurrentPrcb; // rsi
  _GENERAL_LOOKASIDE *P; // rdi
  PSLIST_ENTRY v21; // rbx
  unsigned __int64 v22; // r8
  _GENERAL_LOOKASIDE *L; // rdi
  struct _KPRCB *v24; // rdx
  _GENERAL_LOOKASIDE *v25; // rcx
  _SLIST_ENTRY *v27; // r12
  struct _KPRCB *v28; // rdx
  _GENERAL_LOOKASIDE *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  _KPROCESS *v32; // rcx
  __int16 v33; // dx
  struct _KPRCB *v34; // rdx
  _GENERAL_LOOKASIDE *v35; // rcx
  unsigned __int64 v36; // rdi
  ULONG v37; // esi
  struct _KPRCB *v38; // rdx
  _GENERAL_LOOKASIDE *v39; // rcx
  unsigned __int64 v40; // rax
  void *v41; // rax
  NTSTATUS v42; // eax
  int v43; // ecx
  _KPROCESS *Process; // rcx
  __int16 v45; // dx
  __int64 v46; // rsi
  ULONG v47; // edi
  void *Pool2; // rax
  struct _KPRCB *v49; // rdx
  _GENERAL_LOOKASIDE *v50; // rcx
  NTSTATUS v51; // edi
  struct _KPRCB *v52; // rdx
  _GENERAL_LOOKASIDE *v53; // rcx
  _QWORD *v54; // r15
  size_t v55; // r8
  PVOID *v56; // r14
  struct _KTHREAD *CurrentThread; // rax
  int v58; // r12d
  void *v59; // rcx
  __int64 **v60; // r13
  int v61; // eax
  __int64 **v62; // rsi
  __int64 *v63; // rdi
  __int64 v64; // rax
  _QWORD *v65; // r15
  __int64 *v66; // rdi
  __int64 v67; // r14
  void (__fastcall *v68)(_QWORD *, __int64 *); // rax
  struct _PAGED_LOOKASIDE_LIST *v69; // rcx
  __int64 *v70; // rdi
  __int64 *v71; // rcx
  __int64 **v72; // rax
  int Next; // edi
  int v74; // ecx
  PVOID v75; // rcx
  __int64 v76; // rax
  unsigned int v77; // [rsp+40h] [rbp-88h]
  char v78; // [rsp+58h] [rbp-70h]
  HANDLE Handle; // [rsp+70h] [rbp-58h] BYREF
  _QWORD *v80; // [rsp+78h] [rbp-50h]
  struct _KTHREAD *v81; // [rsp+80h] [rbp-48h]

  LODWORD(v80) = a14;
  v16 = a9;
  v17 = 0;
  Handle = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (a14 & 0x100) == 0 )
    v17 = PreviousMode;
  v78 = v17;
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
  if ( !v78 && (a14 & 0x200) == 0 )
    goto LABEL_50;
  if ( (a6 & 0xFFA50048) != 0 )
    goto LABEL_41;
  if ( (a7 & 0xFFFFFFF8) != 0 )
    goto LABEL_41;
  if ( a8 > 5 )
    goto LABEL_41;
  if ( (a9 & 0xEF000000) != 0 )
    goto LABEL_41;
  v22 = a2;
  if ( (a9 & 0x30) != 0 && (a2 & 0x100000) == 0 )
    goto LABEL_41;
  if ( (a9 & 0x1000) != 0 && (a2 & 0x10000) == 0
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
    v24 = KeGetCurrentPrcb();
    v25 = v24->PPLookasideList[8].P;
    ++v25->TotalFrees;
    if ( LOWORD(v25->ListHead.Alignment) < v25->Depth
      || (++v25->FreeMisses,
          v25 = v24->PPLookasideList[8].L,
          ++v25->TotalFrees,
          LOWORD(v25->ListHead.Alignment) < v25->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v25->ListHead, v21);
      return 3221225506LL;
    }
    else
    {
      ++v25->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v25->FreeEx)(v21);
      return 3221225506LL;
    }
  }
  if ( !a12 )
  {
LABEL_50:
    v27 = a13;
    goto LABEL_51;
  }
  v27 = a13;
  if ( a12 != 1 )
  {
    if ( a12 != 2 )
      goto LABEL_51;
    if ( a13 && (a7 & 4) == 0 && (a7 & 0xFFFFFFFD) != 0 && a8 == 2 )
      goto LABEL_40;
LABEL_41:
    v28 = KeGetCurrentPrcb();
    v29 = v28->PPLookasideList[8].P;
    ++v29->TotalFrees;
    if ( LOWORD(v29->ListHead.Alignment) < v29->Depth
      || (++v29->FreeMisses,
          v29 = v28->PPLookasideList[8].L,
          ++v29->TotalFrees,
          LOWORD(v29->ListHead.Alignment) < v29->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v29->ListHead, v21);
      return 3221225485LL;
    }
    else
    {
      ++v29->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v29->FreeEx)(v21);
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
  if ( !v78 )
  {
    v16 = a9 & 0x7FFFFFFF;
    if ( a9 >= 0 )
      v16 = a9;
    v43 = (unsigned int)v80 | 0x400;
    if ( a9 >= 0 )
      v43 = (int)v80;
    a14 = v43;
    if ( a5 )
    {
      if ( (__int64)*a5 < 0 )
        goto LABEL_41;
      Handle = *a5;
    }
    if ( (v16 & 0x10000000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process[1].Affinity.StaticBitmap[30]
        && ((v45 = WORD2(Process[2].Affinity.StaticBitmap[20]), v45 == 332) || v45 == 452) )
      {
        if ( a11 < 0x10 )
          goto LABEL_41;
        *((_QWORD *)&v21[13].Next + 1) = *(_QWORD *)a10;
        v46 = *(int *)(a10 + 8);
        v47 = *(_DWORD *)(a10 + 12);
        v43 = a14;
      }
      else
      {
        if ( a11 < 0x18 )
          goto LABEL_41;
        *((_QWORD *)&v21[13].Next + 1) = *(_QWORD *)a10;
        v46 = *(_QWORD *)(a10 + 8);
        v47 = *(_DWORD *)(a10 + 16);
        v43 = a14;
      }
    }
    else
    {
      *((_QWORD *)&v21[13].Next + 1) = 0LL;
      v46 = a10;
      v47 = a11;
    }
    if ( !v46 || !v47 )
    {
      *((_QWORD *)&v21[4].Next + 1) = 0LL;
      LODWORD(v21[5].Next) = 0;
LABEL_134:
      LODWORD(v21->Next) = 14680072;
      LODWORD(v21[2].Next) = 0;
      v54 = &v21[1].Next + 1;
      v80 = &v21[1].Next + 1;
      *((_QWORD *)&v21[1].Next + 1) = 0LL;
      *((_QWORD *)&v21[3].Next + 1) = Handle;
      LODWORD(v21[4].Next) = v16 & 0xFFFFFF;
      WORD2(v21[4].Next) = a6;
      HIWORD(v21[4].Next) = a7;
      *((_DWORD *)&v21[5].Next + 2) = a8;
      *((_WORD *)&v21[8].Next + 4) = 0;
      *((_BYTE *)&v21[8].Next + 10) = 0;
      HIDWORD(v21[5].Next) = v43;
      *((_QWORD *)&v21[2].Next + 1) = 0LL;
      v21[3].Next = (_SLIST_ENTRY *)a3;
      *((_DWORD *)&v21[7].Next + 2) = a12;
      v21[8].Next = v27;
      *((_DWORD *)&v21[9].Next + 2) = a15;
      *((_BYTE *)&v21[9].Next + 12) = v78;
      v21[10] = 0LL;
      v21[11] = 0LL;
      LOWORD(v21[10].Next) = 40;
      v21[12].Next = (_SLIST_ENTRY *)1;
      if ( Src )
      {
        v55 = *Src;
        if ( v55 > 0x28 )
          v55 = 40LL;
        memmove(&v21[10], Src, v55);
      }
      if ( v21[12].Next == (_SLIST_ENTRY *)1 )
        v21[12].Next = (_SLIST_ENTRY *)PsGetCurrentSilo();
      LODWORD(v21[1].Next) = 0;
      v56 = (PVOID *)(&v21->Next + 1);
      *((_QWORD *)&v21->Next + 1) = 0LL;
      CurrentThread = KeGetCurrentThread();
      ++CurrentThread->OtherOperationCount;
      __incgsdword(0x2EE4u);
      v58 = ObOpenObjectByNameEx(a3, (__int64)IoFileObjectType, v78, 0LL, a2, (int)v21, (__int64)v21[12].Next, &Handle);
      v77 = v58;
      v59 = (void *)*((_QWORD *)&v21[4].Next + 1);
      if ( v59 )
        ExFreePoolWithTag(v59, 0);
      v60 = (__int64 **)*((_QWORD *)&v21[10].Next + 1);
      if ( v60 )
      {
        v61 = *((_DWORD *)v60 + 1);
        if ( (v61 & 0x3F0) != 0 )
        {
          *((_DWORD *)v60 + 1) = v61 - 16;
          *((_QWORD *)&v21[10].Next + 1) = 0LL;
        }
        else
        {
          v62 = v60 + 1;
          if ( (v61 & 1) != 0 )
          {
            v70 = *v62;
            while ( v70 != (__int64 *)v62 )
            {
              v71 = v70;
              v70 = (__int64 *)*v70;
              if ( (v71[5] & 1) == 0 )
              {
                v72 = (__int64 **)v71[1];
                if ( (__int64 *)v70[1] != v71 || *v72 != v71 )
LABEL_169:
                  __fastfail(3u);
                *v72 = v70;
                v70[1] = (__int64)v72;
                v71[1] = 0LL;
                *v71 = 0LL;
                FsRtlFreeExtraCreateParameter(v71 + 8);
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
                goto LABEL_169;
              *v62 = (__int64 *)v64;
              *(_QWORD *)(v64 + 8) = v62;
              v63[1] = 0LL;
              *v63 = 0LL;
              v65 = v63 + 8;
              v66 = v63 - 1;
              v67 = 0LL;
              v68 = (void (__fastcall *)(_QWORD *, __int64 *))v66[5];
              if ( v68 )
                v68(v65, v66 + 3);
              if ( (v66[6] & 0x20) != 0 && FltMgrCallbacks )
              {
                v67 = v66[8];
                (*(void (__fastcall **)(__int64, _QWORD *))FltMgrCallbacks)(v67, v65);
              }
              v69 = (struct _PAGED_LOOKASIDE_LIST *)v66[7];
              if ( v69 )
                ExFreeToNPagedLookasideList(v69, v66);
              else
                ExFreePoolWithTag(v66, 0);
              if ( v67 )
                (*(void (__fastcall **)(__int64))(FltMgrCallbacks + 8))(v67);
            }
            if ( (*((_DWORD *)v60 + 1) & 4) != 0 )
              ExFreeToNPagedLookasideList(&FsRtlEcpListLookaside, v60);
            else
              ExFreePoolWithTag(v60, 0);
            v54 = v80;
            v56 = (PVOID *)(&v21->Next + 1);
            *((_QWORD *)&v21[10].Next + 1) = 0LL;
          }
        }
      }
      Next = (int)v21[2].Next;
      if ( v58 >= 0 )
      {
        if ( Next == -1096154543 )
        {
          *((_DWORD *)*v56 + 20) |= 0x40000u;
          *((_DWORD *)*v56 + 20) &= ~0x2000000u;
          *a1 = Handle;
          *((_QWORD *)a4 + 1) = *v54;
          *a4 = (int)v21[1].Next;
          v77 = (unsigned int)v21[1].Next;
LABEL_191:
          if ( Next == -1096154543 && *v56 )
            ObfDereferenceObject(*v56);
          goto LABEL_129;
        }
        ObCloseHandle(Handle, v78);
        v58 = -1073741788;
        v77 = -1073741788;
      }
      v74 = (int)v21[1].Next;
      if ( v74 >= 0 )
      {
        v75 = *v56;
        if ( *v56 )
        {
          if ( Next == -1096154543 )
          {
            if ( (*((_DWORD *)v75 + 20) & 0x40000) == 0 )
              IopCloseFile(0LL, (struct _FILE_OBJECT *)*v56, 1LL, 1LL);
          }
          else
          {
            if ( *((_WORD *)v75 + 44) )
              ExFreePoolWithTag(*((PVOID *)v75 + 12), 0);
            *((_QWORD *)*v56 + 1) = 0LL;
            ObfDereferenceObject(*v56);
          }
        }
      }
      else
      {
        v58 = (int)v21[1].Next;
        v77 = v58;
        if ( (v74 & 0xC0000000) == 0x80000000 || v74 == -1073741191 )
        {
          *a4 = v74;
          *((_QWORD *)a4 + 1) = *v54;
        }
      }
      if ( v58 == -1073741772 )
      {
        v76 = *v54;
        if ( *v54 == 2684354563LL || v76 == 2684354572LL || v76 == 2684354585LL )
          v77 = -1073741184;
      }
      v56 = (PVOID *)(&v21->Next + 1);
      goto LABEL_191;
    }
    Pool2 = (void *)ExAllocatePool2(66LL, v47, 1631940425LL);
    *((_QWORD *)&v21[4].Next + 1) = Pool2;
    if ( Pool2 )
    {
      LODWORD(v21[5].Next) = v47;
      memmove(Pool2, (const void *)v46, v47);
      v51 = IoCheckEaBufferValidity(*((PFILE_FULL_EA_INFORMATION *)&v21[4].Next + 1), v47, (PULONG)a4 + 2);
      v77 = v51;
      if ( v51 < 0 )
      {
        ExFreePoolWithTag(*((PVOID *)&v21[4].Next + 1), 0);
        *a4 = v51;
LABEL_129:
        v52 = KeGetCurrentPrcb();
        v53 = v52->PPLookasideList[8].P;
        ++v53->TotalFrees;
        if ( LOWORD(v53->ListHead.Alignment) < v53->Depth
          || (++v53->FreeMisses,
              v53 = v52->PPLookasideList[8].L,
              ++v53->TotalFrees,
              LOWORD(v53->ListHead.Alignment) < v53->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v53->ListHead, v21);
          return v77;
        }
        else
        {
          ++v53->FreeMisses;
          ((void (__fastcall *)(PSLIST_ENTRY))v53->FreeEx)(v21);
          return v77;
        }
      }
      goto LABEL_102;
    }
    v49 = KeGetCurrentPrcb();
    v50 = v49->PPLookasideList[8].P;
    ++v50->TotalFrees;
    if ( LOWORD(v50->ListHead.Alignment) < v50->Depth
      || (++v50->FreeMisses,
          v50 = v49->PPLookasideList[8].L,
          ++v50->TotalFrees,
          LOWORD(v50->ListHead.Alignment) < v50->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v50->ListHead, v21);
    }
    else
    {
      ++v50->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v50->FreeEx)(v21);
    }
    return 3221225626LL;
  }
  v30 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
    v30 = (__int64)a1;
  *(_QWORD *)v30 = *(_QWORD *)v30;
  v31 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
    v31 = (__int64)a4;
  *(_DWORD *)v31 = *(_DWORD *)v31;
  if ( a5 )
  {
    if ( ((unsigned __int8)a5 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    Handle = *a5;
    if ( (__int64)Handle < 0 )
      RtlRaiseStatus(-1073741811);
  }
  else
  {
    Handle = 0LL;
  }
  if ( (a9 & 0x10000000) == 0 )
  {
    *((_QWORD *)&v21[13].Next + 1) = 0LL;
    v36 = a10;
    v37 = a11;
    goto LABEL_93;
  }
  v81 = KeGetCurrentThread();
  v32 = v81->ApcState.Process;
  if ( v32[1].Affinity.StaticBitmap[30] )
  {
    v33 = WORD2(v32[2].Affinity.StaticBitmap[20]);
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
          ((void (__fastcall *)(PSLIST_ENTRY, struct _KPRCB *, unsigned __int64))v35->FreeEx)(v21, v34, v22);
        }
        return 3221225485LL;
      }
      *((_QWORD *)&v21[13].Next + 1) = *(_QWORD *)a10;
      if ( (unsigned int)Feature_Servicing_CopyEABufferHandling__private_IsEnabledDeviceUsage() )
        v36 = *(unsigned int *)(a10 + 8);
      else
        v36 = *(int *)(a10 + 8);
      v37 = *(_DWORD *)(a10 + 12);
      goto LABEL_93;
    }
  }
  if ( a11 )
  {
    if ( (a10 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v22 = a10 + a11;
    if ( v22 > 0x7FFFFFFF0000LL || v22 < a10 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  if ( a11 >= 0x18 )
  {
    *((_QWORD *)&v21[13].Next + 1) = *(_QWORD *)a10;
    v36 = *(_QWORD *)(a10 + 8);
    v37 = *(_DWORD *)(a10 + 16);
LABEL_93:
    *((_QWORD *)&v21[4].Next + 1) = 0LL;
    if ( v36 && v37 )
    {
      if ( (v36 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v40 = v37 + v36;
      if ( v40 > 0x7FFFFFFF0000LL || v40 < v36 )
        MEMORY[0x7FFFFFFF0000] = 0;
      v41 = (void *)ExAllocatePool2(99LL, v37, 1631940425LL);
      *((_QWORD *)&v21[4].Next + 1) = v41;
      LODWORD(v21[5].Next) = v37;
      memmove(v41, (const void *)v36, v37);
      v42 = IoCheckEaBufferValidity(*((PFILE_FULL_EA_INFORMATION *)&v21[4].Next + 1), v37, (PULONG)a4 + 2);
      if ( v42 < 0 )
      {
        *a4 = v42;
        RtlRaiseStatus(v42);
      }
    }
    else
    {
      LODWORD(v21[5].Next) = 0;
    }
LABEL_102:
    v43 = a14;
    goto LABEL_134;
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
    ((void (__fastcall *)(PSLIST_ENTRY, struct _KPRCB *, unsigned __int64))v39->FreeEx)(v21, v38, v22);
  }
  return 3221225485LL;
}
