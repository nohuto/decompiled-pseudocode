__int64 __fastcall HalpMcUpdateInitialize(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r11
  int v4; // ebx
  _QWORD *DataTableEntry; // rax
  bool v6; // dl
  __int64 result; // rax
  _QWORD v8[5]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v9; // [rsp+48h] [rbp-38h] BYREF
  __int128 v10; // [rsp+58h] [rbp-28h]
  __int128 v11; // [rsp+68h] [rbp-18h]
  __int64 v12; // [rsp+78h] [rbp-8h]

  v12 = 0LL;
  v2 = (_QWORD *)a2;
  v4 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( !a1 || HalpIsPartitionCpuManager(a1, a2) )
  {
    DataTableEntry = 0LL;
    if ( v2 )
      DataTableEntry = v2;
  }
  else
  {
    DataTableEntry = HalpMcUpdateFindDataTableEntry((_QWORD *)(a1 + 16));
    v6 = (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x40000000) != 0;
    HalpMcUpdateSelfHosting = (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x8000000) != 0;
    HalpMcUpdateMinVerSupported = v6;
  }
  v8[0] = HalMcUpdateReadPCIConfig;
  v8[1] = MmLockPagableDataSection;
  v8[2] = MmLockPagableDataSection;
  v8[3] = MmLockPagableSectionByHandle;
  v8[4] = MmUnlockPagableImageSection;
  if ( !DataTableEntry )
  {
    HalpMcUpdateMicrocodeFunc = 0LL;
    HalpMcUpdateMicrocodeFuncEx = 0LL;
    HalpMcUpdateExportDataFunc = 0LL;
    HalpMcUpdateLockFunc = 0LL;
    HalpMcUpdateUnlockFunc = 0LL;
    HalpMcUpdatePostUpdateFunc = 0LL;
    return (unsigned int)v4;
  }
  v4 = ((__int64 (__fastcall *)(__int128 *, _QWORD *))DataTableEntry[7])(&v9, v8);
  if ( v4 >= 0 )
  {
    HalpMcUpdateMicrocodeFuncEx = *((_QWORD *)&v9 + 1);
    HalpMcUpdateMicrocodeFunc = (PVOID)v9;
    HalpMcUpdateExportDataFunc = *((_QWORD *)&v11 + 1);
    HalpMcUpdateUnlockFunc = (__int64 (*)(void))*((_QWORD *)&v10 + 1);
    HalpMcUpdateLockFunc = (__int64 (__fastcall *)(_QWORD, _QWORD))v10;
    HalpMcUpdatePostUpdateFunc = v11;
    return (unsigned int)v4;
  }
  HalpMcUpdateMicrocodeFunc = 0LL;
  result = 3221225473LL;
  HalpMcUpdateMicrocodeFuncEx = 0LL;
  HalpMcUpdateExportDataFunc = 0LL;
  HalpMcUpdateLockFunc = 0LL;
  HalpMcUpdateUnlockFunc = 0LL;
  HalpMcUpdatePostUpdateFunc = 0LL;
  return result;
}
