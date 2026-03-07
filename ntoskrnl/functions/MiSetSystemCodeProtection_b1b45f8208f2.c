__int64 __fastcall MiSetSystemCodeProtection(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v7; // r13
  unsigned int v8; // r15d
  unsigned int v9; // ebx
  unsigned __int64 v10; // r14
  unsigned int v11; // r12d
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // edx
  void *SessionVm; // rdi
  ULONG_PTR v17; // rdi
  BOOL v18; // ebx
  unsigned __int64 v19; // r15
  __int64 v20; // rbp
  unsigned __int64 v21; // rbx
  unsigned __int64 ValidPte; // rbx
  unsigned __int64 v24; // rbx
  __int64 v25; // r12
  __int64 v26; // rdx
  __int64 v27; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rdx
  __int64 v33; // r11
  __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rdx
  __int64 v39; // r8
  unsigned __int64 v40; // rax
  unsigned __int8 v41; // [rsp+20h] [rbp-168h]
  unsigned int v42; // [rsp+24h] [rbp-164h]
  unsigned int v43; // [rsp+28h] [rbp-160h]
  int v44; // [rsp+2Ch] [rbp-15Ch]
  void *v45; // [rsp+30h] [rbp-158h]
  __int64 v46; // [rsp+38h] [rbp-150h]
  int v47; // [rsp+40h] [rbp-148h] BYREF
  __int64 v48; // [rsp+48h] [rbp-140h] BYREF
  unsigned __int64 v49; // [rsp+50h] [rbp-138h]
  ULONG_PTR v50; // [rsp+58h] [rbp-130h] BYREF
  unsigned __int64 v51; // [rsp+60h] [rbp-128h]
  __int64 v52; // [rsp+68h] [rbp-120h]
  __int64 v53; // [rsp+70h] [rbp-118h]
  int v54; // [rsp+80h] [rbp-108h] BYREF
  __int16 v55; // [rsp+84h] [rbp-104h]
  __int16 v56; // [rsp+86h] [rbp-102h]
  __int64 v57; // [rsp+88h] [rbp-100h]
  __int64 v58; // [rsp+90h] [rbp-F8h]
  __int64 v59; // [rsp+98h] [rbp-F0h]
  _BYTE v60[152]; // [rsp+A0h] [rbp-E8h] BYREF

  v4 = a3;
  v51 = a3;
  v53 = a1;
  v42 = a4;
  v7 = 0LL;
  v56 = 0;
  v48 = 0LL;
  v8 = a4;
  memset(v60, 0, sizeof(v60));
  v9 = 1;
  if ( v8 != 24 && (v8 & 0x10) != 0 )
  {
    v8 &= ~0x10u;
    v44 = 1;
    v42 = v8;
  }
  else
  {
    v44 = 0;
  }
  v10 = (__int64)(a2 << 25) >> 16;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v10) )
    return 1LL;
  v11 = v8;
  v43 = v8;
  if ( v8 == 256 )
  {
    v52 = MiSectionControlArea(*(_QWORD *)(a1 + 112));
    v46 = 0LL;
    v49 = 0LL;
  }
  else
  {
    v49 = v4;
    v52 = 0LL;
    v46 = 0LL;
    if ( (v8 & 5) == 5 )
    {
      v11 = v8 & 0xFFFFFFFE;
      v43 = v8 & 0xFFFFFFFE;
    }
    if ( (int)MiMakeDriverPagesPrivate(a1, (ULONG_PTR *)a2, v4, (v11 >> 1) & 2) < 0 )
      return 0LL;
  }
  if ( (unsigned int)MiGetSystemRegionType((__int64)(a2 << 25) >> 16) == 1 )
  {
    SessionVm = (void *)MiGetSessionVm(v12, 2LL, v13, v14);
  }
  else
  {
    v15 = 0;
    SessionVm = &unk_140C697C0;
  }
  v45 = SessionVm;
  v57 = 20LL;
  v54 = v15;
  v55 = 0;
  v58 = 0LL;
  v59 = 0LL;
  v41 = MiLockWorkingSetShared((__int64)SessionVm);
  if ( a2 <= v4 )
  {
    while ( 1 )
    {
      if ( !v7 )
        goto LABEL_36;
      if ( (a2 & 0xFFF) == 0 )
        break;
LABEL_14:
      if ( a2 > v49 )
      {
        v24 = v10 - *(_QWORD *)(v53 + 48);
        if ( v46 )
        {
          v25 = *(_QWORD *)(v46 + 16);
          v26 = 0LL;
          v46 = v25;
          v48 = 0LL;
        }
        else
        {
          MiFlushTbList(&v54);
          MiUnlockPageTableInternal((__int64)SessionVm, v7);
          MiUnlockWorkingSetShared((__int64)SessionVm, v41);
          v46 = MiOffsetToProtos(v52, v24, &v48);
          v25 = v46;
          MiLockWorkingSetShared((__int64)SessionVm);
          MiLockPageTableInternal((__int64)SessionVm, v7, 0);
          v26 = v48;
        }
        v27 = *(unsigned int *)(v25 + 44) - (unsigned __int64)(*(_DWORD *)(v25 + 52) & 0x3FFFFFFF) - v26;
        v11 = (*(unsigned __int16 *)(v25 + 32) >> 1) & 0x1F;
        v43 = v11;
        v49 = a2 + 8 * (v27 - 1);
        if ( (v11 & 5) == 5 )
        {
          v11 &= ~1u;
          v43 = v11;
        }
      }
      v17 = *(_QWORD *)a2;
      v18 = MiPteInShadowRange(a2);
      if ( v18
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v17 & 1) != 0
        && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v29 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
          v30 = v17 | 0x20;
          if ( (v29 & 0x20) == 0 )
            v30 = v17;
          v17 = v30;
          if ( (v29 & 0x42) != 0 )
            v17 = v30 | 0x42;
        }
      }
      v50 = v17;
      if ( (v17 & 1) != 0 )
      {
        v19 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v50) >> 12) & 0xFFFFFFFFFFLL;
        v20 = 48 * v19 - 0x220000000000LL;
        if ( *(__int64 *)(v20 + 40) < 0 )
          goto LABEL_34;
        if ( (MiGetPagePrivilege(48 * v19 - 0x220000000000LL, 0, 0LL) & 0x40) != 0 )
        {
          if ( (v42 & 6) != 0 )
            goto LABEL_63;
        }
        else if ( (MiFlags & 0x8000) != 0 && (v42 & 4) != 0 && ((*(_QWORD *)(v20 + 40) >> 60) & 7) == 3 )
        {
LABEL_63:
          SessionVm = v45;
          v9 = 0;
          goto LABEL_37;
        }
        v21 = 0LL;
        v47 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v47);
          while ( *(__int64 *)(v20 + 24) < 0 );
        }
        *(_QWORD *)(v20 + 16) ^= (*(_DWORD *)(v20 + 16) ^ (32 * v11)) & 0x3E0;
        if ( v44 )
          MiMarkPfnVerified(48 * v19 - 0x220000000000LL, 4);
        if ( (v17 & 0x42) != 0 )
          v21 = MiCaptureDirtyBitToPfn(48 * v19 - 0x220000000000LL);
        _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v21 )
          MiReleasePageFileInfo(*(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v20 + 40) >> 43) & 0x3FFLL)), v21, 1);
        ValidPte = MiMakeValidPte(a2, v19, v43);
        if ( (v43 & 5) == 4 && (v17 & 0x42) != 0 )
          ValidPte |= 0x42uLL;
        MiWriteValidPteNewProtection(a2, ValidPte);
        if ( (MiFlags & 0x300) != 0 && !(unsigned int)MI_TIGHTER_PERMISSIONS(v17, ValidPte) )
        {
LABEL_34:
          v8 = v42;
          v4 = v51;
          goto LABEL_92;
        }
        v9 = 1;
        MiInsertTbFlushEntry((__int64)&v54, v10, 1LL, 0);
        v4 = v51;
        v8 = v42;
        goto LABEL_30;
      }
      if ( (v17 & 0x400) != 0 )
        goto LABEL_92;
      if ( (v17 & 0x800) == 0 )
      {
        if ( v17 && v8 != 256 )
        {
          v50 = v17 ^ ((unsigned __int16)v17 ^ (unsigned __int16)(32 * v11)) & 0x3E0;
          *(_QWORD *)a2 = v50;
        }
LABEL_92:
        v9 = 1;
LABEL_30:
        a2 += 8LL;
        v10 += 4096LL;
        goto LABEL_31;
      }
      if ( MiLockTransitionLeafPageEx(a2, 0LL, 0) )
      {
        v31 = MI_READ_PTE_LOCK_FREE(a2);
        v32 = v31;
        if ( qword_140C657C0 )
        {
          if ( (v31 & 0x10) != 0 )
            v31 &= ~0x10uLL;
          else
            v31 &= ~qword_140C657C0;
        }
        v33 = 48 * ((v31 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        v34 = 32LL * (v11 & 0x1F);
        v35 = v34 | v32 & 0xFFFFFFFFFFFFFC1FuLL;
        v36 = *(_QWORD *)(v33 + 16) & 0xFFFFFFFFFFFFFC1FuLL;
        v50 = v35;
        *(_QWORD *)(v33 + 16) = v34 | v36;
        v37 = v35;
        if ( v18 )
        {
          if ( MiPteHasShadow() )
          {
            v40 = v38;
            if ( !HIBYTE(word_140C6697C) && (v38 & 1) != 0 )
              v40 = v38 | 0x8000000000000000uLL;
            *(_QWORD *)a2 = v40;
            MiWritePteShadow(a2, v40, v39);
            goto LABEL_87;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v37 = v38;
            if ( (v38 & 1) != 0 )
              v37 = v38 | 0x8000000000000000uLL;
            goto LABEL_86;
          }
          *(_QWORD *)a2 = v38;
        }
        else
        {
LABEL_86:
          *(_QWORD *)a2 = v37;
        }
LABEL_87:
        _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_92;
      }
      v9 = 1;
LABEL_31:
      SessionVm = v45;
      if ( a2 > v4 )
        goto LABEL_37;
      v11 = v43;
    }
    MiFlushTbList(&v54);
    MiUnlockPageTableInternal((__int64)SessionVm, v7);
LABEL_36:
    v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal((__int64)SessionVm, v7, 0);
    goto LABEL_14;
  }
LABEL_37:
  MiFlushTbList(&v54);
  if ( v7 )
    MiUnlockPageTableInternal((__int64)SessionVm, v7);
  MiUnlockWorkingSetShared((__int64)SessionVm, v41);
  return v9;
}
