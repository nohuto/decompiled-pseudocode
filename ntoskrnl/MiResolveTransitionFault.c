/*
 * XREFs of MiResolveTransitionFault @ 0x140271760
 * Callers:
 *     MiDispatchFault @ 0x14026A900 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x140270A50 (MiResolveProtoPteFault.c)
 * Callees:
 *     MiCheckWriteInProgressFault @ 0x140201D38 (MiCheckWriteInProgressFault.c)
 *     MiReleasePageFileInfo @ 0x14020B300 (MiReleasePageFileInfo.c)
 *     MiLockAndDecrementShareCount @ 0x140210114 (MiLockAndDecrementShareCount.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     MiAllocateWsle @ 0x14026D1B0 (MiAllocateWsle.c)
 *     MiCompleteProtoPteFault @ 0x14026F5F0 (MiCompleteProtoPteFault.c)
 *     MiHandleTransitionFault @ 0x1402720E0 (MiHandleTransitionFault.c)
 *     MiUnlockProtoPoolPage @ 0x1402861D0 (MiUnlockProtoPoolPage.c)
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiPfnReferenceCountIsZero @ 0x1402879C0 (MiPfnReferenceCountIsZero.c)
 *     MiFreeInPageSupportBlock @ 0x140287B5C (MiFreeInPageSupportBlock.c)
 *     MiUpdatePfnPriority @ 0x14028D35C (MiUpdatePfnPriority.c)
 *     MiQueueCoreWorkingSetEntries @ 0x14028D9D0 (MiQueueCoreWorkingSetEntries.c)
 *     MiHandleCollidedFault @ 0x1402A2AC4 (MiHandleCollidedFault.c)
 *     MiUserPdeOrAbove @ 0x1402D39A0 (MiUserPdeOrAbove.c)
 *     MiOkToSetPteDirtyForNotValidFault @ 0x1402D7118 (MiOkToSetPteDirtyForNotValidFault.c)
 *     MiIsAddressGlobal @ 0x1402DD2F8 (MiIsAddressGlobal.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiCaptureDirtyBitToPfn @ 0x14032D790 (MiCaptureDirtyBitToPfn.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     MiMakeProtoReadOnly @ 0x140631B0C (MiMakeProtoReadOnly.c)
 *     MiBadRefCount @ 0x14064B094 (MiBadRefCount.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x14065DE28 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14065E278 (MiLockSpecialPurposeMemoryCachedPage.c)
 */

__int64 MiResolveTransitionFault(_QWORD *a1, ULONG_PTR a2, __int64 a3, __int64 a4, ...)
{
  __int64 v4; // r13
  __int64 v5; // rsi
  __int64 v6; // r8
  __int64 v8; // rdx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  __int64 v12; // r14
  char v13; // al
  __int64 result; // rax
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // r8
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // r8
  char v29; // r12
  __int16 v30; // cx
  bool v31; // zf
  __int16 v32; // cx
  __int64 v33; // r9
  __int64 v34; // r10
  __int64 v35; // rax
  int v36; // edx
  int v37; // edi
  unsigned __int64 v38; // rdx
  char v39; // al
  __int64 v40; // r13
  unsigned __int64 v41; // r9
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v44; // eax
  struct _SLIST_ENTRY *v45; // rdi
  unsigned __int64 v46; // rax
  ULONG_PTR v47; // rbx
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rdi
  int IsAddressGlobal; // eax
  int v51; // edi
  _BYTE *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v58; // rax
  struct _LIST_ENTRY *v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rdx
  struct _LIST_ENTRY *v62; // r8
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // [rsp+48h] [rbp-70h]
  unsigned int v66; // [rsp+50h] [rbp-68h] BYREF
  int v67; // [rsp+54h] [rbp-64h] BYREF
  __int64 v68; // [rsp+58h] [rbp-60h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+60h] [rbp-58h] BYREF
  __int64 v70; // [rsp+68h] [rbp-50h]
  __int64 v71; // [rsp+70h] [rbp-48h]
  __int64 v72; // [rsp+78h] [rbp-40h]
  _QWORD *v76; // [rsp+E0h] [rbp+28h] BYREF
  va_list va; // [rsp+E0h] [rbp+28h]
  va_list va1; // [rsp+E8h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v76 = va_arg(va1, _QWORD *);
  v4 = a3;
  v5 = (__int64)v76;
  v6 = 0LL;
  v72 = a1[7];
  v8 = a1[2];
  v66 = 0;
  *v76 = 0LL;
  v65 = v8;
  ListEntry = 0LL;
  if ( !v4 )
  {
    while ( 1 )
    {
      v46 = MI_READ_PTE_LOCK_FREE(a2);
      v47 = v46;
      if ( (v46 & 0x800) == 0 )
        return 3221226548LL;
      if ( (v46 & 1) == 0 && (!v46 || !qword_140C657C0 || (qword_140C657C0 & v46) != 0) )
      {
        if ( qword_140C657C0 )
        {
          if ( (v46 & 0x10) != 0 )
            v46 &= ~0x10uLL;
          else
            v46 &= ~qword_140C657C0;
        }
        v48 = (v46 >> 12) & 0xFFFFFFFFFFLL;
        if ( v48 <= qword_140C65820 )
        {
          if ( _bittest64((const signed __int64 *)(48 * v48 - 0x21FFFFFFFFD8LL), 0x36u) )
          {
            v12 = 48 * v48 - 0x220000000000LL;
            LODWORD(v76) = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx((_QWORD **)va);
              while ( *(__int64 *)(v12 + 24) < 0 );
            }
            if ( MI_READ_PTE_LOCK_FREE(a2) == v47 )
            {
              if ( (*(_DWORD *)(*(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v12 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
              {
                v12 = MiLockSpecialPurposeMemoryCachedPage(v12, 2LL);
                if ( !v12 )
                  return 3221226548LL;
              }
              if ( (*(_QWORD *)(v12 + 8) | 0x8000000000000000uLL) != a2
                && !_bittest64((const signed __int64 *)(v12 + 40), 0x28u) )
              {
                KeBugCheckEx(0x1Au, 0x411uLL, a2, v47, *(_QWORD *)(v12 + 8));
              }
              v10 = *(_QWORD *)a2;
              if ( (unsigned int)MiPteInShadowRange(a2)
                && (MiFlags & 0x600000) != 0
                && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                && (v10 & 1) != 0
                && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
              {
                Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                if ( Flink )
                {
                  v58 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
                  if ( (v58 & 0x20) != 0 )
                    v10 |= 0x20uLL;
                  if ( (v58 & 0x42) != 0 )
                    v10 |= 0x42uLL;
                }
              }
              v8 = v65;
              v6 = 0LL;
              goto LABEL_7;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
        }
      }
    }
  }
  v10 = *(_QWORD *)a2;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v10 & 1) != 0
    && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
  {
    v59 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v59 )
    {
      v60 = *((_QWORD *)&v59->Flink + ((a2 >> 3) & 0x1FF));
      if ( (v60 & 0x20) != 0 )
        v10 |= 0x20uLL;
      if ( (v60 & 0x42) != 0 )
        v10 |= 0x42uLL;
    }
    v8 = v65;
  }
  v11 = v10;
  if ( qword_140C657C0 && (v10 & 0x10) == 0 )
    v11 = v10 & ~qword_140C657C0;
  v12 = 48 * ((v11 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
LABEL_7:
  v13 = *(_BYTE *)(v12 + 35);
  if ( (v13 & 0x10) != 0 )
  {
    if ( (v13 & 0x40) != 0 )
    {
      v51 = -1073740023;
      goto LABEL_109;
    }
    v51 = -1073741801;
LABEL_180:
    *((_DWORD *)a1 + 20) |= 0x40u;
    goto LABEL_109;
  }
  v71 = v8 & 1;
  if ( (v8 & 1) == 0 || *(_BYTE *)(v8 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v12 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) == 0 )
    {
LABEL_10:
      __incgsdword(0x2E98u);
      LOBYTE(v8) = *(_BYTE *)(v12 + 34);
      if ( (v8 & 8) != 0 )
      {
        v51 = MiCheckWriteInProgressFault(v12);
        if ( v51 < 0 )
          goto LABEL_180;
      }
      if ( (v8 & 0x20) != 0 )
      {
        result = MiHandleCollidedFault((_DWORD)a1, a2, v4, v12, v5, (__int64)&v66);
        if ( v66 <= 1 || (int)result < 0 )
          return result;
      }
      else
      {
        v68 = v6;
        result = MiHandleTransitionFault((_DWORD)a1, a2, v4, (void *)v12, (__int64)&v68, v10, (__int64)&ListEntry);
        if ( (int)result < 0 )
          return result;
        if ( v68 )
          v12 = v68;
      }
      v15 = a4;
      v16 = a1[2];
      v17 = a4;
      if ( (v16 & 1) != 0 && *(_BYTE *)(v16 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
      {
        v10 = -865LL;
        *(_QWORD *)a2 = *(_QWORD *)a2 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
      }
      if ( ((v10 >> 5) & 0x1F) == 0x18 )
      {
        MiMakeProtoReadOnly(a2, v12, a4);
        v17 = a4;
        v15 = a4;
      }
      v18 = *(_QWORD *)a2;
      if ( a2 >= 0xFFFFF6FB7DBED000uLL
        && a2 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v18 & 1) != 0
        && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
      {
        v62 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v62 )
        {
          v63 = *((_QWORD *)&v62->Flink + ((a2 >> 3) & 0x1FF));
          if ( (v63 & 0x20) != 0 )
            v18 |= 0x20uLL;
          if ( (v63 & 0x42) != 0 )
            v18 |= 0x42uLL;
        }
        v17 = a4;
      }
      v19 = v18;
      if ( qword_140C657C0 && (v18 & 0x10) == 0 )
        v19 = v18 & ~qword_140C657C0;
      v20 = v19 & 0xFFFFFFFFFF000LL | MmProtectToPteMask[(v18 >> 5) & 0x1F] & 0xFFF0000000000E7FuLL | 0x21;
      if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
        goto LABEL_24;
      if ( a2 >= 0xFFFFF6FB40000000uLL && a2 <= 0xFFFFF6FB7FFFFFFFuLL )
      {
        v20 = a2 == 0xFFFFF6FB7DBEDF68uLL
            ? v19 & 0xFFFFFFFFFF000LL | MmProtectToPteMask[(v18 >> 5) & 0x1F] & 0xFFF0000000000E7FuLL | 0x8000000000000021uLL
            : v19 & 0xFFFFFFFFFF000LL | MmProtectToPteMask[(v18 >> 5) & 0x1F] & 0x7FF0000000000E7FLL | 0x21;
        if ( (unsigned int)MiUserPdeOrAbove(a2) )
          v20 |= 4uLL;
      }
      if ( a2 <= 0xFFFFF6BFFFFFFF78uLL )
        v20 |= 4uLL;
      IsAddressGlobal = MiIsAddressGlobal((__int64)(a2 << 25) >> 16);
      v17 = a4;
      v15 = a4;
      if ( IsAddressGlobal )
LABEL_24:
        v20 |= 0x100uLL;
      v21 = ZeroPte;
      v22 = v20 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
      v23 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v12 + 40) >> 43) & 0x3FFLL));
      v24 = *(_QWORD *)(v12 + 16);
      v70 = v23;
      if ( (v24 & 0x400) == 0 && (v24 & 4) != 0 && (unsigned __int16)v24 >> 12 == *(_DWORD *)(v23 + 1188) )
      {
        v64 = MiCaptureDirtyBitToPfn(v12);
        v17 = a4;
        v21 = v64;
        v15 = a4;
      }
      v25 = *(_QWORD *)(v12 + 16);
      if ( (v25 & 0x400) == 0 && (v25 & 0x4000000) != 0 )
        v22 |= 0x40uLL;
      if ( (v22 & 0x800) == 0 )
      {
LABEL_28:
        if ( *(__int64 *)(v12 + 40) >= 0 )
          goto LABEL_31;
        goto LABEL_29;
      }
      if ( v15 && !(unsigned int)MiOkToSetPteDirtyForNotValidFault(v22, *a1, v17) )
        v17 = 0LL;
      if ( (*(_BYTE *)(v12 + 34) & 0x10) != 0 )
      {
        if ( !v17 )
        {
          if ( *a1 >= 0xFFFF800000000000uLL )
            v22 |= 0x42uLL;
          goto LABEL_28;
        }
      }
      else
      {
        if ( !v17 )
          goto LABEL_28;
        if ( *(__int64 *)(v12 + 40) < 0 )
        {
LABEL_29:
          v26 = v22;
          if ( (unsigned int)MiPteInShadowRange(a2) )
          {
            if ( (unsigned int)MiPteHasShadow(v27, v23, v28) )
            {
              if ( !HIBYTE(word_140C6697C) && (v22 & 1) != 0 )
                v26 = v22 | 0x8000000000000000uLL;
              *(_QWORD *)a2 = v26;
              MiWritePteShadow(a2, v26);
              goto LABEL_31;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v22 & 1) != 0 )
            {
              v26 = v22 | 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)a2 = v26;
LABEL_31:
          _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v29 = 1;
          if ( !v4 )
            goto LABEL_55;
          v67 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v67);
            while ( *(__int64 *)(v4 + 24) < 0 );
          }
          *(_BYTE *)(v4 + 34) &= ~0x20u;
          v30 = *(_WORD *)(v4 + 32);
          if ( !v30 )
            MiBadRefCount(v4, v23, 0xFFFFLL);
          v31 = v30 == 1;
          v32 = v30 - 1;
          *(_WORD *)(v4 + 32) = v32;
          if ( v31 && _bittest64((const signed __int64 *)(v4 + 40), 0x35u) )
            goto LABEL_210;
          v33 = *(_QWORD *)(v4 + 40);
          if ( (v33 & 0x10000000000LL) != 0 || (v33 & 0x20000000000000LL) != 0 )
            goto LABEL_54;
          v34 = *(_QWORD *)(v4 + 24);
          v35 = v34 & 0x3FFFFFFFFFFFFFFFLL;
          v36 = 0;
          if ( v32 )
          {
            if ( v32 == 1 )
            {
              if ( v35 || (*(_BYTE *)(v4 + 34) & 8) != 0 )
                v36 = 1;
              if ( !v36 )
                goto LABEL_54;
            }
            else if ( v32 != 2 || !v35 || (*(_BYTE *)(v4 + 34) & 8) == 0 )
            {
              goto LABEL_54;
            }
            v37 = 0;
          }
          else
          {
            v37 = 1;
          }
          v38 = *(_QWORD *)(v4 + 8) | 0x8000000000000000uLL;
          if ( v38 > 0xFFFFF6BFFFFFFF78uLL || v38 < 0xFFFFF68000000000uLL )
          {
            v39 = *(_BYTE *)(v4 + 35);
            if ( (v39 & 0x20) != 0 )
            {
              *(_BYTE *)(v4 + 35) = v39 & 0xDF;
LABEL_53:
              if ( !v37 )
              {
LABEL_54:
                _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_55:
                if ( v21 )
                  MiReleasePageFileInfo(v70, v21, 1);
                v45 = ListEntry;
                if ( ListEntry )
                {
                  if ( SLODWORD(ListEntry[11].Next) > 1 )
                    KeSetEvent((PRKEVENT)(&ListEntry[3].Next + 1), 0, 0);
                  MiFreeInPageSupportBlock(v45);
                }
                if ( *(__int64 *)(v12 + 40) < 0 )
                {
                  result = MiCompleteProtoPteFault(a1, v22, a4, 0, v65);
                  if ( (int)result < 0 )
                    return result;
                  return 272LL;
                }
                if ( v71 )
                {
                  v52 = (_BYTE *)(v65 & 0xFFFFFFFFFFFFFFFEuLL);
                  if ( *(_BYTE *)(v65 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
                  {
                    if ( (unsigned int)MiPteInShadowRange(a2) )
                    {
                      if ( (unsigned int)MiPteHasShadow(v54, v53, v55) )
                      {
                        if ( !HIBYTE(word_140C6697C) && (v22 & 1) != 0 )
                          v22 |= 0x8000000000000000uLL;
                        *(_QWORD *)a2 = v22;
                        MiWritePteShadow(a2, v22);
                        return 272LL;
                      }
                      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                        && (v22 & 1) != 0 )
                      {
                        v22 |= 0x8000000000000000uLL;
                      }
                    }
                    *(_QWORD *)a2 = v22;
                    return 272LL;
                  }
                  v49 = 0LL;
                  if ( *v52 != 3 )
                  {
                    v29 = 0;
                    if ( *v52 == 5 )
                      v49 = v65 & 0xFFFFFFFFFFFFFFFEuLL;
                  }
                }
                else
                {
                  v29 = 0;
                  v49 = 0LL;
                }
                if ( (*((_BYTE *)a1 + 69) & 8) != 0 )
                {
                  v56 = a1[2];
                  if ( (v56 & 1) == 0 || *(_BYTE *)(v56 & 0xFFFFFFFFFFFFFFFEuLL) != 2 )
                    v22 &= ~0x20uLL;
                }
                if ( (unsigned int)MiQueueCoreWorkingSetEntries(a1 + 7, a2, v12) )
                  v29 |= 4u;
                if ( !(unsigned int)MiAllocateWsle(v72, (unsigned __int64 *)a2, (_QWORD *)v12, 0, v22, v29, v49) )
                {
                  MiLockAndDecrementShareCount(v12, 0);
                  if ( (v29 & 4) != 0 )
                    --*((_WORD *)a1 + 33);
                  return 3221225495LL;
                }
                return 272LL;
              }
LABEL_210:
              MiPfnReferenceCountIsZero(v4, 0xAAAAAAAAAAAAAAABuLL * ((v4 + 0x220000000000LL) >> 4));
              goto LABEL_54;
            }
          }
          v40 = *(_QWORD *)(qword_140C67048 + 8 * (((unsigned __int64)v33 >> 43) & 0x3FF));
          if ( v33 < 0 && (*(_DWORD *)(a3 + 16) & 0x400LL) != 0
            || v38 <= 0xFFFFF6BFFFFFFF78uLL && v38 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(a3 + 35) & 0x20) != 0
            || v37 && (v34 & 0x4000000000000000LL) != 0 )
          {
            MiReturnCommit(*(_QWORD *)(qword_140C67048 + 8 * (((unsigned __int64)v33 >> 43) & 0x3FF)), 1LL);
          }
          v41 = 1LL;
          if ( (_UNKNOWN *)v40 != &MiSystemPartition )
            goto LABEL_146;
          CurrentPrcb = KeGetCurrentPrcb();
          CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
          if ( (_DWORD)CachedResidentAvailable == -1 )
            goto LABEL_146;
          if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
          {
            do
            {
              v44 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                      CachedResidentAvailable + 1,
                      CachedResidentAvailable);
              v31 = (_DWORD)CachedResidentAvailable == v44;
              LODWORD(CachedResidentAvailable) = v44;
              if ( v31 )
                goto LABEL_52;
            }
            while ( v44 != -1 && (unsigned __int64)(v44 + 1LL) <= 0x100 );
          }
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v41 = (int)CachedResidentAvailable - 192 + 1LL;
          }
          if ( v41 )
LABEL_146:
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v40 + 17280), v41);
LABEL_52:
          v4 = a3;
          goto LABEL_53;
        }
        v21 = MiCaptureDirtyBitToPfn(v12);
      }
      v22 |= 0x42uLL;
      goto LABEL_28;
    }
    v12 = MiHandleSpecialPurposeMemoryCachedFault(a1, *a1, a2);
    if ( v12 )
    {
      v10 = MI_READ_PTE_LOCK_FREE(a2);
      v6 = 0LL;
      goto LABEL_10;
    }
    if ( v4 )
    {
      LOBYTE(v61) = 17;
      MiUnlockProtoPoolPage(v4, v61);
    }
    return 3221226548LL;
  }
  MiUpdatePfnPriority(v12, *(_DWORD *)((v8 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 7, 0LL);
  v51 = 0;
LABEL_109:
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v4 )
  {
    LOBYTE(v8) = 17;
    MiUnlockProtoPoolPage(v4, v8);
  }
  return (unsigned int)v51;
}
