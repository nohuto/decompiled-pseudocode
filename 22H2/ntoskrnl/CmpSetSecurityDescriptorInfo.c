/*
 * XREFs of CmpSetSecurityDescriptorInfo @ 0x1406E5AEC
 * Callers:
 *     CmpSetKeySecurity @ 0x1406E6CFC (CmpSetKeySecurity.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140201A30 (CmSiFreeMemory.c)
 *     CmpFindSecurityCellCacheIndex @ 0x140206E70 (CmpFindSecurityCellCacheIndex.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140206F50 (CmpAllocateTransientPoolWithTag.c)
 *     CmpFreeTransientPoolWithTag @ 0x140206F68 (CmpFreeTransientPoolWithTag.c)
 *     CmpRemoveSecurityCellList @ 0x140326A74 (CmpRemoveSecurityCellList.c)
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     CmpKeySecurityDecrementReferenceCount @ 0x1403F009C (CmpKeySecurityDecrementReferenceCount.c)
 *     CmpKeySecurityIncrementReferenceCount @ 0x1403F00DC (CmpKeySecurityIncrementReferenceCount.c)
 *     CmpKeySecurityMarkDirtyForReferenceCountDecrement @ 0x1403F0130 (CmpKeySecurityMarkDirtyForReferenceCountDecrement.c)
 *     RtlLengthSecurityDescriptorStrict @ 0x1403F7CEC (RtlLengthSecurityDescriptorStrict.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     CmGetKCBCacheSecurity @ 0x1405EF570 (CmGetKCBCacheSecurity.c)
 *     CmpConstructName @ 0x1405F2FBC (CmpConstructName.c)
 *     HvAllocateCell @ 0x140656A94 (HvAllocateCell.c)
 *     HvFreeCell @ 0x140656BC4 (HvFreeCell.c)
 *     CmAddLogForAction @ 0x14069300C (CmAddLogForAction.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1406DF0D0 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpAssignSecurityToKcb @ 0x1406E2F20 (CmpAssignSecurityToKcb.c)
 *     CmpAddSecurityCellToCache @ 0x1406E6740 (CmpAddSecurityCellToCache.c)
 *     CmpFindMatchingDescriptorCell @ 0x1406E6978 (CmpFindMatchingDescriptorCell.c)
 *     CmpTraceSecurityChanging @ 0x1406E6BF8 (CmpTraceSecurityChanging.c)
 *     SeSetSecurityDescriptorInfoEx2 @ 0x1406E6CAC (SeSetSecurityDescriptorInfoEx2.c)
 *     SeCheckForCriticalAceRemoval @ 0x1406E7260 (SeCheckForCriticalAceRemoval.c)
 *     NtWaitLowEventPair @ 0x140726130 (NtWaitLowEventPair.c)
 *     HvMarkCellDirty @ 0x14087BD38 (HvMarkCellDirty.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 CmpSetSecurityDescriptorInfo(ULONG_PTR a1, _DWORD *a2, ...)
{
  __int64 v2; // rbx
  __int64 v3; // r15
  ULONG_PTR v4; // r14
  unsigned int v5; // edi
  __int64 (__fastcall *v6)(ULONG_PTR, _QWORD, _DWORD *); // rax
  __int64 v7; // rax
  __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // r12d
  __int64 (__fastcall *v13)(ULONG_PTR, _QWORD, _DWORD *); // rax
  __int64 v14; // rax
  struct _LOOKASIDE_LIST_EX *v15; // r9
  __int64 v16; // r13
  int v17; // esi
  __int64 v18; // rbx
  PVOID TransientPoolWithTag; // rax
  int v20; // ecx
  void *p_DestinationString; // rbx
  unsigned int v22; // r15d
  __int64 v23; // r13
  __int64 v24; // rbx
  ULONG_PTR v25; // r12
  ULONG_PTR v26; // rdi
  _DWORD *v27; // rcx
  __int64 v28; // rax
  bool v29; // di
  bool v30; // zf
  int v31; // eax
  unsigned int v32; // eax
  __int64 v33; // rax
  unsigned int v34; // eax
  bool v35; // di
  _DWORD *v36; // rcx
  __int64 v37; // rax
  bool v38; // bl
  char *BugCheckParameter4; // [rsp+28h] [rbp-B1h]
  unsigned int *v40; // [rsp+48h] [rbp-91h]
  __int64 v41; // [rsp+50h] [rbp-89h]
  unsigned int v42; // [rsp+58h] [rbp-81h]
  __int64 v43; // [rsp+60h] [rbp-79h] BYREF
  PVOID P; // [rsp+68h] [rbp-71h] BYREF
  _DWORD v45[3]; // [rsp+74h] [rbp-65h]
  unsigned int v46; // [rsp+80h] [rbp-59h]
  ULONG_PTR v47; // [rsp+84h] [rbp-55h] BYREF
  int v48; // [rsp+8Ch] [rbp-4Dh]
  _DWORD v49[2]; // [rsp+90h] [rbp-49h] BYREF
  __int64 v50; // [rsp+98h] [rbp-41h]
  size_t Size; // [rsp+A0h] [rbp-39h]
  _DWORD *v52; // [rsp+A8h] [rbp-31h] BYREF
  _DWORD v53[2]; // [rsp+B0h] [rbp-29h] BYREF
  _DWORD v54[2]; // [rsp+B8h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-19h] BYREF
  char v56; // [rsp+D0h] [rbp-9h] BYREF
  __int64 v59; // [rsp+138h] [rbp+5Fh] BYREF
  va_list va; // [rsp+138h] [rbp+5Fh]
  __int64 v61; // [rsp+140h] [rbp+67h] BYREF
  va_list va1; // [rsp+140h] [rbp+67h]
  __int64 v63; // [rsp+148h] [rbp+6Fh]
  __int64 v64; // [rsp+150h] [rbp+77h]
  __int64 v65; // [rsp+158h] [rbp+7Fh]
  __int64 v66; // [rsp+160h] [rbp+87h]
  __int64 v67; // [rsp+168h] [rbp+8Fh]
  va_list va2; // [rsp+170h] [rbp+97h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v59 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v61 = va_arg(va2, _QWORD);
  v63 = va_arg(va2, _QWORD);
  v64 = va_arg(va2, _QWORD);
  v65 = va_arg(va2, _QWORD);
  v66 = va_arg(va2, _QWORD);
  v67 = va_arg(va2, _QWORD);
  P = 0LL;
  v2 = a1;
  v49[1] = 0;
  v48 = 0;
  v49[0] = -1;
  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = *(_DWORD *)(a1 + 40);
  v53[0] = -1;
  v54[0] = -1;
  v53[1] = 0;
  v54[1] = 0;
  DestinationString = 0LL;
  v6 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v4 + 8);
  v47 = 0xFFFFFFFF00000000uLL;
  v42 = 0;
  v52 = 0LL;
  LOBYTE(v61) = 0;
  v41 = 0LL;
  v43 = 0LL;
  *(_QWORD *)&v45[1] = 0LL;
  v46 = v5;
  v7 = v6(v4, v5, v54);
  v50 = v7;
  if ( !v7 )
    return 3221225626LL;
  CmpUpdateKeyNodeAccessBits(v4, v7, v5);
  v9 = v65;
  v12 = *(_DWORD *)CmGetKCBCacheSecurity(v2, v65, v10, v11);
  v13 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v4 + 8);
  v45[0] = v12;
  v14 = v13(v4, v12, v49);
  v40 = (unsigned int *)v14;
  v16 = v14;
  if ( !v14
    || (TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, *(unsigned int *)(v14 + 16), 0x36384D43u, v15),
        (*(_QWORD *)&v45[1] = TransientPoolWithTag) == 0LL) )
  {
    v17 = -1073741670;
    goto LABEL_5;
  }
  memmove(TransientPoolWithTag, (const void *)(v16 + 20), *(unsigned int *)(v16 + 16));
  v20 = (int)a2;
  if ( (*a2 & 4) != 0 )
  {
    SeCheckForCriticalAceRemoval(*(_QWORD *)&v45[1], v59, v67, (__int64 *)va1);
    if ( (_BYTE)v61 )
    {
      p_DestinationString = (void *)CmpConstructName(v2);
      if ( p_DestinationString )
      {
        LOBYTE(v61) = 1;
      }
      else
      {
        RtlInitUnicodeString(&DestinationString, L"<Unknown registry key>");
        p_DestinationString = &DestinationString;
        LOBYTE(v61) = 0;
      }
      BugCheckParameter4 = &v56;
      v17 = NtWaitLowEventPair(p_DestinationString);
      if ( (_BYTE)v61 )
        CmpFreeTransientPoolWithTag(p_DestinationString, 0x624E4D43u);
      if ( v17 < 0 )
        goto LABEL_5;
      LODWORD(v2) = a1;
    }
  }
  P = *(PVOID *)&v45[1];
  v17 = SeSetSecurityDescriptorInfoEx2(
          v20,
          (_DWORD)a2,
          v59,
          (unsigned int)&P,
          (_DWORD)BugCheckParameter4,
          v63,
          v64,
          v67);
  if ( v17 >= 0 )
  {
    v17 = CmpTraceSecurityChanging(v2, v45[1], *a2, v59, (__int64)P);
    if ( v17 >= 0 )
    {
      LODWORD(Size) = RtlLengthSecurityDescriptorStrict();
      if ( v9 )
        v22 = 1;
      else
        v22 = v46 >> 31;
      v23 = v66;
      v24 = MEMORY[0xFFFFF78000000014];
      if ( v9 )
      {
        if ( !(unsigned __int8)HvMarkCellDirty(v4, v12, 0LL) )
          goto LABEL_38;
        *(_DWORD *)(v23 + 96) = -1;
        *(_QWORD *)(v23 + 88) = 0LL;
        *(_DWORD *)(v23 + 68) = 9;
        *(_BYTE *)(v23 + 100) = 0;
      }
      else if ( !(unsigned __int8)HvMarkCellDirty(v4, v46, 0LL) || !(unsigned __int8)HvMarkCellDirty(v4, v12, 0LL) )
      {
        goto LABEL_38;
      }
      if ( (unsigned __int8)CmpFindMatchingDescriptorCell(v4, P, v22, &v47, &v52) )
      {
        v25 = (unsigned int)v47;
        LODWORD(v26) = v45[0];
        if ( (_DWORD)v47 == v45[0] )
        {
          if ( v65 )
          {
            v17 = CmpKeySecurityIncrementReferenceCount((__int64)v40, v4, v47, 0);
            if ( v17 >= 0 )
            {
              *(_QWORD *)(v23 + 88) = v52;
              *(_DWORD *)(v23 + 96) = v25;
            }
          }
          else
          {
            *(_QWORD *)(v50 + 4) = v24;
            *(_QWORD *)(a1 + 168) = v24;
          }
          goto LABEL_39;
        }
        if ( !(unsigned __int8)HvMarkCellDirty(v4, (unsigned int)v47, 0LL) )
          goto LABEL_38;
        if ( v65 )
        {
          v27 = v52;
          *(_DWORD *)(v23 + 96) = *v52;
          *(_QWORD *)(v23 + 88) = v27;
        }
        else
        {
          v17 = CmpKeySecurityMarkDirtyForReferenceCountDecrement(v40, v4, v26);
          if ( v17 < 0 )
            goto LABEL_39;
        }
        v28 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, char *))(v4 + 8))(v4, (unsigned int)v25, (char *)&v47 + 4);
        v3 = v28;
        if ( !v28 )
        {
          if ( !v65 )
            KeBugCheckEx(0x51u, 4uLL, 5uLL, v4, v25);
          v17 = -1073741670;
          goto LABEL_40;
        }
        v17 = CmpKeySecurityIncrementReferenceCount(v28, v4, v25, 0);
        if ( v17 < 0 )
        {
LABEL_40:
          v16 = (__int64)v40;
LABEL_41:
          v18 = v41;
          goto LABEL_6;
        }
        if ( v65 )
          goto LABEL_83;
        v29 = CmpKeySecurityDecrementReferenceCount((__int64)v40, v4, v26);
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v4 + 16))(v4, v49);
        v40 = 0LL;
        v30 = !v29;
        LODWORD(v26) = v45[0];
        if ( !v30 )
        {
          CmpRemoveSecurityCellList(v4, v45[0]);
          HvFreeCell(v4, (unsigned int)v26);
        }
        *(_DWORD *)(v50 + 44) = v25;
LABEL_80:
        if ( !v65 )
        {
          v16 = (__int64)v40;
LABEL_82:
          v37 = v50;
          *(_QWORD *)(v50 + 4) = v24;
          ++*(_QWORD *)(a1 + 304);
          *(_QWORD *)(a1 + 168) = v24;
          CmpAssignSecurityToKcb(a1, *(unsigned int *)(v37 + 44), 0LL, 1, 0);
          v42 = 0;
          goto LABEL_41;
        }
LABEL_83:
        v42 = 0;
        v17 = CmAddLogForAction(v23, 1);
        if ( v17 < 0 )
        {
          v38 = CmpKeySecurityDecrementReferenceCount(v3, v4, v26);
          (*(void (__fastcall **)(ULONG_PTR, char *))(v4 + 16))(v4, (char *)&v47 + 4);
          v3 = 0LL;
          v42 = 0;
          if ( v38 )
          {
            CmpRemoveSecurityCellList(v4, (unsigned int)v26);
            HvFreeCell(v4, (unsigned int)v26);
            v42 = 0;
          }
        }
        goto LABEL_40;
      }
      v31 = RtlLengthSecurityDescriptorStrict();
      v32 = HvAllocateCell(v4, v31 + 20, v22, &v43, (__int64 *)((char *)&v47 + 4));
      v26 = v32;
      if ( v32 == -1 )
      {
        v17 = -1073741670;
        goto LABEL_39;
      }
      v42 = v32;
      if ( v65 )
      {
        v3 = v43;
        *(_DWORD *)(v43 + 8) = v32;
        *(_DWORD *)(v3 + 4) = v32;
LABEL_72:
        *(_WORD *)v3 = 27507;
        v34 = Size;
        *(_DWORD *)(v3 + 12) = 1;
        *(_DWORD *)(v3 + 16) = v34;
        memmove((void *)(v3 + 20), P, v34);
        v17 = CmpAddSecurityCellToCache(v4, (unsigned int)v26, 0LL);
        if ( v17 < 0 )
        {
          v16 = (__int64)v40;
          v18 = v41;
          if ( !v65 )
          {
            v40[1] = *(_DWORD *)(v3 + 4);
            *(_DWORD *)(v41 + 8) = *(_DWORD *)(v3 + 8);
          }
          goto LABEL_6;
        }
        if ( !v65 )
        {
          *(_DWORD *)(v50 + 44) = v26;
          v35 = CmpKeySecurityDecrementReferenceCount((__int64)v40, v4, v12);
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v4 + 16))(v4, v49);
          v16 = 0LL;
          if ( v35 )
          {
            CmpRemoveSecurityCellList(v4, v12);
            HvFreeCell(v4, v12);
          }
          goto LABEL_82;
        }
        LODWORD(v59) = 0;
        if ( !CmpFindSecurityCellCacheIndex(v4, v26, (__int64 *)va) )
          KeBugCheckEx(0x51u, 4uLL, 3uLL, a1, v26);
        v36 = *(_DWORD **)(*(_QWORD *)(v4 + 1880) + 16LL * (unsigned int)v59 + 8);
        *(_QWORD *)(v23 + 88) = v36;
        *(_DWORD *)(v23 + 96) = *v36;
        goto LABEL_80;
      }
      if ( (unsigned __int8)HvMarkCellDirty(v4, v40[1], 0LL) )
      {
        v17 = CmpKeySecurityMarkDirtyForReferenceCountDecrement(v40, v4, v12);
        if ( v17 < 0 )
          goto LABEL_39;
        v33 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v4 + 8))(v4, v40[1], v53);
        v3 = v43;
        v41 = v33;
        if ( !v33 )
        {
          v16 = (__int64)v40;
          v17 = -1073741670;
          v18 = 0LL;
LABEL_6:
          if ( P )
            ExFreePoolWithTag(P, 0);
          goto LABEL_8;
        }
        *(_DWORD *)(v43 + 4) = v40[1];
        *(_DWORD *)(v3 + 8) = v12;
        v40[1] = v26;
        *(_DWORD *)(v33 + 8) = v26;
        goto LABEL_72;
      }
LABEL_38:
      v17 = -1073741443;
LABEL_39:
      v3 = v43;
      goto LABEL_40;
    }
LABEL_5:
    v18 = 0LL;
    goto LABEL_6;
  }
  P = 0LL;
  v18 = 0LL;
LABEL_8:
  if ( *(_QWORD *)&v45[1] )
    CmSiFreeMemory(*(PPRIVILEGE_SET *)&v45[1]);
  if ( v42 )
    HvFreeCell(v4, v42);
  if ( v18 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v4 + 16))(v4, v53);
  if ( v3 )
    (*(void (__fastcall **)(ULONG_PTR, char *))(v4 + 16))(v4, (char *)&v47 + 4);
  if ( v16 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v4 + 16))(v4, v49);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v4 + 16))(v4, v54);
  return (unsigned int)v17;
}
