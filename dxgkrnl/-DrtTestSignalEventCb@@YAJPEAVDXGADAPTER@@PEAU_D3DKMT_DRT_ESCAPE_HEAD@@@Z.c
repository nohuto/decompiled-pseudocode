__int64 __fastcall DrtTestSignalEventCb(struct DXGADAPTER *a1, struct _D3DKMT_DRT_ESCAPE_HEAD *a2)
{
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v5; // r14
  __int64 v6; // rdi
  unsigned int v7; // ebx
  volatile signed __int32 *v8; // r15
  unsigned int v9; // eax
  __int64 v10; // rdx
  int v11; // ecx
  unsigned __int8 v12; // r8
  unsigned int v14; // ebx
  unsigned int v15; // edi
  unsigned int HostProcess; // eax
  int v17; // eax
  void *v18; // rax
  int DxgAdapterSyncObject; // eax
  struct _KTHREAD **v20; // rcx
  _QWORD *v21; // rcx
  int v22; // eax
  _DXGKARGCB_SIGNALEVENT v23; // [rsp+50h] [rbp-48h] BYREF
  struct DXGADAPTERSYNCOBJECT *v24; // [rsp+A8h] [rbp+10h] BYREF

  if ( *((_DWORD *)a2 + 1) < 0x20u )
    return 3221225485LL;
  *(_QWORD *)&v23.0 = 0LL;
  v24 = 0LL;
  Current = DXGPROCESS::GetCurrent((__int64)a1);
  v5 = Current;
  if ( !a1 || !Current )
    return 3221225485LL;
  v6 = 0LL;
  if ( !*((_BYTE *)a2 + 25) )
    goto LABEL_18;
  v7 = *((_DWORD *)a2 + 4);
  v8 = (volatile signed __int32 *)((char *)Current + 248);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v9 = (v7 >> 6) & 0xFFFFFF;
  if ( v9 < *((_DWORD *)v5 + 74) )
  {
    v10 = *((_QWORD *)v5 + 35);
    if ( ((v7 >> 25) & 0x60) == (*(_BYTE *)(v10 + 16LL * v9 + 8) & 0x60)
      && (*(_DWORD *)(v10 + 16LL * v9 + 8) & 0x2000) == 0 )
    {
      v11 = *(_DWORD *)(v10 + 16LL * v9 + 8) & 0x1F;
      if ( v11 )
      {
        if ( v11 == 8 )
        {
          v6 = *(_QWORD *)(v10 + 16LL * v9);
          goto LABEL_12;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v6 = 0LL;
LABEL_12:
  _InterlockedDecrement(v8 + 4);
  ExReleasePushLockSharedEx(v8, 0LL);
  KeLeaveCriticalRegion();
  if ( !v6 )
  {
    WdLogSingleEntry1(2LL, *((_QWORD *)a2 + 2));
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid sync object handle: 0x%I64x",
      *((_QWORD *)a2 + 2),
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( !*((_BYTE *)a1 + 209) )
    goto LABEL_22;
  *((_QWORD *)a2 + 2) = DXGSYNCOBJECT::GetHostHandle((DXGSYNCOBJECT *)v6, *((_DWORD *)a2 + 4), v12);
LABEL_18:
  if ( *((_BYTE *)a1 + 209) )
  {
    v14 = *((_DWORD *)a2 + 1);
    v15 = *((_DWORD *)a1 + 1140);
    HostProcess = DXGPROCESS::GetHostProcess(v5);
    v17 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
            (struct DXGADAPTER *)((char *)a1 + 4472),
            HostProcess,
            v15,
            0,
            0,
            D3DKMT_ESCAPE_DRT_TEST,
            0,
            v14,
            (unsigned __int8 *)a2);
    v6 = v17;
    if ( v17 < 0 )
    {
      WdLogSingleEntry1(2LL, v17);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Paravirtualized escape failed: 0x%I64x",
        v6,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    return (unsigned int)v6;
  }
LABEL_22:
  v18 = (void *)*((_QWORD *)v5 + 8);
  v23.hDxgkProcess = v18;
  if ( !*((_BYTE *)a2 + 25) )
  {
    if ( !v18 )
      return 3221225485LL;
    v23.hEvent = (HANDLE)*((_QWORD *)a2 + 2);
LABEL_30:
    if ( *((_BYTE *)a2 + 24) )
      v22 = CallDxgkSignalEventCbAtDispatch(&v23);
    else
      v22 = DxgkSignalEventCB(&v23);
    LODWORD(v6) = v22;
    return (unsigned int)v6;
  }
  v23.Flags |= 1u;
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v6 + 32));
  DxgAdapterSyncObject = DXGSYNCOBJECT::GetDxgAdapterSyncObject(
                           (DXGSYNCOBJECT *)v6,
                           *((struct ADAPTER_RENDER **)a1 + 366),
                           &v24);
  v20 = (struct _KTHREAD **)(v6 + 32);
  LODWORD(v6) = DxgAdapterSyncObject;
  DXGFASTMUTEX::Release(v20);
  if ( (int)v6 >= 0 )
  {
    v21 = (_QWORD *)*((_QWORD *)v24 + 5);
    v23.hEvent = v21;
    if ( !v21 || !v21[1] )
    {
      WdLogSingleEntry1(2LL, 137LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid CpuEvent object", 137LL, 0LL, 0LL, 0LL, 0LL);
      return 3221225485LL;
    }
    goto LABEL_30;
  }
  WdLogSingleEntry1(2LL, 130LL);
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to get adapter sync object", 130LL, 0LL, 0LL, 0LL, 0LL);
  return (unsigned int)v6;
}
