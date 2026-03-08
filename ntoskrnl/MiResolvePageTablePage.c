/*
 * XREFs of MiResolvePageTablePage @ 0x1402689F0
 * Callers:
 *     MiUserFault @ 0x140268260 (MiUserFault.c)
 * Callees:
 *     MiFastLockLeafPageTable @ 0x140269C50 (MiFastLockLeafPageTable.c)
 *     MiLockPageTableInternal @ 0x14026A0D0 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MiIsPdeOrAboveAccessible @ 0x1402E21F4 (MiIsPdeOrAboveAccessible.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiUnlockFaultPageTable @ 0x140343598 (MiUnlockFaultPageTable.c)
 *     MiInPagePageTable @ 0x140345FA0 (MiInPagePageTable.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     MiLargePageFault @ 0x140643EB8 (MiLargePageFault.c)
 */

__int64 __fastcall MiResolvePageTablePage(__int64 a1)
{
  __int64 v2; // r14
  unsigned __int64 v3; // rdx
  int v4; // eax
  __int64 v5; // rdx
  __int64 **v7; // rax
  unsigned int v8; // r13d
  __int64 *v9; // r12
  __int64 v10; // rbx
  __int64 *v11; // rax
  __int64 **v12; // rax
  int v13; // r12d
  __int64 v14; // rbx
  __int64 v15; // rax
  _BYTE *v16; // rbx
  _BYTE *v17; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  ULONG_PTR v21; // r9
  ULONG_PTR v22; // rdx
  int v23; // eax
  __int64 **v24; // [rsp+70h] [rbp+8h]
  int v25; // [rsp+78h] [rbp+10h]

  v2 = *(_QWORD *)(a1 + 56);
  if ( (*(_BYTE *)(a1 + 69) & 1) == 0 )
  {
    v3 = *(_QWORD *)a1;
    if ( *(_QWORD *)a1 < 0xFFFFF68000000000uLL || v3 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v4 = MiFastLockLeafPageTable(*(_QWORD *)(a1 + 56), v3, 0LL);
      if ( v4 )
      {
        v5 = *(_QWORD *)(a1 + 8LL * v4 + 24);
        *(_QWORD *)(a1 + 72) = v5;
        if ( v4 == 1 )
          return 0LL;
        MiUnlockPageTableInternal(v2, v5);
        *(_QWORD *)(a1 + 72) = 0LL;
      }
    }
  }
  v25 = 0;
  if ( (*(_BYTE *)(a1 + 69) & 1) == 0 )
  {
    *(_QWORD *)(a1 + 72) = 0xFFFFF6FB7DBEDF68uLL;
    MiLockPageTableInternal(v2, 0xFFFFF6FB7DBEDF68uLL, 0LL);
  }
  v7 = (__int64 **)(a1 + 48);
  v8 = 3;
  v24 = (__int64 **)(a1 + 48);
  do
  {
    v9 = *v7;
    v10 = **v7;
    if ( (unsigned int)MiPteInShadowRange(*v7)
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
    {
      if ( (v10 & 1) == 0 )
        goto LABEL_27;
      if ( (v10 & 0x20) == 0 || (v10 & 0x42) == 0 )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v19 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)v9 >> 3) & 0x1FF));
          v20 = v10 | 0x20;
          if ( (v19 & 0x20) == 0 )
            v20 = v10;
          v10 = v20;
          if ( (v19 & 0x42) != 0 )
            v10 = v20 | 0x42;
        }
      }
    }
    if ( (v10 & 1) != 0 )
    {
      if ( (v10 & 0x80u) != 0LL )
      {
        v21 = *(_QWORD *)(a1 + 16);
        if ( (v21 & 1) == 0 || *(_BYTE *)(v21 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
        {
          v22 = *(_QWORD *)a1;
          if ( *(_QWORD *)a1 >= 0xFFFFF68000000000uLL && v22 <= 0xFFFFF6FFFFFFFFFFuLL )
            KeBugCheckEx(0x50u, v22, *(_QWORD *)(a1 + 8), v21, 8uLL);
        }
        v23 = MiLargePageFault(a1, v9);
        if ( v23 >= 0 )
          v23 = -1073740748;
        v13 = v23;
        goto LABEL_37;
      }
      v11 = *(__int64 **)(a1 + 72);
      if ( v11 && v9 != v11 )
      {
        MiLockPageTableInternal(v2, v9, 0LL);
        MiUnlockPageTableInternal(v2, *(_QWORD *)(a1 + 72));
        *(_QWORD *)(a1 + 72) = v9;
      }
      v12 = v24;
      goto LABEL_17;
    }
LABEL_27:
    if ( !(unsigned int)MiIsPdeOrAboveAccessible(v9) )
      goto LABEL_45;
    if ( !v10 )
    {
      v15 = *(_QWORD *)(a1 + 16);
      if ( (v15 & 1) != 0 )
      {
        v17 = (_BYTE *)(v15 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( *v17 == 8 )
        {
          v17[44] = 1;
LABEL_45:
          v13 = -1073741819;
LABEL_37:
          MiUnlockFaultPageTable(a1 + 56);
          return (unsigned int)v13;
        }
      }
    }
    v13 = MiInPagePageTable(a1, v8);
    v25 = v13;
    if ( v13 < 0 )
      goto LABEL_37;
    ++v8;
    v12 = v24 + 1;
LABEL_17:
    v7 = v12 - 1;
    v24 = v7;
    --v8;
  }
  while ( v8 );
  v13 = v25;
  if ( v25 < 0 )
    goto LABEL_37;
  v14 = *(_QWORD *)(a1 + 16);
  if ( (v14 & 1) != 0 )
  {
    v16 = (_BYTE *)(v14 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( *v16 == 8 && !MI_READ_PTE_LOCK_FREE(*(_QWORD *)(a1 + 24)) )
    {
      v16[44] = 1;
      v13 = -1073741819;
      goto LABEL_37;
    }
  }
  return (unsigned int)v13;
}
