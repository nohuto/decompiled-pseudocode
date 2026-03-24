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
  __int64 v21; // rsi
  void *p_DestinationString; // rbx
  unsigned int v23; // r15d
  __int64 v24; // r13
  __int64 v25; // rbx
  ULONG_PTR v26; // r12
  ULONG_PTR v27; // rdi
  _DWORD *v28; // rcx
  __int64 v29; // rax
  bool v30; // di
  bool v31; // zf
  int v32; // eax
  unsigned int v33; // eax
  __int64 v34; // rax
  unsigned int v35; // eax
  bool v36; // di
  _DWORD *v37; // rcx
  __int64 v38; // rax
  bool v39; // bl
  char *BugCheckParameter4; // [rsp+28h] [rbp-B1h]
  unsigned int *v41; // [rsp+48h] [rbp-91h]
  __int64 v42; // [rsp+50h] [rbp-89h]
  unsigned int v43; // [rsp+58h] [rbp-81h]
  __int64 v44; // [rsp+60h] [rbp-79h] BYREF
  PVOID P; // [rsp+68h] [rbp-71h] BYREF
  _DWORD v46[3]; // [rsp+74h] [rbp-65h]
  unsigned int v47; // [rsp+80h] [rbp-59h]
  ULONG_PTR v48; // [rsp+84h] [rbp-55h] BYREF
  int v49; // [rsp+8Ch] [rbp-4Dh]
  _DWORD v50[2]; // [rsp+90h] [rbp-49h] BYREF
  __int64 v51; // [rsp+98h] [rbp-41h]
  size_t Size; // [rsp+A0h] [rbp-39h]
  _DWORD *v53; // [rsp+A8h] [rbp-31h] BYREF
  _DWORD v54[2]; // [rsp+B0h] [rbp-29h] BYREF
  _DWORD v55[2]; // [rsp+B8h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-19h] BYREF
  char v57; // [rsp+D0h] [rbp-9h] BYREF
  __int64 v60; // [rsp+138h] [rbp+5Fh] BYREF
  va_list va; // [rsp+138h] [rbp+5Fh]
  __int64 v62; // [rsp+140h] [rbp+67h] BYREF
  va_list va1; // [rsp+140h] [rbp+67h]
  __int64 v64; // [rsp+148h] [rbp+6Fh]
  __int64 v65; // [rsp+150h] [rbp+77h]
  __int64 v66; // [rsp+158h] [rbp+7Fh]
  __int64 v67; // [rsp+160h] [rbp+87h]
  __int64 v68; // [rsp+168h] [rbp+8Fh]
  va_list va2; // [rsp+170h] [rbp+97h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v60 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v62 = va_arg(va2, _QWORD);
  v64 = va_arg(va2, _QWORD);
  v65 = va_arg(va2, _QWORD);
  v66 = va_arg(va2, _QWORD);
  v67 = va_arg(va2, _QWORD);
  v68 = va_arg(va2, _QWORD);
  P = 0LL;
  v2 = a1;
  v50[1] = 0;
  v49 = 0;
  v50[0] = -1;
  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = *(_DWORD *)(a1 + 40);
  v54[0] = -1;
  v55[0] = -1;
  v54[1] = 0;
  v55[1] = 0;
  DestinationString = 0LL;
  v6 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v4 + 8);
  v48 = 0xFFFFFFFF00000000uLL;
  v43 = 0;
  v53 = 0LL;
  LOBYTE(v62) = 0;
  v42 = 0LL;
  v44 = 0LL;
  *(_QWORD *)&v46[1] = 0LL;
  v47 = v5;
  v7 = v6(v4, v5, v55);
  v51 = v7;
  if ( !v7 )
    return 3221225626LL;
  CmpUpdateKeyNodeAccessBits(v4, v7, v5);
  v9 = v66;
  v12 = *(_DWORD *)CmGetKCBCacheSecurity(v2, v66, v10, v11);
  v13 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v4 + 8);
  v46[0] = v12;
  v14 = v13(v4, v12, v50);
  v41 = (unsigned int *)v14;
  v16 = v14;
  if ( !v14
    || (TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, *(unsigned int *)(v14 + 16), 0x36384D43u, v15),
        (*(_QWORD *)&v46[1] = TransientPoolWithTag) == 0LL) )
  {
    v17 = -1073741670;
    goto LABEL_5;
  }
  memmove(TransientPoolWithTag, (const void *)(v16 + 20), *(unsigned int *)(v16 + 16));
  v20 = (int)a2;
  if ( (*a2 & 4) != 0 )
  {
    v21 = v68;
    SeCheckForCriticalAceRemoval(*(_QWORD *)&v46[1], v60, v68, (__int64 *)va1);
    if ( (_BYTE)v62 )
    {
      p_DestinationString = (void *)CmpConstructName(v2);
      if ( p_DestinationString )
      {
        LOBYTE(v62) = 1;
      }
      else
      {
        RtlInitUnicodeString(&DestinationString, L"<Unknown registry key>");
        p_DestinationString = &DestinationString;
        LOBYTE(v62) = 0;
      }
      BugCheckParameter4 = &v57;
      v17 = NtWaitLowEventPair(p_DestinationString, *(_QWORD *)&v46[1], v60, v21);
      if ( (_BYTE)v62 )
        CmpFreeTransientPoolWithTag(p_DestinationString, 0x624E4D43u);
      if ( v17 < 0 )
        goto LABEL_5;
      LODWORD(v2) = a1;
    }
  }
  P = *(PVOID *)&v46[1];
  v17 = SeSetSecurityDescriptorInfoEx2(
          v20,
          (_DWORD)a2,
          v60,
          (unsigned int)&P,
          (_DWORD)BugCheckParameter4,
          v64,
          v65,
          v68);
  if ( v17 >= 0 )
  {
    v17 = CmpTraceSecurityChanging(v2, v46[1], *a2, v60, (__int64)P);
    if ( v17 >= 0 )
    {
      LODWORD(Size) = RtlLengthSecurityDescriptorStrict();
      if ( v9 )
        v23 = 1;
      else
        v23 = v47 >> 31;
      v24 = v67;
      v25 = MEMORY[0xFFFFF78000000014];
      if ( v9 )
      {
        if ( !(unsigned __int8)HvMarkCellDirty(v4, v12, 0LL) )
          goto LABEL_38;
        *(_DWORD *)(v24 + 96) = -1;
        *(_QWORD *)(v24 + 88) = 0LL;
        *(_DWORD *)(v24 + 68) = 9;
        *(_BYTE *)(v24 + 100) = 0;
      }
      else if ( !(unsigned __int8)HvMarkCellDirty(v4, v47, 0LL) || !(unsigned __int8)HvMarkCellDirty(v4, v12, 0LL) )
      {
        goto LABEL_38;
      }
      if ( (unsigned __int8)CmpFindMatchingDescriptorCell(v4, P, v23, &v48, &v53) )
      {
        v26 = (unsigned int)v48;
        LODWORD(v27) = v46[0];
        if ( (_DWORD)v48 == v46[0] )
        {
          if ( v66 )
          {
            v17 = CmpKeySecurityIncrementReferenceCount((__int64)v41, v4, v48, 0);
            if ( v17 >= 0 )
            {
              *(_QWORD *)(v24 + 88) = v53;
              *(_DWORD *)(v24 + 96) = v26;
            }
          }
          else
          {
            *(_QWORD *)(v51 + 4) = v25;
            *(_QWORD *)(a1 + 168) = v25;
          }
          goto LABEL_39;
        }
        if ( !(unsigned __int8)HvMarkCellDirty(v4, (unsigned int)v48, 0LL) )
          goto LABEL_38;
        if ( v66 )
        {
          v28 = v53;
          *(_DWORD *)(v24 + 96) = *v53;
          *(_QWORD *)(v24 + 88) = v28;
        }
        else
        {
          v17 = CmpKeySecurityMarkDirtyForReferenceCountDecrement(v41, v4, v27);
          if ( v17 < 0 )
            goto LABEL_39;
        }
        v29 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, char *))(v4 + 8))(v4, (unsigned int)v26, (char *)&v48 + 4);
        v3 = v29;
        if ( !v29 )
        {
          if ( !v66 )
            KeBugCheckEx(0x51u, 4uLL, 5uLL, v4, v26);
          v17 = -1073741670;
          goto LABEL_40;
        }
        v17 = CmpKeySecurityIncrementReferenceCount(v29, v4, v26, 0);
        if ( v17 < 0 )
        {
LABEL_40:
          v16 = (__int64)v41;
LABEL_41:
          v18 = v42;
          goto LABEL_6;
        }
        if ( v66 )
          goto LABEL_83;
        v30 = CmpKeySecurityDecrementReferenceCount((__int64)v41, v4, v27);
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v4 + 16))(v4, v50);
        v41 = 0LL;
        v31 = !v30;
        LODWORD(v27) = v46[0];
        if ( !v31 )
        {
          CmpRemoveSecurityCellList(v4, v46[0]);
          HvFreeCell(v4, (unsigned int)v27);
        }
        *(_DWORD *)(v51 + 44) = v26;
LABEL_80:
        if ( !v66 )
        {
          v16 = (__int64)v41;
LABEL_82:
          v38 = v51;
          *(_QWORD *)(v51 + 4) = v25;
          ++*(_QWORD *)(a1 + 304);
          *(_QWORD *)(a1 + 168) = v25;
          CmpAssignSecurityToKcb(a1, *(unsigned int *)(v38 + 44), 0LL, 1, 0);
          v43 = 0;
          goto LABEL_41;
        }
LABEL_83:
        v43 = 0;
        v17 = CmAddLogForAction(v24, 1);
        if ( v17 < 0 )
        {
          v39 = CmpKeySecurityDecrementReferenceCount(v3, v4, v27);
          (*(void (__fastcall **)(ULONG_PTR, char *))(v4 + 16))(v4, (char *)&v48 + 4);
          v3 = 0LL;
          v43 = 0;
          if ( v39 )
          {
            CmpRemoveSecurityCellList(v4, (unsigned int)v27);
            HvFreeCell(v4, (unsigned int)v27);
            v43 = 0;
          }
        }
        goto LABEL_40;
      }
      v32 = RtlLengthSecurityDescriptorStrict();
      v33 = HvAllocateCell(v4, v32 + 20, v23, &v44, (__int64 *)((char *)&v48 + 4));
      v27 = v33;
      if ( v33 == -1 )
      {
        v17 = -1073741670;
        goto LABEL_39;
      }
      v43 = v33;
      if ( v66 )
      {
        v3 = v44;
        *(_DWORD *)(v44 + 8) = v33;
        *(_DWORD *)(v3 + 4) = v33;
LABEL_72:
        *(_WORD *)v3 = 27507;
        v35 = Size;
        *(_DWORD *)(v3 + 12) = 1;
        *(_DWORD *)(v3 + 16) = v35;
        memmove((void *)(v3 + 20), P, v35);
        v17 = CmpAddSecurityCellToCache(v4, (unsigned int)v27, 0LL);
        if ( v17 < 0 )
        {
          v16 = (__int64)v41;
          v18 = v42;
          if ( !v66 )
          {
            v41[1] = *(_DWORD *)(v3 + 4);
            *(_DWORD *)(v42 + 8) = *(_DWORD *)(v3 + 8);
          }
          goto LABEL_6;
        }
        if ( !v66 )
        {
          *(_DWORD *)(v51 + 44) = v27;
          v36 = CmpKeySecurityDecrementReferenceCount((__int64)v41, v4, v12);
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v4 + 16))(v4, v50);
          v16 = 0LL;
          if ( v36 )
          {
            CmpRemoveSecurityCellList(v4, v12);
            HvFreeCell(v4, v12);
          }
          goto LABEL_82;
        }
        LODWORD(v60) = 0;
        if ( !CmpFindSecurityCellCacheIndex(v4, v27, (__int64 *)va) )
          KeBugCheckEx(0x51u, 4uLL, 3uLL, a1, v27);
        v37 = *(_DWORD **)(*(_QWORD *)(v4 + 1880) + 16LL * (unsigned int)v60 + 8);
        *(_QWORD *)(v24 + 88) = v37;
        *(_DWORD *)(v24 + 96) = *v37;
        goto LABEL_80;
      }
      if ( (unsigned __int8)HvMarkCellDirty(v4, v41[1], 0LL) )
      {
        v17 = CmpKeySecurityMarkDirtyForReferenceCountDecrement(v41, v4, v12);
        if ( v17 < 0 )
          goto LABEL_39;
        v34 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v4 + 8))(v4, v41[1], v54);
        v3 = v44;
        v42 = v34;
        if ( !v34 )
        {
          v16 = (__int64)v41;
          v17 = -1073741670;
          v18 = 0LL;
LABEL_6:
          if ( P )
            ExFreePoolWithTag(P, 0);
          goto LABEL_8;
        }
        *(_DWORD *)(v44 + 4) = v41[1];
        *(_DWORD *)(v3 + 8) = v12;
        v41[1] = v27;
        *(_DWORD *)(v34 + 8) = v27;
        goto LABEL_72;
      }
LABEL_38:
      v17 = -1073741443;
LABEL_39:
      v3 = v44;
      goto LABEL_40;
    }
LABEL_5:
    v18 = 0LL;
    goto LABEL_6;
  }
  P = 0LL;
  v18 = 0LL;
LABEL_8:
  if ( *(_QWORD *)&v46[1] )
    CmSiFreeMemory(*(PPRIVILEGE_SET *)&v46[1]);
  if ( v43 )
    HvFreeCell(v4, v43);
  if ( v18 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v4 + 16))(v4, v54);
  if ( v3 )
    (*(void (__fastcall **)(ULONG_PTR, char *))(v4 + 16))(v4, (char *)&v48 + 4);
  if ( v16 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v4 + 16))(v4, v50);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v4 + 16))(v4, v55);
  return (unsigned int)v17;
}
