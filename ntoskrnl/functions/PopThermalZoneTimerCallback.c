BOOLEAN __fastcall PopThermalZoneTimerCallback(__int64 a1, __int64 a2)
{
  return IoCancelIrp(*(PIRP *)(a2 + 56));
}
