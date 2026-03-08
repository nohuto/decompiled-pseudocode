/*
 * XREFs of ?VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z @ 0x1C001D6C6
 * Callers:
 *     VidSchiProcessMonitoredFenceSignaledDpc @ 0x1C001DBB6 (VidSchiProcessMonitoredFenceSignaledDpc.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C00062E0 (VidSchiCheckPendingDeviceCommand.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     ?VidSchiTryCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_QUEUE@@PEB_KPEAU_VIDSCH_QUEUE_PACKET@@PEA_N@Z @ 0x1C001D58A (-VidSchiTryCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_QUEUE@@PEB_KPEAU_VIDS.c)
 */

void __fastcall VidSchiUnwaitNodeHwQueueProgress(struct HwQueueStagingList *a1, struct _VIDSCH_NODE *a2)
{
  char *v2; // r15
  char *v4; // rdi
  __int64 *v5; // rsi
  __int64 *v6; // rbp
  __int64 *v7; // rcx
  char v8; // al
  unsigned __int64 *v9; // r8
  __int64 v10; // r10
  __int64 v11; // rdx
  unsigned int *v12; // r9
  unsigned __int64 v13; // rdx
  _QWORD *v14; // r12
  _QWORD *v15; // rbx
  LARGE_INTEGER *v16; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 *v18; // rcx
  unsigned __int64 *v19; // rdx
  signed __int64 v20; // rbx
  __int64 v21; // r8
  unsigned __int64 v22; // rax
  unsigned __int64 v23[9]; // [rsp+30h] [rbp-48h] BYREF
  bool v25; // [rsp+88h] [rbp+10h] BYREF

  v2 = (char *)a2 + 1696;
  v4 = (char *)*((_QWORD *)a2 + 212);
  if ( v4 != (char *)a2 + 1696 )
  {
    do
    {
      v5 = (__int64 *)*((_QWORD *)v4 + 2);
      if ( v5 != (__int64 *)(v4 + 16) )
      {
        do
        {
          v6 = v5 - 1;
          *(_OWORD *)v23 = 0LL;
          v7 = v5 + 6;
          v8 = 0;
          v9 = v23;
          v10 = 2LL;
          do
          {
            v11 = *v7;
            if ( *v7 )
            {
              v12 = *(unsigned int **)(v11 + 64);
              if ( *(_BYTE *)(v11 + 29) )
                v13 = *(_QWORD *)v12;
              else
                v13 = *v12;
              if ( v13 != v7[1] )
                v8 = 1;
              *v9 = v13;
            }
            v7 += 3;
            ++v9;
            --v10;
          }
          while ( v10 );
          if ( v8 )
          {
            v14 = v6 + 20;
            _InterlockedExchange((volatile __int32 *)a2 + 122, 1);
            do
            {
              v15 = (_QWORD *)*v14;
              if ( (_QWORD *)*v14 == v14 )
                break;
              if ( v15 == (_QWORD *)v6[26] )
                break;
              v25 = 0;
              WdLogSingleEntry1(4LL, v15 - 4);
              VidSchiTryCompleteHwQueuePacket(
                a1,
                (struct VIDSCH_HW_QUEUE *)(v5 - 1),
                v23,
                (struct _VIDSCH_QUEUE_PACKET *)(v15 - 4),
                &v25);
            }
            while ( v25 );
            v16 = (LARGE_INTEGER *)(*((_QWORD *)a2 + 23) + 112LL * *((unsigned int *)a2 + 49));
            memset(v16, 0, 0x70uLL);
            *((_DWORD *)a2 + 49) = (*((_DWORD *)a2 + 49) + 1) & (*((_DWORD *)a2 + 48) - 1);
            PerformanceCounter = KeQueryPerformanceCounter(0LL);
            v16->LowPart = 9;
            v18 = v23;
            v16[1] = PerformanceCounter;
            v19 = (unsigned __int64 *)(v6 + 8);
            v16[2].QuadPart = (LONGLONG)v6;
            v20 = (char *)v16 - (char *)v23;
            v21 = 2LL;
            do
            {
              v22 = *v18;
              *(unsigned __int64 *)((char *)v18 + v20 + 24) = *v18;
              ++v18;
              *v19 = v22;
              v19 += 3;
              --v21;
            }
            while ( v21 );
            VidSchiCheckPendingDeviceCommand(*(_QWORD **)(v6[5] + 8));
          }
          v5 = (__int64 *)*v5;
        }
        while ( v5 != (__int64 *)(v4 + 16) );
        v2 = (char *)a2 + 1696;
      }
      v4 = *(char **)v4;
    }
    while ( v4 != v2 );
  }
}
