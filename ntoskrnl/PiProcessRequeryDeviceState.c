/*
 * XREFs of PiProcessRequeryDeviceState @ 0x140851994
 * Callers:
 *     PnpDeviceActionWorker @ 0x140203020 (PnpDeviceActionWorker.c)
 * Callees:
 *     PiProcessQueryDeviceState @ 0x140683054 (PiProcessQueryDeviceState.c)
 */

__int64 __fastcall PiProcessRequeryDeviceState(__int64 a1)
{
  _QWORD *v1; // rcx
  unsigned int v2; // ebx
  int v3; // eax

  v1 = *(_QWORD **)(a1 + 16);
  v2 = 0;
  v3 = *(_DWORD *)(*(_QWORD *)(v1[39] + 40LL) + 300LL);
  if ( v3 == 778 )
  {
    PiProcessQueryDeviceState(v1);
  }
  else if ( (unsigned int)(v3 - 789) <= 1 )
  {
    return (unsigned int)-1073741738;
  }
  return v2;
}
