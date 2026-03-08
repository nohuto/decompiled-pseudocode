/*
 * XREFs of IopOpenRegistryKey @ 0x1407803E0
 * Callers:
 *     IopReadDumpRegistry @ 0x140392204 (IopReadDumpRegistry.c)
 *     IoInitializeLiveDump @ 0x1403A9880 (IoInitializeLiveDump.c)
 *     SecureDump_ReadRegistry @ 0x1403AB0B8 (SecureDump_ReadRegistry.c)
 *     IopInitializeOfflineCrashDump @ 0x1403AB95C (IopInitializeOfflineCrashDump.c)
 *     IopIsBitlockerOn @ 0x1403AE388 (IopIsBitlockerOn.c)
 *     IopAllowRemoteDASD @ 0x1405567C4 (IopAllowRemoteDASD.c)
 *     IopBootLog @ 0x14072A928 (IopBootLog.c)
 *     IoQueryDeviceDescription @ 0x14077F960 (IoQueryDeviceDescription.c)
 *     pIoQueryDeviceDescription @ 0x14077FA74 (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x14077FF18 (pIoQueryBusDescription.c)
 *     IopLoadUnloadDriver @ 0x140780340 (IopLoadUnloadDriver.c)
 *     IopCopyBootLogRegistryToFile @ 0x140818E28 (IopCopyBootLogRegistryToFile.c)
 *     IopRegistryOpenDeepestPath @ 0x140836718 (IopRegistryOpenDeepestPath.c)
 *     IopUnloadDriver @ 0x1408549C8 (IopUnloadDriver.c)
 *     IopSymlinkQueryEnabledClasses @ 0x14085955C (IopSymlinkQueryEnabledClasses.c)
 *     IopInitializeDumpPolicySettings @ 0x14085D5A4 (IopInitializeDumpPolicySettings.c)
 *     IopSafebootDriverLoad @ 0x1409426D4 (IopSafebootDriverLoad.c)
 *     IopLiveDumpInitRegistrySettings @ 0x14094B85C (IopLiveDumpInitRegistrySettings.c)
 * Callees:
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1404126B0 (ZwCreateKey.c)
 */

NTSTATUS __fastcall IopOpenRegistryKey(HANDLE *a1, void *a2, UNICODE_STRING *a3, ACCESS_MASK a4, char a5)
{
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG Disposition; // [rsp+88h] [rbp+18h] BYREF

  ObjectAttributes.ObjectName = a3;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  Disposition = 0;
  ObjectAttributes.RootDirectory = a2;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( a5 )
    return ZwCreateKey(a1, a4, &ObjectAttributes, 0, 0LL, 1u, &Disposition);
  else
    return ZwOpenKey(a1, a4, &ObjectAttributes);
}
