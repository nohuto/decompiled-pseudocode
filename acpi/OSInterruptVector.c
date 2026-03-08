/*
 * XREFs of OSInterruptVector @ 0x1C00A8314
 * Callers:
 *     ACPIInterruptInitialize @ 0x1C0087E68 (ACPIInterruptInitialize.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     memset @ 0x1C0002180 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000ACAC (WPP_RECORDER_SF_d.c)
 *     AcpiIrqLibSetupSciInterrupt @ 0x1C0098DAC (AcpiIrqLibSetupSciInterrupt.c)
 */

__int64 __fastcall OSInterruptVector(ULONG_PTR BugCheckParameter3)
{
  __int64 DeviceExtension; // rbx
  int v3; // eax
  int v4; // edx
  unsigned int v5; // edi
  struct _DEVICE_OBJECT *v7; // rax
  NTSTATUS v8; // eax
  int v9; // edx
  unsigned int v10; // ebx
  int v11; // [rsp+28h] [rbp-60h]
  NTSTATUS v12; // [rsp+28h] [rbp-60h]
  struct _IO_CONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+30h] [rbp-58h] BYREF

  memset(&Parameters, 0, 0x4CuLL);
  DeviceExtension = ACPIInternalGetDeviceExtension(BugCheckParameter3);
  KeInitializeDpc(
    (PRKDPC)(DeviceExtension + 96),
    (PKDEFERRED_ROUTINE)ACPIInterruptServiceRoutineDPC,
    (PVOID)DeviceExtension);
  v3 = AcpiIrqLibSetupSciInterrupt(
         *(_WORD *)(*((_QWORD *)AcpiInformation + 1) + 46LL),
         *(void **)(DeviceExtension + 784));
  v5 = v3;
  if ( v3 >= 0 )
  {
    Parameters.Version = 2;
    Parameters.FullySpecified.InterruptObject = (PKINTERRUPT *)(DeviceExtension + 80);
    v7 = *(struct _DEVICE_OBJECT **)(DeviceExtension + 784);
    *(_WORD *)&Parameters.MessageBased.SynchronizeIrql = 0;
    Parameters.FullySpecified.PhysicalDeviceObject = v7;
    Parameters.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)ACPIInterruptServiceRoutine;
    *(_OWORD *)&Parameters.MessageBased.ServiceContext = (unsigned __int64)DeviceExtension;
    v8 = IoConnectInterruptEx(&Parameters);
    v10 = v8;
    if ( v8 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = v8;
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v9,
        22,
        11,
        (__int64)&WPP_e7f2dcd7c72737231dca15e7ae005379_Traceguids,
        v12);
    }
    return v10;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = v3;
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v4,
        22,
        10,
        (__int64)&WPP_e7f2dcd7c72737231dca15e7ae005379_Traceguids,
        v11);
    }
    return v5;
  }
}
