__int64 KeUpdateSoftParkRankList()
{
  _DWORD *v0; // r12
  __int64 result; // rax
  unsigned int v2; // r14d
  __int64 v3; // r15
  __int64 v4; // rbx
  char v5; // cl
  _DWORD *v6; // rax
  __int64 v7; // rdx
  char j; // di
  unsigned int v9; // r10d
  unsigned int *v10; // r8
  __int64 v11; // rdx
  unsigned int v12; // ecx
  char v13; // r9
  unsigned int v14; // ecx
  _BYTE *v15; // r8
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  __int64 v18; // rdx
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  unsigned __int8 v22; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v24; // r9
  int v25; // eax
  bool v26; // zf
  int v27; // [rsp+28h] [rbp-E0h] BYREF
  __int128 i; // [rsp+30h] [rbp-D8h] BYREF
  __int128 v29; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v30; // [rsp+50h] [rbp-B8h]
  _DWORD v31[64]; // [rsp+58h] [rbp-B0h] BYREF
  _OWORD Buf1[4]; // [rsp+158h] [rbp+50h] BYREF

  v0 = PpmParkNewSoftParkRankList;
  result = 0LL;
  v27 = 0;
  v29 = 0LL;
  v30 = 0LL;
  v2 = 0;
  for ( i = 0LL; v2 < (unsigned __int16)KiSubNodeCount; ++v2 )
  {
    v3 = *(_QWORD *)(KiSubNodes + 8LL * v2);
    if ( v3 )
    {
      KiQuerySubNodeActiveAffinity(*(_QWORD *)(KiSubNodes + 8LL * v2), (__int64)&i, 0LL);
      memset(v31, 255, sizeof(v31));
      LOWORD(v30) = WORD4(i);
      *((_QWORD *)&v29 + 1) = i;
      *(_QWORD *)&v29 = 0LL;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v27, (unsigned __int16 **)&v29) )
        v31[*(unsigned __int8 *)(KiProcessorBlock[v27] + 209)] = v0[v27];
      v4 = -1LL;
      memset(Buf1, 255, sizeof(Buf1));
      v5 = 0;
      v6 = v31;
      v7 = 64LL;
      do
      {
        if ( *v6 == -1 )
          v4 &= ~(1LL << v5);
        ++v5;
        ++v6;
        --v7;
      }
      while ( v7 );
      for ( j = 0; v4; v4 &= ~v11 )
      {
        v9 = -1;
        v10 = v31;
        v11 = 0LL;
        v12 = 0;
        v13 = 0;
        do
        {
          if ( ((1LL << v12) & v4) != 0 )
          {
            if ( *v10 == v9 )
            {
              v11 |= 1LL << v13;
            }
            else if ( *v10 < v9 )
            {
              v11 = 1LL << v12;
              v9 = *v10;
            }
          }
          ++v12;
          ++v13;
          ++v10;
        }
        while ( v12 < 0x40 );
        v14 = 0;
        v15 = Buf1;
        do
        {
          if ( _bittest64(&v11, v14) )
            *v15 = j;
          ++v14;
          ++v15;
        }
        while ( v14 < 0x40 );
        ++j;
      }
      if ( memcmp(Buf1, (const void *)(v3 + 320), 0x40uLL) )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          if ( CurrentIrql == 2 )
            LODWORD(v18) = 4;
          else
            v18 = (-1LL << (CurrentIrql + 1)) & 4;
          SchedulerAssist[5] |= v18;
        }
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v3 + 112));
        v19 = Buf1[1];
        *(_OWORD *)(v3 + 320) = Buf1[0];
        v20 = Buf1[2];
        *(_OWORD *)(v3 + 336) = v19;
        v21 = Buf1[3];
        *(_OWORD *)(v3 + 352) = v20;
        *(_OWORD *)(v3 + 368) = v21;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 112));
        if ( KiIrqlFlags )
        {
          v22 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v22 <= 0xFu && CurrentIrql <= 0xFu && v22 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v24 = CurrentPrcb->SchedulerAssist;
            v25 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v26 = (v25 & v24[5]) == 0;
            v24[5] &= v25;
            if ( v26 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(CurrentIrql);
      }
    }
    result = (unsigned __int16)KiSubNodeCount;
  }
  return result;
}
