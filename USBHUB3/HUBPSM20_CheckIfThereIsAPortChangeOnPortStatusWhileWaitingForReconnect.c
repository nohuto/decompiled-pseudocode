__int64 __fastcall HUBPSM20_CheckIfThereIsAPortChangeOnPortStatusWhileWaitingForReconnect(__int64 a1)
{
  return HUBHTX_CheckAndSelectIfAny20PortChangeSet(*(_QWORD *)(a1 + 960));
}
