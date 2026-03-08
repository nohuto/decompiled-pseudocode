/*
 * XREFs of ?GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C01D3AB8
 * Callers:
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z @ 0x1C0188F60 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C01A314C (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C0302CC0 (-DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     ?DxgkpDriverKnownEscape@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@PEAXIPEAE@Z @ 0x1C030C358 (-DxgkpDriverKnownEscape@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@PEAXIPEAE@Z.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C03166DC (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C034F87C (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C034B368 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@.c)
 */

__int64 __fastcall DXGSYNCOBJECT::GetDxgAdapterSyncObject(
        DXGSYNCOBJECT *this,
        struct ADAPTER_RENDER *a2,
        struct DXGADAPTERSYNCOBJECT **a3)
{
  struct ADAPTER_RENDER *v5; // rax

  *a3 = 0LL;
  if ( (*((_DWORD *)this + 51) & 4) != 0 )
    return DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(this, a2, a3);
  if ( a2 && (v5 = (struct ADAPTER_RENDER *)*((_QWORD *)this + 39), v5 != a2) )
  {
    WdLogSingleEntry4(2LL, this, v5, a2, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Mismatch RenderCore with 0x%I64x (0x%I64x vs 0x%I64x), returning 0x%I64x",
      (__int64)this,
      *((_QWORD *)this + 39),
      (__int64)a2,
      -1073741811LL,
      0LL);
    return 3221225485LL;
  }
  else
  {
    *a3 = (struct DXGADAPTERSYNCOBJECT *)(((unsigned __int64)this + 296) & -(__int64)(this != 0LL));
    return 0LL;
  }
}
