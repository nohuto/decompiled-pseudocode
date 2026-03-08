/*
 * XREFs of VfIoAllocateIrp1 @ 0x140ACA6E8
 * Callers:
 *     IovAllocateIrp @ 0x140ABDCE0 (IovAllocateIrp.c)
 * Callees:
 *     ViIrpAllocateLockedPacket @ 0x140ACAC64 (ViIrpAllocateLockedPacket.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140ADE8EC (VfIrpDatabaseEntryReleaseLock.c)
 */

__int64 __fastcall VfIoAllocateIrp1(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4)
{
  __int64 v4; // rdi
  __int64 LockedPacket; // rax

  v4 = 0LL;
  if ( !VfIoDisabled )
  {
    LockedPacket = ViIrpAllocateLockedPacket();
    if ( LockedPacket )
    {
      v4 = *(_QWORD *)LockedPacket;
      if ( a4 )
      {
        *(_OWORD *)(LockedPacket + 120) = *a4;
        *(_OWORD *)(LockedPacket + 136) = a4[1];
        *(_OWORD *)(LockedPacket + 152) = a4[2];
        *(_OWORD *)(LockedPacket + 168) = a4[3];
      }
      else
      {
        *(_QWORD *)(LockedPacket + 120) = 0LL;
      }
      VfIrpDatabaseEntryReleaseLock(LockedPacket);
    }
  }
  return v4;
}
