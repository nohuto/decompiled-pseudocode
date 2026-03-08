/*
 * XREFs of ?VmBusSendDdiGetStandardAllocationDriverData@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C0382EDC
 * Callers:
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C01B4EEC (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005B244 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C03715E8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x1C038B3B0 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDdiGetStandardAllocationDriverData(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA *a3)
{
  __int64 v6; // r14
  int v7; // eax
  int v8; // ebp
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *pCreateSharedPrimarySurfaceData; // rax
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *v10; // rax
  UINT v11; // r15d
  int *v12; // rax
  int *v13; // rsi
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *v14; // rax
  UINT v15; // eax
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *v16; // rcx
  UINT v17; // eax
  unsigned int v19[4]; // [rsp+50h] [rbp-168h] BYREF
  __int128 v20; // [rsp+60h] [rbp-158h] BYREF
  int v21; // [rsp+70h] [rbp-148h]

  if ( a3->AllocationPrivateDriverDataSize <= 0x20000 && a3->ResourcePrivateDriverDataSize <= 0x20000 )
  {
    v20 = 0LL;
    v21 = 0;
    DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v20, this, 0x40u, 0LL, 0LL, 0LL);
    v6 = v20;
    if ( !(_QWORD)v20 )
    {
LABEL_13:
      v8 = -1073741801;
      goto LABEL_32;
    }
    v7 = *((_DWORD *)a2 + 126);
    *(_BYTE *)(v20 + 12) = 0;
    *(_DWORD *)(v6 + 12) &= 0x1FFu;
    *(_QWORD *)v6 = 0LL;
    *(_DWORD *)(v6 + 8) = v7;
    *(_QWORD *)(v6 + 16) = 39LL;
    *(_DWORD *)(v6 + 24) = a3->StandardAllocationType;
    *(_DWORD *)(v6 + 36) = a3->PhysicalAdapterIndex;
    *(_DWORD *)(v6 + 32) = a3->ResourcePrivateDriverDataSize;
    *(_DWORD *)(v6 + 28) = a3->AllocationPrivateDriverDataSize;
    switch ( a3->StandardAllocationType )
    {
      case D3DKMDT_STANDARDALLOCATION_SHAREDPRIMARYSURFACE:
        goto LABEL_11;
      case D3DKMDT_STANDARDALLOCATION_SHADOWSURFACE:
        *(_OWORD *)(v6 + 40) = *(_OWORD *)&a3->pCreateSharedPrimarySurfaceData->Width;
        break;
      case D3DKMDT_STANDARDALLOCATION_STAGINGSURFACE:
        pCreateSharedPrimarySurfaceData = a3->pCreateSharedPrimarySurfaceData;
        *(_QWORD *)(v6 + 40) = *(_QWORD *)&pCreateSharedPrimarySurfaceData->Width;
        *(_DWORD *)(v6 + 48) = pCreateSharedPrimarySurfaceData->Format;
        break;
      case D3DKMDT_STANDARDALLOCATION_GDISURFACE:
LABEL_11:
        v10 = a3->pCreateSharedPrimarySurfaceData;
        *(_OWORD *)(v6 + 40) = *(_OWORD *)&v10->Width;
        *(_QWORD *)(v6 + 56) = *(_QWORD *)&v10->RefreshRate.Denominator;
        break;
      default:
        WdLogSingleEntry1(2LL, 11396LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid standard allocation type",
          11396LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v8 = -1073741811;
LABEL_32:
        DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v20);
        return (unsigned int)v8;
    }
    v11 = (a3->ResourcePrivateDriverDataSize + 43 + a3->AllocationPrivateDriverDataSize) & 0xFFFFFFF8;
    v12 = (int *)operator new[](v11, 0x4B677844u, 64LL);
    v13 = v12;
    if ( !v12 )
      goto LABEL_13;
    v19[0] = v11;
    v8 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v20, v12, v19);
    if ( v8 < 0 || (v8 = -1073741823, v19[0] < v11) || (v8 = *v13, *v13 < 0) )
    {
      WdLogSingleEntry1(2LL, v8);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VmBusSendDdiGetStandardAllocationDriverData failed: 0x%I64x",
        v8,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_31:
      operator delete(v13);
      goto LABEL_32;
    }
    switch ( a3->StandardAllocationType )
    {
      case D3DKMDT_STANDARDALLOCATION_SHAREDPRIMARYSURFACE:
        goto LABEL_21;
      case D3DKMDT_STANDARDALLOCATION_SHADOWSURFACE:
        *(_OWORD *)&a3->pCreateSharedPrimarySurfaceData->Width = *(_OWORD *)(v13 + 3);
        break;
      case D3DKMDT_STANDARDALLOCATION_STAGINGSURFACE:
        v16 = a3->pCreateSharedPrimarySurfaceData;
        *(_QWORD *)&v16->Width = *(_QWORD *)(v13 + 3);
        v16->Format = v13[5];
        break;
      case D3DKMDT_STANDARDALLOCATION_GDISURFACE:
LABEL_21:
        v14 = a3->pCreateSharedPrimarySurfaceData;
        *(_OWORD *)&v14->Width = *(_OWORD *)(v13 + 3);
        *(_QWORD *)&v14->RefreshRate.Denominator = *(_QWORD *)(v13 + 7);
        break;
    }
    v15 = v13[1];
    if ( *(_DWORD *)(v6 + 28) )
      memmove(a3->pAllocationPrivateDriverData, v13 + 9, v15);
    else
      a3->AllocationPrivateDriverDataSize = v15;
    v17 = v13[2];
    if ( *(_DWORD *)(v6 + 32) )
      memmove(a3->pResourcePrivateDriverData, (char *)v13 + (unsigned int)v13[1] + 36, v17);
    else
      a3->ResourcePrivateDriverDataSize = v17;
    goto LABEL_31;
  }
  WdLogSingleEntry1(2LL, 11366LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"AllocationPrivateDriverDataSize or ResourcePrivateDriverDataSize is invalid",
    11366LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225485LL;
}
