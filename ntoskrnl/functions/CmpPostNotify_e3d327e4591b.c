void __fastcall CmpPostNotify(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, __int128 *a6, __int128 *a7)
{
  __int128 *v8; // r14
  __int128 *v9; // rsi
  _QWORD *v10; // rdi
  unsigned __int64 v11; // r11
  _QWORD *v12; // rbx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  __int128 ***v19; // rax
  __int128 **v20; // rbx
  __int128 *v21; // rcx
  __int128 **v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v26; // rdx
  _QWORD *v27; // rax
  unsigned __int8 v28; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v31; // eax
  bool v32; // zf
  _QWORD *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int128 v36; // [rsp+20h] [rbp-20h] BYREF
  __int128 v37; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v38; // [rsp+78h] [rbp+38h]

  v38 = a4;
  v36 = 0LL;
  v37 = 0LL;
  if ( !a6 )
  {
    *((_QWORD *)&v36 + 1) = &v36;
    *(_QWORD *)&v36 = &v36;
  }
  v8 = &v36;
  if ( a6 )
    v8 = a6;
  if ( !a7 )
  {
    *((_QWORD *)&v37 + 1) = &v37;
    *(_QWORD *)&v37 = &v37;
  }
  v9 = &v37;
  if ( a7 )
    v9 = a7;
  if ( !a5 )
  {
    ExAcquireFastMutexUnsafe(&CmpPostLock);
    a4 = v38;
  }
  v10 = (_QWORD *)(a1 + 16);
  if ( (_QWORD *)*v10 == v10 )
  {
    *(_DWORD *)(a1 + 48) |= 0x80000000;
    if ( !a5 )
      ExReleaseFastMutexUnsafe(&CmpPostLock);
  }
  else
  {
    *(_DWORD *)(a1 + 48) &= ~0x80000000;
LABEL_16:
    v11 = 1LL;
    while ( 1 )
    {
      v12 = (_QWORD *)*v10;
      if ( (_QWORD *)*v10 == v10 )
        break;
      v13 = *v12;
      if ( (_QWORD *)v12[1] != v10 || *(_QWORD **)(v13 + 8) != v12 )
        goto LABEL_59;
      *v10 = v13;
      *(_QWORD *)(v13 + 8) = v10;
      if ( (_DWORD)a4 != 267 || (v12[7] & 0x10000) != 0 )
      {
        v14 = *((_DWORD *)v12 + 14);
        if ( (v14 & 0x10000) == 0 )
        {
          v33 = v12;
          do
          {
            v34 = v33[4];
            *(_DWORD *)(v34 + 24) &= ~0x10000u;
            v33 = (_QWORD *)(v34 - 32);
          }
          while ( v33 != v12 );
          *((_DWORD *)v12 + 14) |= 0x10000u;
          v14 = *((_DWORD *)v12 + 14);
        }
        if ( (unsigned __int16)v14 != (_DWORD)v11 )
        {
          CmpCancelSubordinatePost(v12, v8);
          CmpAddToDelayedDeref(v12, v15, v16, v17, v36, *((_QWORD *)&v36 + 1), v37, *((_QWORD *)&v37 + 1));
        }
        v18 = *((_DWORD *)v12 + 14);
        if ( (unsigned __int16)v18 == 1 )
        {
          v35 = v12[8];
          *v12 = 0LL;
          *(_DWORD *)(v35 + 24) = a4;
          KeSetEvent((PRKEVENT)v12[8], 0, 0);
          goto LABEL_31;
        }
        if ( (unsigned __int16)v18 == 2 )
        {
          KeInsertQueueApc(v12[8] + 16LL, (unsigned int)a4, v12, 0);
LABEL_31:
          a4 = v38;
          goto LABEL_16;
        }
        if ( (unsigned int)(unsigned __int16)v18 - 3 <= 1 )
        {
          CmpFreeSubordinatePost(v12);
          v19 = (__int128 ***)v12[3];
          v20 = (__int128 **)(v12 + 2);
          v21 = *v20;
          if ( *((__int128 ***)*v20 + 1) != v20
            || *v19 != v20
            || (*v19 = (__int128 **)v21, *((_QWORD *)v21 + 1) = v19, v22 = (__int128 **)*((_QWORD *)v9 + 1), *v22 != v9) )
          {
LABEL_59:
            __fastfail(3u);
          }
          *v20 = v9;
          v20[1] = (__int128 *)v22;
          *v22 = (__int128 *)v20;
          *((_QWORD *)v9 + 1) = v20;
          goto LABEL_31;
        }
      }
      else
      {
        v23 = v12[4];
        v24 = (_QWORD *)v12[5];
        if ( *(_QWORD **)(v23 + 8) != v12 + 4 )
          goto LABEL_59;
        if ( (_QWORD *)*v24 != v12 + 4 )
          goto LABEL_59;
        *v24 = v23;
        *(_QWORD *)(v23 + 8) = v24;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(v11);
        v26 = v12[2];
        v27 = (_QWORD *)v12[3];
        if ( *(_QWORD **)(v26 + 8) != v12 + 2 || (_QWORD *)*v27 != v12 + 2 )
          goto LABEL_59;
        *v27 = v26;
        *(_QWORD *)(v26 + 8) = v27;
        if ( KiIrqlFlags )
        {
          v28 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v11) != 0
            && v28 <= 0xFu
            && CurrentIrql <= 0xFu
            && v28 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + CurrentIrql));
            v32 = (v31 & SchedulerAssist[5]) == 0;
            a3 = (unsigned int)v31 & SchedulerAssist[5];
            SchedulerAssist[5] = a3;
            if ( v32 )
            {
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              v11 = 1LL;
            }
            a4 = v38;
          }
        }
        __writecr8(CurrentIrql);
        if ( *((_DWORD *)v12 + 14) != (_DWORD)v11 )
        {
          CmpAddToDelayedDeref(v12, v8, a3, a4, v36, *((_QWORD *)&v36 + 1), v37, *((_QWORD *)&v37 + 1));
          CmpFreePostBlock(v12);
          goto LABEL_31;
        }
      }
    }
    if ( !a5 )
      ExReleaseFastMutexUnsafe(&CmpPostLock);
    if ( !a6 )
      CmpDelayedDerefKeys(v8);
    if ( !a7 )
      CmpSignalDeferredPosts(v9);
  }
}
