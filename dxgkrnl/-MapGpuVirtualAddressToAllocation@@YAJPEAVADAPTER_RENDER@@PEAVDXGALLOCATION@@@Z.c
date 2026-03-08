/*
 * XREFs of ?MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z @ 0x1C01660F8
 * Callers:
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C0165EA0 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 *     ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C02D9C70 (-DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIP.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x1C01B50A0 (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 *     ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1C03868F8 (-VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAP.c)
 */

__int64 __fastcall MapGpuVirtualAddressToAllocation(struct ADAPTER_RENDER *a1, struct DXGALLOCATION *a2)
{
  DXGADAPTER *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  int v7; // ebx
  __int64 v9; // r15
  int v10; // r14d
  int v11; // ebp
  __int64 v12; // rsi
  struct DXGPROCESS *Current; // rax
  int v14; // eax
  int v15; // edx
  __int64 v16; // rbx
  const wchar_t *v17; // r9
  struct DXGPROCESS *v18; // rax
  int v19; // [rsp+20h] [rbp-D8h]
  D3DDDI_MAPGPUVIRTUALADDRESS v20; // [rsp+50h] [rbp-A8h] BYREF

  memset(&v20, 0, sizeof(v20));
  v4 = (DXGADAPTER *)*((_QWORD *)a1 + 2);
  v20.Protection.Value = 1LL;
  if ( DXGADAPTER::ReplicateGdiContent(v4) )
  {
    v9 = *((_QWORD *)a2 + 5);
    v10 = 0;
    v11 = 0;
    v12 = *(_QWORD *)(v9 + 24);
    while ( v12 )
    {
      if ( *(_BYTE *)(*((_QWORD *)a1 + 2) + 209LL) )
      {
        Current = DXGPROCESS::GetCurrent();
        v14 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
                (DXG_GUEST_VIRTUALGPU_VMBUS *)(*((_QWORD *)a1 + 2) + 4472LL),
                *((_DWORD *)Current + 126),
                *(const struct DXGDEVICE **)(v9 + 8),
                0,
                *(_DWORD *)(v12 + 20),
                &v20);
      }
      else
      {
        LOBYTE(v19) = 0;
        v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, D3DDDI_MAPGPUVIRTUALADDRESS *, int, int))(*(_QWORD *)(*((_QWORD *)a1 + 95) + 8LL) + 792LL))(
                *((_QWORD *)a1 + 96),
                0LL,
                *(_QWORD *)(v12 + 24),
                &v20,
                v19,
                (*(_DWORD *)(v12 + 72) >> 12) & 0x3F);
      }
      v7 = v14;
      if ( v14 < 0 )
        goto LABEL_19;
      v20.BaseAddress = v20.VirtualAddress;
      v15 = 1 << ((*(_DWORD *)(v12 + 72) >> 12) & 0x3F);
      if ( (v15 & v10) != 0 )
      {
        v16 = 1741LL;
        WdLogSingleEntry1(2LL, 1741LL);
        v17 = L"For GDI replication a resource should have only one allocation per physical adapter";
        goto LABEL_17;
      }
      v12 = *(_QWORD *)(v12 + 64);
      v10 |= v15;
      ++v11;
    }
    if ( v11 == *(_DWORD *)(*((_QWORD *)a1 + 2) + 288LL) )
      return 0LL;
    v16 = 1750LL;
    WdLogSingleEntry1(2LL, 1750LL);
    v17 = L"For GDI replication a resource must have one allocation per physical adapter";
LABEL_17:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v17, v16, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)-1073741811;
  }
  else
  {
    v5 = *((_QWORD *)a1 + 2);
    if ( *(_BYTE *)(v5 + 209) )
    {
      v18 = DXGPROCESS::GetCurrent();
      v6 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
             (DXG_GUEST_VIRTUALGPU_VMBUS *)(*((_QWORD *)a1 + 2) + 4472LL),
             *((_DWORD *)v18 + 126),
             *(const struct DXGDEVICE **)(*((_QWORD *)a2 + 5) + 8LL),
             0,
             *((_DWORD *)a2 + 5),
             &v20);
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, D3DDDI_MAPGPUVIRTUALADDRESS *, _BYTE, _DWORD))(*(_QWORD *)(*((_QWORD *)a1 + 95) + 8LL) + 792LL))(
             *((_QWORD *)a1 + 96),
             0LL,
             *((_QWORD *)a2 + 3),
             &v20,
             0,
             *(_DWORD *)(v5 + 2948));
    }
    v7 = v6;
    if ( v6 >= 0 )
      return 0LL;
LABEL_19:
    WdLogSingleEntry1(3LL, v7);
  }
  return (unsigned int)v7;
}
