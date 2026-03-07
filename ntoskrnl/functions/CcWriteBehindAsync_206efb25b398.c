__int64 __fastcall CcWriteBehindAsync(__int64 a1, _DWORD *a2, void *a3)
{
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  int v10; // ebx
  char v11; // al
  __int64 v13[34]; // [rsp+58h] [rbp-B0h] BYREF

  while ( 1 )
  {
    memset(v13, 0, 0x108uLL);
    LOWORD(v13[17]) = 0;
    v13[14] = (__int64)a2;
    v13[32] = a1;
    BYTE3(v13[17]) = 0;
    v6 = CcWriteBehindPreProcess((__int64)v13);
    if ( v6 == 1 )
      break;
    if ( v6 == 2 )
    {
      *(_QWORD *)(a1 + 16) = 0LL;
      return 2LL;
    }
    LODWORD(v13[13]) = 1;
    v13[12] = (__int64)&CcNoDelay;
    v13[9] = (__int64)a3;
    if ( CcFlushCachePreProcess((__int64)v13) )
    {
      v7 = v13[9];
      v13[12] = 0LL;
      v8 = v13[2];
      *(_DWORD *)(v13[9] + 4) = 0;
      *(_WORD *)v7 = 1;
      *(_BYTE *)(v7 + 2) = 6;
      v7 += 8LL;
      *(_QWORD *)(v7 + 8) = v7;
      *(_QWORD *)v7 = v7;
      if ( v8 && (*(_DWORD *)(v8 + 152) & 0x4000000) == 0 )
      {
        do
        {
          if ( !CcFlushCacheAcquireRange((__int64)v13) )
            break;
          v9 = CcFlushCacheOneRange(v13);
          if ( !HIDWORD(v13[7]) && v9 >= 0 )
            KeWaitForSingleObject(a3, Executive, 0, 0, 0LL);
        }
        while ( CcFlushCachePostProcessOneRange(v13) );
        if ( v13[28] && LODWORD(v13[30]) )
          v13[29] = KeQueryPerformanceCounter(0LL).QuadPart;
      }
      CcFlushCachePostProcess(v13);
    }
    else
    {
      DbgPrintEx(
        0x7Fu,
        3u,
        "[%04x:%04x]CcWriteBehindAsync: PreProcess returned FALSE, nothing to do (SOP=%p, IoStatus=0x%x)\n",
        LODWORD(KeGetCurrentThread()[1].CycleTime),
        KeGetCurrentThread()[1].CurrentRunTime,
        (const void *)v13[3],
        *a2);
    }
    v10 = (unsigned __int8)CcWriteBehindPostProcess((__int64)v13, 0);
    v11 = BYTE1(v13[17]);
    if ( !(_BYTE)v10 || BYTE1(v13[17]) )
    {
      DbgPrintEx(
        0x7Fu,
        3u,
        "[%04x:%04x]CcWriteBehindAsync: PostProc:%d, Retry:%d, PVCM:%p(vid:%2lx)\n",
        LODWORD(KeGetCurrentThread()[1].CycleTime),
        KeGetCurrentThread()[1].CurrentRunTime,
        v10,
        BYTE1(v13[17]),
        *(const void **)(a1 + 144),
        *(_DWORD *)(*(_QWORD *)(a1 + 144) + 24LL));
      v11 = BYTE1(v13[17]);
    }
    if ( (_BYTE)v10 || !v11 )
      return 0LL;
  }
  DbgPrintEx(
    0x7Fu,
    3u,
    "[%04x:%04x]CcWriteBehindAsync: WBPreProcess FAILED (%lx): PVCM:%p(vid:%2lx)\n",
    LODWORD(KeGetCurrentThread()[1].CycleTime),
    KeGetCurrentThread()[1].CurrentRunTime,
    1,
    *(const void **)(a1 + 144),
    *(_DWORD *)(*(_QWORD *)(a1 + 144) + 24LL));
  return 1LL;
}
