/*
 * XREFs of PopBatteryIrpComplete @ 0x1405967A0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     PopBatteryQueueWork @ 0x1403C0538 (PopBatteryQueueWork.c)
 */

__int64 __fastcall PopBatteryIrpComplete(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  bool v4; // bl
  int v5; // edx

  v3 = *(_DWORD *)(a2 + 48);
  if ( v3 == -1073741536 )
  {
    v4 = 0;
  }
  else
  {
    v5 = *(_DWORD *)(a3 + 104);
    v4 = 1;
    if ( v3 >= 0 )
    {
      if ( !v5 )
      {
        *(_DWORD *)(a3 + 108) = *(_DWORD *)(a3 + 168);
        *(_DWORD *)(a3 + 104) = 1;
      }
    }
    else
    {
      *(_DWORD *)(a3 + 104) = v5 != 0 ? 2 : 4;
      v4 = v5 != 0;
    }
  }
  KeSetEvent((PRKEVENT)(a3 + 80), 0, 0);
  if ( v4 )
    PopBatteryQueueWork(1u);
  return 3221225494LL;
}
