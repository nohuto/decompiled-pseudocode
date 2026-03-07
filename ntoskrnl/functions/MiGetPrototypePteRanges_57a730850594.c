__int64 __fastcall MiGetPrototypePteRanges(unsigned __int64 a1, RTL_BITMAP *a2)
{
  unsigned __int64 v2; // r13
  unsigned int v4; // r12d
  KIRQL v5; // al
  _QWORD *v6; // rdi
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rsi
  __int64 v14; // rsi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rbx
  _QWORD *i; // rax
  __int64 j; // rbx
  unsigned __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rsi
  _QWORD *v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v29; // edx
  bool v30; // zf
  __int64 NumberToSet; // [rsp+60h] [rbp+40h] BYREF
  PRTL_BITMAP BitMapHeader; // [rsp+68h] [rbp+48h]
  __int64 v34; // [rsp+70h] [rbp+50h] BYREF

  BitMapHeader = a2;
  NumberToSet = 0LL;
  v2 = a1 + 4096;
  v4 = 1;
  v5 = ExAcquireSpinLockShared(&dword_140C653B8);
  v6 = (_QWORD *)qword_140C653B0;
  v7 = v5;
  if ( qword_140C653B0 )
  {
    do
    {
      v34 = 0LL;
      v8 = MiObtainProtoBaseFromNode(v6, &v34);
      if ( v9 >= v8 )
      {
        if ( a1 < v8 + 8 * v34 )
          break;
        v6 = (_QWORD *)v6[1];
      }
      else
      {
        v6 = (_QWORD *)*v6;
      }
    }
    while ( v6 );
  }
  v10 = (unsigned __int64)v6;
  if ( v6 )
  {
    while ( 1 )
    {
      v11 = MiObtainProtoBaseFromNode((_QWORD *)v10, &NumberToSet);
      v12 = NumberToSet;
      v13 = v11;
      if ( v11 < a1 )
      {
        if ( v11 + 8 * NumberToSet <= a1 )
          break;
        v13 = a1;
        v12 = NumberToSet - ((__int64)(a1 - v11) >> 3);
        NumberToSet = v12;
      }
      if ( v13 >= v2 )
        break;
      if ( (*(_BYTE *)(v10 + 24) & 7) == 4 )
      {
        v4 = 0;
        break;
      }
      v14 = (__int64)(v13 - a1) >> 3;
      if ( v12 + (unsigned __int64)(unsigned int)v14 > 0x200 )
      {
        LODWORD(v12) = 512 - v14;
        NumberToSet = (unsigned int)(512 - v14);
      }
      RtlSetBits(BitMapHeader, v14, v12);
      if ( (_DWORD)v14 )
      {
        v15 = *(_QWORD *)v10;
        v16 = v10;
        if ( *(_QWORD *)v10 )
        {
          while ( 1 )
          {
            v10 = v15;
            if ( !*(_QWORD *)(v15 + 8) )
              break;
            v15 = *(_QWORD *)(v15 + 8);
          }
        }
        else
        {
          while ( 1 )
          {
            v10 = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !v10 || *(_QWORD *)(v10 + 8) == v16 )
              break;
            v16 = v10;
          }
        }
        if ( v10 )
          continue;
      }
      break;
    }
    v17 = v6[1];
    if ( v17 )
    {
      for ( i = *(_QWORD **)v17; i; i = (_QWORD *)*i )
        v17 = (unsigned __int64)i;
    }
    else
    {
      for ( j = v6[2]; ; j = *(_QWORD *)(v17 + 16) )
      {
        v17 = j & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v17 || *(_QWORD **)v17 == v6 )
          break;
        v6 = (_QWORD *)v17;
      }
    }
    while ( v17 )
    {
      v20 = MiObtainProtoBaseFromNode((_QWORD *)v17, &NumberToSet);
      if ( v20 >= v2 || v20 < a1 )
        break;
      if ( (*(_BYTE *)(v17 + 24) & 7) == 4 )
      {
        v4 = 0;
        break;
      }
      v21 = NumberToSet;
      v22 = (__int64)(v20 - a1) >> 3;
      v23 = (unsigned int)v22;
      if ( (unsigned __int64)(unsigned int)v22 + NumberToSet > 0x200 )
      {
        v21 = (unsigned int)(512 - v22);
        NumberToSet = v21;
      }
      RtlSetBits(BitMapHeader, v22, v21);
      if ( v23 + v21 == 512 )
        break;
      v24 = *(_QWORD **)(v17 + 8);
      v25 = v17;
      if ( v24 )
      {
        do
        {
          v17 = (unsigned __int64)v24;
          v24 = (_QWORD *)*v24;
        }
        while ( v24 );
      }
      else
      {
        while ( 1 )
        {
          v17 = *(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v17 || *(_QWORD *)v17 == v25 )
            break;
          v25 = v17;
        }
      }
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C653B8);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
      v30 = (v29 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v29;
      if ( v30 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v7);
  return v4;
}
