/*
 * XREFs of IopOpenRegistryKey @ 0x1407690C4
 * Callers:
 *     IopReadDumpRegistry @ 0x1403BFBD0 (IopReadDumpRegistry.c)
 *     IopInitializeOfflineCrashDump @ 0x1403C97B8 (IopInitializeOfflineCrashDump.c)
 *     SecureDump_ReadRegistry @ 0x1403CBE88 (SecureDump_ReadRegistry.c)
 *     IopIsBitlockerOn @ 0x1403CDCC0 (IopIsBitlockerOn.c)
 *     IopAllowRemoteDASD @ 0x140507690 (IopAllowRemoteDASD.c)
 *     IopUnloadDriver @ 0x140768DB8 (IopUnloadDriver.c)
 *     IopBootLog @ 0x1407716E0 (IopBootLog.c)
 *     IopLoadUnloadDriver @ 0x140780720 (IopLoadUnloadDriver.c)
 *     pIoQueryDeviceDescription @ 0x14078AA64 (pIoQueryDeviceDescription.c)
 *     IoQueryDeviceDescription @ 0x14078AEF0 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x14078B004 (pIoQueryBusDescription.c)
 *     IopCopyBootLogRegistryToFile @ 0x14079A4DC (IopCopyBootLogRegistryToFile.c)
 *     IopRegistryOpenDeepestPath @ 0x1407B41F4 (IopRegistryOpenDeepestPath.c)
 *     IopSymlinkQueryEnabledClasses @ 0x1407CDB1C (IopSymlinkQueryEnabledClasses.c)
 *     IopSafebootDriverLoad @ 0x140891F74 (IopSafebootDriverLoad.c)
 *     IopLiveDumpInitRegistrySettings @ 0x140898510 (IopLiveDumpInitRegistrySettings.c)
 * Callees:
 *     ZwOpenKey @ 0x1403F9C60 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1403F9DC0 (ZwCreateKey.c)
 */

NTSTATUS __fastcall IopOpenRegistryKey(HANDLE *a1, void *a2, UNICODE_STRING *a3, ACCESS_MASK a4, char a5)
{
  OBJECT_ATTRIBUTES v6; // [rsp+40h] [rbp-38h] BYREF
  ULONG Disposition; // [rsp+88h] [rbp+10h] BYREF

  v6.ObjectName = a3;
  *(_QWORD *)&v6.Length = 48LL;
  *(_QWORD *)&v6.Attributes = 576LL;
  v6.RootDirectory = a2;
  Disposition = 0;
  *(_OWORD *)&v6.SecurityDescriptor = 0LL;
  if ( a5 )
    return ZwCreateKey(a1, a4, &v6, 0, 0LL, 1u, &Disposition);
  else
    return ZwOpenKey(a1, a4, &v6);
}
