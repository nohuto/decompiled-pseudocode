/*
 * XREFs of MiProbeLeafPteAccess @ 0x14020B6B0
 * Callers:
 *     MiProbeAndLockPages @ 0x14020A820 (MiProbeAndLockPages.c)
 *     MiProbeLeafFrame @ 0x14027DEC0 (MiProbeLeafFrame.c)
 * Callees:
 *     MiProcessCommitIntact @ 0x140201780 (MiProcessCommitIntact.c)
 *     MmAccessFault @ 0x14020D050 (MmAccessFault.c)
 *     MiIsPfnFileOnly @ 0x140218D20 (MiIsPfnFileOnly.c)
 *     MiLocateCloneAddress @ 0x14023E878 (MiLocateCloneAddress.c)
 *     MiCopyOnWrite @ 0x14023EC70 (MiCopyOnWrite.c)
 *     MiIsDriverPage @ 0x14029CD50 (MiIsDriverPage.c)
 *     MiClearPfnImageVerified @ 0x1402FBA64 (MiClearPfnImageVerified.c)
 *     MiOkToSetPteDirtyForNotValidFault @ 0x140303DF4 (MiOkToSetPteDirtyForNotValidFault.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiLockProbePacketWorkingSet @ 0x14030F1D8 (MiLockProbePacketWorkingSet.c)
 *     MiUnlockProbePacketWorkingSet @ 0x14030F220 (MiUnlockProbePacketWorkingSet.c)
 *     MiCanPageMove @ 0x1403349A0 (MiCanPageMove.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1403F6188 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiSplitReducedCommitClonePage @ 0x140530CD4 (MiSplitReducedCommitClonePage.c)
 *     MiCopyOnWriteCheckConditions @ 0x14055BE38 (MiCopyOnWriteCheckConditions.c)
 *     MiSplitDriverPage @ 0x1408C4DF4 (MiSplitDriverPage.c)
 */

__int64 __fastcall MiProbeLeafPteAccess(__int64 a1, _DWORD *a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  int v4; // r15d
  _DWORD *v5; // r9
  ULONG_PTR v6; // r12
  int v7; // r14d
  int v8; // r13d
  __int64 result; // rax
  unsigned __int64 v11; // rdx
  struct _LIST_ENTRY *Flink; // r8
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r11
  _QWORD *v15; // rcx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r10
  __int64 v21; // rdx
  int v22; // ecx
  int v23; // eax
  unsigned __int64 v24; // rcx
  char v25; // cl
  unsigned __int64 v26; // r8
  int CanPageMove; // eax
  int v28; // r10d
  int IsPfnFileOnly; // eax
  int v30; // r10d
  __int64 v31; // rax
  __int64 IsDriverPage; // r14
  int v33; // ebx
  __int64 v34; // rcx
  int v35; // ebx
  char v36; // al
  unsigned __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 CloneAddress; // rax
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rcx
  int v45; // r10d
  int v46; // ebx
  int v47; // [rsp+60h] [rbp+8h] BYREF
  _DWORD *v48; // [rsp+68h] [rbp+10h]
  int v49; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v50; // [rsp+78h] [rbp+20h] BYREF

  v48 = a2;
  v3 = *(_QWORD *)(a1 + 40);
  v4 = 0;
  v5 = a2;
  v6 = *(_QWORD *)a1;
  v7 = *(_DWORD *)(a1 + 64) & 0xF;
  v8 = *(_DWORD *)(a1 + 88);
  *a2 = 0;
  v50 = v3;
  if ( (v3 & 4) == 0 && v7 == 1 )
  {
    ++dword_140C4E788;
    return 3221225477LL;
  }
  if ( (unsigned __int64)&v50 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)&v50 > 0xFFFFF6FB7DBED7F8uLL )
  {
    v11 = v3;
  }
  else if ( (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v3, a3, a2)
         && (v11 & 1) != 0
         && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v11 |= 0x20uLL;
      if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v50 >> 3) & 0x1FF)) & 0x20) == 0 )
        v11 = v3;
    }
    v3 = v50;
  }
  v13 = 48 * ((v11 >> 12) & 0xFFFFFFFFFLL);
  v14 = 0xFFFF800000000000uLL;
  if ( ((*(_QWORD *)(v13 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 )
  {
    v15 = (_QWORD *)qword_140C4EE80;
    v16 = v13 - 0x58000000000LL;
    if ( qword_140C4EE80 )
    {
      if ( ((*(_QWORD *)(v16 + 40) >> 60) & 7) == 1 )
      {
        v17 = v13 / 0x30;
        if ( qword_140C4EE80 )
        {
          do
          {
            v18 = v15[3];
            if ( v17 < v18 )
            {
              v15 = (_QWORD *)*v15;
            }
            else
            {
              if ( v17 - v18 < v15[4] )
              {
                ++dword_140C4E7B8;
                return 3221225477LL;
              }
              v15 = (_QWORD *)v15[1];
            }
          }
          while ( v15 );
        }
      }
    }
    if ( !(unsigned int)MI_PFN_IS_PROTO(v16) )
    {
      v21 = *(_QWORD *)(v16 + 40);
      if ( (v21 & 0x1000000000LL) != 0 )
      {
        v47 = 0;
        v49 = 0;
        if ( (unsigned int)MiGetPfnPageSizeIndexUnsynchronized(v19, &v47, &v49) != 3 && v47 == 6 )
        {
          v5 = v48;
          v14 = 0xFFFF800000000000uLL;
          goto LABEL_29;
        }
LABEL_40:
        ++dword_140C4E7B4;
        return 3221225477LL;
      }
      v24 = (__int64)(*(_QWORD *)(v16 + 8) << 25) >> 16;
      if ( v24 >= 0xFFFFF68000000000uLL && v24 <= 0xFFFFF6FFFFFFFFFFuLL && (v20 & v21) != 0xFFFFFFFFDLL )
      {
        v25 = *(_BYTE *)(v16 + 34);
        if ( ((v25 & 0x20) == 0 || (*(_QWORD *)(v16 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 || !*(_WORD *)(v16 + 32))
          && (v25 & 8) == 0
          && (v14 | (*(_QWORD *)v16 >> 13) & 0xFFFFFFFFFFFFFFF0uLL) != 0xFFFF800000000030uLL )
        {
          goto LABEL_40;
        }
      }
    }
  }
  else
  {
    v16 = 0LL;
  }
LABEL_29:
  v22 = 0;
  if ( v6 >= v14 )
    v23 = (unsigned __int8)byte_140C4F9C8[((v6 >> 39) & 0x1FF) - 256];
  else
    v23 = 0;
  if ( v7 == 6 && v23 == 12 )
    v22 = 1;
  v26 = 0x8000000000000000uLL;
  if ( v8 == 3 )
  {
    if ( v6 > 0x7FFFFFFEFFFFLL )
      return 3221225477LL;
    if ( (v3 & 0x8000000000000000uLL) != 0 )
    {
      if ( (v3 & 0x800) != 0 )
        return 3221225496LL;
      goto LABEL_67;
    }
  }
  else if ( !v8 )
  {
    if ( v22 )
    {
      if ( !v16 )
        return 0LL;
      if ( (unsigned int)MI_PFN_IS_PROTO(v16) )
      {
        CanPageMove = MiCanPageMove();
        if ( CanPageMove == v28 || (IsPfnFileOnly = MiIsPfnFileOnly(v16), IsPfnFileOnly == v30) )
        {
          v31 = *(_QWORD *)(v16 + 16);
          if ( (v31 & 0x400) == 0 )
            goto LABEL_63;
          if ( qword_140C4DF40 && (v31 & 0x10) == 0 )
            v31 &= ~qword_140C4DF40;
          if ( (*(_DWORD *)(*(_QWORD *)(v31 >> 16) + 56LL) & 0x20) != 0 )
          {
LABEL_63:
            IsDriverPage = MiIsDriverPage(*(_QWORD *)(a1 + 16));
            if ( IsDriverPage )
            {
              MiUnlockProbePacketWorkingSet(a1);
              v33 = MiSplitDriverPage(IsDriverPage, *(_QWORD *)(a1 + 16));
              MiLockProbePacketWorkingSet(a1);
              if ( v33 < 0 )
              {
                ++dword_140C4E7B0;
                return (unsigned int)v33;
              }
              goto LABEL_116;
            }
            v26 = 0x8000000000000000uLL;
          }
        }
      }
    }
    goto LABEL_83;
  }
  if ( (v3 & 0x800) == 0 )
  {
LABEL_67:
    if ( v8 != 3 && (v7 != 6 || !v22) )
    {
      *v5 = 2;
      return 0LL;
    }
    if ( v16 && !(unsigned int)MI_PFN_IS_PROTO(v16) )
    {
      if ( (MiFlags & 0x8000) != 0 && ((*(_QWORD *)(v16 + 40) >> 60) & 7) == 3 )
        MiClearPfnImageVerified(v34, 8LL);
      return 0LL;
    }
    goto LABEL_96;
  }
  if ( (v3 & 0x42) == 0
    && v7 == 1
    && ((*(_DWORD *)(*(_QWORD *)(a1 + 80) + 1124LL) & 0x8000) != 0
     || !(unsigned int)MiOkToSetPteDirtyForNotValidFault(v3, v6, 0x8000000000000000uLL, v5)) )
  {
    MiUnlockProbePacketWorkingSet(a1);
    v35 = MmAccessFault(2uLL, v6);
    MiLockProbePacketWorkingSet(a1);
    if ( v35 < 0 )
    {
      ++dword_140C4E780;
      return (unsigned int)v35;
    }
    goto LABEL_116;
  }
LABEL_83:
  if ( !v16 )
    return 0LL;
  v36 = *(_BYTE *)(v16 + 34);
  if ( (v36 & 0x20) != 0 && (v36 & 8) == 0 && (*(_QWORD *)(v16 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
    return 0LL;
  v37 = *(_QWORD *)(v16 + 40);
  if ( ((v37 >> 60) & 7) == 1 || (v37 & 0x1000000000LL) != 0 || *(__int64 *)(v16 + 8) <= 0 )
  {
    if ( v8 )
      return 0LL;
    if ( !(unsigned int)MI_PFN_IS_PROTO(v16) )
      return 0LL;
    v39 = *(_QWORD *)(a1 + 80);
    if ( !v39 )
      return 0LL;
    if ( (*(_DWORD *)(a1 + 64) & 0x10) == 0 )
      return 0LL;
    CloneAddress = MiLocateCloneAddress(v39, v38 | *(_QWORD *)(v16 + 8));
    if ( !CloneAddress )
      return 0LL;
    if ( *(_QWORD *)(*(_QWORD *)(v41 + 1680) + 360LL) > *(_QWORD *)(CloneAddress + 96) )
      goto LABEL_103;
  }
LABEL_96:
  if ( v8 != 3 )
    goto LABEL_110;
  if ( (v3 & v26) != 0 )
    return 3221225541LL;
  v42 = *(_QWORD *)(a1 + 80);
  if ( !v42 || (*(_DWORD *)(a1 + 64) & 0x10) == 0 || (v43 = MiLocateCloneAddress(v42, v26 | *(_QWORD *)(v16 + 8))) == 0 )
  {
    if ( (v3 & 0x200) != 0 || (*(_QWORD *)(v16 + 40) & 0x1000000000LL) == 0 && *(__int64 *)(v16 + 8) > 0 )
      goto LABEL_110;
    if ( MiProcessCommitIntact(v6) )
    {
      ++*(_QWORD *)(a1 + 104);
      v4 = v45;
      goto LABEL_110;
    }
    return 3221225477LL;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v44 + 1680) + 360LL) > *(_QWORD *)(v43 + 96) )
  {
LABEL_103:
    result = MiSplitReducedCommitClonePage(a1);
    if ( (int)result < 0 )
    {
      ++dword_140C4E7AC;
      return result;
    }
    goto LABEL_116;
  }
LABEL_110:
  v46 = MiCopyOnWrite(v6, *(_QWORD *)(a1 + 16), -1LL);
  if ( v46 >= 0 )
  {
LABEL_116:
    *v48 = 1;
    return 0LL;
  }
  if ( v4 )
    --*(_QWORD *)(a1 + 104);
  if ( *(_BYTE *)(a1 + 68) != 2 && (*(_DWORD *)(*(_QWORD *)(a1 + 72) + 1300LL) & 0xC) == 0 )
  {
    MiUnlockProbePacketWorkingSet(a1);
    MiCopyOnWriteCheckConditions(*(_QWORD *)(a1 + 96), (unsigned int)v46);
    MiLockProbePacketWorkingSet(a1);
    goto LABEL_116;
  }
  ++dword_140C4E7B0;
  return 3221225495LL;
}
