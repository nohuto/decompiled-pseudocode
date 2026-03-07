__int64 __fastcall MiCheckVadSequential(__int64 a1)
{
  unsigned __int64 v1; // rbp
  unsigned int v3; // r15d
  __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // r13
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  unsigned __int64 v9; // rcx
  int v10; // edx
  __int64 v11; // r12
  __int64 *v12; // rax
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r10
  __int64 v15; // r8
  unsigned __int64 v16; // r11
  unsigned __int64 v17; // r8
  unsigned int v18; // r11d
  unsigned int v19; // r11d
  _DWORD *SchedulerAssist; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  unsigned int v25; // r9d
  unsigned __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // r9
  __int64 v29; // rcx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  unsigned __int8 v33; // cl
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *v35; // r9
  int v36; // edx
  bool v37; // zf
  unsigned int v38; // [rsp+60h] [rbp+8h]
  int v39; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int64 v40; // [rsp+70h] [rbp+18h]

  v1 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 64);
  v39 = 0;
  v5 = v1 & 0xFFFFFFFFFFFFF000uLL | 1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v22) = 4;
    else
      v22 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v22;
  }
  v7 = *(_DWORD *)(v4 + 48);
  do
  {
    while ( (v7 & 1) != 0 )
    {
      if ( (v7 & 2) != 0 )
      {
        v39 = 0;
        do
        {
          KeYieldProcessorEx(&v39);
          v7 = *(_DWORD *)(v4 + 48);
        }
        while ( (v7 & 1) != 0 );
      }
      else
      {
        v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 48), v7 | 2, v7);
      }
    }
    v8 = v7;
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 48), v7 & 0xFFFFFFFC | 1, v7);
  }
  while ( v8 != v7 );
  v9 = *(_QWORD *)(v4 + 120);
  v10 = *(_DWORD *)a1 | 0x20;
  v11 = v9 & 0xFFF;
  *(_DWORD *)a1 = v10;
  v12 = *(__int64 **)(v4 + 72);
  v13 = v9 & 0xFFFFFFFFFFFFF000uLL;
  v14 = (v9 & 0xFFFFFFFFFFFFF000uLL) + (v11 << 12);
  v15 = *v12;
  if ( *(_QWORD *)(*v12 + 64) && (*(_DWORD *)(v15 + 56) & 0x20) == 0 && (*(_BYTE *)(v15 + 62) & 0xC) == 4 )
    v16 = 128LL;
  else
    v16 = 8LL;
  if ( (v1 & 0xFFFFFFFFFFFFF000uLL) == v14 )
  {
    if ( v11 == 4095 )
      v5 = (v13 + 4096) | 0xFFF;
    else
      v5 = v13 | ((_WORD)v9 + 1) & 0xFFF;
    LOBYTE(v19) = v10;
  }
  else if ( v1 > v14 && (v17 = (v1 - v14) >> 12, v40 = v17, v17 < v16) )
  {
    v18 = v10;
    v25 = (((v1 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF;
    v38 = v25;
    if ( v25 <= v17 )
    {
      if ( v25 )
      {
        v18 = v10 & 0xFFFFFFDF;
        *(_DWORD *)a1 = v10 & 0xFFFFFFDF;
      }
    }
    else
    {
      v25 = (v1 - v14) >> 12;
      v38 = v25;
    }
    if ( (v18 & 0x20) == 0 )
      goto LABEL_15;
    v26 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
    if ( v25 )
    {
      while ( 1 )
      {
        v27 = *(_QWORD *)v26;
        if ( v26 >= 0xFFFFF6FB7DBED000uLL
          && v26 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0x600000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v27 & 1) != 0
          && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            LOBYTE(v31) = v27 | 0x20;
            v32 = *((_QWORD *)&Flink->Flink + ((v26 >> 3) & 0x1FF));
            if ( (v32 & 0x20) == 0 )
              v31 = *(_QWORD *)v26;
            LOBYTE(v27) = v31;
            v25 = v38;
            if ( (v32 & 0x42) != 0 )
              LOBYTE(v27) = v27 | 0x42;
          }
        }
        if ( (v27 & 1) == 0 || (v27 & 0x20) == 0 )
          break;
        --v25;
        v26 -= 8LL;
        v38 = v25;
        if ( !v25 )
          goto LABEL_38;
      }
      if ( !v25 )
      {
LABEL_38:
        LODWORD(v17) = v40;
        goto LABEL_39;
      }
      goto LABEL_13;
    }
LABEL_39:
    v28 = (unsigned int)(v17 + 1);
    if ( (unsigned __int64)(v11 + v28) > 0xFFF )
      v29 = ((((unsigned int)v28 + (v9 & 0xFFF) - 4095) << 12) + v9) | 0xFFF;
    else
      v29 = ((unsigned __int16)v9 ^ (unsigned __int16)(v17 + 1 + v9)) & 0xFFF ^ v9;
    v19 = *(_DWORD *)a1;
    v5 = v29;
  }
  else if ( v14
         || (LOBYTE(v19) = v10,
             v1 >> 12 != (*(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32))) )
  {
    v18 = v10;
LABEL_13:
    v19 = v18 & 0xFFFFFFDF;
    *(_DWORD *)a1 = v19;
  }
  if ( (v19 & 0x20) == 0 )
  {
LABEL_15:
    *(_DWORD *)(v4 + 64) &= ~0x2000000u;
    goto LABEL_16;
  }
  if ( (*(_DWORD *)(v4 + 64) & 0x2000000) != 0 )
  {
    v23 = *(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32);
    v24 = ((v1 >> 12) - v23) >> 8;
    if ( v14 )
      v1 = v14 - 4096;
    if ( (((v1 >> 12) - v23) >> 8) + 1 == v24 )
      v3 = -1073741280;
  }
LABEL_16:
  *(_QWORD *)(v4 + 120) = v5;
  _InterlockedAnd((volatile signed __int32 *)(v4 + 48), 0xFFFFFFFC);
  if ( KiIrqlFlags )
  {
    v33 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v33 <= 0xFu && CurrentIrql <= 0xFu && v33 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v35 = CurrentPrcb->SchedulerAssist;
      v36 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v37 = (v36 & v35[5]) == 0;
      v35[5] &= v36;
      if ( v37 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  return v3;
}
