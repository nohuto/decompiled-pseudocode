/*
 * XREFs of VfSuspectDriversAllocateEntry @ 0x1409DA828
 * Callers:
 *     VfDriverEnableVerifierForAll @ 0x1409C97B8 (VfDriverEnableVerifierForAll.c)
 *     VfSuspectDriversLoadCallback @ 0x1409DAB98 (VfSuspectDriversLoadCallback.c)
 *     VfAddVerifierEntry @ 0x1409ED9D8 (VfAddVerifierEntry.c)
 *     VfTriageAddDrivers @ 0x140A94974 (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x140A94DD8 (VfSuspectDriversParseRegistryString.c)
 * Callees:
 *     RtlUShortAdd @ 0x14023071C (RtlUShortAdd.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
