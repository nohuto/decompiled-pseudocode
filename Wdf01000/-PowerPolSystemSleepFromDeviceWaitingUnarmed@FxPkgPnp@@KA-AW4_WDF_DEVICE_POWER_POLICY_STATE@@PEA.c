__int64 __fastcall FxPkgPnp::PowerPolSystemSleepFromDeviceWaitingUnarmed(FxPkgPnp *This)
{
  __int64 v1; // r9
  __int64 result; // rax

  if ( !FxPkgPnp::PowerPolicyIsWakeEnabled(This) )
    return 1324LL;
  result = 1293LL;
  if ( ((*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 1272) + 184LL) + 8LL) >> 8) & 0xFu) > *(unsigned __int8 *)(v1 + 1033) )
    return 1324LL;
  return result;
}
