/*
 * XREFs of UsbhPdoPnp @ 0x1C001E860
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F4F0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_c @ 0x1C003AEF4 (WPP_RECORDER_SF_c.c)
 */

__int64 __fastcall UsbhPdoPnp(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  _DWORD *v4; // rax
  int v5; // edx
  int v6; // r8d
  _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  int MinorFunction; // r10d
  __int64 v9; // rax
  unsigned int Status; // edi

  v4 = PdoExt((__int64)a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MinorFunction = CurrentStackLocation->MinorFunction;
  v4[293] = MinorFunction;
  *((_BYTE *)v4 + (((unsigned __int8)_InterlockedExchangeAdd(v4 + 222, 1u) + 1) & 0xF) + 892) = MinorFunction;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_c(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      v6,
      15,
      (__int64)&WPP_70750b4e52e537afa0d3aa3795e637f0_Traceguids,
      CurrentStackLocation->MinorFunction);
  v9 = CurrentStackLocation->MinorFunction;
  if ( (unsigned __int8)v9 >= 0x20u )
  {
    Status = a2->IoStatus.Status;
    IofCompleteRequest(a2, 0);
  }
  else
  {
    return (unsigned int)off_1C005DA98[2 * v9](a1, a2);
  }
  return Status;
}
