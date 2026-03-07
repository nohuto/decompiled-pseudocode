__int64 __fastcall DXGADAPTER::InitializeParavirtualizedAdapter(DXGADAPTER *this, struct DRIVER_WORKAROUNDS *a2)
{
  __int64 v4; // rcx
  char v5; // r13
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  struct DXGGLOBAL *Global; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdi
  unsigned int v19; // ebx
  unsigned int v20; // eax
  struct DXGGLOBAL *v21; // rax
  DXG_GUEST_VIRTUALGPU_VMBUS *v22; // rcx
  struct DXGGLOBAL *v23; // rax
  int v24; // edx
  unsigned int v25; // eax
  unsigned int v26; // ecx
  char v27; // cl
  bool v28; // cf
  int v29; // eax
  DXGGLOBAL *v30; // rax
  DXGGLOBAL *v31; // rax
  unsigned int v32; // r9d
  int v33; // eax
  DXG_GUEST_GLOBAL_VMBUS *v34; // rbx
  struct DXGGLOBAL *v35; // rax
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r8
  __int64 v41; // [rsp+20h] [rbp-E0h]
  __int64 v42; // [rsp+20h] [rbp-E0h]
  __int64 v43; // [rsp+28h] [rbp-D8h]
  __int64 v44; // [rsp+28h] [rbp-D8h]
  __int64 v45; // [rsp+30h] [rbp-D0h]
  __int64 v46; // [rsp+30h] [rbp-D0h]
  __int64 v47; // [rsp+38h] [rbp-C8h]
  __int64 v48; // [rsp+38h] [rbp-C8h]
  ULONG v49; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v50; // [rsp+54h] [rbp-ACh] BYREF
  int v51; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v52; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v53; // [rsp+68h] [rbp-98h] BYREF
  struct _D3DKMT_QUERYADAPTERINFO v54; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v55[89]; // [rsp+88h] [rbp-78h] BYREF

  *((_BYTE *)this + 209) = 1;
  v50 = 0;
  v4 = *((_QWORD *)this + 27);
  v49 = 0;
  v5 = 0;
  v6 = DpReadDeviceSpace(v4, 0LL, &v50, 0xD0u, 4u, &v49);
  if ( v6 < 0 || v49 != 4 )
    goto LABEL_8;
  if ( v50 >= 0x28 )
  {
    v11 = 42;
    if ( v50 < 0x2A )
      v11 = v50;
    v51 = v11;
    *((_DWORD *)DXGGLOBAL::GetGlobal() + 442) = v11;
    v6 = DpWriteDeviceSpace(*((_QWORD *)this + 27), 0LL, &v51, 0xD0u, 4u, &v49);
    if ( v6 < 0 || v49 != 4 )
    {
LABEL_8:
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, v7, v9, v10) + 24) = v6;
      v50 = 0;
    }
  }
  *((_DWORD *)DXGGLOBAL::GetGlobal() + 443) = v50;
  Global = DXGGLOBAL::GetGlobal();
  v13 = DpReadDeviceSpace(*((_QWORD *)this + 27), 0LL, (char *)Global + 1776, 0xDCu, 4u, &v49);
  if ( v13 < 0 || v49 != 4 )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v15, v14, v16, v17) + 24) = v13;
  LODWORD(v18) = DXG_GUEST_VIRTUALGPU_VMBUS::CreateVmBusChannel((struct VMBCHANNEL__ **)this + 559, this);
  v19 = 2;
  if ( (int)v18 >= 0 )
  {
    v20 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOpenAdapter(
            (DXGADAPTER *)((char *)this + 4472),
            (const struct _LUID *)(*(_QWORD *)(*((_QWORD *)this + 27) + 64LL) + 2672LL));
    *((_DWORD *)this + 1140) = v20;
    if ( v20 )
    {
      memset(v55, 0, sizeof(v55));
      v21 = DXGGLOBAL::GetGlobal();
      v22 = (DXGADAPTER *)((char *)this + 4472);
      if ( *((_DWORD *)v21 + 442) <= 0x10u )
      {
        LODWORD(v18) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetInternalAdapterInfo19h1(
                         v22,
                         (struct DXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN1 *)v55);
        if ( (int)v18 < 0 )
        {
          v19 = 4;
          goto LABEL_56;
        }
      }
      else
      {
        LODWORD(v18) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetInternalAdapterInfo(
                         v22,
                         (struct DXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN *)v55);
        if ( (int)v18 < 0 )
        {
          v19 = 3;
          goto LABEL_56;
        }
      }
      *(_DWORD *)a2 ^= (*(_DWORD *)a2 ^ (HIDWORD(v55[1]) << 14)) & 0x20000;
      v23 = DXGGLOBAL::GetGlobal();
      v24 = *(_DWORD *)a2;
      if ( *((_DWORD *)v23 + 442) < 0x26u )
      {
        if ( (v55[1] & 0x1000000000LL) != 0 )
          v25 = v24 & 0xFFFE7FFF | 0x10000;
        else
          v25 = v24 & 0xFFFE7FFF;
      }
      else
      {
        v25 = v24 ^ (v24 ^ (HIDWORD(v55[1]) << 8)) & 0x18000;
      }
      *(_DWORD *)a2 = v25;
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 442) < 0x29u )
        v26 = *(_DWORD *)a2 & 0xFFE3FFFF;
      else
        v26 = (*(_DWORD *)a2 & 0xFFF3FFFF ^ (HIDWORD(v55[1]) << 11)) & 0x100000 ^ (*(_DWORD *)a2 & 0xFFF3FFFF | ((WORD2(v55[1]) & 0xC00) << 8));
      *(_DWORD *)a2 = v26;
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 442) >= 0x22u )
        *(_QWORD *)((char *)this + 4580) = v55[88];
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 442) >= 0x28u && (v55[1] & 0x4000000000LL) != 0 )
        *((_BYTE *)DXGGLOBAL::GetGlobal() + 1780) = 1;
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 442) >= 0x10u )
        DpiSetDriverVersion(*((_QWORD *)this + 27), LODWORD(v55[1]), &v55[3], &v55[23]);
      LODWORD(v18) = DpiGetAdapterInfo(
                       *((_QWORD *)this + 27),
                       (char *)this + 1568,
                       (_QWORD *)this + 35,
                       (DXGADAPTER *)((char *)this + 2104));
      if ( (int)v18 < 0 )
        goto LABEL_37;
      v27 = BYTE4(v55[1]);
      *((_DWORD *)this + 109) ^= (*((_DWORD *)this + 109) ^ LODWORD(v55[0])) & 0x18;
      *((_BYTE *)this + 210) = v27 & 1;
      v28 = HIDWORD(v55[0]) < 2;
      *((_BYTE *)this + 211) = (v27 & 4) != 0;
      v29 = 2;
      if ( v28 )
        v29 = HIDWORD(v55[0]);
      *((_DWORD *)this + 721) = v29;
      *(_QWORD *)((char *)this + 4572) = v55[2];
      if ( (v27 & 2) != 0 )
      {
        v30 = DXGGLOBAL::GetGlobal();
        DXGGLOBAL::HandleVirtualMachineReset(v30);
      }
      v31 = DXGGLOBAL::GetGlobal();
      LODWORD(v18) = DXGGLOBAL::EnsureVmBusInterface(v31);
      if ( (int)v18 < 0 )
      {
LABEL_37:
        v19 = 5;
      }
      else
      {
        if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 1780) )
          *((_QWORD *)this + 560) = **((_QWORD **)DXGGLOBAL::GetGlobal() + 214);
        v51 = 0;
        v54.pPrivateDriverData = &v51;
        v54.hAdapter = 0;
        *(_QWORD *)&v54.PrivateDriverDataSize = 4LL;
        v54.Type = KMTQAITYPE_PHYSICALADAPTERCOUNT;
        v33 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAdapterInfo((DXGADAPTER *)((char *)this + 4472), 0LL, &v54, v32);
        v18 = v33;
        if ( v33 >= 0 )
        {
          *((_DWORD *)this + 72) = v51;
          v53 = 0LL;
          v52 = 0LL;
          v34 = (DXG_GUEST_GLOBAL_VMBUS *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 214);
          LODWORD(v18) = DXG_GUEST_GLOBAL_VMBUS::GetMmioSpaceInfo(v34, &v53, &v52);
          if ( (int)v18 >= 0 )
          {
            v35 = DXGGLOBAL::GetGlobal();
            LODWORD(v18) = DXG_GUEST_GLOBAL_VMBUS::VmBusSendSetIoSpaceRegion(v34, v53, v52, *((_DWORD *)v35 + 435));
            if ( (int)v18 >= 0 )
            {
              if ( (*((_DWORD *)this + 109) & 8) != 0
                || (LODWORD(v18) = DXGADAPTER::CopyDriverStore(this), (int)v18 >= 0) )
              {
                LODWORD(v18) = DXGADAPTER::CopyRegistryKeys(this);
                if ( (int)v18 >= 0 )
                  return (unsigned int)v18;
                v19 = 9;
                v5 = 1;
              }
              else
              {
                v19 = 8;
              }
            }
            else
            {
              v19 = 7;
            }
          }
          else
          {
            v19 = 6;
          }
        }
        else
        {
          WdLogSingleEntry1(2LL, v33);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"KMTQAITYPE_PHYSICALADAPTERCOUNT failed: 0x%I64x",
            v18,
            0LL,
            0LL,
            0LL,
            0LL);
          v19 = 11;
        }
      }
    }
    else
    {
      LODWORD(v18) = -1073741823;
    }
  }
  else
  {
    v19 = 1;
  }
LABEL_56:
  if ( v5 )
  {
    WdLogSingleEntry2(3LL, (int)v18, v19);
    LODWORD(v18) = 0;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000) != 0 )
    {
      LODWORD(v47) = v19;
      LODWORD(v45) = 0;
      LODWORD(v43) = 0;
      LODWORD(v41) = 0;
      McTemplateK0pqqqqxx_EtwWriteTransfer(0LL, &VirtualGpuGuestEvent, v36, this, v41, v43, v45, v47, 0LL, 0LL);
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, (int)v18, v19);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Status:0x%I64x Reason: 0x%I64x ",
      (int)v18,
      v19,
      0LL,
      0LL,
      0LL);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
    {
      LODWORD(v48) = v19;
      LODWORD(v46) = 0;
      LODWORD(v44) = v18;
      LODWORD(v42) = 0;
      McTemplateK0pqqqqxx_EtwWriteTransfer(v37, &VirtualGpuGuestEventFailure, v38, this, v42, v44, v46, v48, 0LL, 0LL);
    }
  }
  if ( v19 != 1 && *((_DWORD *)DXGGLOBAL::GetGlobal() + 442) >= 0x1Au )
    DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLogEvent((char *)this + 4472, (unsigned int)v18, v39, v19);
  return (unsigned int)v18;
}
