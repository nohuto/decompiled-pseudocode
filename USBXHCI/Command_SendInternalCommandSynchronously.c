NTSTATUS __fastcall Command_SendInternalCommandSynchronously(__int64 a1, __int64 a2)
{
  *(_WORD *)(a2 + 70) = 3;
  Command_SendCommand(a1, a2 + 8);
  return KeWaitForSingleObject((PVOID)(a2 + 104), Executive, 0, 0, 0LL);
}
