/*
 * XREFs of ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x1C01A3710
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C0196360 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C000E280 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ @ 0x1C00468E0 (--0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ.c)
 *     ??_GDXGALLOCATION@@QEAAPEAXI@Z @ 0x1C0046958 (--_GDXGALLOCATION@@QEAAPEAXI@Z.c)
 *     ??1DXGADAPTERALLOCATION@@QEAA@XZ @ 0x1C018D274 (--1DXGADAPTERALLOCATION@@QEAA@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C01A3A50 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C01A3B9C (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C022052E (-FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDE.c)
 *     ??0DXGALLOCATION@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C02D237C (--0DXGALLOCATION@@QEAA@PEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateAllocationObjects(
        DXGDEVICE *this,
        int a2,
        struct DXGALLOCATION **a3,
        struct DXGRESOURCE *a4,
        struct DXGALLOCATION **a5)
{
  struct DXGRESOURCE *v6; // r15
  int v9; // ebp
  __int64 v10; // rcx
  int v12; // r14d
  __int64 Pool2; // rax
  __int64 v14; // rbx
  __int64 v15; // r13
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  DXGADAPTERALLOCATION_VGPU *v21; // rcx
  bool v22; // zf
  int v24; // r9d
  DXGALLOCATION *v25; // rax
  DXGADAPTERALLOCATION_VGPU *v26; // rax
  __int64 v27; // rbx
  void ***v28; // rdi
  void **v29; // rsi
  char v30; // [rsp+98h] [rbp+10h]
  struct DXGALLOCATION **v32; // [rsp+B0h] [rbp+28h]

  v6 = a4;
  v9 = 0;
  v10 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v10 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v10 + 168)) )
  {
    WdLogSingleEntry1(1LL, 2904LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      2904LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *a3 = 0LL;
  *a5 = 0LL;
  if ( v6 && (*((_DWORD *)v6 + 1) & 1) != 0 )
  {
    v30 = 1;
    v32 = *(struct DXGALLOCATION ***)(*((_QWORD *)v6 + 7) + 144LL);
  }
  else
  {
    v30 = 0;
    v32 = 0LL;
  }
  v12 = a2 - 1;
  if ( a2 - 1 >= 0 )
  {
    while ( 1 )
    {
      if ( (*((_BYTE *)this + 1901) & 1) != 0 )
      {
        v25 = (DXGALLOCATION *)DXGQUOTAALLOCATOR<256,1265072196>::operator new(136LL);
        v14 = (__int64)v25;
        if ( !v25 )
          goto LABEL_43;
        DXGALLOCATION::DXGALLOCATION(v25, this);
        *(_DWORD *)(v14 + 72) |= 0x40000u;
        *(_DWORD *)(v14 + 96) = 0;
        *(_QWORD *)(v14 + 104) = 0LL;
        *(_QWORD *)(v14 + 120) = 0LL;
        *(_DWORD *)(v14 + 128) = 0;
      }
      else
      {
        Pool2 = ExAllocatePool2(257LL, 96LL, 1265072196LL);
        v14 = Pool2;
        if ( !Pool2 )
          goto LABEL_43;
        *(_QWORD *)(Pool2 + 8) = this;
        *(_DWORD *)(Pool2 + 16) = 0;
        *(_QWORD *)(Pool2 + 24) = 0LL;
        *(_QWORD *)(Pool2 + 32) = 0LL;
        *(_QWORD *)(Pool2 + 40) = 0LL;
        *(_QWORD *)(Pool2 + 48) = 0LL;
        *(_QWORD *)(Pool2 + 56) = 0LL;
        *(_QWORD *)(Pool2 + 64) = 0LL;
        *(_DWORD *)(Pool2 + 72) = 0;
        *(_QWORD *)(Pool2 + 80) = 0LL;
        ExInitializeRundownProtection((PEX_RUNDOWN_REF)(Pool2 + 88));
      }
      v15 = *((_QWORD *)this + 5);
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v15 + 248, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v24 = *(_DWORD *)(v15 + 272);
          if ( v24 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v16, (const EVENT_DESCRIPTOR *)"g", v17, v24);
        }
        ExAcquirePushLockExclusiveEx(v15 + 248, 0LL);
      }
      *(_QWORD *)(v15 + 256) = KeGetCurrentThread();
      *(_DWORD *)(v14 + 16) = HMGRTABLE::AllocHandle(v15 + 280, v14, 5LL, 0LL, 0);
      DxgkReferenceDxgAllocation((struct DXGALLOCATION *)v14);
      *(_QWORD *)(v15 + 256) = 0LL;
      ExReleasePushLockExclusiveEx(v15 + 248, 0LL);
      KeLeaveCriticalRegion();
      if ( *(_DWORD *)(v14 + 16) )
      {
        v6 = a4;
        *(_QWORD *)(v14 + 40) = a4;
        if ( !*a5 )
          *a5 = (struct DXGALLOCATION *)v14;
        v18 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
        if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v18 + 184)
          && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v18 + 168)) )
        {
          WdLogSingleEntry1(1LL, 8188LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
            8188LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        *(_QWORD *)(v14 + 56) = 0LL;
        v19 = (__int64)*a3;
        *(_QWORD *)(v14 + 64) = *a3;
        if ( v19 )
          *(_QWORD *)(v19 + 56) = v14;
        *a3 = (struct DXGALLOCATION *)v14;
        if ( v30 )
        {
          v22 = (*(_DWORD *)(v14 + 72) & 0x40000) == 0;
          v21 = (DXGADAPTERALLOCATION_VGPU *)(v32 - 6);
          v32 = (struct DXGALLOCATION **)v32[1];
          *(_QWORD *)(v14 + 48) = v21;
          if ( !v22 )
            *(_DWORD *)(v14 + 120) = *((_DWORD *)v21 + 28);
          goto LABEL_25;
        }
        if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 209LL) )
        {
          v26 = (DXGADAPTERALLOCATION_VGPU *)operator new[](0x78uLL, 0x4B677844u, 256LL);
          if ( v26 )
          {
            v21 = DXGADAPTERALLOCATION_VGPU::DXGADAPTERALLOCATION_VGPU(v26);
            if ( v21 )
              goto LABEL_23;
          }
        }
        else
        {
          v20 = operator new[](0x40uLL, 0x4B677844u, 256LL);
          v21 = (DXGADAPTERALLOCATION_VGPU *)v20;
          if ( v20 )
          {
            *(_DWORD *)(v20 + 4) = 0;
            *(_QWORD *)(v20 + 8) = 0LL;
            *(_QWORD *)(v20 + 16) = 0LL;
            *(_QWORD *)(v20 + 32) = 0LL;
            *(_DWORD *)(v20 + 40) = 0;
            *(_QWORD *)(v20 + 56) = 0LL;
            *(_QWORD *)(v20 + 48) = 0LL;
LABEL_23:
            v22 = (*(_DWORD *)(v14 + 72) & 0x40000) == 0;
            *(_QWORD *)(v14 + 48) = v21;
            if ( !v22 )
              *(_DWORD *)(v14 + 120) = *((_DWORD *)v21 + 28);
            goto LABEL_25;
          }
        }
LABEL_43:
        WdLogSingleEntry2(3LL, this, -1073741801LL);
        goto LABEL_44;
      }
      WdLogSingleEntry2(3LL, this, -1073741801LL);
      DXGALLOCATION::`scalar deleting destructor'((DXGALLOCATION *)v14);
      v6 = a4;
LABEL_44:
      v9 = -1073741801;
LABEL_25:
      if ( --v12 < 0 )
      {
        if ( v9 < 0 )
        {
          v27 = (__int64)*a3;
          if ( *a3 )
          {
            do
            {
              v28 = (void ***)v27;
              v27 = *(_QWORD *)(v27 + 64);
              ADAPTER_RENDER::FreeAllocationHandleAndWaitForZeroReferences(v21, (struct DXGALLOCATION *)v28, 0LL);
              v29 = v28[6];
              if ( v29 && (!v6 || (*((_DWORD *)v6 + 1) & 1) == 0) )
              {
                DXGADAPTERALLOCATION::~DXGADAPTERALLOCATION(v28[6]);
                operator delete(v29);
              }
              DXGALLOCATION::`scalar deleting destructor'((DXGALLOCATION *)v28);
            }
            while ( v27 );
          }
          *a3 = 0LL;
        }
        return (unsigned int)v9;
      }
    }
  }
  return (unsigned int)v9;
}
