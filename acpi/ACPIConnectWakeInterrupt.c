NTSTATUS __fastcall ACPIConnectWakeInterrupt(__int64 a1, __int64 a2)
{
  struct _IO_CONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-50h] BYREF

  memset(&Parameters, 0, sizeof(Parameters));
  Parameters.FullySpecified.Vector = *(_DWORD *)(a2 + 32);
  Parameters.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)ACPIWakeEmulationInterruptServiceRoutine;
  Parameters.FullySpecified.PhysicalDeviceObject = *(PDEVICE_OBJECT *)(a1 + 784);
  Parameters.FullySpecified.InterruptMode = *(_DWORD *)(a2 + 36);
  Parameters.FullySpecified.ProcessorEnableMask = *(_QWORD *)(a2 + 40);
  Parameters.FullySpecified.InterruptObject = (PKINTERRUPT *)(a2 + 48);
  Parameters.Version = 1;
  Parameters.FullySpecified.Irql = 0;
  Parameters.FullySpecified.SynchronizeIrql = 0;
  Parameters.FullySpecified.ShareVector = 1;
  Parameters.FullySpecified.ServiceContext = (PVOID)a2;
  return IoConnectInterruptEx(&Parameters);
}
