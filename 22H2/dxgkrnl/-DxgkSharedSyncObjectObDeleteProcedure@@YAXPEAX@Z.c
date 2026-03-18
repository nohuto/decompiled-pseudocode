/*
 * XREFs of ?DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z @ 0x1C01EA070
 * Callers:
 *     ?CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C01EE324 (-CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     DxgkWslDestroyNtSharedObject @ 0x1C03294D0 (DxgkWslDestroyNtSharedObject.c)
 *     DxgkWslShareObjects @ 0x1C03297A0 (DxgkWslShareObjects.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C01A5A90 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?VmBusSendDestroyNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x1C038818C (-VmBusSendDestroyNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 */

void __fastcall DxgkSharedSyncObjectObDeleteProcedure(struct DXGSYNCOBJECT **a1, __int64 a2, __int64 a3)
{
  PERESOURCE *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  struct DXGGLOBAL *Global; // rax
  int v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  char v10; // [rsp+30h] [rbp-18h]

  v8 = -1;
  v9 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v10 = 1;
    v8 = 16002;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 16002);
  }
  else
  {
    v10 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v8, 16002);
  if ( *((_DWORD *)a1 + 2) )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroyNtSharedObject(
      *((DXG_GUEST_GLOBAL_VMBUS **)Global + 214),
      *((_DWORD *)a1 + 2));
  }
  v4 = (PERESOURCE *)DXGGLOBAL::GetGlobal();
  DXGGLOBAL::DestroySyncObject(v4, *a1, 0);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v8);
  if ( v10 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v5, &EventProfilerExit, v6, v8);
  }
}
