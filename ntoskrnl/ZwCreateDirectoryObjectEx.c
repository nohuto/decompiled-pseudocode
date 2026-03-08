/*
 * XREFs of ZwCreateDirectoryObjectEx @ 0x140413870
 * Callers:
 *     ObpInitializeRootNamespace @ 0x1408093C4 (ObpInitializeRootNamespace.c)
 *     MiCreatePartitionNamespace @ 0x140809994 (MiCreatePartitionNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x140855150 (ObpCreateDosDevicesDirectory.c)
 *     ObCreateSiloRootDirectory @ 0x140A70E70 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateDirectoryObjectEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
