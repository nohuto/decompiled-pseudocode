/*
 * XREFs of MiStoreUpdatePagefileHash @ 0x14065A508
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x14046554A (MiStoreWriteModifiedPages.c)
 * Callees:
 *     MiGetPagingFileOffset @ 0x14029EA80 (MiGetPagingFileOffset.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiMapPageFileHash @ 0x140663D0C (MiMapPageFileHash.c)
 */

__int64 __fastcall MiStoreUpdatePagefileHash(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 result; // rax
  unsigned int v5; // edx
  __int64 *v6; // r13
  int v7; // edi
  unsigned int v8; // esi
  __int64 v9; // r12
  unsigned int v10; // ebx
  __int64 v11; // r10
  unsigned int v12; // ebp
  int v13; // r14d
  unsigned int v14; // r15d
  __int64 v15; // r13
  unsigned __int8 v16; // dl
  unsigned int PagingFileOffset; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // eax
  bool v22; // zf
  __int64 *v23; // [rsp+30h] [rbp-58h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF
  unsigned int v25; // [rsp+90h] [rbp+8h]
  unsigned __int8 v26; // [rsp+98h] [rbp+10h]

  result = (__int64)&retaddr;
  v5 = 0;
  v6 = (__int64 *)(a3 + 48);
  v7 = 0;
  v25 = 0;
  v8 = 0;
  v23 = (__int64 *)(a3 + 48);
  v9 = 0LL;
  v10 = 0;
  v11 = a3;
  v12 = 16;
  if ( a4 )
  {
    do
    {
      result = *v6;
      if ( *v6 == qword_140C69378 )
      {
        v13 = 16;
        v14 = v8;
      }
      else
      {
        v15 = 48 * result - 0x220000000000LL;
        v16 = MiLockPageInline(v15);
        v26 = v16;
        if ( (*(_QWORD *)(v15 + 16) & 4) != 0 )
        {
          v13 = (unsigned __int8)HIBYTE(*(_WORD *)(v15 + 16)) >> 4;
          PagingFileOffset = MiGetPagingFileOffset((__int64 *)(v15 + 16));
          v16 = v26;
          v14 = PagingFileOffset;
        }
        else
        {
          v13 = 16;
          v14 = v8;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v16 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v21 = ~(unsigned __int16)(-1LL << (v16 + 1));
            v22 = (v21 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v21;
            if ( v22 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        result = v26;
        __writecr8(v26);
        v5 = v25;
        v11 = a3;
        if ( !v9 )
        {
          result = qword_140C67048;
          v9 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v15 + 40) >> 43) & 0x3FFLL));
        }
        v6 = v23;
      }
      if ( v12 == v13 && v14 == v8 )
      {
        ++v7;
      }
      else
      {
        if ( v12 != 16 )
          result = MiMapPageFileHash(*(_QWORD *)(v9 + 8LL * v12 + 17056), v11, v10 - v7, v5, v7);
        v5 = v14;
        v12 = v13;
        v25 = v14;
        v8 = v14;
        v7 = 1;
      }
      v11 = a3;
      ++v6;
      ++v10;
      v23 = v6;
      ++v8;
    }
    while ( v10 < a4 );
    if ( v12 != 16 )
      return MiMapPageFileHash(*(_QWORD *)(v9 + 8LL * v12 + 17056), a3, v10 - v7, v5, v7);
  }
  return result;
}
