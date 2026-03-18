/*
 * XREFs of ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C018D67C
 * Callers:
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C01A1184 (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C01E03B4 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 *     DxgkCreateLightweightDeviceAndContext @ 0x1C02D0EF8 (DxgkCreateLightweightDeviceAndContext.c)
 *     ?GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z @ 0x1C0344E58 (-GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037A890 (-VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00049F4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0008100 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_GDXGDEVICE@@QEAAPEAXI@Z @ 0x1C0042A28 (--_GDXGDEVICE@@QEAAPEAXI@Z.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C018B128 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?AddDevice@DXGPROCESS@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C018D600 (-AddDevice@DXGPROCESS@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICE@@QEAA@PEAVADAPTER_RENDER@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@U_D3DKMT_CREATEDEVICEFLAGS@@PEAVDXGPROCESS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EE@Z @ 0x1C018D828 (--0DXGDEVICE@@QEAA@PEAVADAPTER_RENDER@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@U_.c)
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C018DD14 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::CreateDevice(
        DXGADAPTER **a1,
        DXGDEVICE **a2,
        int a3,
        int a4,
        DXGADAPTER *a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        char a8,
        __int64 a9,
        __int64 a10,
        char a11)
{
  DXGPROCESS *Current; // rbp
  __int64 Pool2; // rax
  DXGDEVICE *v17; // rax
  DXGDEVICE *v18; // rbx
  int v19; // edi
  struct _KTHREAD *CurrentThread; // rax
  DXGADAPTER **v21; // rsi
  DXGADAPTER *v22; // rax
  int v24; // [rsp+40h] [rbp-38h]

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1[2]) )
  {
    WdLogSingleEntry1(1LL, 1734LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 1734LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a5 && (!DXGADAPTER::IsCoreResourceSharedOwner(a5) || !*((_QWORD *)a5 + 365)) )
  {
    WdLogSingleEntry1(1LL, 1737LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pDisplayAdapter == NULL) || (pDisplayAdapter->IsCoreResourceSharedOwner() && pDisplayAdapter->IsDisplayAdapter())",
      1737LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 1738LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"ppDevice != NULL", 1738LL, 0LL, 0LL, 0LL, 0LL);
  }
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry1(1LL, 1744LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess != NULL", 1744LL, 0LL, 0LL, 0LL, 0LL);
  }
  *a2 = 0LL;
  _InterlockedIncrement64((volatile signed __int64 *)a1[2] + 3);
  Pool2 = ExAllocatePool2(257LL, 1952LL, 1265072196LL);
  if ( !Pool2
    || (LOBYTE(v24) = a8,
        v17 = (DXGDEVICE *)DXGDEVICE::DXGDEVICE(Pool2, a1, a9, a10, a3, Current, a4, a5, v24, a11),
        (v18 = v17) == 0LL) )
  {
    v19 = -1073741801;
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
  v19 = DXGDEVICE::Initialize(v17, a6, a7);
  if ( v19 < 0 )
  {
    DXGDEVICE::DestroyAllDeviceState(v18, 0LL);
    DXGDEVICE::`scalar deleting destructor'(v18);
LABEL_27:
    DXGADAPTER::ReleaseReferenceNoTracking(a1[2]);
    return (unsigned int)v19;
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((_DWORD *)v18 + 116) == 2 )
  {
    if ( a1[7] != CurrentThread )
    {
      WdLogSingleEntry1(1LL, 1804LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"m_DeviceCreationLockCdd.IsExclusiveOwner()",
        1804LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v21 = a1 + 20;
  }
  else
  {
    if ( a1[4] != CurrentThread )
    {
      WdLogSingleEntry1(1LL, 1809LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"m_DeviceCreationLock.IsExclusiveOwner()",
        1809LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v21 = a1 + 18;
  }
  v22 = *v21;
  if ( *((DXGADAPTER ***)*v21 + 1) != v21 )
    __fastfail(3u);
  *(_QWORD *)v18 = v22;
  *((_QWORD *)v18 + 1) = v21;
  *((_QWORD *)v22 + 1) = v18;
  *v21 = v18;
  DXGPROCESS::AddDevice(Current, v18);
  *a2 = v18;
  return (unsigned int)v19;
}
