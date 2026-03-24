/*
 * XREFs of ?MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z @ 0x1C022E868
 * Callers:
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C022D1F0 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 *     ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C022D5B0 (-DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIP.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x1C01527BC (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 *     ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1C024A4A0 (-VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAP.c)
 */

__int64 __fastcall MapGpuVirtualAddressToAllocation(struct ADAPTER_RENDER *a1, struct DXGALLOCATION *a2)
{
  DXGADAPTER *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r15
  int v13; // r14d
  int v14; // ebp
  __int64 v15; // rsi
  struct DXGPROCESS *Current; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rax
  __int64 v22; // rax
  struct DXGPROCESS *v23; // rax
  int v24; // eax
  __int64 v25; // rax
  unsigned int v27; // [rsp+20h] [rbp-C8h]
  struct D3DDDI_MAPGPUVIRTUALADDRESS v28; // [rsp+40h] [rbp-A8h] BYREF

  memset(&v28, 0, sizeof(v28));
  v4 = (DXGADAPTER *)*((_QWORD *)a1 + 2);
  v28.Protection.Value = 1LL;
  if ( DXGADAPTER::ReplicateGdiContent(v4, v5, v6, v7) )
  {
    v12 = *((_QWORD *)a2 + 5);
    v13 = 0;
    v14 = 0;
    v15 = *(_QWORD *)(v12 + 24);
    while ( v15 )
    {
      if ( *(_BYTE *)(*((_QWORD *)a1 + 2) + 209LL) )
      {
        Current = DXGPROCESS::GetCurrent(v9, v8, v10, v11);
        v17 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
                (DXG_GUEST_VIRTUALGPU_VMBUS *)(*((_QWORD *)a1 + 2) + 4240LL),
                *((_DWORD *)Current + 106),
                *(const struct DXGDEVICE **)(v12 + 8),
                0,
                *(_DWORD *)(v15 + 96),
                &v28);
      }
      else
      {
        LOBYTE(v27) = 0;
        v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct D3DDDI_MAPGPUVIRTUALADDRESS *, unsigned int, int))(*(_QWORD *)(*((_QWORD *)a1 + 80) + 8LL) + 800LL))(
                *((_QWORD *)a1 + 81),
                0LL,
                *(_QWORD *)(v15 + 24),
                &v28,
                v27,
                (*(_DWORD *)(v15 + 72) >> 12) & 0x3F);
      }
      v20 = v17;
      if ( v17 < 0 )
        goto LABEL_18;
      v28.BaseAddress = v28.VirtualAddress;
      v9 = (*(_DWORD *)(v15 + 72) >> 12) & 0x3F;
      v8 = (unsigned int)(1 << ((*(_DWORD *)(v15 + 72) >> 12) & 0x3F));
      if ( ((unsigned int)v8 & v13) != 0 )
      {
        v21 = WdLogNewEntry5_WdError(v9, v8);
        *(_QWORD *)(v21 + 24) = 1681LL;
        goto LABEL_13;
      }
      v15 = *(_QWORD *)(v15 + 64);
      v13 |= v8;
      ++v14;
    }
    if ( v14 == *(_DWORD *)(*((_QWORD *)a1 + 2) + 280LL) )
      return 0LL;
    v21 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v21 + 24) = 1690LL;
LABEL_13:
    WdLogEvent5_WdError(v21);
    return (unsigned int)-1073741811;
  }
  v22 = *((_QWORD *)a1 + 2);
  if ( *(_BYTE *)(v22 + 209) )
  {
    v23 = DXGPROCESS::GetCurrent(v9, v8, v10, v11);
    v24 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(*((_QWORD *)a1 + 2) + 4240LL),
            *((_DWORD *)v23 + 106),
            *(const struct DXGDEVICE **)(*((_QWORD *)a2 + 5) + 8LL),
            0,
            *((_DWORD *)a2 + 24),
            &v28);
  }
  else
  {
    v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct D3DDDI_MAPGPUVIRTUALADDRESS *, _BYTE, _DWORD))(*(_QWORD *)(*((_QWORD *)a1 + 80) + 8LL) + 800LL))(
            *((_QWORD *)a1 + 81),
            0LL,
            *((_QWORD *)a2 + 3),
            &v28,
            0,
            *(_DWORD *)(v22 + 2724));
  }
  v20 = v24;
  if ( v24 < 0 )
  {
LABEL_18:
    v25 = WdLogNewEntry5_WdWarning(v19, v18, v10);
    *(_QWORD *)(v25 + 24) = v20;
    WdLogEvent5_WdWarning(v25);
    return (unsigned int)v20;
  }
  return 0LL;
}
