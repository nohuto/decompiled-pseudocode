__int64 __fastcall MiTerminateWsle(__int64 a1, unsigned __int64 a2, char a3, int *a4)
{
  int v4; // ebp
  BOOL v7; // r14d
  int v8; // r12d
  unsigned __int64 v9; // rdi
  _BYTE *v10; // rcx
  unsigned __int64 v11; // rbx
  __int64 v12; // r9
  char WsleContents; // si
  int v14; // eax
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rdx
  unsigned int v17; // ecx
  __int64 v18; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // r8
  _BYTE *v27; // [rsp+88h] [rbp+10h]
  int v28; // [rsp+90h] [rbp+18h]

  v4 = 0;
  v7 = 1;
  v8 = 10;
  v9 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = (_BYTE *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v9) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
  v27 = v10;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v11 = *(_QWORD *)v9;
    v28 = 1;
    v8 = 10 - ((a3 & 2) != 0);
    if ( MiPteInShadowRange(v9)
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v11 & 1) != 0
      && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v21 = *((_QWORD *)&Flink->Flink + ((v9 >> 3) & 0x1FF));
        v22 = v11 | 0x20;
        if ( (v21 & 0x20) == 0 )
          v22 = v11;
        v11 = v22;
        if ( (v21 & 0x42) != 0 )
          v11 = v22 | 0x42;
      }
    }
    WsleContents = HIBYTE(v11) & 0xF | (16 * ((v11 >> 60) & 7));
    v7 = *((_QWORD *)v27 + 5) >= 0LL;
    if ( (HIBYTE(v11) & 0xF) == 8 )
    {
      MiUnlockWsle(a1, a2, v27, v12);
      WsleContents = MiGetWsleContents(v23, a2);
    }
    v14 = 1;
  }
  else
  {
    v14 = 0;
    WsleContents = (*v10 >> 1) & 7;
    v28 = 0;
  }
  if ( (a3 & 3) != 0 )
    goto LABEL_18;
  if ( (a3 & 4) != 0 )
  {
    v24 = MI_READ_PTE_LOCK_FREE(v9);
    v14 = v28;
    v15 = v24 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
  }
  else
  {
    v15 = 0LL;
  }
  if ( !v14 )
  {
    if ( !(unsigned int)MiEvictPageTableLock(a1, v9, v15, 0LL) )
    {
      *a4 = 0;
      return 0LL;
    }
    goto LABEL_17;
  }
  v16 = *(_QWORD *)v9;
  if ( v9 < 0xFFFFF6FB7DBED000uLL || v9 > 0xFFFFF6FB7DBED7F8uLL || !MiPteHasShadow() )
  {
    v17 = ((unsigned int)MiFlags >> 26) & 3;
    if ( v17 > 1 )
    {
      if ( (MiFlags & 0x2000000) != 0 )
        _mm_lfence();
      goto LABEL_14;
    }
    if ( v17 )
    {
      if ( v9 >= 0xFFFFF6FB40000000uLL && v9 <= 0xFFFFF6FB7FFFFFFFuLL && (v16 & 0x80u) == 0LL )
        LOBYTE(v16) = 32;
LABEL_14:
      if ( (v16 & 0x20) == 0 )
      {
        if ( (MI_INTERLOCKED_EXCHANGE_PTE(v9, v15) & 0x20) == 0 )
          goto LABEL_18;
        goto LABEL_17;
      }
    }
  }
  if ( MiPteInShadowRange(v9) && MiPteHasShadow() )
  {
    *(_QWORD *)v9 = v15;
    MiWritePteShadow(v9, v15, v25);
  }
  else
  {
    *(_QWORD *)v9 = v15;
  }
LABEL_17:
  v4 = 1;
LABEL_18:
  MiRemoveWsle(a1, a2, 1LL, WsleContents, v8, v7);
  if ( v28 )
    MiRebuildPageTableLeafAges(v18, a2);
  *a4 = v4;
  return 1LL;
}
