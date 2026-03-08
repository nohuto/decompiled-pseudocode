/*
 * XREFs of MiComputeMaximumFaultCluster @ 0x14026AFC0
 * Callers:
 *     MiDispatchFault @ 0x14026A900 (MiDispatchFault.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14020F4D4 (MiGetAnyMultiplexedVm.c)
 *     MiLocateAddress @ 0x140228680 (MiLocateAddress.c)
 *     MiFaultListPagesRemaining @ 0x1402DFDD8 (MiFaultListPagesRemaining.c)
 *     KiRspInIstStack @ 0x1402EDCB0 (KiRspInIstStack.c)
 *     MiUnlockVadTree @ 0x140330EC8 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1403334B4 (MiLockVadTree.c)
 */

__int64 __fastcall MiComputeMaximumFaultCluster(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r11
  char *v6; // rax
  unsigned __int64 v7; // rdi
  __int16 v9; // ax
  bool v10; // dl
  void *v11; // rcx
  unsigned __int64 v12; // rax
  int v13; // ecx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r14
  __int64 **v17; // rbx
  __int64 **Address; // rax
  __int64 v19; // rdx
  char v20; // cl
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // rax
  _QWORD *v25; // rdx
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rdi

  v4 = *(_QWORD *)(a1 + 16);
  v6 = (char *)(v4 & 0xFFFFFFFFFFFFFFFEuLL);
  v7 = *(_QWORD *)a1 & 0xFFFFFFFFFFFFF000uLL;
  if ( v4 != (v4 & 0xFFFFFFFFFFFFFFFEuLL) )
  {
    v12 = MiFaultListPagesRemaining();
    v13 = 1;
    goto LABEL_12;
  }
  if ( (v4 & 1) != 0 )
  {
    v20 = *v6;
    if ( *v6 == 1 || v20 == 3 || v20 == 6 )
      return 1LL;
  }
  else if ( v4 )
  {
    v9 = *(_WORD *)(v4 + 368);
    v10 = 0;
    if ( v9 == 16 )
    {
      if ( (*(_DWORD *)(v4 + 376) & 0x200) != 0
        || !(unsigned int)KiRspInIstStack(3LL, *(_QWORD *)(v4 + 384), a3, a4)
        && !(unsigned int)KiRspInIstStack(2LL, v21, v22, v23) )
      {
        v11 = &ExpInterlockedPopEntrySListFault;
        v10 = KiDynamicTraceEnabled
           && (v24 = *(_QWORD *)(v4 + 360), v24 >= qword_140D1F2A8)
           && v24 < qword_140D1F2B0
           && KeGetCurrentIrql() == 15;
LABEL_7:
        if ( *(void **)(v4 + 360) == v11 || v10 )
          return 1LL;
      }
    }
    else if ( v9 == 51 )
    {
      v11 = (void *)qword_140D1F370;
      goto LABEL_7;
    }
  }
  v12 = 1LL;
  if ( *(unsigned __int8 *)(a1 + 81) > 1uLL )
    v12 = *(unsigned __int8 *)(a1 + 81);
  v13 = 0;
LABEL_12:
  if ( v12 == 1 )
    return 1LL;
  if ( !a2 || a2 > v12 )
    a2 = v12;
  v15 = 512LL - (((unsigned int)(v7 >> 9) >> 3) & 0x1FF);
  v16 = v15;
  if ( a2 <= v15 )
    v16 = a2;
  if ( v7 >= 0xFFFF800000000000uLL )
  {
    if ( !v13 )
    {
      v15 = 1LL;
      if ( *(char **)(a1 + 56) == MiGetAnyMultiplexedVm(1) )
      {
        v25 = P;
        if ( P )
        {
          do
          {
            v26 = v25[11] & 0xFFFFFFFFFFFFF000uLL;
            if ( v7 < v26 + v25[4] )
            {
              if ( v7 >= v26 )
                break;
              v25 = (_QWORD *)*v25;
            }
            else
            {
              v25 = (_QWORD *)v25[1];
            }
          }
          while ( v25 );
          if ( v25 )
          {
            v15 = 8LL;
            v27 = (v7 - (v25[11] & 0xFFFFFFFFFFFFF000uLL)) >> 12;
            if ( (v25[4] >> 12) - v27 < 8 )
              v15 = (v25[4] >> 12) - v27;
          }
        }
      }
    }
  }
  else
  {
    v17 = *(__int64 ***)(a1 + 88);
    if ( v17
      || (MiLockVadTree(1LL),
          Address = MiLocateAddress(v7),
          LOBYTE(v19) = 17,
          v17 = Address,
          MiUnlockVadTree(1LL, v19),
          v17) )
    {
      v15 = (*((unsigned int *)v17 + 7) | ((unsigned __int64)*((unsigned __int8 *)v17 + 33) << 32)) - (v7 >> 12) + 1;
    }
    else
    {
      v15 = 1LL;
    }
  }
  if ( v16 <= v15 )
    return v16;
  return v15;
}
