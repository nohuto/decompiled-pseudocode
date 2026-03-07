unsigned __int8 ViRaiseIrqlToDpcLevel()
{
  unsigned __int8 CurrentIrql; // r8
  unsigned __int8 v1; // cl
  _DWORD *SchedulerAssist; // r9
  __int64 v3; // rcx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    v1 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && v1 <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v1 == 2 )
          LODWORD(v3) = 4;
        else
          v3 = (-1LL << (v1 + 1)) & 4;
        SchedulerAssist[5] |= v3;
      }
    }
  }
  return CurrentIrql;
}
