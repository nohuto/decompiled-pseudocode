/*
 * XREFs of UsbhFdoPnp @ 0x1C001B630
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C001DE80 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002EAB8 (UsbhTrapFatal_Dbg.c)
 */

NTSTATUS __fastcall UsbhFdoPnp(__int64 a1, IRP *a2)
{
  __int64 v4; // rdi
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  int MinorFunction; // ecx
  KIRQL v7; // al
  PDEVICE_OBJECT *v9; // rax

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v4 = *(_QWORD *)(a1 + 64);
  if ( !v4 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v4 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MinorFunction = CurrentStackLocation->MinorFunction;
  *(_DWORD *)(v4 + 20) = MinorFunction;
  *(_BYTE *)((((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 1264), 1u) + 1) & 0xF)
           + v4
           + 1268) = MinorFunction;
  v7 = KeAcquireSpinLockRaiseToDpc(&HubG);
  qword_1C006C500 = (__int64)&dword_1C006C508;
  if ( *(_DWORD *)(v4 + 1256) && CurrentStackLocation->MinorFunction < 0x20u )
  {
    qword_1C006C500 = 0LL;
    KeReleaseSpinLock(&HubG, v7);
    return off_1C005F1A8[2 * CurrentStackLocation->MinorFunction](a1, a2);
  }
  else
  {
    qword_1C006C500 = 0LL;
    KeReleaseSpinLock(&HubG, v7);
    v9 = (PDEVICE_OBJECT *)FdoExt(a1);
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    return IofCallDriver(v9[151], a2);
  }
}
