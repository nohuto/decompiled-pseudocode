void __fastcall PiDmaGuardProcessPostRemove(ULONG_PTR MaxDataSize, int a2, char a3)
{
  int v6; // eax
  ULONG_PTR v7; // rbp
  __int64 v8; // rax
  void *v9; // rcx

  if ( *(_QWORD *)(MaxDataSize + 720) )
  {
    PiIommuUninitializeDeviceAts(MaxDataSize);
    v6 = PiIommuBlockDevice(*(_QWORD *)(MaxDataSize + 720));
    v7 = v6;
    if ( v6 < 0 )
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
      v8 = *(_QWORD *)(MaxDataSize + 16);
      if ( v8 && *(_WORD *)(v8 + 56) )
      {
        IoAddTriageDumpDataBlock(v8 + 56, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(MaxDataSize + 16) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(MaxDataSize + 16) + 56LL));
      }
      KeBugCheckEx(0xCAu, 0x13uLL, 0x1001uLL, v7, MaxDataSize);
    }
    PipDmgDestroyIommuExtension(MaxDataSize);
  }
  if ( a3 && PipDmaGuardPolicy )
  {
    v9 = *(void **)(MaxDataSize + 32);
    if ( a2 == 55 )
    {
      PiDmaGuardQueueInsertEntry(v9);
      PipDmgReevaluateQueue();
    }
    else
    {
      PiDmaGuardQueueRemoveEntry(v9);
    }
  }
}
