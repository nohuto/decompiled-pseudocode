/*
 * XREFs of EtwpFreePartitionMemory @ 0x1405FEFB0
 * Callers:
 *     EtwpFreeTraceBuffer @ 0x14028DAD0 (EtwpFreeTraceBuffer.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x14027CCB0 (MmUnmapLockedPages.c)
 *     MiFreePagesFromMdl @ 0x1402C0DD0 (MiFreePagesFromMdl.c)
 *     EtwpUnregisterPartitionPages @ 0x1405FF430 (EtwpUnregisterPartitionPages.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreePartitionMemory(__int64 a1, void *a2)
{
  struct _MDL *v3; // rax
  struct _MDL *v4; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  v3 = (struct _MDL *)EtwpUnregisterPartitionPages(&v5);
  v4 = v3;
  if ( v3 )
  {
    MmUnmapLockedPages(a2, v3);
    MiFreePagesFromMdl((ULONG_PTR)v4, 0);
    ExFreePoolWithTag(v4, 0);
  }
}
