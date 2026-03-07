KIRQL __stdcall KzRaiseIrql(KIRQL NewIrql)
{
  KIRQL result; // al
  _DWORD *SchedulerAssist; // r10
  int v3; // r8d

  result = KeGetCurrentIrql();
  __writecr8(NewIrql);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && result <= 0xFu && (unsigned __int8)(NewIrql - 2) <= 0xDu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( result == NewIrql )
      v3 = 1 << NewIrql;
    else
      v3 = (-1LL << (result + 1)) & ((1LL << (NewIrql + 1)) - 1) & 0xFFFFFFFC;
    SchedulerAssist[5] |= v3;
  }
  return result;
}
