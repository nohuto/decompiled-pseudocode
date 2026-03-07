__int64 __fastcall PopDirectedDripsDiagQueryAndResetPnpAccounting(__int64 a1, _QWORD *a2, __int128 *a3, _OWORD *a4)
{
  KIRQL v7; // al
  __int64 v8; // rcx
  char v9; // si
  unsigned __int64 v10; // rbx
  __int128 v11; // xmm0
  _OWORD *v12; // rdi
  __int64 v13; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v17; // zf

  v7 = KeAcquireSpinLockRaiseToDpc(&qword_140C38AD0);
  v9 = byte_140C38B50;
  v10 = v7;
  if ( byte_140C38B50 )
    PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe(v8, 0);
  v11 = xmmword_140C38C50;
  *a2 = qword_140C38B58;
  *a3 = v11;
  a3[1] = xmmword_140C38C60;
  a3[2] = xmmword_140C38C70;
  a3[3] = xmmword_140C38C80;
  a3[4] = xmmword_140C38C90;
  a3[5] = xmmword_140C38CA0;
  a3[6] = xmmword_140C38CB0;
  *a4 = *(_OWORD *)qword_140C38B70;
  a4[1] = *(_OWORD *)&qword_140C38B70[2];
  a4[2] = *(_OWORD *)&qword_140C38B70[4];
  a4[3] = *(_OWORD *)&qword_140C38B70[6];
  a4[4] = *(_OWORD *)&qword_140C38B70[8];
  a4[5] = *(_OWORD *)&qword_140C38B70[10];
  a4[6] = *(_OWORD *)&qword_140C38B70[12];
  v12 = a4 + 8;
  *(v12 - 1) = *(_OWORD *)&qword_140C38B70[14];
  *v12 = *(_OWORD *)&qword_140C38B70[16];
  v12[1] = *(_OWORD *)&qword_140C38B70[18];
  v12[2] = *(_OWORD *)&qword_140C38B70[20];
  v12[3] = *(_OWORD *)&qword_140C38B70[22];
  v12[4] = *(_OWORD *)&qword_140C38B70[24];
  v12[5] = *(_OWORD *)&qword_140C38B70[26];
  qword_140C38B58 = 0LL;
  memset(&xmmword_140C38C50, 0, 0x70uLL);
  memset(qword_140C38B70, 0, sizeof(qword_140C38B70));
  if ( v9 )
    PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe(v13, 1);
  result = KxReleaseSpinLock((volatile signed __int64 *)&qword_140C38AD0);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v10 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
      v17 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v17 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v10);
  return result;
}
