/*
 * XREFs of DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C0137450
 * Callers:
 *     DxgkGetMonitorInternalInfo @ 0x1C0128030 (DxgkGetMonitorInternalInfo.c)
 *     ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C01359F0 (-DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z @ 0x1C0169900 (-DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C000A170 (-GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C000A1C4 (-GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     DxgkIsAdapterVirtualTopologyEnabled @ 0x1C0128B6C (DxgkIsAdapterVirtualTopologyEnabled.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C0169720 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z @ 0x1C0269DC0 (-FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z.c)
 */

__int64 __fastcall DxgkConvertLegacyQDCAdapterAndIdToActual(
        struct _LUID *a1,
        __int64 a2,
        struct _LUID *a3,
        unsigned int *a4)
{
  unsigned int v6; // esi
  DXGADAPTERSOURCEHASH *v8; // rdi
  __int64 v9; // rdx
  __int64 result; // rax
  struct _LUID v11; // rcx
  __int64 v12; // rbx
  unsigned int v13; // ebp
  int AdapterAndSourceForHash; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int HashBitMask; // eax
  struct _LUID v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rax
  unsigned int v21; // [rsp+78h] [rbp+10h] BYREF
  struct _LUID v22; // [rsp+80h] [rbp+18h] BYREF

  *a3 = *a1;
  *a4 = a2;
  v6 = a2;
  v8 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal((__int64)a1, a2) + 1272);
  if ( ((unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(v8, v9) & v6) == 0 )
    return 0LL;
  v11 = *a1;
  v21 = 0;
  LODWORD(result) = DxgkIsAdapterVirtualTopologyEnabled(v11, &v21);
  v12 = (int)result;
  if ( (int)result < 0 )
    return (unsigned int)result;
  if ( !v21 )
    return 0LL;
  v22 = 0LL;
  v13 = v6 >> DXGADAPTERSOURCEHASH::GetHashBitShift(v8);
  AdapterAndSourceForHash = DXGADAPTERSOURCEHASH::FindAdapterAndSourceForHash(v8, v13, &v22, &v21);
  if ( AdapterAndSourceForHash < 0 )
  {
    v20 = WdLogNewEntry5_WdTrace(v16, v15);
    *(_QWORD *)(v20 + 24) = v13;
    *(_QWORD *)(v20 + 32) = v12;
    return 0LL;
  }
  LOBYTE(v21) = 0;
  HashBitMask = DXGADAPTERSOURCEHASH::GetHashBitMask(v8, v15);
  v18 = v22;
  result = DxgkIsVirtualizationDisabledForTarget(v22, v6 & ~HashBitMask, 0LL, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    if ( !(_BYTE)v21 )
    {
      *a3 = v18;
      *a4 = v6 & ~(unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(v8, v19);
    }
    return 0LL;
  }
  return result;
}
