/*
 * XREFs of MiProbeLeafPteAccess @ 0x140269620
 * Callers:
 *     MiProbeAndLockPacket @ 0x140268C30 (MiProbeAndLockPacket.c)
 *     MiProbeLeafFrame @ 0x1403CFA14 (MiProbeLeafFrame.c)
 * Callees:
 *     MmAccessFault @ 0x140267D40 (MmAccessFault.c)
 *     MiLocateCloneAddress @ 0x1402CF530 (MiLocateCloneAddress.c)
 *     MiIsDriverPage @ 0x1402D38C0 (MiIsDriverPage.c)
 *     MiOkToSetPteDirtyForNotValidFault @ 0x1402D7118 (MiOkToSetPteDirtyForNotValidFault.c)
 *     MiLockProbePacketWorkingSet @ 0x1402E0344 (MiLockProbePacketWorkingSet.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1402E038C (MiUnlockProbePacketWorkingSet.c)
 *     MiProcessCommitIntact @ 0x1402FDBAC (MiProcessCommitIntact.c)
 *     MiCopyOnWrite @ 0x140319F00 (MiCopyOnWrite.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x14035094C (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiClearPfnImageVerified @ 0x14036ABC0 (MiClearPfnImageVerified.c)
 *     MiCanPageMove @ 0x1403B7F24 (MiCanPageMove.c)
 *     MiSplitReducedCommitClonePage @ 0x14061A624 (MiSplitReducedCommitClonePage.c)
 *     MiCopyOnWriteCheckConditions @ 0x140664840 (MiCopyOnWriteCheckConditions.c)
 *     MiSplitDriverPage @ 0x140A289BC (MiSplitDriverPage.c)
 */

__int64 __fastcall MiProbeLeafPteAccess(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rbx
  int v3; // esi
  ULONG_PTR v5; // r13
  int v6; // ebp
  int v7; // r15d
  unsigned __int64 v8; // rax
  __int64 v9; // r11
  __int64 v10; // r10
  unsigned __int64 v11; // rcx
  _QWORD *v12; // r8
  ULONG_PTR v13; // rdi
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  int v16; // ecx
  int v17; // eax
  unsigned __int64 v18; // r8
  int v19; // r12d
  char v20; // al
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 result; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // ebx
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  char v31; // cl
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 IsDriverPage; // rbp
  int v35; // ebx
  int v37; // ebx
  __int64 CloneAddress; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // [rsp+60h] [rbp+8h] BYREF
  _DWORD *v43; // [rsp+68h] [rbp+10h]
  int v44; // [rsp+70h] [rbp+18h] BYREF

  v43 = a2;
  v2 = *(_QWORD *)(a1 + 48);
  v3 = 0;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_DWORD *)(a1 + 72) & 0xF;
  v7 = *(_DWORD *)(a1 + 96);
  *a2 = 0;
  v42 = v2;
  if ( (v2 & 4) == 0 && v6 == 1 )
  {
    ++dword_140C67B80;
    return 3221225477LL;
  }
  v8 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v42) >> 12) & 0xFFFFFFFFFFLL;
  v9 = 0x3FFFFFFFFFFFFFFFLL;
  v10 = 0x10000000000LL;
  if ( v8 <= qword_140C65820 && (v11 = 48 * v8, _bittest64((const signed __int64 *)(48 * v8 - 0x21FFFFFFFFD8LL), 0x36u)) )
  {
    v12 = (_QWORD *)qword_140C69508;
    v13 = v11 - 0x220000000000LL;
    if ( qword_140C69508 )
    {
      if ( ((*(_QWORD *)(v13 + 40) >> 60) & 7) == 1 )
      {
        v29 = v11 / 0x30;
        if ( qword_140C69508 )
        {
          do
          {
            v30 = v12[3];
            if ( v29 >= v30 )
            {
              if ( v29 - v30 < v12[4] )
              {
                ++dword_140C67BAC;
                return 3221225477LL;
              }
              v12 = (_QWORD *)v12[1];
            }
            else
            {
              v12 = (_QWORD *)*v12;
            }
          }
          while ( v12 );
        }
      }
    }
    v14 = *(_QWORD *)(v13 + 40);
    if ( v14 >= 0 )
    {
      if ( (v14 & 0x10000000000LL) != 0 )
      {
        LODWORD(v42) = 0;
        v44 = 0;
        if ( (unsigned int)MiGetPfnPageSizeIndexUnsynchronized(v13, &v42, &v44) == 3 || (_DWORD)v42 != 6 )
        {
LABEL_83:
          ++dword_140C67BA8;
          return 3221225477LL;
        }
        v10 = 0x10000000000LL;
        v9 = 0x3FFFFFFFFFFFFFFFLL;
      }
      else
      {
        v15 = (__int64)(*(_QWORD *)(v13 + 8) << 25) >> 16;
        if ( v15 >= 0xFFFFF68000000000uLL && v15 <= 0xFFFFF6FFFFFFFFFFuLL && (v14 & 0xFFFFFFFFFFLL) != 0x3FFFFFFFFELL )
        {
          v31 = *(_BYTE *)(v13 + 34);
          if ( ((v31 & 0x20) == 0 || (*(_QWORD *)(v13 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 || !*(_WORD *)(v13 + 32))
            && (v31 & 8) == 0
            && ((*(_QWORD *)v13 >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL) != 0xFFFF800000000030uLL )
          {
            goto LABEL_83;
          }
        }
      }
    }
  }
  else
  {
    v13 = 0LL;
  }
  v16 = 0;
  if ( v5 >= 0xFFFF800000000000uLL )
    v17 = byte_140C6A058[((v5 >> 39) & 0x1FF) - 256];
  else
    v17 = 0;
  if ( v6 == 6 && v17 == 12 )
    v16 = 1;
  v18 = 0x8000000000000000uLL;
  if ( v7 == 3 )
  {
    if ( v5 > 0x7FFFFFFEFFFFLL )
      return 3221225477LL;
    if ( (v2 & 0x8000000000000000uLL) == 0 )
    {
      v19 = 0;
      goto LABEL_13;
    }
    if ( (v2 & 0x800) != 0 )
      return 3221225496LL;
  }
  v19 = 0;
  if ( v7 )
  {
LABEL_13:
    if ( (v2 & 0x800) == 0 )
    {
      if ( v7 != 3 && (v6 != 6 || !v16) )
      {
        *v43 = 2;
        return 0LL;
      }
      if ( v13 )
      {
        v25 = *(_QWORD *)(v13 + 40);
        if ( v25 >= 0 )
        {
          if ( (MiFlags & 0x4000) != 0 && (((unsigned __int64)v25 >> 60) & 7) == 3 )
            MiClearPfnImageVerified(v13);
          return 0LL;
        }
      }
      goto LABEL_41;
    }
    if ( (v2 & 0x42) == 0 && v6 == 1 && !(unsigned int)MiOkToSetPteDirtyForNotValidFault(v2, v5, 0x8000000000000000uLL) )
    {
      MiUnlockProbePacketWorkingSet(a1);
      v37 = MmAccessFault(2uLL, v5, 0, 0LL);
      MiLockProbePacketWorkingSet(a1);
      if ( v37 < 0 )
      {
        ++dword_140C67B78;
        return (unsigned int)v37;
      }
      goto LABEL_51;
    }
    goto LABEL_15;
  }
  if ( v16 )
  {
    if ( !v13 )
      return 0LL;
    if ( *(__int64 *)(v13 + 40) < 0 && ((unsigned int)MiCanPageMove(v13) || (v32 & 0x20000000000000LL) != 0) )
    {
      v33 = *(_QWORD *)(v13 + 16);
      if ( (v33 & 0x400) == 0 )
        goto LABEL_95;
      if ( qword_140C657C0 && (v33 & 0x10) == 0 )
        v33 &= ~qword_140C657C0;
      if ( (*(_DWORD *)(*(_QWORD *)(v33 >> 16) + 56LL) & 0x20) != 0 )
      {
LABEL_95:
        IsDriverPage = MiIsDriverPage(*(_QWORD *)(a1 + 24), 0LL);
        if ( IsDriverPage )
        {
          MiUnlockProbePacketWorkingSet(a1);
          v35 = MiSplitDriverPage(IsDriverPage, *(_QWORD *)(a1 + 24));
          MiLockProbePacketWorkingSet(a1);
          if ( v35 < 0 )
          {
            ++dword_140C67BA4;
            return (unsigned int)v35;
          }
          goto LABEL_51;
        }
        v10 = 0x10000000000LL;
        v9 = 0x3FFFFFFFFFFFFFFFLL;
      }
    }
    v18 = 0x8000000000000000uLL;
    goto LABEL_16;
  }
LABEL_15:
  if ( !v13 )
    return 0LL;
LABEL_16:
  v20 = *(_BYTE *)(v13 + 34);
  if ( (v20 & 0x20) != 0 && (v20 & 8) == 0 && (v9 & *(_QWORD *)(v13 + 24)) == 0 )
    return 0LL;
  v21 = *(_QWORD *)(v13 + 40);
  if ( (((unsigned __int64)v21 >> 60) & 7) != 1 && (v21 & v10) == 0 )
  {
    v22 = *(_QWORD *)(v13 + 8);
    if ( v22 >= 0 )
    {
      if ( v22 )
        goto LABEL_41;
    }
  }
  if ( v7 || v21 >= 0 )
    return 0LL;
  v24 = *(_QWORD *)(a1 + 88);
  if ( v24 )
  {
    if ( (*(_DWORD *)(a1 + 72) & 0x10) != 0 )
    {
      CloneAddress = MiLocateCloneAddress(v24, v18 | *(_QWORD *)(v13 + 8));
      if ( CloneAddress )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v39 + 1680) + 344LL) > *(_QWORD *)(CloneAddress + 96) )
          goto LABEL_115;
        v19 = 1;
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 72) & 0x40) == 0 )
  {
    if ( v19 )
      goto LABEL_41;
    return 0LL;
  }
  if ( !v19 )
  {
    if ( (v2 & 0x200) == 0 )
      return 0LL;
    goto LABEL_50;
  }
LABEL_41:
  if ( v7 == 3 )
  {
    if ( (v2 & v18) != 0 )
      return 3221225541LL;
    v26 = *(_QWORD *)(a1 + 88);
    if ( v26 )
    {
      if ( (*(_DWORD *)(a1 + 72) & 0x10) != 0 )
      {
        v40 = MiLocateCloneAddress(v26, v18 | *(_QWORD *)(v13 + 8));
        if ( v40 )
        {
          if ( *(_QWORD *)(*(_QWORD *)(v41 + 1680) + 344LL) > *(_QWORD *)(v40 + 96) )
          {
LABEL_115:
            result = MiSplitReducedCommitClonePage(a1);
            if ( (int)result < 0 )
            {
              ++dword_140C67BA0;
              return result;
            }
LABEL_51:
            *v43 = 1;
            return 0LL;
          }
          goto LABEL_50;
        }
      }
    }
    if ( (v2 & 0x200) == 0 )
    {
      if ( (v10 & *(_QWORD *)(v13 + 40)) != 0 || (v27 = *(_QWORD *)(v13 + 8), v27 < 0) || !v27 )
      {
        if ( (unsigned int)MiProcessCommitIntact(v5) )
        {
          ++*(_QWORD *)(a1 + 112);
          v3 = 1;
          goto LABEL_50;
        }
        return 3221225477LL;
      }
    }
  }
LABEL_50:
  v28 = MiCopyOnWrite(v5);
  if ( v28 >= 0 )
    goto LABEL_51;
  if ( v3 )
    --*(_QWORD *)(a1 + 112);
  if ( *(_BYTE *)(a1 + 76) != 2
    && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0
    && (*(_DWORD *)(*(_QWORD *)(a1 + 80) + 1380LL) & 0xC) == 0 )
  {
    MiUnlockProbePacketWorkingSet(a1);
    MiCopyOnWriteCheckConditions(*(_QWORD *)(a1 + 104), (unsigned int)v28);
    MiLockProbePacketWorkingSet(a1);
    goto LABEL_51;
  }
  ++dword_140C67BA4;
  return 3221225495LL;
}
