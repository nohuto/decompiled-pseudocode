/*
 * XREFs of VfSuspectDriversAllocateEntry @ 0x140A9A588
 * Callers:
 *     VfDriverEnableVerifierForAll @ 0x140A89C30 (VfDriverEnableVerifierForAll.c)
 *     VfSuspectDriversLoadCallback @ 0x140A9A8F8 (VfSuspectDriversLoadCallback.c)
 *     VfAddVerifierEntry @ 0x140A9C668 (VfAddVerifierEntry.c)
 *     VfVolatileApplyDifVerification @ 0x140A9CA48 (VfVolatileApplyDifVerification.c)
 *     VfTriageAddDrivers @ 0x140B53724 (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x140B53B88 (VfSuspectDriversParseRegistryString.c)
 * Callees:
 *     RtlUShortAdd @ 0x1402DE190 (RtlUShortAdd.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
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
