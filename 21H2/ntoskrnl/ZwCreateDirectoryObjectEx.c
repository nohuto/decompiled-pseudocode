/*
 * XREFs of ZwCreateDirectoryObjectEx @ 0x1403FB8A0
 * Callers:
 *     ObpInitializeRootNamespace @ 0x1407A0990 (ObpInitializeRootNamespace.c)
 *     MiCreatePartitionNamespace @ 0x1407A0B44 (MiCreatePartitionNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x1407A0DF8 (ObpCreateDosDevicesDirectory.c)
 *     ObCreateSiloRootDirectory @ 0x1409804D0 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateDirectoryObjectEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
