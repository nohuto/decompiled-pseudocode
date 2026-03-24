/*
 * XREFs of MiStoreUpdatePagefileHash @ 0x140337490
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x14032F960 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     MiMapPageFileHash @ 0x140327238 (MiMapPageFileHash.c)
 *     MiGetPagingFileOffset @ 0x14033A2B0 (MiGetPagingFileOffset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiStoreUpdatePagefileHash(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  __int64 v4; // rdx
  _QWORD *v5; // r13
  unsigned int v6; // edi
  unsigned int v7; // ebp
  __int64 v8; // r15
  unsigned int v9; // ebx
  __int64 v10; // r10
  unsigned int v11; // esi
  __int64 v12; // r14
  int v13; // r12d
  unsigned int PagingFileOffset; // eax
  __int64 v15; // rcx
  unsigned int v16; // r14d
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  int v19; // eax
  bool v20; // zf
  __int64 v21; // [rsp+30h] [rbp-58h]
  unsigned int v22; // [rsp+90h] [rbp+8h]
  unsigned __int8 v23; // [rsp+98h] [rbp+10h]
  __int64 v24; // [rsp+A0h] [rbp+18h]
  unsigned int v25; // [rsp+A8h] [rbp+20h]

  v25 = (unsigned int)SchedulerAssist;
  v24 = a3;
  v4 = 0LL;
  v5 = (_QWORD *)(a3 + 48);
  v6 = 0;
  v22 = 0;
  v7 = 0;
  v8 = 0LL;
  v9 = 0;
  v10 = a3;
  v11 = 16;
  if ( (_DWORD)SchedulerAssist )
  {
    do
    {
      if ( *v5 == qword_140C4ED68 )
      {
        v13 = 16;
        v16 = v7;
      }
      else
      {
        v12 = 48LL * *v5 - 0x58000000000LL;
        v21 = v12;
        v23 = MiLockPageInline(v12, v4, a3, SchedulerAssist);
        v13 = (unsigned __int8)HIBYTE(*(_WORD *)(v12 + 16)) >> 4;
        PagingFileOffset = MiGetPagingFileOffset(v12 + 16);
        v15 = v12;
        v16 = PagingFileOffset;
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v23 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v19 = ~(unsigned __int16)(-1LL << (v23 + 1));
            v20 = (v19 & SchedulerAssist[5]) == 0;
            a3 = (unsigned int)v19 & SchedulerAssist[5];
            SchedulerAssist[5] = a3;
            if ( v20 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
          v15 = v21;
        }
        __writecr8(v23);
        v4 = v22;
        v10 = v24;
        if ( !v8 )
          v8 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v15 + 40) >> 39) & 0x3FFLL));
      }
      if ( v11 == v13 && v16 == v7 )
      {
        ++v6;
      }
      else
      {
        if ( v11 != 16 )
          MiMapPageFileHash(*(_QWORD *)(v8 + 8LL * v11 + 6944), v10, v9 - v6, v4, v6);
        v4 = v16;
        v11 = v13;
        v22 = v16;
        v7 = v16;
        v6 = 1;
      }
      v10 = v24;
      ++v9;
      ++v5;
      ++v7;
    }
    while ( v9 < v25 );
    if ( v11 != 16 )
      MiMapPageFileHash(*(_QWORD *)(v8 + 8LL * v11 + 6944), v24, v9 - v6, v4, v6);
  }
}
