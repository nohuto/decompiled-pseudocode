__int64 HalpInterruptThermalService()
{
  return ((__int64 (*)(void))HalpInterruptThermalServiceRoutine)();
}
