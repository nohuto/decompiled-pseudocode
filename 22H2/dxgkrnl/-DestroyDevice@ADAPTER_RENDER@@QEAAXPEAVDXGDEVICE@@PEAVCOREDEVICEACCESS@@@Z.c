/*
 * XREFs of ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0193400
 * Callers:
 *     ?DestroyDeviceNoLocksInternal@ADAPTER_RENDER@@AEAAXPEAVDXGDEVICE@@@Z @ 0x1C018A3D8 (-DestroyDeviceNoLocksInternal@ADAPTER_RENDER@@AEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01A8AD0 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C01E03B4 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00049F4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z @ 0x1C0004F5C (-GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C000501C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0008100 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C018B128 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ??1DXGDEVICE@@QEAA@XZ @ 0x1C01A952C (--1DXGDEVICE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyVirtualGpuState@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0367ECC (-DestroyVirtualGpuState@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall ADAPTER_RENDER::DestroyDevice(DXGADAPTER **this, struct DXGDEVICE *a2, PERESOURCE **a3)
{
  struct _KTHREAD *CurrentThread; // rax
  struct DXGPROCESS_RENDER_ADAPTER_INFO *RenderAdapterInfo; // rax
  struct DXGPROCESS_RENDER_ADAPTER_INFO *v8; // rsi
  ADAPTER_DISPLAY *v9; // rcx
  __int64 *v10; // rdx
  __int64 *v11; // rcx
  __int64 **v12; // rax
  struct DXGDEVICE *v13; // rcx
  struct DXGDEVICE **v14; // rax
  __int64 v15; // rsi
  const wchar_t *v16; // r9

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 1886LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 1886LL, 0LL, 0LL, 0LL, 0LL);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((_DWORD *)a2 + 116) == 2 )
  {
    if ( this[7] == CurrentThread )
      goto LABEL_5;
    v15 = 1889LL;
    WdLogSingleEntry1(1LL, 1889LL);
    v16 = L"m_DeviceCreationLockCdd.IsExclusiveOwner()";
LABEL_23:
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)v16, v15, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_5;
  }
  if ( this[4] != CurrentThread )
  {
    v15 = 1893LL;
    WdLogSingleEntry1(1LL, 1893LL);
    v16 = L"m_DeviceCreationLock.IsExclusiveOwner()";
    goto LABEL_23;
  }
LABEL_5:
  if ( *((_DWORD *)this[2] + 50) == 1 )
  {
    RenderAdapterInfo = DXGPROCESS::GetRenderAdapterInfo(*((DXGPROCESS **)a2 + 5), *((_DWORD *)this[2] + 60));
    v8 = RenderAdapterInfo;
    if ( RenderAdapterInfo )
    {
      if ( *((struct DXGDEVICE **)RenderAdapterInfo + 9) == a2 )
      {
        DXGVIRTUALGPUMANAGER::DestroyVirtualGpuState(this[233], a2);
        *((_QWORD *)v8 + 9) = 0LL;
      }
    }
  }
  v9 = (ADAPTER_DISPLAY *)*((_QWORD *)this[2] + 365);
  if ( v9 && ADAPTER_DISPLAY::IsVidPnSourceOwner(v9, a2) )
  {
    WdLogSingleEntry1(1LL, 1928LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!GetAdapter()->IsDisplayAdapter() || (!GetAdapter()->GetDisplayCore()->IsVidPnSourceOwner(pDevice))",
      1928LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGPROCESS::GetCurrent() )
  {
    WdLogSingleEntry1(1LL, 1934LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess != NULL", 1934LL, 0LL, 0LL, 0LL, 0LL);
  }
  v10 = (__int64 *)(((unsigned __int64)a2 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64));
  v11 = (__int64 *)*v10;
  if ( *(__int64 **)(*v10 + 8) != v10
    || (v12 = *(__int64 ***)((((unsigned __int64)a2 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64))
                           + 8),
        *v12 != v10)
    || (*v12 = v11,
        v11[1] = (__int64)v12,
        DXGDEVICE::DestroyAllDeviceState(a2, a3),
        v13 = *(struct DXGDEVICE **)a2,
        *(struct DXGDEVICE **)(*(_QWORD *)a2 + 8LL) != a2)
    || (v14 = (struct DXGDEVICE **)*((_QWORD *)a2 + 1), *v14 != a2) )
  {
    __fastfail(3u);
  }
  *v14 = v13;
  *((_QWORD *)v13 + 1) = v14;
  DXGDEVICE::~DXGDEVICE(a2);
  ExFreePoolWithTag(a2, 0);
  DXGADAPTER::ReleaseReferenceNoTracking(this[2]);
}
