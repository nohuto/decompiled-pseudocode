/*
 * XREFs of ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@_N@Z @ 0x1C02BBEF4
 * Callers:
 *     ?DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z @ 0x1C020C974 (-DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z.c)
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1C02D0E78 (DxgkSetIndirectDisplayRenderAdapter.c)
 * Callees:
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0001D60 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C0003E44 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0009274 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@E@Z @ 0x1C02BD3BC (-StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@E@Z.c)
 */

void __fastcall ADAPTER_RENDER::DisconnectFromDisplayAdapters(ADAPTER_RENDER *this, struct DXGADAPTER *a2, char a3)
{
  unsigned int v3; // esi
  struct _LUID *v7; // rdx
  ADAPTER_DISPLAY *v8; // rax
  unsigned int i; // edi
  PVOID v10; // rcx
  struct _IO_WORKITEM *WorkItem; // rax
  PVOID Context[2]; // [rsp+50h] [rbp-D8h] BYREF
  _BYTE v13[144]; // [rsp+60h] [rbp-C8h] BYREF

  v3 = -1;
  if ( a2 && *(struct _KTHREAD **)(*((_QWORD *)a2 + 365) + 176LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 5053LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pDisplayDevice == NULL) || pDisplayDevice->GetDisplayCore()->GetChangePairedAdapterLock()->IsOwner()",
      5053LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((struct _KTHREAD **)this + 4) != KeGetCurrentThread()
    || *((struct _KTHREAD **)this + 7) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 5054LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_DeviceCreationLock.IsExclusiveOwner() && m_DeviceCreationLockCdd.IsExclusiveOwner()",
      5054LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v13, *((struct DXGADAPTER *const *)this + 2), a2);
  if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v13, 1LL) >= 0 )
  {
    ADAPTER_RENDER::StopDisplayDevices(this, 2LL, a2);
    ADAPTER_RENDER::StopDisplayDevices(this, 1LL, a2);
    if ( a2 )
      *(_BYTE *)(*((_QWORD *)a2 + 365) + 288LL) = 1;
  }
  if ( a3 )
  {
    v8 = (ADAPTER_DISPLAY *)*((_QWORD *)a2 + 365);
    for ( i = 0; i < *((_DWORD *)v8 + 24); ++i )
    {
      if ( ADAPTER_DISPLAY::IsPartOfDesktop(v8, i) )
        break;
      v8 = (ADAPTER_DISPLAY *)*((_QWORD *)a2 + 365);
    }
    if ( i < *(_DWORD *)(*((_QWORD *)a2 + 365) + 96LL) )
    {
      Context[0] = 0LL;
      DXGADAPTER::IsAdapterSessionized(a2, v7, 0LL, (unsigned __int64 *)Context);
      v10 = Context[0];
      if ( Context[0] == (PVOID)0x200000000LL )
        v10 = (PVOID)*(unsigned int *)(*((_QWORD *)DXGGLOBAL::GetGlobal() + 118) + 144LL);
      if ( v10 != (PVOID)0x100000000LL )
        v3 = (unsigned int)v10;
      WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)a2 + 27));
      if ( WorkItem )
        IoQueueWorkItemEx(WorkItem, DisconnectFromDisplayAdaptersWorkItem, DelayedWorkQueue, (PVOID)v3);
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v13);
}
