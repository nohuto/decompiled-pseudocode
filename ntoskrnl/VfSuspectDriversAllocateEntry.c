/*
 * XREFs of VfSuspectDriversAllocateEntry @ 0x140AD7394
 * Callers:
 *     VfDriverEnableVerifierForAll @ 0x140AC7618 (VfDriverEnableVerifierForAll.c)
 *     VfSuspectDriversLoadCallback @ 0x140AD7704 (VfSuspectDriversLoadCallback.c)
 *     VfAddVerifierEntry @ 0x140ADA630 (VfAddVerifierEntry.c)
 *     VfVolatileApplyDifVerification @ 0x140ADAA10 (VfVolatileApplyDifVerification.c)
 *     VfSuspectDriversParseRegistryString @ 0x140B93B7C (VfSuspectDriversParseRegistryString.c)
 *     VfTriageAddDrivers @ 0x140B93E98 (VfTriageAddDrivers.c)
 * Callees:
 *     RtlUShortAdd @ 0x140202574 (RtlUShortAdd.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall VfSuspectDriversAllocateEntry(const void **a1)
{
  USHORT v2; // cx
  USHORT v3; // di
  __int64 Pool2; // rax
  __int64 v5; // rbx
  USHORT v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_WORD *)a1 + 1);
  v7 = v2 + 2;
  if ( RtlUShortAdd(v2, 2u, &v7) == -1073741675 )
    v3 = -1;
  else
    v3 = v7;
  Pool2 = ExAllocatePool2(64LL, v3 + 40LL, 0x44536656u);
  v5 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 16) = 0;
    *(_DWORD *)(Pool2 + 20) = 0;
    *(_QWORD *)(Pool2 + 32) = Pool2 + 40;
    *(_WORD *)(Pool2 + 24) = *(_WORD *)a1;
    *(_WORD *)(Pool2 + 26) = v3;
    memset((void *)(Pool2 + 40), 0, v3);
    memmove(*(void **)(v5 + 32), a1[1], *(unsigned __int16 *)a1);
  }
  return v5;
}
