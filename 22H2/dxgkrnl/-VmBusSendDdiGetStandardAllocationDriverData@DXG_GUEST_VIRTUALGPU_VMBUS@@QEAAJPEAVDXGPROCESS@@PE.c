/*
 * XREFs of ?VmBusSendDdiGetStandardAllocationDriverData@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C02482B4
 * Callers:
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C011B5D4 (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C024DA2C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDdiGetStandardAllocationDriverData(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA *a3)
{
  UINT AllocationPrivateDriverDataSize; // r9d
  UINT ResourcePrivateDriverDataSize; // r8d
  int v7; // eax
  D3DKMDT_STANDARDALLOCATION_TYPE StandardAllocationType; // ecx
  UINT PhysicalAdapterIndex; // eax
  __int32 v10; // ecx
  __int32 v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rax
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *pCreateSharedPrimarySurfaceData; // rax
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *v15; // rax
  unsigned int v16; // r14d
  int *v17; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // esi
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *v22; // rax
  UINT v23; // eax
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *v24; // rcx
  UINT v25; // eax
  __int64 v26; // rax
  struct _MDL *v27; // [rsp+28h] [rbp-48h]
  __int64 v28; // [rsp+30h] [rbp-40h] BYREF
  int v29; // [rsp+38h] [rbp-38h]
  int v30; // [rsp+3Ch] [rbp-34h]
  int v31; // [rsp+40h] [rbp-30h]
  D3DKMDT_STANDARDALLOCATION_TYPE v32; // [rsp+48h] [rbp-28h]
  UINT v33; // [rsp+4Ch] [rbp-24h]
  UINT v34; // [rsp+50h] [rbp-20h]
  UINT v35; // [rsp+54h] [rbp-1Ch]
  __int128 v36; // [rsp+58h] [rbp-18h]
  __int64 v37; // [rsp+68h] [rbp-8h]
  unsigned int v38; // [rsp+A0h] [rbp+30h] BYREF

  AllocationPrivateDriverDataSize = a3->AllocationPrivateDriverDataSize;
  if ( AllocationPrivateDriverDataSize > 0x20000
    || (ResourcePrivateDriverDataSize = a3->ResourcePrivateDriverDataSize, ResourcePrivateDriverDataSize > 0x20000) )
  {
    v13 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v13 + 24) = 9711LL;
    goto LABEL_32;
  }
  v7 = *((_DWORD *)a2 + 106);
  StandardAllocationType = a3->StandardAllocationType;
  v28 = 0LL;
  v30 = 0;
  v29 = v7;
  PhysicalAdapterIndex = a3->PhysicalAdapterIndex;
  v32 = StandardAllocationType;
  v35 = PhysicalAdapterIndex;
  v31 = 39;
  v34 = ResourcePrivateDriverDataSize;
  v33 = AllocationPrivateDriverDataSize;
  v10 = StandardAllocationType - 1;
  if ( !v10 )
    goto LABEL_10;
  v11 = v10 - 1;
  if ( !v11 )
  {
    v36 = *(_OWORD *)&a3->pCreateSharedPrimarySurfaceData->Width;
    goto LABEL_11;
  }
  v12 = (unsigned int)(v11 - 1);
  if ( !(_DWORD)v12 )
  {
    pCreateSharedPrimarySurfaceData = a3->pCreateSharedPrimarySurfaceData;
    *(_QWORD *)&v36 = *(_QWORD *)&pCreateSharedPrimarySurfaceData->Width;
    DWORD2(v36) = pCreateSharedPrimarySurfaceData->Format;
LABEL_11:
    v16 = (ResourcePrivateDriverDataSize + AllocationPrivateDriverDataSize + 43) & 0xFFFFFFF8;
    v17 = (int *)operator new[](v16, 0x4B677844u, (POOL_TYPE)512);
    if ( !v17 )
      return 3221225495LL;
    v38 = v16;
    v21 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)&v28, 0x40u, v17, &v38, v27);
    if ( v21 < 0 || (v21 = -1073741823, v38 < v16) || (v21 = *v17, *v17 < 0) )
    {
      v26 = WdLogNewEntry5_WdError(v20, v19);
      *(_QWORD *)(v26 + 24) = v21;
      WdLogEvent5_WdError(v26);
LABEL_30:
      operator delete[](v17);
      return (unsigned int)v21;
    }
    switch ( a3->StandardAllocationType )
    {
      case D3DKMDT_STANDARDALLOCATION_SHAREDPRIMARYSURFACE:
        goto LABEL_20;
      case D3DKMDT_STANDARDALLOCATION_SHADOWSURFACE:
        *(_OWORD *)&a3->pCreateSharedPrimarySurfaceData->Width = *(_OWORD *)(v17 + 3);
        break;
      case D3DKMDT_STANDARDALLOCATION_STAGINGSURFACE:
        v24 = a3->pCreateSharedPrimarySurfaceData;
        *(_QWORD *)&v24->Width = *(_QWORD *)(v17 + 3);
        v24->Format = v17[5];
        break;
      case D3DKMDT_STANDARDALLOCATION_GDISURFACE:
LABEL_20:
        v22 = a3->pCreateSharedPrimarySurfaceData;
        *(_OWORD *)&v22->Width = *(_OWORD *)(v17 + 3);
        *(_QWORD *)&v22->RefreshRate.Denominator = *(_QWORD *)(v17 + 7);
        break;
    }
    v23 = v17[1];
    if ( v33 )
      memmove(a3->pAllocationPrivateDriverData, v17 + 9, v23);
    else
      a3->AllocationPrivateDriverDataSize = v23;
    v25 = v17[2];
    if ( v34 )
      memmove(a3->pResourcePrivateDriverData, (char *)v17 + (unsigned int)v17[1] + 36, v25);
    else
      a3->ResourcePrivateDriverDataSize = v25;
    goto LABEL_30;
  }
  if ( (_DWORD)v12 == 1 )
  {
LABEL_10:
    v15 = a3->pCreateSharedPrimarySurfaceData;
    v36 = *(_OWORD *)&v15->Width;
    v37 = *(_QWORD *)&v15->RefreshRate.Denominator;
    goto LABEL_11;
  }
  v13 = WdLogNewEntry5_WdError(v12, a2);
  *(_QWORD *)(v13 + 24) = 9735LL;
LABEL_32:
  WdLogEvent5_WdError(v13);
  return 3221225485LL;
}
