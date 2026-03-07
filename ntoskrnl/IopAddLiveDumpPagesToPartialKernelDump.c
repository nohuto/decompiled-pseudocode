__int64 __fastcall IopAddLiveDumpPagesToPartialKernelDump(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rbx
  _QWORD v12[2]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v13; // [rsp+30h] [rbp-50h] BYREF
  __int64 v14; // [rsp+40h] [rbp-40h]
  _QWORD v15[5]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v16; // [rsp+70h] [rbp-10h]
  unsigned int v17; // [rsp+B8h] [rbp+38h] BYREF
  int v18; // [rsp+BCh] [rbp+3Ch]

  v18 = HIDWORD(a4);
  v16 = 0LL;
  v17 = 0;
  v14 = 0LL;
  v13 = 0LL;
  v8 = *(_QWORD *)(CrashdmpDumpBlock + 8);
  v9 = *(_QWORD *)(v8 + 48);
  v15[1] = 0LL;
  v16 = 3LL;
  v12[0] = v9;
  v12[1] = v8 + 56;
  v15[2] = v12;
  v15[4] = &AvailablePagesForPartialDump;
  v15[0] = IoSetDumpRange;
  v15[3] = v8;
  result = MmAddRangeToCrashDump(v15, &KdDebuggerDataBlock, 928LL);
  if ( (int)result < 0 )
    return result;
  result = MmAddRangeToCrashDump(v15, KiProcessorBlock, 8LL * (unsigned int)KeNumberProcessors_0);
  if ( (int)result < 0 )
    return result;
  v11 = 0LL;
  if ( !(_DWORD)KeNumberProcessors_0 )
  {
LABEL_6:
    *((_QWORD *)&v13 + 1) = qword_140D1EFE8[0];
    *(_QWORD *)&v13 = KeActiveProcessors;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v17, (unsigned __int16 **)&v13) )
    {
      result = IopMarkPagesForProcessorData(v15, v17);
      if ( (int)result < 0 )
        return result;
    }
    result = MmAddPrivateDataToCrashDump(v15, 2LL);
    if ( (int)result < 0 )
      return result;
    result = MmAddRangeToCrashDump(v15, 0xFFFFF78000000000uLL, 1848LL);
    if ( (int)result < 0 )
      return result;
    result = MmAddPrivateDataToCrashDump(v15, 4LL);
    if ( (int)result < 0 )
      return result;
    result = MmAddPrivateDataToCrashDump(v15, 8LL);
    if ( (int)result < 0 )
      return result;
    if ( MmPhysicalMemoryBlock )
    {
      result = MmAddRangeToCrashDump(
                 v15,
                 MmPhysicalMemoryBlock,
                 16 * ((unsigned int)(*(_DWORD *)MmPhysicalMemoryBlock - 1) + 2LL));
      if ( (int)result < 0 )
        return result;
    }
    result = MmAddPrivateDataToCrashDump(v15, 32LL);
    if ( (int)result < 0 )
      return result;
    if ( a1 == 351 && a2 == 2 )
    {
      result = MmAddRangeToCrashDump(v15, a3, 56LL);
      if ( (int)result < 0 )
        return result;
      if ( (unsigned int)IopMarkPagesForDeviceNode(v15, *(_QWORD *)(a3 + 48)) == -1073741789 )
        return 3221225507LL;
      if ( a5 )
      {
        result = IopMarkPagesForDeviceNode(v15, a5);
        if ( (int)result < 0 )
          return result;
      }
    }
    if ( IoPreparedTriageDumpData )
    {
      if ( IoPreparedTriageDumpData != *(void **)(CrashdmpDumpBlock + 1328) )
      {
        result = MmAddRangeToCrashDump(
                   v15,
                   (char *)IoPreparedTriageDumpData - 0x2000,
                   *((unsigned int *)IoPreparedTriageDumpData + 1));
        if ( (int)result < 0 )
          return result;
      }
    }
    result = ExAddPrivateDataToCrashDump(v15);
    if ( (int)result < 0 )
      return result;
    result = IoAddProcessesToDump(
               (__int64)v15,
               (__int64 (__fastcall *)(__int64, __int64 *, __int64))IopPartialDumpAddProcessesCallback,
               0LL);
    if ( (int)result < 0 )
      return result;
    result = MmAddPrivateDataToCrashDump(v15, 16LL);
    if ( (int)result < 0 )
      return result;
    IopDumpCallAddPagesCallbacks(a1);
    IoSaveBugCheckProgress(33);
    IopAddKernelSpacePagesToPartialDump();
    IoSaveBugCheckProgress(41);
    if ( AvailablePagesForPartialDump )
      return MmAddPrivateDataToCrashDump(v15, 1LL);
    return 3221225507LL;
  }
  while ( 1 )
  {
    result = MmAddRangeToCrashDump(v15, KiProcessorBlock[v11], 48896LL);
    if ( (int)result < 0 )
      return result;
    v11 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v11 >= (unsigned int)KeNumberProcessors_0 )
      goto LABEL_6;
  }
}
