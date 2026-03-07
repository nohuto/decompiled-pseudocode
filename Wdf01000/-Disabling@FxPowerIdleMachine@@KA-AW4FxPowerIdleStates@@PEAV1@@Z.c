__int64 __fastcall FxPowerIdleMachine::Disabling(FxPowerIdleMachine *This)
{
  return FxPowerIdleMachine::CancelIdleTimer(This) != 0 ? 5 : 31;
}
