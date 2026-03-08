/*
 * XREFs of MiReservePageFileSpaceForPage @ 0x14032ECD0
 * Callers:
 *     MiOutSwapWorkingSetPte @ 0x1402CC600 (MiOutSwapWorkingSetPte.c)
 *     MiReservePageFileSpace @ 0x14032E800 (MiReservePageFileSpace.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14020B300 (MiReleasePageFileInfo.c)
 *     MiUnlinkPageFromListEx @ 0x140264100 (MiUnlinkPageFromListEx.c)
 *     MiInvalidPteConforms @ 0x140287530 (MiInvalidPteConforms.c)
 *     MiIncreaseUsedPtesCount @ 0x14029F850 (MiIncreaseUsedPtesCount.c)
 *     MiPageStandbyLookasideStatus @ 0x1402C7560 (MiPageStandbyLookasideStatus.c)
 *     MiLockTransitionLeafPageEx @ 0x1402DD4C8 (MiLockTransitionLeafPageEx.c)
 *     MiCapturePageFileInfoInline @ 0x1402DE2D4 (MiCapturePageFileInfoInline.c)
 *     MiInsertPageInList @ 0x140318540 (MiInsertPageInList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_IS_RESET_PTE @ 0x14032F190 (MI_IS_RESET_PTE.c)
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 *     MiGetUsedPtesHandle @ 0x140346CA0 (MiGetUsedPtesHandle.c)
 *     MiLockLeafPage @ 0x14034AF20 (MiLockLeafPage.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     MiDiscardTransitionPteEx @ 0x14064E040 (MiDiscardTransitionPteEx.c)
 */

__int64 __fastcall MiReservePageFileSpaceForPage(__int64 a1, unsigned __int64 *a2, char a3, unsigned __int64 *a4)
{
  unsigned int v4; // r15d
  unsigned __int64 v5; // rbx
  int v7; // r12d
  unsigned __int64 v8; // rsi
  BOOL v9; // r13d
  ULONG_PTR v10; // r14
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r8
  char v14; // dl
  unsigned __int64 v15; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  __int16 v23; // r9
  unsigned __int64 v24; // rcx
  __int64 UsedPtesHandle; // rax
  bool v26; // zf
  struct _LIST_ENTRY *Flink; // rax
  __int64 v28; // rax
  __int64 v29; // r8
  ULONG_PTR v30; // rdi
  int v31; // r13d
  int v32; // [rsp+20h] [rbp-48h]
  int v33; // [rsp+24h] [rbp-44h] BYREF
  __int64 v34; // [rsp+28h] [rbp-40h] BYREF
  int v37; // [rsp+80h] [rbp+18h]

  v4 = 0;
  v5 = (unsigned __int64)a2;
  v7 = a3 & 0x80;
  v8 = 0LL;
  v32 = 0;
  v9 = 0;
  v37 = 0;
  if ( (a3 & 0x80) == 0 )
  {
    v10 = MiLockLeafPage(a2, 0LL);
    v9 = v10 != 0;
    v37 = v9;
    goto LABEL_3;
  }
  while ( 1 )
  {
    v10 = 0LL;
LABEL_3:
    v11 = MI_READ_PTE_LOCK_FREE(v5);
    v34 = v11;
    v12 = v11;
    if ( (v11 & 1) != 0 )
    {
      if ( !v7 )
        goto LABEL_15;
      v10 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v34) >> 12) & 0xFFFFFFFFFFLL)
          - 0x220000000000LL;
      if ( (a3 & 1) == 0 )
      {
        v33 = 0;
        v9 = 1;
        v37 = 1;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v33);
          while ( *(__int64 *)(v10 + 24) < 0 );
        }
      }
      if ( *(__int64 *)(v10 + 40) >= 0 )
      {
LABEL_15:
        if ( (*(_BYTE *)v10 & 1) != 0
          && *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL)) == a1
          && (*(_BYTE *)(v10 + 35) & 8) == 0 )
        {
          v13 = v10 + 16;
          v12 = *(_QWORD *)(v10 + 16);
          if ( v10 + 16 >= 0xFFFFF6FB7DBED000uLL
            && v13 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0x600000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v12 & 1) != 0
            && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v28 = *((_QWORD *)&Flink->Flink + ((v13 >> 3) & 0x1FF));
              v29 = v12 | 0x20;
              if ( (v28 & 0x20) == 0 )
                v29 = *(_QWORD *)(v10 + 16);
              v12 = v29;
              if ( (v28 & 0x42) != 0 )
                v12 = v29 | 0x42;
            }
          }
          v34 = v12;
          if ( (v12 & 1) == 0 && (!v12 || !qword_140C657C0 || (qword_140C657C0 & v12) != 0) )
          {
            if ( !(unsigned int)MI_IS_RESET_PTE(v12) || (*(_BYTE *)(v10 + 34) & 0x10) != 0 )
              goto LABEL_17;
            if ( v7 )
            {
              v26 = (v14 & 0x42) == 0;
LABEL_70:
              if ( !v26 )
                goto LABEL_17;
            }
          }
        }
      }
      goto LABEL_21;
    }
    if ( (v11 & 0x400) != 0 )
      goto LABEL_21;
    if ( (v11 & 0x800) == 0 )
    {
      if ( v11 )
      {
        if ( MiInvalidPteConforms(v11) && ((v12 >> 5) & 0xF) != 0 )
          goto LABEL_18;
      }
      else if ( (a3 & 2) != 0 )
      {
        v12 = MiSwizzleInvalidPte(8LL * (a3 & 0x7C));
        v34 = v12;
        v32 = 1;
        goto LABEL_18;
      }
      goto LABEL_21;
    }
    if ( !v7 )
      goto LABEL_64;
    v5 = (unsigned __int64)a2;
    v17 = MiLockTransitionLeafPageEx((ULONG_PTR)a2, 0LL, 0);
    v10 = v17;
    if ( v17 )
      break;
    v9 = 0;
    v37 = 0;
  }
  v9 = 1;
  v37 = 1;
  if ( *(__int64 *)(v17 + 40) < 0 )
    goto LABEL_28;
LABEL_64:
  if ( *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL)) == a1 )
  {
    v34 = MI_READ_PTE_LOCK_FREE(v10 + 16);
    v12 = v34;
    if ( (unsigned int)MI_IS_RESET_PTE(v34) )
    {
      v26 = (*(_BYTE *)(v10 + 34) & 0x10) == 0;
      goto LABEL_70;
    }
LABEL_17:
    v15 = 0xFFFFDE0000000000uLL;
LABEL_18:
    if ( (v12 & 2) == 0 )
    {
      if ( v10 && (*(_BYTE *)(v10 + 34) & 0x28) != 0 )
        goto LABEL_21;
      if ( (v12 & 4) != 0 )
      {
        if ( !v10 )
          goto LABEL_21;
        if ( (a3 & 1) == 0 )
        {
          if ( !*(_WORD *)(v10 + 32) )
          {
            v30 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v10 - v15) >> 4);
            v31 = MiPageStandbyLookasideStatus(v30);
            if ( (MiUnlinkPageFromListEx(v10, 0LL) & 3) != 0 )
            {
              MiDiscardTransitionPteEx(v10, 0LL);
              v9 = v37;
              goto LABEL_21;
            }
            if ( !v31 && (unsigned int)MiPageStandbyLookasideStatus(v30) )
            {
              if ( (v12 & 0x400) != 0 )
                v12 &= ~8uLL;
              else
                v12 &= ~0x8000000uLL;
              v34 = v12;
            }
            v9 = v37;
            v4 = 1;
          }
          v8 = MiCapturePageFileInfoInline((unsigned __int64 *)(v10 + 16), 1, 0);
          *(_BYTE *)(v10 + 34) |= 0x10u;
LABEL_39:
          v18 = *a4;
          if ( qword_140C657C0 && (v18 & 0x10) == 0 )
            v18 &= ~qword_140C657C0;
          v19 = HIDWORD(v18);
          if ( (v12 & 0x400) != 0 )
            v20 = v12 & 0xFFFFFFFFFFFFF7FFuLL;
          else
            v20 = v12 & 0xFFFFFFFFFFFFFFF1uLL;
          if ( *(_QWORD *)(a1 + 8LL * ((unsigned __int8)HIBYTE(*(_WORD *)a4) >> 4) + 17056) )
          {
            if ( v20 )
            {
              if ( qword_140C657C0 )
              {
                if ( (v20 & 0x10) != 0 )
                  LODWORD(v20) = v20 & 0xFFFFFFEF;
                else
                  LODWORD(v20) = ~(_DWORD)qword_140C657C0 & v20;
              }
              v21 = (unsigned int)v20 | (v19 << 32);
            }
            else
            {
              v21 = v19 << 32;
            }
            v22 = MiSwizzleInvalidPte(v21);
            v20 = (unsigned __int16)(v22 ^ (v23 << 12)) & 0xF000 ^ (unsigned __int64)v22 | 2;
          }
          if ( v10 )
          {
            if ( !*(_WORD *)(v10 + 32) && (*(_BYTE *)(v10 + 34) & 0x10) != 0 && !v4 )
            {
              MiUnlinkPageFromListEx(v10, 0LL);
              v4 = 1;
            }
            *(_QWORD *)(v10 + 16) = v20;
            if ( v4 )
              MiInsertPageInList(v10, 8u);
            v24 = (unsigned __int64)a2;
          }
          else
          {
            v24 = (unsigned __int64)a2;
            *a2 = v20;
          }
          if ( v32 && v24 <= 0xFFFFF6BFFFFFFF78uLL && v24 >= 0xFFFFF68000000000uLL )
          {
            UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v24 << 25) >> 16);
            MiIncreaseUsedPtesCount(UsedPtesHandle, 1u);
          }
        }
      }
      else if ( (a3 & 1) == 0 )
      {
        goto LABEL_39;
      }
      v4 = 1;
      goto LABEL_21;
    }
    if ( (a3 & 1) != 0 )
      *a4 = v12;
  }
LABEL_21:
  if ( !v9 )
    goto LABEL_22;
LABEL_28:
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_22:
  if ( v8 )
    MiReleasePageFileInfo(a1, v8, 1);
  return v4;
}
