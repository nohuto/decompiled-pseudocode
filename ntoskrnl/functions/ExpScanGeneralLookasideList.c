__int64 __fastcall ExpScanGeneralLookasideList(_QWORD *a1, KSPIN_LOCK *a2)
{
  KIRQL v4; // al
  _QWORD *v5; // r8
  unsigned __int64 v6; // rsi
  int v7; // edx
  unsigned int v8; // ecx
  int v9; // r10d
  int v10; // r9d
  int v11; // r9d
  __int64 result; // rax
  unsigned int v13; // eax
  unsigned int v14; // edx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v18; // zf

  v4 = KeAcquireSpinLockRaiseToDpc(a2);
  v5 = (_QWORD *)*a1;
  v6 = v4;
  if ( (_QWORD *)*a1 != a1 )
  {
    while ( 1 )
    {
      v7 = *((_DWORD *)v5 - 10) - *((_DWORD *)v5 + 5);
      *((_DWORD *)v5 + 5) = *((_DWORD *)v5 - 10);
      v8 = *((_DWORD *)v5 - 11) - *((_DWORD *)v5 + 4);
      v9 = *((unsigned __int16 *)v5 - 23);
      *((_DWORD *)v5 + 4) = *((_DWORD *)v5 - 11);
      if ( (_WORD)v9 != 0xFFFF )
        break;
LABEL_8:
      v5 = (_QWORD *)*v5;
      if ( v5 == a1 )
        goto LABEL_9;
    }
    v10 = *((unsigned __int16 *)v5 - 24);
    if ( v8 >= 0x4B )
    {
      v13 = 1000 * v7 / v8;
      if ( v13 >= 5 )
      {
        v14 = v13 * (v9 - v10) / 0x7D0 + 5;
        if ( v14 > 0x1E )
          v14 = 30;
        v11 = v14 + v10;
        if ( v11 > v9 )
          LOWORD(v11) = v9;
        goto LABEL_7;
      }
      v11 = v10 - 1;
    }
    else
    {
      v11 = v10 - 10;
    }
    if ( v11 < 4 )
      LOWORD(v11) = 4;
LABEL_7:
    *((_WORD *)v5 - 24) = v11;
    goto LABEL_8;
  }
LABEL_9:
  KxReleaseSpinLock((volatile signed __int64 *)a2);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
      v18 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v18 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v6);
  return result;
}
