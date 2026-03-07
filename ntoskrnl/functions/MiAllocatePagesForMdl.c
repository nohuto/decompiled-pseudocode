__int64 __fastcall MiAllocatePagesForMdl(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10)
{
  LARGE_INTEGER PerformanceCounter; // r15
  __int64 v15; // r13
  unsigned int v16; // r12d
  unsigned int v17; // eax
  ULONGLONG Ptr; // rdx
  unsigned __int64 v19; // rcx
  unsigned int *v20; // r13
  int v21; // r12d
  __int64 v22; // r13
  int v24; // [rsp+50h] [rbp-B0h]
  _QWORD v25[12]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v26[6]; // [rsp+C0h] [rbp-40h] BYREF
  int v27; // [rsp+F0h] [rbp-10h]
  int v28; // [rsp+F4h] [rbp-Ch]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F8h] [rbp-8h] BYREF

  memset(v25, 0, 0x58uLL);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( (int)MiValidateMdlAllocationRequest((unsigned int)v25, a1, a2, a3, a4, a5, a6, a7, a8, a9) >= 0 )
  {
    if ( a10 )
    {
      HIDWORD(v25[10]) |= 1u;
      v25[8] = a10;
    }
    if ( (int)MiObtainMdlCharges(v25) < 0 )
    {
      if ( (v25[10] & 0x100000000LL) != 0 )
        v25[8] = 0LL;
    }
    else
    {
      v15 = v25[8];
      v16 = 0;
      v24 = 0;
      UserData.Ptr = v25[4];
      *(_DWORD *)(v25[8] + 40LL) = 0;
      MiFindPagesForMdl(v25);
      v17 = *(_DWORD *)(v15 + 40);
      Ptr = UserData.Ptr;
      v19 = v25[6] * ((unsigned __int64)v17 >> 12);
      if ( v19 != UserData.Ptr )
      {
        while ( SLOBYTE(v25[7]) < 0 )
        {
          if ( v24 == v17 )
          {
            if ( v16 > 3 || KeGetCurrentIrql() >= 2u || (v25[7] & 8) != 0 )
            {
LABEL_26:
              if ( v19 == Ptr )
                goto LABEL_6;
              break;
            }
            KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi10Milliseconds);
            ++v16;
          }
          else
          {
            v16 = 0;
          }
          LODWORD(v25[7]) &= ~0x10000u;
          v24 = *(_DWORD *)(v15 + 40);
          MiFindPagesForMdl(v25);
          v17 = *(_DWORD *)(v15 + 40);
          Ptr = UserData.Ptr;
          v19 = v25[6] * ((unsigned __int64)v17 >> 12);
          if ( v19 == UserData.Ptr )
            goto LABEL_26;
        }
        MiReturnMdlExcess(v25);
      }
LABEL_6:
      v20 = (unsigned int *)v25[8];
      if ( v25[8] )
      {
        if ( (a8 & 0x40) == 0 )
          MiInitializeMdlBatchPages(v25);
        if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
          MiLogMdlRangeEvent(v20 + 12, 632LL, (unsigned __int64)v20[10] >> 12, v25[6]);
        if ( (v25[7] & 0x100) != 0 )
          v25[8] = MiRemoveMdlPages(v20);
      }
    }
  }
  v21 = v25[7];
  v22 = v25[8];
  if ( EtwEventEnabled(EtwpMemoryProvRegHandle, &KERNEL_MEM_EVENT_MDL_ALLOCATION) )
  {
    v26[0] = ((__int64 (__fastcall *)(_QWORD))EtwpGetDurationSince)((LARGE_INTEGER)PerformanceCounter.QuadPart);
    v26[1] = a5;
    v26[5] = v22;
    UserData.Ptr = (ULONGLONG)v26;
    v26[2] = a2;
    v26[3] = a3;
    v26[4] = a4;
    v27 = a7;
    v28 = v21;
    *(_QWORD *)&UserData.Size = 56LL;
    EtwWriteEx(EtwpMemoryProvRegHandle, &KERNEL_MEM_EVENT_MDL_ALLOCATION, 0LL, 1u, 0LL, 0LL, 1u, &UserData);
  }
  return v25[8];
}
