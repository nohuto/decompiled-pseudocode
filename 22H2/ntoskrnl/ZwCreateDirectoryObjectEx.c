/*
 * XREFs of ZwCreateDirectoryObjectEx @ 0x14041BC00
 * Callers:
 *     ObpInitializeRootNamespace @ 0x14081E004 (ObpInitializeRootNamespace.c)
 *     MiCreatePartitionNamespace @ 0x14081E5D4 (MiCreatePartitionNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x1408596D0 (ObpCreateDosDevicesDirectory.c)
 *     ObCreateSiloRootDirectory @ 0x140A73B70 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateDirectoryObjectEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
