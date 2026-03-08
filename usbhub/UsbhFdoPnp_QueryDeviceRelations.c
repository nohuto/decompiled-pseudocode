/*
 * XREFs of UsbhFdoPnp_QueryDeviceRelations @ 0x1C0005240
 * Callers:
 *     <none>
 * Callees:
 *     UsbhQueryBusRelations @ 0x1C0008DD0 (UsbhQueryBusRelations.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhFdoChainIrp @ 0x1C002A33C (UsbhFdoChainIrp.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002E078 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhFdoPnp_QueryDeviceRelations(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  int v9; // r8d
  __int64 v10; // r9
  __int64 v11; // r10

  v2 = *(_QWORD *)(a2 + 184);
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v5 = *(_QWORD *)(a1 + 64);
  if ( !v5 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v5 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v5);
  if ( (UsbhLogMask & 2) != 0 )
  {
    v6 = *(_QWORD *)(v5 + 888)
       + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v5 + 880)) & *(_DWORD *)(v5 + 884));
    *(_DWORD *)v6 = 1380209000;
    *(_QWORD *)(v6 + 8) = 0LL;
    *(_QWORD *)(v6 + 16) = a2;
    *(_QWORD *)(v6 + 24) = 0LL;
  }
  v7 = *(_DWORD *)(v2 + 8);
  if ( !v7 )
    return UsbhQueryBusRelations(a1, a2);
  v9 = 1363431999;
  if ( v7 == 4 )
    v9 = 1363432052;
  Log(a1, 2, v9, a2, 0LL);
  return UsbhFdoChainIrp(v11, v10);
}
