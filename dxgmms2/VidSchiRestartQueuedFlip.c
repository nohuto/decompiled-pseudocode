__int64 __fastcall VidSchiRestartQueuedFlip(
        struct HwQueueStagingList *a1,
        __int64 a2,
        unsigned int a3,
        struct VIDSCH_FLIP_QUEUE *a4,
        int a5)
{
  __int64 v5; // rsi
  __int64 v7; // rbp
  unsigned int v10; // ecx
  int v11; // eax
  __int64 v12; // r11
  unsigned int v14; // [rsp+20h] [rbp-38h]

  v5 = *(_QWORD *)(a2 + 32);
  v7 = a3;
  if ( *(_BYTE *)(v5 + 59) )
    VidSchiCancelHwQueuedFlips(a1, (struct _VIDSCH_DEVICE *)a2, a3, a4, v14);
  v10 = *((_DWORD *)a4 + 16);
  if ( v10 != a5 )
  {
    v11 = VidSchiCompleteFlipEntry((__int64)a1, v5, v7, (__int64)a4, v10, ((_BYTE)a5 - 1) & 0x3F, 6u, 0LL);
    if ( v11 )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 32LL)
                                  + 8LL * *(unsigned int *)(*(_QWORD *)(a2 + 32) + 4LL))
                      + 8 * v7
                      + 88);
      _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v5 + 8 * v7 + 6480) + 8LL), -v11);
      *(_DWORD *)(*(_QWORD *)(v5 + 8 * v7 + 6480) + 4LL) += v11;
      _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 8), -v11);
      *(_DWORD *)(v12 + 4) += v11;
    }
  }
  *((_DWORD *)a4 + 16) = a5;
  return VidSchiUpdateFlipQueueHistory(6u, v5, v7);
}
