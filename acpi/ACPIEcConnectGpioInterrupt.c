NTSTATUS __fastcall ACPIEcConnectGpioInterrupt(char *DeferredContext)
{
  KINTERRUPT_MODE v2; // eax
  _IO_CONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-50h] BYREF

  KeInitializeDpc((PRKDPC)(DeferredContext + 816), (PKDEFERRED_ROUTINE)ACPIEcGpioDpcRoutine, DeferredContext);
  memset(&Parameters, 0, sizeof(Parameters));
  Parameters.FullySpecified.PhysicalDeviceObject = *(PDEVICE_OBJECT *)DeferredContext;
  Parameters.FullySpecified.InterruptObject = (PKINTERRUPT *)(DeferredContext + 808);
  Parameters.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)ACPIEcGpioServiceRoutine;
  Parameters.FullySpecified.Vector = *((_DWORD *)DeferredContext + 222);
  Parameters.FullySpecified.Irql = DeferredContext[884];
  Parameters.FullySpecified.SynchronizeIrql = Parameters.FullySpecified.Irql;
  v2 = DeferredContext[882] & 1;
  Parameters.Version = 1;
  Parameters.FullySpecified.InterruptMode = v2;
  Parameters.FullySpecified.ProcessorEnableMask = *(_QWORD *)(DeferredContext + 892);
  Parameters.FullySpecified.ShareVector = DeferredContext[881];
  *(_OWORD *)&Parameters.MessageBased.ServiceContext = (unsigned __int64)DeferredContext;
  return IoConnectInterruptEx(&Parameters);
}
