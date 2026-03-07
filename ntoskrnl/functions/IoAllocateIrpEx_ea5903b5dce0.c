PSLIST_ENTRY __fastcall IoAllocateIrpEx(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // bl
  unsigned __int8 v4; // di
  int IsEnabled; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = a3;
  v4 = a2;
  if ( !IopDispatchAllocateIrp )
    return IopAllocateIrpPrivate(a1, a2, a3);
  if ( IopDispatchAllocateIrp == 2 )
    return (PSLIST_ENTRY)IopAllocateIrpWithExtension(a1, a2, a3);
  if ( ViVerifyAllDrivers == 1 )
    return (PSLIST_ENTRY)IovAllocateIrp(a1, a2, a3, retaddr);
  IsEnabled = VfTargetDriversIsEnabled(retaddr);
  a3 = v3;
  a2 = v4;
  if ( !IsEnabled )
    return (PSLIST_ENTRY)IopAllocateIrpWithExtension(a1, a2, a3);
  else
    return (PSLIST_ENTRY)IovAllocateIrp(a1, v4, v3, retaddr);
}
