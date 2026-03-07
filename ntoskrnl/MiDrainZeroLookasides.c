_QWORD *__fastcall MiDrainZeroLookasides(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned int v4; // r13d
  unsigned int v6; // ebx
  unsigned int v7; // r15d
  _QWORD *result; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // r12d
  _WORD *v12; // rsi
  PSLIST_ENTRY v13; // rdi
  unsigned __int8 v14; // di
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  bool v19; // zf
  unsigned int v20; // [rsp+20h] [rbp-68h]
  __int64 v21; // [rsp+28h] [rbp-60h]
  _QWORD *v22; // [rsp+30h] [rbp-58h]
  __int64 v23; // [rsp+38h] [rbp-50h]
  unsigned __int64 v24; // [rsp+40h] [rbp-48h]
  struct _SLIST_ENTRY *Next; // [rsp+48h] [rbp-40h]
  unsigned __int8 v26; // [rsp+98h] [rbp+10h]
  unsigned int v27; // [rsp+A0h] [rbp+18h]

  v4 = dword_140C6577C;
  if ( a2 )
    v4 = a4 + 1;
  v27 = v4;
  v6 = 513;
  v7 = a2 != 0 ? a4 : 0;
  v20 = v7;
  v24 = a2 + 48 * a3;
  result = (_QWORD *)(a1 + 6808);
  v9 = 2LL;
  v22 = result;
  v23 = 2LL;
  do
  {
    v10 = *result;
    v11 = v7;
    v21 = *result;
    if ( v7 < v4 )
    {
      v12 = (_WORD *)(v10 + 16LL * v7);
      do
      {
        if ( *v12 )
        {
          v13 = RtlpInterlockedFlushSList((PSLIST_HEADER)(v10 + 16LL * v11));
          if ( v13 )
          {
            do
            {
              Next = v13->Next;
              if ( a2 && ((unsigned __int64)v13 < a2 || (unsigned __int64)v13 >= v24) )
                v6 &= ~0x40u;
              else
                v6 |= 0x40u;
              v13[1].Next = (_SLIST_ENTRY *)MiUpdatePageFileHighInPte((__int64)v13[1].Next, 0LL);
              v26 = MiLockPageInline((__int64)v13);
              MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((__int64)&v13[0x22000000000LL] >> 4), v6);
              _InterlockedAnd64((volatile signed __int64 *)&v13[1].Next + 1, 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
              {
                v14 = v26;
                if ( v26 <= 0xFu && CurrentIrql >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  SchedulerAssist = CurrentPrcb->SchedulerAssist;
                  v18 = ~(unsigned __int16)(-1LL << (v26 + 1));
                  v19 = (v18 & SchedulerAssist[5]) == 0;
                  SchedulerAssist[5] &= v18;
                  if ( v19 )
                    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
              }
              else
              {
                v14 = v26;
              }
              __writecr8(v14);
              v13 = Next;
            }
            while ( Next );
            v4 = v27;
          }
          v10 = v21;
        }
        ++v11;
        v12 += 8;
      }
      while ( v11 < v4 );
      v7 = v20;
      result = v22;
      v9 = v23;
    }
    ++result;
    v6 = v6 & 0xFFFFFFFC | 2;
    v22 = result;
    v23 = --v9;
  }
  while ( v9 );
  return result;
}
