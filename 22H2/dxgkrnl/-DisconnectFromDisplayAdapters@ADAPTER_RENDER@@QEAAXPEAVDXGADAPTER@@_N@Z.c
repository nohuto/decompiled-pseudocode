/*
 * XREFs of ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@_N@Z @ 0x1C021643C
 * Callers:
 *     ?DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z @ 0x1C01960F0 (-DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z.c)
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1C0226DB8 (DxgkSetIndirectDisplayRenderAdapter.c)
 * Callees:
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0001E30 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00027F8 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000D994 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@E@Z @ 0x1C02179AC (-StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@E@Z.c)
 */

void __fastcall ADAPTER_RENDER::DisconnectFromDisplayAdapters(ADAPTER_RENDER *this, struct DXGADAPTER *a2, char a3)
{
  ADAPTER_RENDER *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  struct _LUID *v8; // rdx
  ADAPTER_DISPLAY *v9; // rax
  unsigned int i; // edi
  __int64 v11; // rdx
  PVOID v12; // rcx
  unsigned int v13; // edi
  struct _IO_WORKITEM *WorkItem; // rax
  PVOID Context[2]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v16[144]; // [rsp+30h] [rbp-A8h] BYREF

  v5 = this;
  if ( a2 )
  {
    this = KeGetCurrentThread();
    if ( *(ADAPTER_RENDER **)(*((_QWORD *)a2 + 337) + 152LL) != this )
    {
      v6 = WdLogNewEntry5_WdAssertion(this, a2);
      *(_QWORD *)(v6 + 24) = 4731LL;
      WdLogEvent5_WdAssertion(v6);
    }
  }
  if ( *((struct _KTHREAD **)v5 + 4) != KeGetCurrentThread() || *((struct _KTHREAD **)v5 + 7) != KeGetCurrentThread() )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v7 + 24) = 4732LL;
    WdLogEvent5_WdAssertion(v7);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v16, *((struct DXGADAPTER *const *)v5 + 2), a2);
  if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v16, 1LL) >= 0 )
  {
    ADAPTER_RENDER::StopDisplayDevices(v5, 2LL, a2);
    ADAPTER_RENDER::StopDisplayDevices(v5, 1LL, a2);
    if ( a2 )
      *(_BYTE *)(*((_QWORD *)a2 + 337) + 248LL) = 1;
  }
  if ( a3 )
  {
    v9 = (ADAPTER_DISPLAY *)*((_QWORD *)a2 + 337);
    for ( i = 0; i < *((_DWORD *)v9 + 20); ++i )
    {
      if ( ADAPTER_DISPLAY::IsPartOfDesktop(v9, i) )
        break;
      v9 = (ADAPTER_DISPLAY *)*((_QWORD *)a2 + 337);
    }
    if ( i < *(_DWORD *)(*((_QWORD *)a2 + 337) + 80LL) )
    {
      Context[0] = 0LL;
      DXGADAPTER::IsAdapterSessionized(a2, v8, 0LL, (unsigned __int64 *)Context);
      v12 = Context[0];
      if ( Context[0] == (PVOID)0x200000000LL )
        v12 = (PVOID)*(unsigned int *)(*((_QWORD *)DXGGLOBAL::GetGlobal(0x200000000LL, v11) + 102) + 128LL);
      v13 = -1;
      if ( v12 != (PVOID)0x100000000LL )
        v13 = (unsigned int)v12;
      WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)a2 + 27));
      if ( WorkItem )
        IoQueueWorkItemEx(WorkItem, DisconnectFromDisplayAdaptersWorkItem, DelayedWorkQueue, (PVOID)v13);
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v16, (__int64)v8);
}
