__int64 __fastcall MiReturnUnusedHugeDescriptors(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int8 v3; // al
  _QWORD *v4; // rsi
  unsigned __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v10; // zf
  _QWORD *v11; // rcx

  v1 = *(_QWORD *)(a1 + 88);
  v3 = MiLockHugePfn(v1);
  v4 = *(_QWORD **)(a1 + 144);
  *(_QWORD *)(a1 + 144) = 0LL;
  v5 = v3;
  v6 = ((v1 - qword_140C67A70) >> 3) & 0x3FFFFF;
  result = (unsigned int)~(1 << (v6 & 0x1F));
  _InterlockedAnd((volatile signed __int32 *)(qword_140C67A78 + 4 * ((unsigned __int64)(unsigned int)v6 >> 5)), result);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v5 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
      v10 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v10 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v5);
  while ( v4 )
  {
    v11 = v4;
    v4 = (_QWORD *)*v4;
    result = MiDeleteAcceleratorDescriptor(v11 + 4);
  }
  return result;
}
