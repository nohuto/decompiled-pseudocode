/*
 * XREFs of VfSuspectDriversAllocateEntry @ 0x1409D9838
 * Callers:
 *     VfDriverEnableVerifierForAll @ 0x1409C87C8 (VfDriverEnableVerifierForAll.c)
 *     VfSuspectDriversLoadCallback @ 0x1409D9BA8 (VfSuspectDriversLoadCallback.c)
 *     VfAddVerifierEntry @ 0x1409EC9E8 (VfAddVerifierEntry.c)
 *     VfTriageAddDrivers @ 0x140A93974 (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x140A93DD8 (VfSuspectDriversParseRegistryString.c)
 * Callees:
 *     RtlUShortAdd @ 0x140309CBC (RtlUShortAdd.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

void **__fastcall VfSuspectDriversAllocateEntry(const void **a1)
{
  USHORT v2; // cx
  USHORT v3; // di
  void **PoolWithTag; // rax
  void **v5; // rbx
  USHORT v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_WORD *)a1 + 1);
  v7 = v2 + 2;
  if ( RtlUShortAdd(v2, 2u, &v7) == -1073741675 )
    v3 = -1;
  else
    v3 = v7;
  PoolWithTag = (void **)ExAllocatePoolWithTag(NonPagedPoolNx, v3 + 40LL, 0x44536656u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    *((_DWORD *)PoolWithTag + 4) = 0;
    *((_DWORD *)PoolWithTag + 5) = 0;
    PoolWithTag[4] = PoolWithTag + 5;
    *((_WORD *)PoolWithTag + 12) = *(_WORD *)a1;
    *((_WORD *)PoolWithTag + 13) = v3;
    memset(PoolWithTag + 5, 0, v3);
    memmove(v5[4], a1[1], *(unsigned __int16 *)a1);
  }
  return v5;
}
