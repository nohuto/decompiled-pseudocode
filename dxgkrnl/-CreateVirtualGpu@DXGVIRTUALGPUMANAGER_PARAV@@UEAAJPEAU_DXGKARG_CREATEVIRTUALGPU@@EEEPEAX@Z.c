/*
 * XREFs of ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_PARAV@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x1C036A030
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetTargetPartitionId@DXGVIRTUALGPUMANAGER@@QEAAJIPEAI@Z @ 0x1C0363D18 (-GetTargetPartitionId@DXGVIRTUALGPUMANAGER@@QEAAJIPEAI@Z.c)
 *     ?ReportState@DXGK_VIRTUAL_GPU@@QEAAXXZ @ 0x1C0364818 (-ReportState@DXGK_VIRTUAL_GPU@@QEAAXXZ.c)
 *     ??0DXGK_VIRTUAL_GPU_PARAV@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C0369F08 (--0DXGK_VIRTUAL_GPU_PARAV@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall DXGVIRTUALGPUMANAGER_PARAV::CreateVirtualGpu(
        DXGVIRTUALGPUMANAGER_PARAV *this,
        struct _DXGKARG_CREATEVIRTUALGPU *a2,
        char a3,
        char a4,
        unsigned __int8 a5,
        HANDLE Handle)
{
  __int64 v6; // rax
  char v9; // r13
  __int64 v10; // rcx
  __int64 v11; // rdi
  struct DXGPROCESS *Current; // r12
  __int64 PartitionId; // rdx
  NTSTATUS v14; // eax
  _DWORD *v15; // r14
  NTSTATUS v16; // eax
  _QWORD *v17; // rsi
  DXGK_VIRTUAL_GPU_PARAV *v18; // rax
  DXGK_VIRTUAL_GPU_PARAV *v19; // rax
  DXGK_VIRTUAL_GPU_PARAV *v20; // rbx
  unsigned int v21; // edi
  char *v22; // r13
  char *v23; // r15
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  unsigned int v31; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v32; // [rsp+58h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A0h] BYREF
  struct _LUID Luid; // [rsp+68h] [rbp-98h] BYREF
  struct DXGADAPTER *v35; // [rsp+70h] [rbp-90h]
  struct _DXGKARG_CREATEVIRTUALGPU *v36; // [rsp+78h] [rbp-88h]
  _BYTE v37[8]; // [rsp+80h] [rbp-80h] BYREF
  DXGPUSHLOCK *v38; // [rsp+88h] [rbp-78h]
  int v39; // [rsp+90h] [rbp-70h]
  __int64 v40; // [rsp+A0h] [rbp-60h] BYREF
  int v41; // [rsp+A8h] [rbp-58h]
  const wchar_t *v42; // [rsp+B0h] [rbp-50h]
  unsigned int *v43; // [rsp+B8h] [rbp-48h]
  int v44; // [rsp+C0h] [rbp-40h]
  unsigned int *v45; // [rsp+C8h] [rbp-38h]
  int v46; // [rsp+D0h] [rbp-30h]
  __int64 v47; // [rsp+D8h] [rbp-28h]
  int v48; // [rsp+E0h] [rbp-20h]
  __int128 v49; // [rsp+E8h] [rbp-18h]
  __int128 v50; // [rsp+F8h] [rbp-8h]
  __int64 v51; // [rsp+108h] [rbp+8h]
  _BYTE v52[144]; // [rsp+110h] [rbp+10h] BYREF

  v6 = *((_QWORD *)this + 4);
  v36 = a2;
  v9 = 0;
  v35 = *(struct DXGADAPTER **)(v6 + 16);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v52, v35, 0LL);
  LODWORD(v11) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v52, 0LL);
  if ( (int)v11 >= 0 )
  {
    Current = DXGPROCESS::GetCurrent(v10);
    if ( !Current )
    {
      WdLogSingleEntry1(1LL, 888LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess != nullptr", 888LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v37, (struct _KTHREAD **)this + 5, 0);
    DXGPUSHLOCK::AcquireExclusive(v38);
    PartitionId = a2->PartitionId;
    v39 = 2;
    v32 = 0xFFFF;
    LODWORD(v11) = DXGVIRTUALGPUMANAGER::GetTargetPartitionId(this, PartitionId, &v32);
    if ( (int)v11 < 0 )
      goto LABEL_23;
    Luid = 0LL;
    v14 = ZwAllocateLocallyUniqueId(&Luid);
    v11 = v14;
    if ( v14 >= 0 )
    {
      *((_DWORD *)Current + 106) |= 0x40u;
      v15 = (_DWORD *)operator new[](0x10uLL, 0x4B677844u, 256LL);
      if ( v15 )
      {
        Object = 0LL;
        v16 = ObReferenceObjectByHandle(Handle, 0x20000u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
        v17 = Object;
        LODWORD(v11) = v16;
        if ( v16 >= 0 )
        {
          v9 = 1;
          if ( *((_QWORD *)Object + 4) )
          {
            WdLogSingleEntry1(2LL, 942LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"The device file handle to bind to the new vGPU has already been bound to some other object.",
              942LL,
              0LL,
              0LL,
              0LL,
              0LL);
            LODWORD(v11) = -1073741816;
          }
          else
          {
            v18 = (DXGK_VIRTUAL_GPU_PARAV *)operator new[](0x188uLL, 0x4B677844u, 64LL);
            if ( v18 )
            {
              v19 = DXGK_VIRTUAL_GPU_PARAV::DXGK_VIRTUAL_GPU_PARAV(v18, *((struct ADAPTER_RENDER **)this + 4));
              v20 = v19;
              if ( v19 )
              {
                v21 = v32;
                *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v32) = v19;
                *((_BYTE *)v19 + 153) = a3;
                *((_BYTE *)v19 + 154) = a4;
                *((_BYTE *)v19 + 155) = a5;
                *((_BYTE *)v19 + 152) = 1;
                v22 = (char *)this + 72;
                *((_QWORD *)v19 + 11) = Current;
                *((_DWORD *)v19 + 6) = v21;
                *(_OWORD *)((char *)v19 + 36) = DXGK_VRD_UMED_CLASID;
                *(struct _LUID *)((char *)v19 + 28) = Luid;
                *(_QWORD *)v15 = v35;
                v15[2] = v21;
                ++*((_DWORD *)this + 4);
                DXGPUSHLOCK::AcquireExclusive((DXGVIRTUALGPUMANAGER_PARAV *)((char *)this + 72));
                v23 = (char *)this + 104;
                v24 = (_QWORD *)((char *)v20 + 120);
                v25 = *(_QWORD *)v23;
                if ( *(char **)(*(_QWORD *)v23 + 8LL) != v23 )
                  __fastfail(3u);
                *v24 = v25;
                *((_QWORD *)v20 + 16) = v23;
                *(_QWORD *)(v25 + 8) = v24;
                *(_QWORD *)v23 = v24;
                *((_QWORD *)v22 + 1) = 0LL;
                ExReleasePushLockExclusiveEx(v22, 0LL);
                KeLeaveCriticalRegion();
                v31 = 1;
                v40 = 0LL;
                v42 = L"GuestIoSpaceSizeInMb";
                v41 = 288;
                v43 = &v31;
                v44 = 67108868;
                v45 = &v31;
                v46 = 4;
                v47 = 0LL;
                v48 = 0;
                v49 = 0LL;
                v51 = 0LL;
                v50 = 0LL;
                if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\Paravirtualization", &v40, 0LL, 0LL) >= 0 )
                  *((_QWORD *)DXGGLOBAL::GetGlobal() + 220) = (unsigned __int64)v31 << 20;
                v36->PartitionId = v21;
                v17[4] = v15;
                *((_QWORD *)v20 + 20) = v17;
                ObfDereferenceObject(v17);
                DXGK_VIRTUAL_GPU::ReportState(v20, v26, v27);
                LODWORD(v11) = 0;
                goto LABEL_23;
              }
            }
            WdLogSingleEntry1(6LL, 950LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262145,
              -1,
              (__int64)L"Not enough memory to allocate the DXGK_VIRTUAL_GPU_PARAV for vGPU tracking.",
              950LL,
              0LL,
              0LL,
              0LL,
              0LL);
            LODWORD(v11) = -1073741801;
          }
        }
        else
        {
          WdLogSingleEntry1(3LL, v16);
        }
        operator delete(v15);
        if ( v9 )
          ObfDereferenceObject(v17);
      }
      else
      {
        WdLogSingleEntry1(6LL, 924LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Not enough memory to allocate the DXGSHAREDVGPUOBJECT for handle tracking.",
          924LL,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v11) = -1073741801;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, v14);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to allocate LUID for virtual GPU, Status: 0x%I64x",
        v11,
        0LL,
        0LL,
        0LL,
        0LL);
    }
LABEL_23:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v37);
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v52);
  return (unsigned int)v11;
}
