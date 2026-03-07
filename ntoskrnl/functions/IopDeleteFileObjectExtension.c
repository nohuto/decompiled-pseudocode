void __fastcall IopDeleteFileObjectExtension(__int64 a1)
{
  _DWORD *v1; // rsi
  __int64 i; // rdi
  _QWORD *v4; // r15
  _QWORD *v5; // rbx
  void *v6; // rcx
  _QWORD *v7; // rbx
  void *v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  PVOID *v11; // rbx
  PVOID v12; // rcx
  ULONG v13; // edx
  __int64 v14; // rax
  _QWORD **v15; // r14
  _QWORD *v16; // rbx
  void *v17; // rcx
  _BYTE *v18; // rbp
  _QWORD *v19; // r14
  unsigned __int64 v20; // r12
  __int64 v21; // r9
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *SchedulerAssist; // r10
  int v25; // eax
  bool v26; // zf
  _QWORD *v27; // rcx
  _QWORD *v28; // rbx
  char v29; // [rsp+50h] [rbp+8h]

  v1 = *(_DWORD **)(a1 + 208);
  if ( v1 == IopRevocationExtension )
    return;
  for ( i = 0LL; i < 10; ++i )
  {
    while ( 1 )
    {
      if ( !*(_QWORD *)&v1[2 * i + 2] )
        goto LABEL_4;
      if ( i == 4 )
      {
        v15 = (_QWORD **)*((_QWORD *)v1 + 5);
        v16 = *v15;
        while ( v16 != v15 )
        {
          v17 = v16;
          v16 = (_QWORD *)*v16;
          ExFreePoolWithTag(v17, 0);
        }
        goto LABEL_29;
      }
      if ( !i )
        break;
      if ( i != 5 )
      {
        switch ( i )
        {
          case 1LL:
            v4 = (_QWORD *)*((_QWORD *)v1 + 2);
            v5 = (_QWORD *)v4[2];
            while ( v5 )
            {
              v6 = v5;
              v5 = (_QWORD *)*v5;
              ExFreePoolWithTag(v6, 0);
            }
            v7 = (_QWORD *)v4[3];
            while ( v7 )
            {
              v18 = (_BYTE *)v7[3];
              v19 = v7;
              v7 = (_QWORD *)*v7;
              v20 = KeAcquireSpinLockRaiseToDpc(qword_140C5D910);
              v29 = v18[18];
              if ( v18[16] == 1 )
                v18[17] = 1;
              else
                ExFreePoolWithTag(v18, 0);
              KxReleaseSpinLock((volatile signed __int64 *)qword_140C5D910);
              if ( KiIrqlFlags )
              {
                CurrentIrql = KeGetCurrentIrql();
                if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v20 <= 0xFu && CurrentIrql >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  SchedulerAssist = CurrentPrcb->SchedulerAssist;
                  v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
                  v26 = (v25 & SchedulerAssist[5]) == 0;
                  SchedulerAssist[5] &= v25;
                  if ( v26 )
                    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
              }
              __writecr8(v20);
              if ( *((_DWORD *)v19 + 4) )
              {
                LOBYTE(v21) = v29;
                PspAdjustKeepAliveCountProcess(v19[1], 0xFFFFFFFFLL, a1, v21);
                ObfDereferenceObject((PVOID)v19[1]);
              }
              ExFreePoolWithTag(v19, 0);
            }
            v8 = (void *)v4[1];
            if ( v8 )
              ObfDereferenceObject(v8);
            goto LABEL_29;
          case 6LL:
            ExFreeToNPagedLookasideList(&IopOplockFoExtLookasideList, *((PVOID *)v1 + 7));
            goto LABEL_15;
          case 2LL:
            v27 = *(_QWORD **)(*((_QWORD *)v1 + 3) + 40LL);
            if ( v27 )
            {
              do
              {
                v28 = (_QWORD *)v27[5];
                ExFreePoolWithTag(v27, 0);
                v27 = v28;
              }
              while ( v28 );
            }
            goto LABEL_29;
        }
        if ( i != 7 )
        {
          if ( i == 8 )
            ObfDereferenceObjectWithTag(**((PVOID **)v1 + 9), 0x6F466F49u);
          goto LABEL_29;
        }
        v9 = *((_QWORD *)v1 + 8);
        v10 = *(_DWORD *)(v9 + 4);
        v11 = (PVOID *)(v9 + 8);
        if ( (v10 & 1) != 0 )
        {
          *(_DWORD *)(v9 + 4) = v10 & 0xFFFFFFFE;
          PsReleaseSiloHardReference(*v11);
        }
        v12 = *v11;
        v13 = 1884516169;
        goto LABEL_28;
      }
      FsRtlFreeExtraCreateParameter(*((PVOID *)v1 + 6));
LABEL_15:
      ++i;
    }
    v14 = *((_QWORD *)v1 + 1);
    if ( !v14 )
      goto LABEL_29;
    v12 = *(PVOID *)(v14 + 8);
    if ( !v12 )
      goto LABEL_29;
    v13 = 1953261124;
LABEL_28:
    ObDereferenceObjectDeferDeleteWithTag(v12, v13);
LABEL_29:
    ExFreePoolWithTag(*(PVOID *)&v1[2 * i + 2], 0);
LABEL_4:
    ;
  }
  if ( (*v1 & 2) != 0 )
    IopCleanupNotifications(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL), a1);
  ExFreePoolWithTag(v1, 0);
}
