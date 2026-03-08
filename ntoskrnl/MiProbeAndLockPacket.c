/*
 * XREFs of MiProbeAndLockPacket @ 0x140268C30
 * Callers:
 *     MiProbeAndLockPages @ 0x140242114 (MiProbeAndLockPages.c)
 *     MmProbeAndLockPages @ 0x140267B90 (MmProbeAndLockPages.c)
 *     MmLockPhysicalPagesByVa @ 0x140A2AA04 (MmLockPhysicalPagesByVa.c)
 * Callees:
 *     MiProbeLockFrame @ 0x140268ED0 (MiProbeLockFrame.c)
 *     MiLockPageLeafPageTable @ 0x140269310 (MiLockPageLeafPageTable.c)
 *     MiProbeLeafPteAccess @ 0x140269620 (MiProbeLeafPteAccess.c)
 *     MiSetProbePagesAhead @ 0x1402699A0 (MiSetProbePagesAhead.c)
 *     MiFaultInProbeAddress @ 0x1402E021C (MiFaultInProbeAddress.c)
 *     MiLockProbePacketWorkingSet @ 0x1402E0344 (MiLockProbePacketWorkingSet.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1402E038C (MiUnlockProbePacketWorkingSet.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiProbePacketContended @ 0x140347478 (MiProbePacketContended.c)
 */

__int64 __fastcall MiProbeAndLockPacket(__int64 a1)
{
  int v1; // ebp
  unsigned int v2; // esi
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rax
  __int64 v7; // r14
  unsigned __int64 v8; // r8
  __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  __int64 result; // rax
  __int64 i; // rcx
  int v13; // ecx
  __int64 v14; // rdx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v16; // rax
  __int64 v17; // r8
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r15
  __int64 *v21; // r14
  unsigned __int64 v22; // rax
  __int64 v23; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  v2 = 0;
  while ( 1 )
  {
    v4 = 0xFFFFF6FB7DBED7F8uLL;
    if ( (*(_DWORD *)(a1 + 72) & 0x40) == 0 )
      **(_QWORD **)(a1 + 56) = -1LL;
    v5 = 1LL;
    if ( (*(_DWORD *)(a1 + 72) & 0x20) == 0 )
      break;
    v6 = *(_QWORD *)(a1 + 8);
    if ( v6 < *(_QWORD *)(a1 + 152) || v6 > *(_QWORD *)(a1 + 160) )
      break;
    if ( (v1 & 0x3F) != 0 || !v1 || !(unsigned int)MiProbePacketContended(a1, 0xFFFFF6FB7DBED7F8uLL) )
    {
      v7 = *(_QWORD *)(a1 + 168);
      if ( v7 == -1 )
      {
        v8 = *(_QWORD *)(a1 + 24);
        v9 = *(_QWORD *)v8;
        if ( v8 >= 0xFFFFF6FB7DBED000uLL
          && v8 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0x600000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v9 & 1) != 0
          && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v16 = *((_QWORD *)&Flink->Flink + ((v8 >> 3) & 0x1FF));
            v17 = v9 | 0x20;
            if ( (v16 & 0x20) == 0 )
              v17 = v9;
            v9 = v17;
            if ( (v16 & 0x42) != 0 )
              v9 = v17 | 0x42;
          }
        }
        v23 = v9;
        v10 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v23) >> 12) & 0xFFFFFFFFFFLL;
      }
      else
      {
        v10 = v7 + ((*(_QWORD *)(a1 + 8) - *(_QWORD *)(a1 + 152)) >> 12);
      }
      *(_QWORD *)(a1 + 136) = v10;
      if ( v10 > qword_140C65820 || !_bittest64((const signed __int64 *)(48 * v10 - 0x21FFFFFFFFD8LL), 0x36u) )
      {
        v18 = *(_QWORD *)(a1 + 160) + 1LL;
        if ( *(_QWORD *)(a1 + 16) <= v18 )
          v18 = *(_QWORD *)(a1 + 16);
        v19 = (v18 - (*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFF000uLL)) >> 12;
        if ( v19 > 1 )
        {
          v20 = 512 - (v10 & 0x1FF);
          if ( v19 <= v20 )
            v20 = v19;
          if ( v7 == -1 )
          {
            v21 = (__int64 *)(*(_QWORD *)(a1 + 24) + 8LL);
            if ( v20 > 1 )
            {
              do
              {
                v23 = *v21;
                v22 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v23) >> 12) & 0xFFFFFFFFFFLL;
                if ( v22 != v10 + 1 )
                  break;
                ++v21;
                ++v5;
                v10 = v22;
              }
              while ( v5 < v20 );
            }
          }
          else
          {
            v5 = v20;
          }
        }
      }
LABEL_13:
      result = MiProbeLockFrame(a1, v5);
      v2 = result;
      if ( (int)result < 0 )
        return result;
      *(_QWORD *)(a1 + 8) += v5 << 12;
      *(_QWORD *)(a1 + 24) += 8 * v5;
      if ( (*(_DWORD *)(a1 + 72) & 0x40) == 0 )
      {
        for ( i = *(_QWORD *)(a1 + 136); v5; --v5 )
        {
          **(_QWORD **)(a1 + 56) = i++;
          *(_QWORD *)(a1 + 56) += 8LL;
        }
      }
      goto LABEL_17;
    }
LABEL_33:
    MiUnlockProbePacketWorkingSet(a1);
    MiLockProbePacketWorkingSet(a1);
LABEL_17:
    ++v1;
    if ( *(_QWORD *)(a1 + 24) > *(_QWORD *)(a1 + 32) )
      return v2;
  }
  if ( (v1 & 0xF) == 0 && v1 && (unsigned int)MiProbePacketContended(a1, 0xFFFFF6FB7DBED7F8uLL) )
    goto LABEL_33;
  LODWORD(v23) = 0;
  v13 = MiLockPageLeafPageTable(a1, v4);
  if ( *(_QWORD *)(a1 + 48) == ZeroPte )
  {
LABEL_30:
    if ( v13 < 0 )
      return (unsigned int)v13;
    goto LABEL_13;
  }
  while ( 1 )
  {
    result = MiProbeLeafPteAccess(a1, &v23);
    if ( (int)result < 0 )
      return result;
    if ( !(_DWORD)v23 )
    {
      *(_QWORD *)(a1 + 136) = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(a1 + 48) >> 12) & 0xFFFFFFFFFFLL;
      MiSetProbePagesAhead(a1);
      goto LABEL_13;
    }
    if ( (_DWORD)v23 != 1 )
    {
      result = MiFaultInProbeAddress(a1);
      if ( (int)result < 0 )
      {
        ++dword_140C67B74;
        return result;
      }
    }
    v13 = MiLockPageLeafPageTable(a1, v14);
    if ( *(_QWORD *)(a1 + 48) == ZeroPte )
      goto LABEL_30;
  }
}
