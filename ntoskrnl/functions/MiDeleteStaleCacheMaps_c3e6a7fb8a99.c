void __fastcall MiDeleteStaleCacheMaps(__int64 a1)
{
  int v1; // ebp
  char v2; // r14
  unsigned __int8 v3; // al
  __int64 v4; // r12
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r15
  unsigned __int64 *v7; // r8
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rcx
  _QWORD *i; // rax
  __int64 j; // rdi
  bool v18; // zf
  int v19; // eax
  int v20; // ebp
  int v21; // ecx
  __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  _QWORD *v25; // rax
  char v26; // cl
  int v27; // eax
  int v28; // edi
  __int64 v29; // rdx
  unsigned __int64 *v30; // rbx
  _QWORD *v31; // rcx
  PVOID *v32; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v36; // eax
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r9
  int v39; // eax
  _DWORD *v40; // r8
  signed __int32 v41[8]; // [rsp+0h] [rbp-A8h] BYREF
  int v42; // [rsp+20h] [rbp-88h]
  int v43; // [rsp+24h] [rbp-84h]
  int v44; // [rsp+28h] [rbp-80h]
  unsigned __int64 v45; // [rsp+30h] [rbp-78h]
  unsigned __int64 *v46; // [rsp+38h] [rbp-70h]
  unsigned __int64 v47; // [rsp+40h] [rbp-68h]
  PVOID P[12]; // [rsp+48h] [rbp-60h] BYREF
  char v50; // [rsp+B8h] [rbp+10h]
  int v51; // [rsp+C0h] [rbp+18h]
  int v52; // [rsp+C8h] [rbp+20h]

  while ( 1 )
  {
    v1 = 0;
    v44 = 0;
    v52 = 0;
    v2 = 0;
    P[1] = P;
    P[0] = P;
    v51 = 0;
    v50 = 0;
    LOBYTE(v43) = 0;
    v3 = MiLockIoPfnTree(1);
    v42 = 0;
    v4 = 0LL;
    v5 = v3;
    do
    {
      v6 = MiState[v4 + 2093];
      v7 = (unsigned __int64 *)&MiState[v4 + 2080];
      v8 = -1LL;
      v46 = v7;
LABEL_3:
      v9 = MiState[v4 + 2089];
      if ( !v9 )
        goto LABEL_66;
      v10 = MiState[v4 + 2082];
      if ( v8 > v9 )
        v8 = MiState[v4 + 2089];
      v45 = v8;
      if ( qword_140C69220 || v10 >= qword_140C69240 )
      {
        v11 = *v7;
        v47 = 3 * ((unsigned __int64)qword_140C69240 >> 2);
        if ( v11 )
        {
          while ( 1 )
          {
            v12 = *(_QWORD *)(v11 + 24);
            if ( v6 >= v12 )
            {
              if ( v6 < v12 + 512 )
                goto LABEL_15;
              v13 = *(_QWORD *)(v11 + 8);
            }
            else
            {
              v13 = *(_QWORD *)v11;
            }
            if ( !v13 )
              break;
            v11 = v13;
          }
          while ( 1 )
          {
LABEL_15:
            if ( !v11 )
              break;
            v14 = *(_QWORD *)(v11 + 8);
            v15 = v11;
            if ( v14 )
            {
              for ( i = *(_QWORD **)v14; i; i = (_QWORD *)*i )
                v14 = (unsigned __int64)i;
            }
            else
            {
              for ( j = *(_QWORD *)(v11 + 16); ; j = *(_QWORD *)(v14 + 16) )
              {
                v14 = j & 0xFFFFFFFFFFFFFFFCuLL;
                if ( !v14 || *(_QWORD *)v14 == v15 )
                  break;
                v15 = v14;
              }
            }
            if ( v1 )
            {
              v18 = v1-- == 1;
              v51 = v1;
              if ( v18 )
              {
                MiConvertIoPfnTreeLockExclusiveToShared();
                v8 = v45;
                v2 = 0;
              }
            }
            if ( *(_DWORD *)(v11 + 32) )
            {
              v6 = *(_QWORD *)(v11 + 24) + 512LL;
              v45 = v8 - 1;
              if ( v8 == 1 )
                goto LABEL_63;
              if ( (++v52 & 0xF) == 0 && (unsigned int)MiIoPfnTreeLockContended(v2) || KeShouldYieldProcessor() )
              {
                MiUnlockIoPfnTree(v5, (v2 != 0) + 1);
                MiLockIoPfnTree(1);
                v27 = 0;
                if ( !v2 )
                  v27 = v1;
                v2 = 0;
                v51 = v27;
                v1 = v27;
                goto LABEL_59;
              }
              v11 = v14;
            }
            else
            {
              if ( !v2 )
              {
                v6 = *(_QWORD *)(v11 + 24);
                MiUnlockIoPfnTree(v5, 1);
                v2 = 1;
                v1 = 64;
                _InterlockedOr(v41, 0);
                v26 = 2;
                v44 = KiCacheFlushTimeStamp;
                LOBYTE(v43) = 0;
                v50 = 0;
                goto LABEL_61;
              }
              ++v52;
              LOBYTE(v19) = MiIsPageInHugePfn(*(_QWORD *)(v11 + 24));
              v20 = v19;
              if ( !v50 && !v19 )
              {
                MiFlushEntireTbDueToAttributeChange();
                v50 = 1;
              }
              if ( (_BYTE)v43
                || v20
                || !*(_BYTE *)(v11 + 40)
                || !MiTbFlushTimeStampMayNeedFlush(*(_DWORD *)(v11 + 36), v44, -1) )
              {
                LOBYTE(v20) = v52;
              }
              else
              {
                v18 = (unsigned int)MiFlushStaleCacheMap(v11) == 0;
                v21 = (unsigned __int8)v43;
                if ( !v18 )
                  v21 = 1;
                v52 = 0;
                v43 = v21;
              }
              RtlAvlRemoveNode(v46, (unsigned __int64 *)v11);
              if ( (unsigned int)MiIsPageInIoHugeRangeTransition(*(_QWORD *)(v11 + 24), v22) )
                _InterlockedAdd64(&qword_140C69220, 0xFFFFFFFFFFFFFFFFuLL);
              v23 = v42;
              v24 = _InterlockedDecrement64(&MiState[v42 + 2082]);
              _InterlockedAdd64(&MiState[v23 + 2089], 0xFFFFFFFFFFFFFFFFuLL);
              v25 = P[0];
              if ( *((PVOID **)P[0] + 1) != P )
LABEL_82:
                __fastfail(3u);
              *(PVOID *)v11 = P[0];
              *(_QWORD *)(v11 + 8) = P;
              v25[1] = v11;
              P[0] = (PVOID)v11;
              if ( v24 <= v47 )
              {
                v1 = v51;
                v28 = 1;
                v4 = 1LL;
                goto LABEL_65;
              }
              v6 = *(_QWORD *)(v11 + 24) + 512LL;
              if ( !--v45 )
              {
LABEL_63:
                v1 = v51;
                break;
              }
              v11 = v14;
              if ( (v20 & 0xF) == 0 && (unsigned int)MiIoPfnTreeLockContended(v2) || KeShouldYieldProcessor() )
              {
                MiUnlockIoPfnTree(v5, 2);
                v2 = 0;
                v1 = 0;
                v26 = 1;
LABEL_61:
                v51 = v1;
                MiLockIoPfnTree(v26);
LABEL_59:
                v8 = v45;
                v7 = v46;
                goto LABEL_3;
              }
            }
            v1 = v51;
            v8 = v45;
          }
        }
        v28 = v42;
LABEL_65:
        MiState[v4 + 2093] = v6;
      }
      else
      {
LABEL_66:
        v28 = v42;
      }
      ++v4;
      v42 = v28 + 1;
    }
    while ( v28 + 1 < 2 );
    MiUnlockIoPfnTree(v5, (v2 != 0) + 1);
    while ( 1 )
    {
      v30 = (unsigned __int64 *)P[0];
      if ( P[0] == P )
        break;
      v31 = *(_QWORD **)P[0];
      v32 = (PVOID *)*((_QWORD *)P[0] + 1);
      if ( *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0] || *v32 != P[0] )
        goto LABEL_82;
      *v32 = v31;
      v31[1] = v32;
      MiDereferenceIoHugeRange(v30[3], v29);
      ExFreePoolWithTag(v30, 0);
    }
    ExAcquireSpinLockExclusive(&dword_140C69260);
    if ( !qword_140C69220 )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C69260);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v36 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v18 = (v36 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v36;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v5);
  }
  *(_QWORD *)(a1 + 24) = 0LL;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C69260);
  if ( KiIrqlFlags )
  {
    v37 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v37 <= 0xFu && (unsigned __int8)v5 <= 0xFu && v37 >= 2u )
    {
      v38 = KeGetCurrentPrcb();
      v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
      v40 = v38->SchedulerAssist;
      v18 = (v39 & v40[5]) == 0;
      v40[5] &= v39;
      if ( v18 )
        KiRemoveSystemWorkPriorityKick((__int64)v38);
    }
  }
  __writecr8(v5);
}
