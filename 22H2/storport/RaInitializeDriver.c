/*
 * XREFs of RaInitializeDriver @ 0x1C007A25C
 * Callers:
 *     StorPortInitialize @ 0x1C0035ED0 (StorPortInitialize.c)
 * Callees:
 *     McGenEventRegister_EtwRegister @ 0x1C0034178 (McGenEventRegister_EtwRegister.c)
 *     RaidAddPortDriver @ 0x1C003559C (RaidAddPortDriver.c)
 *     RaDuplicateUnicodeString @ 0x1C00445E4 (RaDuplicateUnicodeString.c)
 *     StorpRegisterTraceLogging @ 0x1C007BE04 (StorpRegisterTraceLogging.c)
 */

__int64 __fastcall RaInitializeDriver(__int64 a1, _QWORD *a2, __int64 a3, const UNICODE_STRING *a4)
{
  if ( MEMORY[0xFFFFF780000003C6] )
    UseQPCTime = 1;
  if ( _InterlockedIncrement(&g_RaidEtwRefCount) == 1 )
  {
    McGenEventRegister_EtwRegister();
    StorpRegisterTraceLogging();
  }
  a2[14] = RaDriverCreateIrp;
  a2[16] = RaDriverCloseIrp;
  a2[28] = RaDriverDeviceControlIrp;
  a2[29] = RaDriverScsiIrp;
  a2[41] = RaDriverPnpIrp;
  a2[36] = RaDriverPowerIrp;
  a2[37] = RaDriverSystemControlIrp;
  *(_QWORD *)(a2[6] + 8LL) = RaDriverAddDevice;
  a2[12] = 0LL;
  a2[13] = RaDriverUnload;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a3;
  RaDuplicateUnicodeString((PUNICODE_STRING)(a1 + 40), a4, a3, (__int64)a2);
  RaidAddPortDriver(a3, a1);
  return 0LL;
}
