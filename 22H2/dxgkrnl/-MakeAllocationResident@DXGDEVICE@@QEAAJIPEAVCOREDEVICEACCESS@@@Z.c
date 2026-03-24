/*
 * XREFs of ?MakeAllocationResident@DXGDEVICE@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1C0256374
 * Callers:
 *     ?CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PEAI2@Z @ 0x1C0254A84 (-CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PE.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C000E5CC (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107C00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0109380 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1C024A2B8 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 */

__int64 __fastcall DXGDEVICE::MakeAllocationResident(DXGDEVICE *this, unsigned int a2, struct _EX_RUNDOWN_REF *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rbx
  struct DXGPROCESS *Current; // r15
  char *v12; // r14
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // r9d
  __int64 v16; // rax
  __int64 v17; // r8
  int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // rax
  struct _EX_RUNDOWN_REF *v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  int Resident; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rsi
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v35; // [rsp+50h] [rbp-10h] BYREF
  __int64 v36; // [rsp+58h] [rbp-8h] BYREF
  __int64 v37; // [rsp+90h] [rbp+30h] BYREF
  struct _EX_RUNDOWN_REF *v38; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v39; // [rsp+A8h] [rbp+48h] BYREF

  v38 = a3;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v6, v5);
    *(_QWORD *)(v9 + 24) = 8595LL;
    WdLogEvent5_WdAssertion(v9);
  }
  LODWORD(v10) = 0;
  Current = DXGPROCESS::GetCurrent(v6, v5, v7, v8);
  v12 = (char *)Current + 208;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)Current + 208, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v15 = *((_DWORD *)Current + 58);
      if ( v15 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v13, &EventBlockThread, v14, v15);
    }
    ExAcquirePushLockSharedEx(v12, 0LL);
  }
  v16 = (a2 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v16 >= *((_DWORD *)Current + 64) )
    goto LABEL_15;
  v17 = *((_QWORD *)Current + 30);
  v18 = *(_DWORD *)(v17 + 16 * v16 + 8);
  if ( ((a2 >> 25) & 0x60) != (*(_BYTE *)(v17 + 16 * v16 + 8) & 0x60) || (v18 & 0x2000) != 0 || (v18 & 0x1F) == 0 )
    goto LABEL_15;
  v19 = v18 & 0x1F;
  if ( (_BYTE)v19 != 5 )
  {
    v20 = WdLogNewEntry5_WdError(v19, 2LL * (unsigned int)v16);
    *(_QWORD *)(v20 + 24) = 316LL;
    WdLogEvent5_WdError(v20);
LABEL_15:
    v21 = 0LL;
    goto LABEL_16;
  }
  v21 = *(struct _EX_RUNDOWN_REF **)(v17 + 16LL * (unsigned int)v16);
LABEL_16:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v38, v21);
  ExReleasePushLockSharedEx(v12, 0LL);
  KeLeaveCriticalRegion();
  if ( !v38 )
  {
    v24 = WdLogNewEntry5_WdAssertion(v23, v22);
    *(_QWORD *)(v24 + 24) = 8601LL;
    WdLogEvent5_WdAssertion(v24);
  }
  if ( DXGDEVICE::UmdManagesResidency(this) && (*((_BYTE *)this + 1869) & 1) != 0 )
  {
    Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                 (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4240LL),
                 *((unsigned int *)Current + 106),
                 *((_DWORD *)this + 110),
                 0,
                 (struct D3DDDI_MAKERESIDENT_FLAGS)3,
                 1u,
                 (const struct DXGALLOCATIONREFERENCE *)&v38,
                 0LL,
                 0LL);
    v10 = Resident;
    if ( Resident < 0 )
    {
      v28 = WdLogNewEntry5_WdError(v27, v26);
      *(_QWORD *)(v28 + 24) = v10;
      WdLogEvent5_WdError(v28);
    }
  }
  else if ( DXGDEVICE::UmdManagesResidency(this) )
  {
    v37 = 0LL;
    v35 = 0LL;
    v29 = *((_QWORD *)this + 2);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v29 + 640) + 8LL) + 984LL))(
      *((_QWORD *)this + 95),
      0LL,
      &v37,
      &v35);
    v39 = 0LL;
    v36 = 0LL;
    v30 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _EX_RUNDOWN_REF *, __int64, int, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v29 + 640) + 8LL) + 776LL))(
            *(_QWORD *)(v29 + 648),
            v37,
            v38 + 3,
            1LL,
            3,
            &v39,
            &v36);
    v10 = v30;
    if ( v30 >= 0 )
    {
      if ( v30 == 259 )
      {
        (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v29 + 640) + 8LL) + 992LL))(
          *(_QWORD *)(v29 + 648),
          &v35,
          &v39,
          1LL);
        LODWORD(v10) = 0;
      }
    }
    else
    {
      v33 = WdLogNewEntry5_WdWarning(v31, v26, v32);
      *(_QWORD *)(v33 + 24) = v10;
      WdLogEvent5_WdWarning(v33);
    }
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v38, v26);
  return (unsigned int)v10;
}
