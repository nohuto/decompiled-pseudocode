/*
 * XREFs of UsbhSelectConfigOrInterfaceComplete @ 0x1C002E250
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhDecPdoIoCount @ 0x1C0014E84 (UsbhDecPdoIoCount.c)
 *     UsbhGetPortData @ 0x1C0016CA0 (UsbhGetPortData.c)
 *     UsbhCalculateInterfaceBandwidth @ 0x1C002A640 (UsbhCalculateInterfaceBandwidth.c)
 *     UsbhCancelOutOfBandwidthTimer @ 0x1C002A6F4 (UsbhCancelOutOfBandwidthTimer.c)
 *     UsbhSetOutOfBandwidthTimer @ 0x1C002E4CC (UsbhSetOutOfBandwidthTimer.c)
 */

__int64 __fastcall UsbhSelectConfigOrInterfaceComplete(PDEVICE_OBJECT DeviceObject, ULONG_PTR Irp, __int64 Context)
{
  _DWORD *v5; // rbx
  unsigned __int16 v6; // dx
  __int64 v7; // rcx
  _IO_SECURITY_CONTEXT *v8; // rdi
  __int64 PortData; // r14
  unsigned int *v10; // rbp
  unsigned int *i; // rdi

  v5 = PdoExt(Context);
  FdoExt(*((_QWORD *)v5 + 148));
  v6 = *((_WORD *)v5 + 714);
  v7 = *((_QWORD *)v5 + 148);
  if ( *(int *)(Irp + 48) < 0 )
  {
    v8 = *(_IO_SECURITY_CONTEXT **)(*(_QWORD *)(Irp + 184) + 8LL);
    PortData = UsbhGetPortData(v7, v6);
    UsbhCancelOutOfBandwidthTimer(*((_QWORD *)v5 + 148), *((_WORD *)v5 + 714));
    if ( PortData && HIDWORD(v8->SecurityQos) == -2147481856 )
    {
      UsbhSetOutOfBandwidthTimer(*((_QWORD *)v5 + 148), *((unsigned __int16 *)v5 + 714), *(unsigned int *)(Irp + 48));
      *(_DWORD *)(PortData + 436) = 0;
      if ( WORD1(v8->SecurityQos) )
      {
        if ( WORD1(v8->SecurityQos) == 1 )
          *(_DWORD *)(PortData + 436) = UsbhCalculateInterfaceBandwidth(
                                          *((_QWORD *)v5 + 148),
                                          Context,
                                          (__int64)&v8[1].AccessState);
      }
      else
      {
        v10 = (unsigned int *)((char *)v8 + LOWORD(v8->SecurityQos));
        for ( i = &v8[1].DesiredAccess; i < v10; i = (unsigned int *)((char *)i + *(unsigned __int16 *)i) )
          *(_DWORD *)(PortData + 436) += UsbhCalculateInterfaceBandwidth(*((_QWORD *)v5 + 148), Context, (__int64)i);
      }
    }
  }
  else
  {
    UsbhCancelOutOfBandwidthTimer(v7, v6);
  }
  UsbhDecPdoIoCount(Context, Irp);
  if ( *(_BYTE *)(Irp + 65) )
    *(_BYTE *)(*(_QWORD *)(Irp + 184) + 3LL) |= 1u;
  return 0LL;
}
