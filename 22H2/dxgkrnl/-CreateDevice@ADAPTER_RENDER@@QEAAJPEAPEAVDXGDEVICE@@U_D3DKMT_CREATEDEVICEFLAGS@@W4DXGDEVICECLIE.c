/*
 * XREFs of ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@@Z @ 0x1C01384D0
 * Callers:
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C0138B5C (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C015246C (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 *     DxgkCreateLightweightDeviceAndContext @ 0x1C02236C0 (DxgkCreateLightweightDeviceAndContext.c)
 *     ?VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023E970 (-VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z @ 0x1C02859D4 (-GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ??_GDXGDEVICE@@QEAAPEAXI@Z @ 0x1C00030AC (--_GDXGDEVICE@@QEAAPEAXI@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C00032DC (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0007DCC (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00EFA08 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C0137FB4 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 *     ?AddDevice@DXGPROCESS@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0138654 (-AddDevice@DXGPROCESS@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICE@@QEAA@PEAVADAPTER_RENDER@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@U_D3DKMT_CREATEDEVICEFLAGS@@PEAVDXGPROCESS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@E@Z @ 0x1C01386C8 (--0DXGDEVICE@@QEAA@PEAVADAPTER_RENDER@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@U_.c)
 */

__int64 __fastcall ADAPTER_RENDER::CreateDevice(
        DXGADAPTER **a1,
        __int64 *a2,
        int a3,
        int a4,
        DXGADAPTER *a5,
        char a6,
        unsigned __int8 a7,
        char a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  DXGPROCESS *Current; // rbp
  PVOID v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // esi
  struct _KTHREAD *CurrentThread; // rax
  DXGADAPTER **v31; // rdi
  DXGADAPTER *v32; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1[2]) )
  {
    v34 = WdLogNewEntry5_WdAssertion(v15, v14);
    *(_QWORD *)(v34 + 24) = 1527LL;
    WdLogEvent5_WdAssertion(v34);
  }
  if ( a5 && (!DXGADAPTER::IsCoreResourceSharedOwner(a5) || !*((_QWORD *)a5 + 337)) )
  {
    v35 = WdLogNewEntry5_WdAssertion(v15, v14);
    *(_QWORD *)(v35 + 24) = 1530LL;
    WdLogEvent5_WdAssertion(v35);
  }
  if ( !a2 )
  {
    v36 = WdLogNewEntry5_WdAssertion(v15, v14);
    *(_QWORD *)(v36 + 24) = 1531LL;
    WdLogEvent5_WdAssertion(v36);
  }
  Current = DXGPROCESS::GetCurrent(v15, v14, v16, v17);
  if ( !Current )
  {
    v37 = WdLogNewEntry5_WdAssertion(v19, v18);
    *(_QWORD *)(v37 + 24) = 1537LL;
    WdLogEvent5_WdAssertion(v37);
  }
  *a2 = 0LL;
  _InterlockedIncrement64((volatile signed __int64 *)a1[2] + 3);
  v21 = DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x780uLL);
  if ( v21 )
    v26 = DXGDEVICE::DXGDEVICE(v21, a1, a9, a10, a3, Current, a4, a5, a8);
  else
    v26 = 0LL;
  if ( !v26 )
  {
    v38 = WdLogNewEntry5_WdLowResource(v23, v22, v24, v25);
    v29 = -1073741801;
    *(_QWORD *)(v38 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v38);
LABEL_28:
    DXGADAPTER::ReleaseReferenceNoTracking(a1[2]);
    return (unsigned int)v29;
  }
  v29 = DXGDEVICE::Initialize((DXGDEVICE *)v26, a6, a7);
  if ( v29 < 0 )
  {
    DXGDEVICE::DestroyAllDeviceState((DXGDEVICE *)v26, 0LL);
    DXGDEVICE::`scalar deleting destructor'((DXGDEVICE *)v26);
    goto LABEL_28;
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(_DWORD *)(v26 + 432) == 2 )
  {
    if ( a1[7] != CurrentThread )
    {
      v39 = WdLogNewEntry5_WdAssertion(v28, v27);
      *(_QWORD *)(v39 + 24) = 1597LL;
      WdLogEvent5_WdAssertion(v39);
    }
    v31 = a1 + 20;
  }
  else
  {
    if ( a1[4] != CurrentThread )
    {
      v40 = WdLogNewEntry5_WdAssertion(v28, v27);
      *(_QWORD *)(v40 + 24) = 1602LL;
      WdLogEvent5_WdAssertion(v40);
    }
    v31 = a1 + 18;
  }
  v32 = *v31;
  if ( *((DXGADAPTER ***)*v31 + 1) != v31 )
    __fastfail(3u);
  *(_QWORD *)v26 = v32;
  *(_QWORD *)(v26 + 8) = v31;
  *((_QWORD *)v32 + 1) = v26;
  *v31 = (DXGADAPTER *)v26;
  DXGPROCESS::AddDevice(Current, (struct DXGDEVICE *)v26);
  *a2 = v26;
  return (unsigned int)v29;
}
