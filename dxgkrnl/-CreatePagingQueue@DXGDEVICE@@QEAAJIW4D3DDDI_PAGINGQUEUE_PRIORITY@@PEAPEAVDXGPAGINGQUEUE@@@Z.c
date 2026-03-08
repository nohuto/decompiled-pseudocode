/*
 * XREFs of ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C01DF5AC
 * Callers:
 *     ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x1C01B1994 (-DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??_GDXGPAGINGQUEUE@@IEAAPEAXI@Z @ 0x1C0048824 (--_GDXGPAGINGQUEUE@@IEAAPEAXI@Z.c)
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B93B8 (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z @ 0x1C01DF6EC (-Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0340210 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z @ 0x1C0371820 (-MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z.c)
 *     ?VmBusSendCreatePagingQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATEPAGINGQUEUE@@PEAUDXGKVMB_COMMAND_CREATEPAGINGQUEUE_RETURN@@@Z @ 0x1C0382820 (-VmBusSendCreatePagingQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATEPAGINGQUEUE@@PE.c)
 */

__int64 __fastcall DXGDEVICE::CreatePagingQueue(
        DXGDEVICE *this,
        unsigned int a2,
        enum D3DDDI_PAGINGQUEUE_PRIORITY a3,
        struct DXGPAGINGQUEUE **a4)
{
  __int64 Pool2; // rax
  struct COREDEVICEACCESS *v9; // rdx
  __int64 v10; // rbp
  DXGPAGINGQUEUE *v11; // rax
  DXGPAGINGQUEUE **v12; // rcx
  __int64 v13; // rdx
  DXGPROCESS *v15; // rcx
  unsigned int v16; // ebx
  unsigned int HostProcess; // eax
  __int64 v18; // rdx
  int v19; // eax
  _D3DKMT_CREATEPAGINGQUEUE v20; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v21[2]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v22; // [rsp+80h] [rbp-48h]

  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry1(1LL, 8021LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDeviceLockExclusiveOwner()", 8021LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 8022LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      8022LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a4 )
  {
    WdLogSingleEntry1(1LL, 8023LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"PagingQueue != NULL", 8023LL, 0LL, 0LL, 0LL, 0LL);
  }
  Pool2 = ExAllocatePool2(257LL, 80LL, 1265072196LL);
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 16) = this;
    *(_OWORD *)Pool2 = 0LL;
    *(_QWORD *)(Pool2 + 24) = 0LL;
    *(_QWORD *)(Pool2 + 32) = 0LL;
    *(_QWORD *)(Pool2 + 40) = 0LL;
    *(_DWORD *)(Pool2 + 48) = 0;
    *(_QWORD *)(Pool2 + 56) = 0LL;
    *(_QWORD *)(Pool2 + 64) = 1LL;
    *(_BYTE *)(Pool2 + 72) = 0;
    *a4 = (struct DXGPAGINGQUEUE *)Pool2;
    LODWORD(v10) = DXGPAGINGQUEUE::Initialize((DXGPAGINGQUEUE *)Pool2, a2, a3);
    if ( (int)v10 >= 0 )
    {
      v10 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( !*(_BYTE *)(v10 + 209) )
      {
LABEL_11:
        v11 = *a4;
        v12 = (DXGPAGINGQUEUE **)((char *)this + 528);
        v13 = *((_QWORD *)this + 66);
        if ( *(DXGDEVICE **)(v13 + 8) != (DXGDEVICE *)((char *)this + 528) )
          __fastfail(3u);
        *(_QWORD *)v11 = v13;
        *((_QWORD *)v11 + 1) = v12;
        *(_QWORD *)(v13 + 8) = v11;
        *v12 = v11;
        _InterlockedIncrement64((volatile signed __int64 *)this + 8);
        return 0LL;
      }
      v15 = (DXGPROCESS *)*((_QWORD *)this + 5);
      *(_OWORD *)&v20.FenceValueCPUVirtualAddress = 0LL;
      v20.PhysicalAdapterIndex = a2;
      v16 = *((_DWORD *)this + 118);
      *(_OWORD *)&v20.hDevice = 0LL;
      v22 = 0LL;
      *(_OWORD *)v21 = 0LL;
      v20.Priority = a3;
      HostProcess = DXGPROCESS::GetHostProcess(v15);
      LODWORD(v10) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreatePagingQueue(
                       (DXG_GUEST_VIRTUALGPU_VMBUS *)(v10 + 4472),
                       HostProcess,
                       v16,
                       &v20,
                       (struct DXGKVMB_COMMAND_CREATEPAGINGQUEUE_RETURN *)v21);
      if ( (int)v10 >= 0 )
      {
        v18 = *((_QWORD *)*a4 + 5);
        *((_DWORD *)*a4 + 7) = v21[0];
        *(_DWORD *)(v18 + 44) = HIDWORD(v21[0]);
        v19 = MapGuestFenceCpuVaToHost(
                v21[1],
                (void **)(v18 + 56),
                (unsigned __int64 *)(v18 + 80),
                (unsigned int *)(v18 + 88));
        v10 = v19;
        if ( v19 >= 0 )
          goto LABEL_11;
        WdLogSingleEntry2(2LL, v19, 8071LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"MapCpuVaForParavirtualization failed, returning 0x%I64x",
          v10,
          8071LL,
          0LL,
          0LL,
          0LL);
      }
    }
  }
  else
  {
    *a4 = 0LL;
    LODWORD(v10) = -1073741801;
    WdLogSingleEntry2(3LL, this, -1073741801LL);
  }
  if ( *a4 )
  {
    DXGPAGINGQUEUE::DestroyCoreState(*a4, v9);
    if ( *a4 )
      DXGPAGINGQUEUE::`scalar deleting destructor'(*a4);
    *a4 = 0LL;
  }
  return (unsigned int)v10;
}
