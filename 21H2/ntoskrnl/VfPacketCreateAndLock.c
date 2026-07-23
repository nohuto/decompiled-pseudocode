/*
 * XREFs of VfPacketCreateAndLock @ 0x1409E29B8
 * Callers:
 *     IovpCallDriver1 @ 0x1409D0C4C (IovpCallDriver1.c)
 *     VfIoAllocateIrp2 @ 0x1409D21C8 (VfIoAllocateIrp2.c)
 *     ViIrpAllocateLockedPacket @ 0x1409D2750 (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140213400 (ExAllocateFromNPagedLookasideList.c)
 *     VfIrpDatabaseEntryInsertAndLock @ 0x1409E1858 (VfIrpDatabaseEntryInsertAndLock.c)
 */

char *__fastcall VfPacketCreateAndLock(unsigned __int64 a1)
{
  char *result; // rax
  __int64 v3; // rdx
  char *v4; // rbx
  __int64 v5; // r8
  _QWORD *v6; // rax

  result = (char *)ExAllocateFromNPagedLookasideList(&ViPacketLookaside);
  v4 = result;
  if ( result )
  {
    *((_DWORD *)result + 14) = 0;
    v5 = (__int64)result;
    v6 = result + 64;
    v6[1] = v6;
    *v6 = v6;
    LOBYTE(v6) = *(_BYTE *)(a1 + 66);
    *((_QWORD *)v4 + 12) = 0LL;
    v4[104] = 0;
    *((_QWORD *)v4 + 14) = 0LL;
    *((_WORD *)v4 + 92) = 0;
    v4[186] = 0;
    *((_DWORD *)v4 + 47) = 0;
    *((_QWORD *)v4 + 30) = 0LL;
    *((_DWORD *)v4 + 21) = 0;
    *((_QWORD *)v4 + 11) = 0LL;
    *((_QWORD *)v4 + 24) = 0LL;
    *((_QWORD *)v4 + 25) = 0LL;
    *((_DWORD *)v4 + 52) = 0;
    *((_QWORD *)v4 + 27) = 0LL;
    *((_QWORD *)v4 + 31) = 0LL;
    *((_QWORD *)v4 + 28) = 0LL;
    v4[80] = (char)v6;
    *((_DWORD *)v4 + 58) = MmVerifierData;
    VfIrpDatabaseEntryInsertAndLock(a1, v3, v5);
    return v4;
  }
  return result;
}
