// write access to const memory has been detected, the output may be wrong!
void __fastcall SubmitPagingToHwQueue(struct HwQueueStagingList *a1, struct _VIDSCH_QUEUE_PACKET *a2)
{
  __int64 v2; // rbx
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rax
  LONG v11; // eax
  int v12; // r8d
  LONG v13; // r15d
  __int64 v14; // rcx
  __int64 v15; // r9
  LARGE_INTEGER *v16; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  __int128 v18; // xmm1
  __int128 v19; // [rsp+40h] [rbp-40h] BYREF
  __int128 v20; // [rsp+50h] [rbp-30h]
  __int128 v21; // [rsp+60h] [rbp-20h]
  __int128 v22; // [rsp+70h] [rbp-10h]

  v2 = *((_QWORD *)a2 + 12);
  v5 = *(_QWORD *)(v2 + 40);
  v6 = *(_QWORD *)(v5 + 16);
  v7 = *(_QWORD *)(v5 + 8);
  v8 = *(_QWORD *)(v6 + 24);
  ++*(_DWORD *)(v2 + 152);
  *((_DWORD *)a2 + 20) |= 0x40u;
  if ( (*(_BYTE *)(v8 + 3036) & 1) != 0
    || *(_DWORD *)(v8 + 3012)
    || *(_BYTE *)(v7 + 204)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 200), 0, 0) )
  {
    VidSchiSimulateProgressFenceCompletion(a1, a2, (struct VIDSCH_HW_QUEUE *)v2);
    VidSchiCompleteHwQueuePacket(a1, a2, 0);
  }
  else
  {
    *((_QWORD *)a2 + 7) = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)a2 + 13) = 9;
    VidSchiCalibrateHwClock((struct _VIDSCH_NODE *)v6);
    if ( !*(_BYTE *)(344LL * *(unsigned __int16 *)(v6 + 6)
                   + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 16LL) + 2808LL)
                   + 48) )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 24576LL, 0LL, 0LL, 0LL);
      __debugbreak();
    }
    v9 = *((_QWORD *)a2 + 35);
    *((_QWORD *)&v21 + 1) = 0LL;
    *(_QWORD *)&v19 = *(_QWORD *)(v2 + 112);
    *((_QWORD *)&v19 + 1) = *((_QWORD *)a2 + 36);
    v22 = *(_OWORD *)((char *)a2 + 296);
    *(_QWORD *)&v20 = *(_QWORD *)(v9 + 96) + *((unsigned int *)a2 + 81);
    DWORD2(v20) = *((_DWORD *)a2 + 82);
    v10 = *(_QWORD *)(v9 + 128) + *((unsigned int *)a2 + 83);
    *((_QWORD *)&v21 + 1) = 1LL;
    *(_QWORD *)&v21 = v10;
    HIDWORD(v20) = *((_DWORD *)a2 + 84);
    v11 = DxgCoreInterface[54](
            *(ADAPTER_DISPLAY **)(v8 + 8),
            (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)&v19);
    v13 = v11;
    if ( (byte_1C00769C1 & 1) != 0 )
    {
      v14 = *((_QWORD *)a2 + 12);
      v15 = *(_QWORD *)(v14 + 48);
      if ( !v15 )
        LODWORD(v15) = *((_QWORD *)a2 + 12);
      McTemplateK0pxpqq_EtwWriteTransfer(
        v14,
        *(_DWORD *)(v7 + 1576),
        v12,
        v15,
        SBYTE8(v19),
        v20,
        v11,
        *(_DWORD *)(v7 + 1576));
    }
    v16 = (LARGE_INTEGER *)(*(_QWORD *)(v6 + 184) + 112LL * *(unsigned int *)(v6 + 196));
    memset(v16, 0, 0x70uLL);
    *(_DWORD *)(v6 + 196) = (*(_DWORD *)(v6 + 196) + 1) & (*(_DWORD *)(v6 + 192) - 1);
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v16->LowPart = 8;
    v16[1] = PerformanceCounter;
    v16[10] = *(LARGE_INTEGER *)((char *)a2 + 288);
    v16[11].LowPart = 0;
    *(_OWORD *)&v16[2].LowPart = v19;
    *(_OWORD *)&v16[4].LowPart = v20;
    *(_OWORD *)&v16[6].LowPart = v21;
    v18 = v22;
    v16[11].HighPart = v13;
    *(_OWORD *)&v16[8].LowPart = v18;
    if ( (int)(v13 + 0x80000000) >= 0 && v13 != -1073741822 )
      VidSchiMarkDeviceAsError(a1, v7, 19, 0LL);
  }
}
