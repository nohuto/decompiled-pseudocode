/*
 * XREFs of PopInternalSaveStackToDumpFile @ 0x140580D7C
 * Callers:
 *     PopInternalAddToDumpFile @ 0x140580CC0 (PopInternalAddToDumpFile.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14038486C (IoAddTriageDumpDataBlock.c)
 *     KiIsAddressRangeValid @ 0x1403849BC (KiIsAddressRangeValid.c)
 */

void __fastcall PopInternalSaveStackToDumpFile(__int64 MaxDataSize)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rcx

  if ( MaxDataSize )
  {
    v1 = MaxDataSize;
    do
    {
      if ( !KiIsAddressRangeValid(v1, 336LL) )
        break;
      IoAddTriageDumpDataBlock(v1, (PVOID)*(unsigned __int16 *)(v1 + 2));
      v2 = *(_QWORD *)(v1 + 8);
      if ( v2 )
      {
        if ( KiIsAddressRangeValid(*(_QWORD *)(v1 + 8), 336LL) )
        {
          IoAddTriageDumpDataBlock(v2, (PVOID)(unsigned int)*(__int16 *)(v2 + 2));
          v3 = *(_QWORD *)(v2 + 64);
          if ( v3 )
            IoAddTriageDumpDataBlock(v3, (PVOID)*(unsigned __int16 *)(v2 + 56));
        }
      }
      v4 = *(_QWORD *)(v1 + 312);
      if ( v4 && KiIsAddressRangeValid(*(_QWORD *)(v1 + 312), 8LL) )
      {
        IoAddTriageDumpDataBlock(v4, (PVOID)*(unsigned __int16 *)(v4 + 2));
        v5 = *(_QWORD *)(v4 + 40);
        if ( v5 )
          IoAddTriageDumpDataBlock(v5 & 0xFFFFF000, (PVOID)(((*(_QWORD *)(v4 + 40) & 0xFFF) + 4607) & 0xFFFFF000));
        v6 = *(_QWORD *)(v4 + 48);
        if ( v6 && KiIsAddressRangeValid(*(_QWORD *)(v4 + 48), 336LL) )
          IoAddTriageDumpDataBlock(v6, (PVOID)*(unsigned __int16 *)(v6 + 2));
        v7 = *(_QWORD *)(v4 + 72);
        if ( v7 && KiIsAddressRangeValid(v7, 96LL) )
          IoAddTriageDumpDataBlock(*(_QWORD *)(v4 + 72), (PVOID)(unsigned int)*(__int16 *)(*(_QWORD *)(v4 + 72) + 2LL));
        v8 = *(_QWORD *)(v4 + 24);
        if ( v8 )
          IoAddTriageDumpDataBlock(v8, (PVOID)0x60);
      }
      v1 = *(_QWORD *)(v1 + 24);
    }
    while ( v1 );
  }
}
