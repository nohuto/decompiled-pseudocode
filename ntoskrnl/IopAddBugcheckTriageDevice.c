/*
 * XREFs of IopAddBugcheckTriageDevice @ 0x1405599D8
 * Callers:
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x1405596C0 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x140559780 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x140559AE0 (IopAddBugcheckTriageDeviceNode.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14038486C (IoAddTriageDumpDataBlock.c)
 *     KiIsAddressRangeValid @ 0x1403849BC (KiIsAddressRangeValid.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x140559E4C (IopAddBugcheckTriageUnicodeString.c)
 */

__int64 __fastcall IopAddBugcheckTriageDevice(__int64 MaxDataSize)
{
  unsigned int v1; // ebx
  int v3; // ebp
  __int64 v4; // rax
  int v5; // esi
  unsigned int v6; // esi
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  v3 = 0;
  while ( 1 )
  {
    ++v3;
    if ( !KiIsAddressRangeValid(MaxDataSize, 336LL) )
      break;
    v4 = *(unsigned __int16 *)(MaxDataSize + 2);
    if ( (unsigned __int16)v4 <= 0x3000u
      && (v5 = v4 + 7, KiIsAddressRangeValid(MaxDataSize, (v4 + 7) & 0xFFFFFFFFFFFFFFF8uLL)) )
    {
      v6 = v5 & 0xFFFFFFF8;
    }
    else
    {
      v6 = 336;
    }
    IoAddTriageDumpDataBlock(MaxDataSize, (PVOID)v6);
    v7 = *(_QWORD *)(MaxDataSize + 312);
    if ( KiIsAddressRangeValid(v7, 112LL) )
      IoAddTriageDumpDataBlock(v7, (PVOID)0x70);
    v8 = *(_QWORD *)(MaxDataSize + 8);
    if ( KiIsAddressRangeValid(v8, 336LL) )
    {
      IoAddTriageDumpDataBlock(v8, (PVOID)0x150);
      v10 = *(_OWORD *)(v8 + 56);
      IopAddBugcheckTriageUnicodeString(&v10);
    }
    MaxDataSize = *(_QWORD *)(MaxDataSize + 24);
    if ( !MaxDataSize || v3 >= 10 )
      return v1;
  }
  return (unsigned int)-1073741823;
}
