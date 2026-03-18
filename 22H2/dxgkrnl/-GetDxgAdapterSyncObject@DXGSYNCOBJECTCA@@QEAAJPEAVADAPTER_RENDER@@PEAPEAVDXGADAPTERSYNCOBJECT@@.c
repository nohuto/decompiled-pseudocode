/*
 * XREFs of ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C034FDCC
 * Callers:
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x1C01CA320 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C01DEF28 (-GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z @ 0x1C0058564 (--_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C0058598 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@@Z @ 0x1C01A6E18 (-InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(
        DXGSYNCOBJECTCA *this,
        struct ADAPTER_RENDER *a2,
        struct DXGADAPTERSYNCOBJECT **a3)
{
  int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGADAPTERSYNCOBJECT *AdapterObject; // rbx
  __int64 v10; // rax

  v6 = 0;
  AdapterObject = DXGSYNCOBJECTCA::FindAdapterObject(this, a2);
  if ( AdapterObject || !v7 )
    goto LABEL_9;
  if ( (*(_DWORD *)(v8 + 204) & 4) == 0 )
  {
    WdLogSingleEntry1(1LL, 2221LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCrossAdapterSyncObject()", 2221LL, 0LL, 0LL, 0LL, 0LL);
  }
  v10 = operator new[](0x48uLL, 0x4B677844u, 256LL);
  AdapterObject = (struct DXGADAPTERSYNCOBJECT *)v10;
  if ( !v10 )
    return 3221225495LL;
  *(_QWORD *)(v10 + 16) = a2;
  *(_OWORD *)v10 = 0LL;
  *(_QWORD *)(v10 + 32) = 0LL;
  *(_WORD *)(v10 + 24) = 0;
  *(_BYTE *)(v10 + 26) = 0;
  *(_QWORD *)(v10 + 64) = this;
  *(_OWORD *)(v10 + 48) = 0LL;
  v6 = DXGADAPTERSYNCOBJECT::InitializeAdapterObject((DXGADAPTERSYNCOBJECT *)v10, this, 0LL);
  if ( v6 >= 0 )
LABEL_9:
    *a3 = AdapterObject;
  else
    DXGADAPTERSYNCOBJECTCA::`scalar deleting destructor'(AdapterObject);
  return (unsigned int)v6;
}
