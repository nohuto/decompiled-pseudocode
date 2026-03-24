/*
 * XREFs of ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_PARAV@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C0235D70
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000381C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0003894 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0005218 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0005488 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage @ 0x1C00261B0 (Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage.c)
 *     ??0DXGK_VIRTUAL_GPU_PARAV@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C00402C8 (--0DXGK_VIRTUAL_GPU_PARAV@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetTargetPartitionId@DXGVIRTUALGPUMANAGER@@QEAAJIPEAI@Z @ 0x1C02308DC (-GetTargetPartitionId@DXGVIRTUALGPUMANAGER@@QEAAJIPEAI@Z.c)
 */

__int64 __fastcall DXGVIRTUALGPUMANAGER_PARAV::CreateVirtualGpu(
        DXGVIRTUALGPUMANAGER_PARAV *this,
        struct _DXGKARG_CREATEVIRTUALGPU *a2,
        char a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v14; // rax
  ULONG PartitionId; // edx
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  int IsEnabledDeviceUsage; // eax
  POOL_TYPE v21; // r9d
  DXGK_VIRTUAL_GPU_PARAV *v22; // rax
  DXGK_VIRTUAL_GPU_PARAV *v23; // r10
  ULONG v24; // r14d
  _QWORD *v25; // r10
  char *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned __int64 v30; // rbx
  unsigned int v32; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v33; // [rsp+34h] [rbp-CCh] BYREF
  struct _LUID Luid; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v35[8]; // [rsp+40h] [rbp-C0h] BYREF
  DXGPUSHLOCK *v36; // [rsp+48h] [rbp-B8h]
  int v37; // [rsp+50h] [rbp-B0h]
  __int64 v38; // [rsp+60h] [rbp-A0h] BYREF
  int v39; // [rsp+68h] [rbp-98h]
  const wchar_t *v40; // [rsp+70h] [rbp-90h]
  unsigned int *v41; // [rsp+78h] [rbp-88h]
  int v42; // [rsp+80h] [rbp-80h]
  unsigned int *v43; // [rsp+88h] [rbp-78h]
  int v44; // [rsp+90h] [rbp-70h]
  __int64 v45; // [rsp+98h] [rbp-68h]
  int v46; // [rsp+A0h] [rbp-60h]
  __int128 v47; // [rsp+A8h] [rbp-58h]
  __int128 v48; // [rsp+B8h] [rbp-48h]
  __int64 v49; // [rsp+C8h] [rbp-38h]
  _BYTE v50[144]; // [rsp+D0h] [rbp-30h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS(
    (COREADAPTERACCESS *)v50,
    *(struct DXGADAPTER *const *)(*((_QWORD *)this + 4) + 16LL),
    0LL);
  LODWORD(v8) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v50, 0LL);
  if ( (int)v8 >= 0 )
  {
    Current = DXGPROCESS::GetCurrent(v7, v6, v9, v10);
    if ( !Current )
    {
      v14 = WdLogNewEntry5_WdAssertion(v12, v11);
      *(_QWORD *)(v14 + 24) = 743LL;
      WdLogEvent5_WdAssertion(v14);
    }
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v35, (struct _KTHREAD **)this + 5, 0);
    DXGPUSHLOCK::AcquireExclusive(v36);
    PartitionId = a2->PartitionId;
    v37 = 2;
    v33 = 0xFFFF;
    LODWORD(v8) = DXGVIRTUALGPUMANAGER::GetTargetPartitionId(this, PartitionId, &v33);
    if ( (int)v8 >= 0 )
    {
      Luid = 0LL;
      v16 = ZwAllocateLocallyUniqueId(&Luid);
      v8 = v16;
      if ( v16 >= 0 )
      {
        *((_BYTE *)Current + 347) |= 8u;
        IsEnabledDeviceUsage = Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage();
        v21 = 512;
        if ( !IsEnabledDeviceUsage )
          v21 = PagedPool;
        v22 = (DXGK_VIRTUAL_GPU_PARAV *)operator new(0x160uLL, 0x4B677844u, 1, v21);
        if ( v22 )
          v23 = DXGK_VIRTUAL_GPU_PARAV::DXGK_VIRTUAL_GPU_PARAV(v22, *((struct ADAPTER_RENDER **)this + 4));
        else
          v23 = 0LL;
        if ( v23 )
        {
          v24 = v33;
          *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v33) = v23;
          *((_BYTE *)v23 + 152) = 1;
          *((_QWORD *)v23 + 11) = Current;
          *((_BYTE *)v23 + 153) = a3;
          *((_DWORD *)v23 + 6) = v24;
          *(_OWORD *)((char *)v23 + 36) = DXGK_VRD_UMED_CLASID;
          *(struct _LUID *)((char *)v23 + 28) = Luid;
          v25 = (_QWORD *)((char *)v23 + 120);
          ++*((_DWORD *)this + 4);
          v26 = (char *)this + 72;
          v27 = *(_QWORD *)v26;
          if ( *(char **)(*(_QWORD *)v26 + 8LL) != v26 )
            __fastfail(3u);
          *v25 = v27;
          v25[1] = v26;
          *(_QWORD *)(v27 + 8) = v25;
          v38 = 0LL;
          v45 = 0LL;
          v46 = 0;
          v40 = L"GuestIoSpaceSizeInMb";
          v41 = &v32;
          v43 = &v32;
          *(_QWORD *)v26 = v25;
          v32 = 1;
          v39 = 288;
          v42 = 67108868;
          v44 = 4;
          v47 = 0LL;
          v49 = 0LL;
          v48 = 0LL;
          if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\Paravirtualization", &v38, 0LL, 0LL) >= 0 )
          {
            v30 = (unsigned __int64)v32 << 20;
            *((_QWORD *)DXGGLOBAL::GetGlobal(v29, v28) + 203) = v30;
          }
          a2->PartitionId = v24;
          LODWORD(v8) = 0;
        }
        else
        {
          LODWORD(v8) = -1073741801;
        }
      }
      else
      {
        v19 = WdLogNewEntry5_WdError(v18, v17);
        *(_QWORD *)(v19 + 24) = v8;
        WdLogEvent5_WdError(v19);
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v35);
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v50, v6);
  return (unsigned int)v8;
}
