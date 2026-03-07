struct _KPRCB *__fastcall KiAcquireInterruptConnectLock(int a1, unsigned __int8 *a2, struct _GROUP_AFFINITY *a3)
{
  __int64 v5; // r9
  unsigned __int8 CurrentIrql; // r8
  struct _KPRCB *result; // rax
  __int64 v8; // rdx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-18h] BYREF

  Affinity = 0LL;
  v5 = KiProcessorBlock[a1];
  Affinity.Group = *(unsigned __int8 *)(v5 + 208);
  Affinity.Mask = *(_QWORD *)(v5 + 200);
  KeSetSystemGroupAffinityThread(&Affinity, a3);
  if ( a1 != KeGetCurrentPrcb()->Number )
    __fastfail(0x28u);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  result = (struct _KPRCB *)(unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    result = KeGetCurrentPrcb();
    if ( CurrentIrql == 15 )
      LODWORD(v8) = 0x8000;
    else
      v8 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    *((_DWORD *)result->SchedulerAssist + 5) |= v8;
  }
  *a2 = CurrentIrql;
  return result;
}
