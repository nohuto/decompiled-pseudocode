/*
 * XREFs of MiStartDpcGang @ 0x140386B74
 * Callers:
 *     MiAllocateFastLargePagesForMdl @ 0x1403863B4 (MiAllocateFastLargePagesForMdl.c)
 *     MiInitializeDynamicPfns @ 0x140618AB8 (MiInitializeDynamicPfns.c)
 * Callees:
 *     MiGetGangAssignment @ 0x140386CC4 (MiGetGangAssignment.c)
 *     MiDoGangAssignment @ 0x140386D14 (MiDoGangAssignment.c)
 *     KeGenericCallDpcEx @ 0x1403C07D0 (KeGenericCallDpcEx.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiStartDpcGang(__int64 *a1)
{
  unsigned __int64 v2; // rcx
  __int64 result; // rax
  BOOL v4; // esi
  int v5; // eax
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  __int64 v8; // rdx
  const void *v9; // rdx
  void *v10; // rcx
  size_t v11; // r8
  unsigned __int64 v12; // r10
  __int64 v13; // r11
  unsigned __int64 v14; // rdi
  __int64 v15; // r8
  unsigned __int64 v16; // r9
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v19; // r9
  int v20; // eax
  bool v21; // zf
  __int64 v22; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((unsigned int *)a1 + 47);
  v22 = 0LL;
  result = *((unsigned int *)a1 + 46);
  *((_DWORD *)a1 + 51) = 0;
  v4 = 1;
  *((_DWORD *)a1 + 44) = 0;
  if ( (result & 1) != 0 )
  {
    v12 = a1[1];
    v13 = *a1;
    v14 = v12 / v2;
    v15 = 0LL;
    v16 = v2;
    do
    {
      *(_QWORD *)(v15 + a1[2]) = v13;
      v13 += v14;
      v15 += 16LL;
      *(_QWORD *)(v15 + a1[2] - 8) = v14;
      --v16;
    }
    while ( v16 );
    *(_QWORD *)(a1[2] + 16 * v2 - 8) += v12 % v2;
  }
  else if ( !*((_WORD *)a1 + 77) )
  {
    return result;
  }
  v5 = *((_DWORD *)a1 + 46);
  if ( (v5 & 0x80u) == 0 )
  {
    if ( *((_WORD *)a1 + 77) == 1 )
      v4 = (v5 & 2) != 0;
  }
  else
  {
    v4 = 0;
  }
  while ( 1 )
  {
    *((_DWORD *)a1 + 44) = 0;
    if ( v4 )
    {
      result = KeGenericCallDpcEx(MiDpcGangTarget, a1);
    }
    else
    {
      MiGetGangAssignment(a1, &v22);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql == 2 )
          LODWORD(v8) = 4;
        else
          v8 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v8;
      }
      MiDoGangAssignment(a1, &v22);
      if ( KiIrqlFlags )
      {
        v17 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v19 = CurrentPrcb->SchedulerAssist;
          v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v21 = (v20 & v19[5]) == 0;
          v19[5] &= v20;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
    if ( !*((_DWORD *)a1 + 51) )
      break;
    v9 = (const void *)a1[27];
    v10 = (void *)a1[28];
    v11 = 16LL * *((unsigned __int16 *)a1 + 104);
    *((_DWORD *)a1 + 51) = 0;
    memmove(v10, v9, v11);
  }
  return result;
}
