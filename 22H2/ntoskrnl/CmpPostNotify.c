/*
 * XREFs of CmpPostNotify @ 0x1405ED0C0
 * Callers:
 *     CmpReportNotifyHelper @ 0x1405ED390 (CmpReportNotifyHelper.c)
 *     CmpNotifyChangeKey @ 0x1406DC890 (CmpNotifyChangeKey.c)
 *     CmpFlushNotify @ 0x1406E3C7C (CmpFlushNotify.c)
 *     CmpCloseKeyObject @ 0x1406E3D70 (CmpCloseKeyObject.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x1402067A0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140206930 (ExReleaseFastMutexUnsafe.c)
 *     KeInsertQueueApc @ 0x14025F120 (KeInsertQueueApc.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     CmpDelayedDerefKeys @ 0x1405ED57C (CmpDelayedDerefKeys.c)
 *     CmpCancelSubordinatePost @ 0x14068049C (CmpCancelSubordinatePost.c)
 *     CmpAddToDelayedDeref @ 0x1406804E8 (CmpAddToDelayedDeref.c)
 *     CmpFreeSubordinatePost @ 0x1406815D0 (CmpFreeSubordinatePost.c)
 *     CmpSignalDeferredPosts @ 0x1406E0680 (CmpSignalDeferredPosts.c)
 *     CmpFreePostBlock @ 0x1406E0850 (CmpFreePostBlock.c)
 */

void __fastcall CmpPostNotify(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, __int128 *a6, __int128 *a7)
{
  __int128 *v8; // r14
  __int128 *v9; // rsi
  _DWORD **v10; // rdi
  unsigned __int64 v11; // r11
  _DWORD *v12; // rbx
  __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int128 ***v18; // rax
  __int128 **v19; // rbx
  __int128 *v20; // rcx
  __int128 **v21; // rax
  _DWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v27; // rdx
  _QWORD *v28; // rax
  unsigned __int8 v29; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v32; // eax
  bool v33; // zf
  __int64 v34; // rax
  __int128 v35; // [rsp+20h] [rbp-20h] BYREF
  __int128 v36; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v37; // [rsp+78h] [rbp+38h]

  v37 = a4;
  v35 = 0LL;
  v36 = 0LL;
  if ( !a6 )
  {
    *((_QWORD *)&v35 + 1) = &v35;
    *(_QWORD *)&v35 = &v35;
  }
  v8 = &v35;
  if ( a6 )
    v8 = a6;
  if ( !a7 )
  {
    *((_QWORD *)&v36 + 1) = &v36;
    *(_QWORD *)&v36 = &v36;
  }
  v9 = &v36;
  if ( a7 )
    v9 = a7;
  if ( !a5 )
  {
    ExAcquireFastMutexUnsafe(&CmpPostLock);
    a4 = v37;
  }
  v10 = (_DWORD **)(a1 + 16);
  if ( *v10 == (_DWORD *)v10 )
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
      v12 = *v10;
      if ( *v10 == (_DWORD *)v10 )
        break;
      v13 = *(_QWORD *)v12;
      if ( *((_DWORD ***)v12 + 1) != v10 || *(_DWORD **)(v13 + 8) != v12 )
        goto LABEL_59;
      *v10 = (_DWORD *)v13;
      *(_QWORD *)(v13 + 8) = v10;
      if ( (_DWORD)a4 != 267 || (v12[14] & 0x10000) != 0 )
      {
        v14 = v12[14];
        if ( (v14 & 0x10000) == 0 )
        {
          v22 = v12;
          do
          {
            v23 = *((_QWORD *)v22 + 4);
            *(_DWORD *)(v23 + 24) &= ~0x10000u;
            v22 = (_DWORD *)(v23 - 32);
          }
          while ( v22 != v12 );
          v12[14] |= 0x10000u;
          v14 = v12[14];
        }
        if ( (unsigned __int16)v14 != (_DWORD)v11 )
        {
          CmpCancelSubordinatePost(v12, v8);
          CmpAddToDelayedDeref(v12, v15, v16, v17, v35, *((_QWORD *)&v35 + 1), v36, *((_QWORD *)&v36 + 1));
          v14 = v12[14];
        }
        if ( (unsigned __int16)v14 == (_DWORD)v11 )
        {
          v34 = *((_QWORD *)v12 + 8);
          *(_QWORD *)v12 = 0LL;
          *(_DWORD *)(v34 + 24) = a4;
          KeSetEvent(*((PRKEVENT *)v12 + 8), 0, 0);
          goto LABEL_31;
        }
        if ( (unsigned __int16)v14 == 2 )
        {
          KeInsertQueueApc(*((_QWORD *)v12 + 8) + 16LL, (unsigned int)a4, (__int64)v12, 0);
LABEL_31:
          a4 = v37;
          goto LABEL_16;
        }
        if ( (unsigned int)(unsigned __int16)v14 - 3 <= (unsigned int)v11 )
        {
          CmpFreeSubordinatePost(v12);
          v18 = (__int128 ***)*((_QWORD *)v12 + 3);
          v19 = (__int128 **)(v12 + 4);
          v20 = *v19;
          if ( *((__int128 ***)*v19 + 1) != v19
            || *v18 != v19
            || (*v18 = (__int128 **)v20, *((_QWORD *)v20 + 1) = v18, v21 = (__int128 **)*((_QWORD *)v9 + 1), *v21 != v9) )
          {
LABEL_59:
            __fastfail(3u);
          }
          *v19 = v9;
          v19[1] = (__int128 *)v21;
          *v21 = (__int128 *)v19;
          *((_QWORD *)v9 + 1) = v19;
          goto LABEL_31;
        }
      }
      else
      {
        v24 = *((_QWORD *)v12 + 4);
        v25 = (_QWORD *)*((_QWORD *)v12 + 5);
        if ( *(_DWORD **)(v24 + 8) != v12 + 8 )
          goto LABEL_59;
        if ( (_DWORD *)*v25 != v12 + 8 )
          goto LABEL_59;
        *v25 = v24;
        *(_QWORD *)(v24 + 8) = v25;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(v11);
        v27 = *((_QWORD *)v12 + 2);
        v28 = (_QWORD *)*((_QWORD *)v12 + 3);
        if ( *(_DWORD **)(v27 + 8) != v12 + 4 || (_DWORD *)*v28 != v12 + 4 )
          goto LABEL_59;
        *v28 = v27;
        *(_QWORD *)(v27 + 8) = v28;
        if ( KiIrqlFlags )
        {
          if ( ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v11) != 0 )
          {
            v29 = KeGetCurrentIrql();
            if ( v29 <= 0xFu && CurrentIrql <= 0xFu && v29 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + CurrentIrql));
              v33 = (v32 & SchedulerAssist[5]) == 0;
              a3 = (unsigned int)v32 & SchedulerAssist[5];
              SchedulerAssist[5] = a3;
              if ( v33 )
              {
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                v11 = 1LL;
              }
              a4 = v37;
            }
          }
        }
        __writecr8(CurrentIrql);
        if ( v12[14] != (_DWORD)v11 )
        {
          CmpAddToDelayedDeref(v12, v8, a3, a4, v35, *((_QWORD *)&v35 + 1), v36, *((_QWORD *)&v36 + 1));
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
