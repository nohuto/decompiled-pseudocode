/*
 * XREFs of ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x1C01161F0
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C00FD200 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0003524 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     Feature_1679598905__private_IsEnabledDeviceUsage @ 0x1C002615C (Feature_1679598905__private_IsEnabledDeviceUsage.c)
 *     ??0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ @ 0x1C003F648 (--0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ.c)
 *     ??_GDXGALLOCATION@@QEAAPEAXI@Z @ 0x1C003F6B8 (--_GDXGALLOCATION@@QEAAPEAXI@Z.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C011662C (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C0116660 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ??1DXGADAPTERALLOCATION@@QEAA@XZ @ 0x1C012456C (--1DXGADAPTERALLOCATION@@QEAA@XZ.c)
 *     ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0134C2C (-FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDE.c)
 *     ??0DXGALLOCATION@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0227F00 (--0DXGALLOCATION@@QEAA@PEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateAllocationObjects(
        DXGDEVICE *this,
        int a2,
        struct DXGALLOCATION **a3,
        struct DXGRESOURCE *a4,
        struct DXGALLOCATION **a5)
{
  int v9; // r15d
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r13
  DXGALLOCATION *PoolWithQuotaTag; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  DXGALLOCATION *v19; // rbx
  struct _EX_RUNDOWN_REF *v20; // rax
  __int64 v21; // r14
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // r9d
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  DXGADAPTERALLOCATION_VGPU *v33; // rax
  DXGADAPTERALLOCATION_VGPU *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rbx
  DXGADAPTERALLOCATION **v37; // rdi
  DXGADAPTERALLOCATION *v38; // rsi
  int v40; // [rsp+70h] [rbp+8h]
  char v41; // [rsp+78h] [rbp+10h]

  v9 = 0;
  v10 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v10 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v10 + 168)) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v13 + 24) = 2811LL;
    WdLogEvent5_WdAssertion(v13);
  }
  *a3 = 0LL;
  *a5 = 0LL;
  if ( a4 && (*((_DWORD *)a4 + 1) & 1) != 0 )
  {
    v41 = 1;
    v14 = *(_QWORD *)(*((_QWORD *)a4 + 7) + 144LL);
  }
  else
  {
    v14 = 0LL;
    v41 = 0;
  }
  v40 = a2 - 1;
  if ( a2 - 1 >= 0 )
  {
    while ( 1 )
    {
      if ( (*((_BYTE *)this + 1869) & 1) != 0 )
      {
        PoolWithQuotaTag = (DXGALLOCATION *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x88uLL, 0x4B677844u);
        v19 = PoolWithQuotaTag;
        if ( !PoolWithQuotaTag )
          break;
        DXGALLOCATION::DXGALLOCATION(PoolWithQuotaTag, this);
        *((_DWORD *)v19 + 18) |= 0x40000u;
        *((_DWORD *)v19 + 24) = 0;
        *((_DWORD *)v19 + 26) = 0;
        *((_QWORD *)v19 + 14) = 0LL;
        *((_QWORD *)v19 + 15) = 0LL;
        *((_QWORD *)v19 + 16) = 0LL;
      }
      else
      {
        v20 = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x60uLL, 0x4B677844u);
        v19 = (DXGALLOCATION *)v20;
        if ( !v20 )
          break;
        v20[1].Count = (ULONG_PTR)this;
        LODWORD(v20[2].Count) = 0;
        v20[3].Count = 0LL;
        v20[4].Count = 0LL;
        v20[5].Count = 0LL;
        v20[6].Count = 0LL;
        v20[7].Count = 0LL;
        v20[8].Count = 0LL;
        LODWORD(v20[9].Count) = 0;
        v20[10].Count = 0LL;
        ExInitializeRundownProtection(v20 + 11);
      }
      if ( !v19 )
        break;
      v21 = *((_QWORD *)this + 5);
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v21 + 208, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v24 = *(_DWORD *)(v21 + 232);
          if ( v24 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v22, &EventBlockThread, v23, v24);
        }
        ExAcquirePushLockExclusiveEx(v21 + 208, 0LL);
      }
      *(_QWORD *)(v21 + 216) = KeGetCurrentThread();
      Feature_1679598905__private_IsEnabledDeviceUsage();
      *((_DWORD *)v19 + 4) = HMGRTABLE::AllocHandle(v21 + 240, v19, 5LL);
      DxgkReferenceDxgAllocation(v19);
      *(_QWORD *)(v21 + 216) = 0LL;
      ExReleasePushLockExclusiveEx(v21 + 208, 0LL);
      KeLeaveCriticalRegion();
      if ( !*((_DWORD *)v19 + 4) )
      {
        v28 = WdLogNewEntry5_WdWarning(v26, v25, v27);
        *(_QWORD *)(v28 + 24) = this;
        *(_QWORD *)(v28 + 32) = -1073741801LL;
        WdLogEvent5_WdWarning(v28);
        DXGALLOCATION::`scalar deleting destructor'(v19);
LABEL_40:
        v9 = -1073741801;
        goto LABEL_41;
      }
      *((_QWORD *)v19 + 5) = a4;
      if ( !*a5 )
        *a5 = v19;
      v17 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v17 + 184)
        && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v17 + 168)) )
      {
        v30 = WdLogNewEntry5_WdAssertion(v17, v29);
        *(_QWORD *)(v30 + 24) = 8103LL;
        WdLogEvent5_WdAssertion(v30);
      }
      *((_QWORD *)v19 + 7) = 0LL;
      v31 = (__int64)*a3;
      *((_QWORD *)v19 + 8) = *a3;
      if ( v31 )
        *(_QWORD *)(v31 + 56) = v19;
      *a3 = v19;
      if ( v41 )
      {
        v32 = v14 - 48;
        v14 = *(_QWORD *)(v14 + 8);
        *((_QWORD *)v19 + 6) = v32;
      }
      else
      {
        if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 209LL) )
        {
          v33 = (DXGADAPTERALLOCATION_VGPU *)operator new[](0x70uLL, 0x4B677844u, PagedPool);
          if ( !v33 )
            break;
          v34 = DXGADAPTERALLOCATION_VGPU::DXGADAPTERALLOCATION_VGPU(v33);
        }
        else
        {
          v34 = (DXGADAPTERALLOCATION_VGPU *)operator new[](0x40uLL, 0x4B677844u, PagedPool);
          if ( !v34 )
            break;
          *((_DWORD *)v34 + 1) = 0;
          *((_QWORD *)v34 + 1) = 0LL;
          *((_QWORD *)v34 + 2) = 0LL;
          *((_QWORD *)v34 + 4) = 0LL;
          *((_DWORD *)v34 + 10) = 0;
          *((_QWORD *)v34 + 7) = 0LL;
          *((_QWORD *)v34 + 6) = 0LL;
        }
        if ( !v34 )
          break;
        *((_QWORD *)v19 + 6) = v34;
      }
LABEL_41:
      if ( --v40 < 0 )
      {
        if ( v9 < 0 )
        {
          v36 = (__int64)*a3;
          if ( *a3 )
          {
            do
            {
              v37 = (DXGADAPTERALLOCATION **)v36;
              v36 = *(_QWORD *)(v36 + 64);
              ADAPTER_RENDER::FreeAllocationHandleAndWaitForZeroReferences(
                (ADAPTER_RENDER *)v17,
                (struct DXGALLOCATION *)v37,
                0LL);
              v38 = v37[6];
              if ( v38 && (!a4 || (*((_DWORD *)a4 + 1) & 1) == 0) )
              {
                DXGADAPTERALLOCATION::~DXGADAPTERALLOCATION(v37[6]);
                operator delete(v38);
              }
              DXGALLOCATION::`scalar deleting destructor'((DXGALLOCATION *)v37);
            }
            while ( v36 );
          }
          *a3 = 0LL;
        }
        return (unsigned int)v9;
      }
    }
    v35 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    *(_QWORD *)(v35 + 24) = this;
    *(_QWORD *)(v35 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v35);
    goto LABEL_40;
  }
  return (unsigned int)v9;
}
