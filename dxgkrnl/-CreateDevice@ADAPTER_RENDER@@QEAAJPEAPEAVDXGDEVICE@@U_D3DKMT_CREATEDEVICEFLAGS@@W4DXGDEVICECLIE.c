/*
 * XREFs of ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C01B70A8
 * Callers:
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C01B3464 (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C01C4FB0 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 *     DxgkCreateLightweightDeviceAndContext @ 0x1C02CC178 (DxgkCreateLightweightDeviceAndContext.c)
 *     ?GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z @ 0x1C0340418 (-GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0376120 (-VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0009EE0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??_GDXGDEVICE@@QEAAPEAXI@Z @ 0x1C00419D0 (--_GDXGDEVICE@@QEAAPEAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B3FD8 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C01B57FC (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 *     ??0DXGDEVICE@@QEAA@PEAVADAPTER_RENDER@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@U_D3DKMT_CREATEDEVICEFLAGS@@PEAVDXGPROCESS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EE@Z @ 0x1C01B7254 (--0DXGDEVICE@@QEAA@PEAVADAPTER_RENDER@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@U_.c)
 *     ?AddDevice@DXGPROCESS@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01B7740 (-AddDevice@DXGPROCESS@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::CreateDevice(
        DXGADAPTER **a1,
        DXGDEVICE **a2,
        int a3,
        int a4,
        DXGADAPTER *a5,
        char a6,
        unsigned __int8 a7,
        char a8,
        __int64 a9,
        __int64 a10,
        char a11)
{
  __int64 v15; // rcx
  DXGPROCESS *Current; // rbp
  __int64 Pool2; // rax
  DXGDEVICE *v18; // rax
  DXGDEVICE *v19; // rbx
  int v20; // edi
  struct _KTHREAD *CurrentThread; // rax
  DXGADAPTER **v22; // rsi
  DXGADAPTER *v23; // rax
  int v25; // [rsp+40h] [rbp-38h]

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1[2]) )
  {
    WdLogSingleEntry1(1LL, 1733LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 1733LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a5 && (!DXGADAPTER::IsCoreResourceSharedOwner(a5) || !*((_QWORD *)a5 + 365)) )
  {
    WdLogSingleEntry1(1LL, 1736LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pDisplayAdapter == NULL) || (pDisplayAdapter->IsCoreResourceSharedOwner() && pDisplayAdapter->IsDisplayAdapter())",
      1736LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 1737LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"ppDevice != NULL", 1737LL, 0LL, 0LL, 0LL, 0LL);
  }
  Current = DXGPROCESS::GetCurrent(v15);
  if ( !Current )
  {
    WdLogSingleEntry1(1LL, 1743LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess != NULL", 1743LL, 0LL, 0LL, 0LL, 0LL);
  }
  *a2 = 0LL;
  _InterlockedIncrement64((volatile signed __int64 *)a1[2] + 3);
  Pool2 = ExAllocatePool2(257LL, 1952LL, 1265072196LL);
  if ( !Pool2
    || (LOBYTE(v25) = a8,
        v18 = (DXGDEVICE *)DXGDEVICE::DXGDEVICE(Pool2, a1, a9, a10, a3, Current, a4, a5, v25, a11),
        (v19 = v18) == 0LL) )
  {
    v20 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Out of memory allocating DXGDEVICE class, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_27;
  }
  v20 = DXGDEVICE::Initialize(v18, a6, a7);
  if ( v20 < 0 )
  {
    DXGDEVICE::DestroyAllDeviceState(v19, 0LL);
    DXGDEVICE::`scalar deleting destructor'(v19);
LABEL_27:
    DXGADAPTER::ReleaseReferenceNoTracking(a1[2]);
    return (unsigned int)v20;
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((_DWORD *)v19 + 116) == 2 )
  {
    if ( a1[7] != CurrentThread )
    {
      WdLogSingleEntry1(1LL, 1803LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"m_DeviceCreationLockCdd.IsExclusiveOwner()",
        1803LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v22 = a1 + 20;
  }
  else
  {
    if ( a1[4] != CurrentThread )
    {
      WdLogSingleEntry1(1LL, 1808LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"m_DeviceCreationLock.IsExclusiveOwner()",
        1808LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v22 = a1 + 18;
  }
  v23 = *v22;
  if ( *((DXGADAPTER ***)*v22 + 1) != v22 )
    __fastfail(3u);
  *(_QWORD *)v19 = v23;
  *((_QWORD *)v19 + 1) = v22;
  *((_QWORD *)v23 + 1) = v19;
  *v22 = v19;
  DXGPROCESS::AddDevice(Current, v19);
  *a2 = v19;
  return (unsigned int)v20;
}
