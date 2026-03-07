void __fastcall VidSchiSimulateProgressFenceCompletion(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_QUEUE_PACKET *a2,
        struct VIDSCH_HW_QUEUE *a3)
{
  __int64 v5; // rbx
  LARGE_INTEGER *v6; // rsi

  v5 = *(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL);
  v6 = (LARGE_INTEGER *)(*(_QWORD *)(v5 + 184) + 112LL * *(unsigned int *)(v5 + 196));
  memset(v6, 0, 0x70uLL);
  *(_DWORD *)(v5 + 196) = (*(_DWORD *)(v5 + 196) + 1) & (*(_DWORD *)(v5 + 192) - 1);
  v6[1] = KeQueryPerformanceCounter(0LL);
  v6->LowPart = 9;
  if ( *((_DWORD *)a2 + 12) )
  {
    v6[3] = *(LARGE_INTEGER *)((char *)a2 + 288);
    *((_QWORD *)a3 + 8) = *((_QWORD *)a2 + 36);
  }
  else
  {
    v6[*((unsigned int *)a2 + 194) + 3] = *(LARGE_INTEGER *)((char *)a2 + 768);
    *((_QWORD *)a3 + 3 * *((unsigned int *)a2 + 194) + 8) = *((_QWORD *)a2 + 96);
  }
  v6[2].QuadPart = (LONGLONG)a3;
  LOBYTE(v6[5].LowPart) = 1;
}
