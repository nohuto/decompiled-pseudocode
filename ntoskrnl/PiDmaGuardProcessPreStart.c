/*
 * XREFs of PiDmaGuardProcessPreStart @ 0x1406F7574
 * Callers:
 *     PipProcessStartPhase1 @ 0x1406F7074 (PipProcessStartPhase1.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14038486C (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     PiIommuUnblockDevice @ 0x14084DB4C (PiIommuUnblockDevice.c)
 */

void __fastcall PiDmaGuardProcessPreStart(ULONG_PTR MaxDataSize)
{
  int v2; // eax
  ULONG_PTR v3; // rsi
  __int64 v4; // rax

  if ( *(_QWORD *)(MaxDataSize + 720) )
  {
    v2 = PiIommuUnblockDevice(MaxDataSize, 0LL);
    v3 = v2;
    if ( v2 < 0 )
    {
      IoAddTriageDumpDataBlock(MaxDataSize, (PVOID)0x388);
      if ( *(_WORD *)(MaxDataSize + 40) )
      {
        IoAddTriageDumpDataBlock(MaxDataSize + 40, (PVOID)2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(MaxDataSize + 48), (PVOID)*(unsigned __int16 *)(MaxDataSize + 40));
      }
      if ( *(_WORD *)(MaxDataSize + 56) )
      {
        IoAddTriageDumpDataBlock(MaxDataSize + 56, (PVOID)2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(MaxDataSize + 64), (PVOID)*(unsigned __int16 *)(MaxDataSize + 56));
      }
      v4 = *(_QWORD *)(MaxDataSize + 16);
      if ( v4 )
      {
        if ( *(_WORD *)(v4 + 56) )
        {
          IoAddTriageDumpDataBlock(v4 + 56, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(MaxDataSize + 16) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(MaxDataSize + 16) + 56LL));
        }
      }
      KeBugCheckEx(0xCAu, 0x13uLL, 0x1000uLL, v3, MaxDataSize);
    }
  }
}
