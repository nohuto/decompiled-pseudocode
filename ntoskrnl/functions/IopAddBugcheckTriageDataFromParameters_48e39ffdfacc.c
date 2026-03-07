char __fastcall IopAddBugcheckTriageDataFromParameters(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 MaxDataSize)
{
  char result; // al
  __int64 v10; // rcx
  unsigned __int64 v11; // rbp
  ULONG v12; // ecx
  ULONG *v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned int v17; // r8d
  ULONG v18[20]; // [rsp+20h] [rbp-68h] BYREF

  IoAddTriageDumpDataBlock(a2 & 0xFFFFF000, (PVOID)0x1000);
  IoAddTriageDumpDataBlock(a3 & 0xFFFFF000, (PVOID)0x1000);
  IoAddTriageDumpDataBlock(a4 & 0xFFFFF000, (PVOID)0x1000);
  result = IoAddTriageDumpDataBlock(MaxDataSize & 0xFFFFF000, (PVOID)0x1000);
  if ( a1 == 205 || a1 == 214 )
    result = IoAddTriageDumpDataBlock((a2 - 4096) & 0xFFFFF000, (PVOID)0x1000);
  if ( a1 == 335 || a1 == 348 )
  {
    result = KiIsAddressRangeValid(MaxDataSize, 16LL);
    if ( result )
    {
      result = IoAddTriageDumpDataBlock(MaxDataSize, (PVOID)0x10);
      v10 = *(_QWORD *)(MaxDataSize + 8);
      if ( v10 )
        result = IopAddBugcheckTriageThread(v10);
    }
  }
  switch ( a1 )
  {
    case 412:
      if ( a3 )
      {
        v11 = a2 - 16;
        if ( v11 <= 0x40 && (v11 & 0xF) == 0 )
        {
          v12 = a3;
          return IopAddBugcheckTriageThread(v12);
        }
      }
      return result;
    case 159:
      if ( a2 == 4 )
      {
        result = PnpSaveGlobalsToMinidump();
        if ( a4 )
          return IopAddBugcheckPnpTriageData(a4, MaxDataSize);
      }
      else if ( a2 == 3 )
      {
        return IopAddBugcheckPowerTriageData(a3, a4, MaxDataSize);
      }
      return result;
    case 469:
      PnpSaveGlobalsToMinidump();
      LODWORD(v13) = a3;
      return IopAddBugcheckPnpWatchdogTriageData((ULONG)v13);
    case 160:
      if ( a2 == 1560 )
      {
        v12 = a4;
        return IopAddBugcheckTriageThread(v12);
      }
      if ( a2 == 1561 )
      {
        result = IopAddBugcheckTriageDeviceNode(*(_QWORD *)(a3 + 48));
        if ( MaxDataSize )
          return IopAddBugcheckTriageDeviceNode(MaxDataSize);
        return result;
      }
      if ( a2 != 15 )
      {
        result = a2 + 16;
        if ( (unsigned __int64)(a2 - 240) > 1 )
          return result;
      }
      memset(v18, 0, sizeof(v18));
      PnpSaveGlobalsToMinidump();
      PnpInitializeTriageBlock(v18);
      v13 = v18;
      return IopAddBugcheckPnpWatchdogTriageData((ULONG)v13);
    case 257:
      if ( a3 )
        return result;
      result = KiIsAddressRangeValid(a4, 48896LL);
      if ( !result )
        return result;
      IoAddTriageDumpDataBlock(a4, (PVOID)0xBF00);
      IoAddTriageDumpDataBlock(*(_QWORD *)(a4 + 35264), (PVOID)0x4D0);
      v14 = *(_QWORD *)(a4 + 8);
      if ( KiIsAddressRangeValid(v14, 2320LL) )
        IopAddBugcheckTriageThread(v14);
      v15 = 0x2000LL;
      v16 = (*(_QWORD *)(*(_QWORD *)(a4 + 35264) + 152LL) - 4096LL) & 0xFFFFFFFFFFFFF000uLL;
      return IoAddTriageDumpDataBlock(v16, (PVOID)v15);
    case 416:
      IopAddBugcheckTriageThread(a4);
      return PopInternalAddToDumpFile(0LL, 0LL, 0LL);
    case 292:
      result = KiIsAddressRangeValid(a3, 128LL);
      if ( result )
      {
        v17 = *(_DWORD *)(a3 + 20);
        v15 = 72 * (unsigned int)*(unsigned __int16 *)(a3 + 10) + 128;
        LODWORD(v16) = a3;
        if ( v17 >= (unsigned int)v15 )
          v15 = v17;
        return IoAddTriageDumpDataBlock(v16, (PVOID)v15);
      }
      break;
  }
  return result;
}
