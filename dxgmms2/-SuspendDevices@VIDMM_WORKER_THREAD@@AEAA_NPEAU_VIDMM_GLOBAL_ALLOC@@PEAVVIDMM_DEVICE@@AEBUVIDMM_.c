char __fastcall VIDMM_WORKER_THREAD::SuspendDevices(
        union _LARGE_INTEGER *a1,
        __int64 a2,
        VIDMM_DEVICE *a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        struct VIDMM_DEVICE **a7)
{
  union _LARGE_INTEGER *v8; // rsi
  char v9; // di
  __int64 v10; // r9
  int v11; // r14d
  unsigned int v12; // r10d
  int v13; // r12d
  unsigned int v14; // r13d
  unsigned int v15; // ebx
  char v16; // cl
  int v17; // edx
  unsigned int v18; // eax
  LONGLONG QuadPart; // r8
  __int64 v20; // rsi
  VIDMM_GLOBAL *v21; // rcx
  struct _LIST_ENTRY *v22; // rsi
  struct _LIST_ENTRY *v23; // rdx
  VIDMM_GLOBAL **v24; // rbx
  VIDMM_DEVICE *DeviceToSuspend; // rax
  VIDMM_DEVICE *v26; // rsi
  VIDMM_PROCESS_ADAPTER_INFO *v27; // rcx
  __int64 v29; // [rsp+38h] [rbp-51h]
  struct _LIST_ENTRY *v30[2]; // [rsp+40h] [rbp-49h] BYREF
  char v31[8]; // [rsp+50h] [rbp-39h] BYREF
  DXGPUSHLOCK *v32; // [rsp+58h] [rbp-31h]
  int v33; // [rsp+60h] [rbp-29h]
  _BYTE v34[96]; // [rsp+68h] [rbp-21h] BYREF
  unsigned int v36; // [rsp+E0h] [rbp+57h]

  v8 = a1;
  v9 = 1;
  VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR::VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR(
    (VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR *)v34,
    a1 + 42,
    (unsigned int *)&a1[46].HighPart,
    1);
  v10 = a4;
  v11 = 0;
  v12 = *(_DWORD *)(a2 + 68) & 0x3F;
  v36 = v12;
  if ( *(int *)(a4 + 4) >= 0 )
  {
    while ( 1 )
    {
      v13 = *(_DWORD *)(a2 + 60);
      v14 = 0;
      if ( v13 )
        break;
LABEL_25:
      if ( ++v11 > *(_DWORD *)(v10 + 4) )
        goto LABEL_26;
    }
    v15 = *(_DWORD *)(a2 + 64) == 0 ? 6 : 0;
    while ( 1 )
    {
      if ( v15 > 5 )
      {
        v18 = v14;
        v17 = v14++;
        if ( !_bittest(&v13, v18) )
          goto LABEL_24;
      }
      else
      {
        v16 = 6 * v15++;
        if ( ((*(_DWORD *)(a2 + 64) >> v16) & 0x1F) == 0 )
          goto LABEL_24;
        v17 = ((*(_DWORD *)(a2 + 64) >> v16) & 0x1F) - 1;
      }
      QuadPart = v8->QuadPart;
      v13 &= ~(1 << v17);
      v20 = (unsigned int)(v17 + *(_DWORD *)(1616LL * v12 + *(_QWORD *)(v8->QuadPart + 40224) + 28));
      if ( (**(_DWORD **)(a2 + 536) & 0x20000) != 0 )
      {
        v11 = *(_DWORD *)(v10 + 4);
        v29 = *(_QWORD *)(*(_QWORD *)(QuadPart + 3712) + 8 * v20);
        v30[1] = (struct _LIST_ENTRY *)v30;
        v30[0] = (struct _LIST_ENTRY *)v30;
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v31, (struct _KTHREAD **)(QuadPart + 44512), 0);
        DXGPUSHLOCK::AcquireExclusive(v32);
        v33 = 2;
        if ( (unsigned __int8)VIDMM_SEGMENT::FreeSpaceForSecureResource(v29, v30, a2, a6) )
        {
          if ( *(_DWORD *)(v29 + 412) )
          {
            v22 = v30[0];
            if ( (struct _LIST_ENTRY **)v30[0] == v30 )
            {
LABEL_28:
              v9 = 0;
            }
            else
            {
              do
              {
                v23 = v22;
                v24 = (VIDMM_GLOBAL **)&v22[-12];
                v22 = v22->Flink;
                VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v21, v23);
                VIDMM_DEVICE::PartiallySuspend(v24);
                VIDMM_DEVICE::FaultAllAllocations((VIDMM_DEVICE *)v24);
              }
              while ( v22 != (struct _LIST_ENTRY *)v30 );
            }
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v31);
            goto LABEL_27;
          }
        }
        else
        {
          while ( (struct _LIST_ENTRY **)v30[0] != v30 )
            VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v21, v30[0]);
          if ( *(_DWORD *)(v29 + 412) )
            goto LABEL_28;
        }
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v31);
      }
      DeviceToSuspend = VIDMM_SEGMENT::GetDeviceToSuspend(
                          *(_QWORD *)(*(_QWORD *)(a1->QuadPart + 3712) + 8 * v20),
                          a3,
                          v11,
                          a5,
                          a7);
      v26 = DeviceToSuspend;
      if ( DeviceToSuspend )
      {
        if ( (*((_DWORD *)DeviceToSuspend + 15) & 7) == 1 || v11 == 2 )
        {
          VIDMM_DEVICE::FullySuspend((VIDMM_GLOBAL **)DeviceToSuspend);
          VIDMM_DEVICE::FaultAllAllocations(v26);
          goto LABEL_27;
        }
        v27 = (VIDMM_PROCESS_ADAPTER_INFO *)*((_QWORD *)DeviceToSuspend + 2);
        if ( v27 && VIDMM_PROCESS_ADAPTER_INFO::SuspendAllDevices(v27, 0) )
          goto LABEL_27;
      }
      v8 = a1;
      v10 = a4;
      v12 = v36;
LABEL_24:
      if ( !v13 )
        goto LABEL_25;
    }
  }
LABEL_26:
  v9 = 0;
LABEL_27:
  VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR::~VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR((VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR *)v34);
  return v9;
}
