/*
 * XREFs of UsbhFdoPnp_QueryDeviceRelations @ 0x1C000EDC0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhQueryBusRelations @ 0x1C000B7A0 (UsbhQueryBusRelations.c)
 *     UsbhFdoChainIrp @ 0x1C002996C (UsbhFdoChainIrp.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002D6A8 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhFdoPnp_QueryDeviceRelations(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int Length; // eax
  int v9; // r8d
  __int64 v10; // r9
  __int64 v11; // r10

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
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
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( !Length )
    return UsbhQueryBusRelations(a1, a2);
  v9 = 1363431999;
  if ( Length == 4 )
    v9 = 1363432052;
  Log(a1, 2, v9, (__int64)a2, 0LL);
  return UsbhFdoChainIrp(v11, v10);
}
