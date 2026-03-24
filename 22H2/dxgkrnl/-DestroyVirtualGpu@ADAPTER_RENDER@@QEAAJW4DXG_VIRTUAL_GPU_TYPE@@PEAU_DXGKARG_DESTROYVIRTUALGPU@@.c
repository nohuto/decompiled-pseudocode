/*
 * XREFs of ?DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z @ 0x1C022FCEC
 * Callers:
 *     DxgkDdiDestroyVirtualGpu @ 0x1C0231944 (DxgkDdiDestroyVirtualGpu.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000381C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0003894 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0004E50 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0005358 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00055A8 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?GetVirtualGpuByIndex@DXGVIRTUALGPUMANAGER@@QEAAPEAUDXGK_VIRTUAL_GPU@@I@Z @ 0x1C00400BC (-GetVirtualGpuByIndex@DXGVIRTUALGPUMANAGER@@QEAAPEAUDXGK_VIRTUAL_GPU@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DestroyVirtualGpu(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  int v5; // r12d
  struct DXGPROCESS *Current; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGPROCESS *v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // r15
  struct DXGDEVICE *v13; // rdx
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct _KTHREAD **v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  DXGVIRTUALGPUMANAGER *v24; // rcx
  struct DXGK_VIRTUAL_GPU *VirtualGpuByIndex; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rax
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // rdx
  DXGVIRTUALGPUMANAGER *v40; // rcx
  struct DXGK_VIRTUAL_GPU *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  _BYTE v45[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v46; // [rsp+38h] [rbp-C8h]
  char v47; // [rsp+40h] [rbp-C0h]
  _BYTE v48[8]; // [rsp+48h] [rbp-B8h] BYREF
  DXGPUSHLOCK *v49; // [rsp+50h] [rbp-B0h]
  int v50; // [rsp+58h] [rbp-A8h]
  _BYTE v51[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v52[8]; // [rsp+70h] [rbp-90h] BYREF
  DXGPUSHLOCK *v53; // [rsp+78h] [rbp-88h]
  int v54; // [rsp+80h] [rbp-80h]
  _BYTE v55[8]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v56[64]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v57[88]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v58[144]; // [rsp+130h] [rbp+30h] BYREF

  v5 = a2;
  Current = DXGPROCESS::GetCurrent(a1, a2, (__int64)a3, a4);
  v10 = Current;
  if ( Current && (*((_BYTE *)Current + 347) & 8) != 0 )
  {
    if ( !v5 )
    {
      v11 = *(_QWORD *)(a1 + 16);
      v12 = *(_QWORD *)(*((_QWORD *)Current + 6) + 8LL * *(unsigned int *)(v11 + 232));
      v13 = *(struct DXGDEVICE **)(v12 + 40);
      if ( v13 )
      {
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
          (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v51,
          v13);
        v46 = v11;
        v47 = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v45);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v55, *(_QWORD *)(v12 + 40), 2, v14, 0);
        v15 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v55, 0LL);
        v19 = (struct _KTHREAD **)v15;
        if ( v15 < 0 )
        {
          v20 = WdLogNewEntry5_WdWarning(v17, v16, v18);
          *(_QWORD *)(v20 + 24) = *(_QWORD *)(v12 + 40);
          *(_QWORD *)(v20 + 32) = v19;
          WdLogEvent5_WdWarning(v20);
LABEL_15:
          COREACCESS::~COREACCESS((COREACCESS *)v57);
          COREACCESS::~COREACCESS((COREACCESS *)v56);
          if ( v47 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v45);
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v51);
          return (unsigned int)v19;
        }
        v21 = *(_QWORD *)(a1 + 1632);
        if ( !v21 )
        {
          v22 = WdLogNewEntry5_WdError(v17, 0LL);
          *(_QWORD *)(v22 + 24) = 1399LL;
          WdLogEvent5_WdError(v22);
LABEL_14:
          LODWORD(v19) = -1073741811;
          goto LABEL_15;
        }
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v48, (struct _KTHREAD **)(v21 + 40), 0);
        DXGPUSHLOCK::AcquireExclusive(v49);
        v23 = *a3;
        v24 = *(DXGVIRTUALGPUMANAGER **)(a1 + 1632);
        v50 = 2;
        VirtualGpuByIndex = DXGVIRTUALGPUMANAGER::GetVirtualGpuByIndex(v24, v23);
        if ( !VirtualGpuByIndex )
        {
          v28 = WdLogNewEntry5_WdWarning(0LL, v26, v27);
          *(_QWORD *)(v28 + 24) = *a3;
          WdLogEvent5_WdWarning(v28);
LABEL_13:
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v48);
          goto LABEL_14;
        }
        if ( v10 != *((struct DXGPROCESS **)VirtualGpuByIndex + 11) )
        {
          v29 = WdLogNewEntry5_WdError(VirtualGpuByIndex, v26);
          *(_QWORD *)(v29 + 24) = 1412LL;
          WdLogEvent5_WdError(v29);
          goto LABEL_13;
        }
        (*(void (__fastcall **)(struct DXGK_VIRTUAL_GPU *))(*(_QWORD *)VirtualGpuByIndex + 144LL))(VirtualGpuByIndex);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v48);
        COREACCESS::~COREACCESS((COREACCESS *)v57);
        COREACCESS::~COREACCESS((COREACCESS *)v56);
        if ( v47 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v45);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v51);
      }
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v58, *(struct DXGADAPTER *const *)(a1 + 16), 0LL);
    v31 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v58, 0LL);
    v19 = (struct _KTHREAD **)v31;
    if ( v31 < 0 )
    {
      v35 = WdLogNewEntry5_WdWarning(v33, v32, v34);
      *(_QWORD *)(v35 + 24) = v19;
      WdLogEvent5_WdWarning(v35);
LABEL_40:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v58, v36);
      return (unsigned int)v19;
    }
    if ( v5 == 1 )
      v19 = *(struct _KTHREAD ***)(a1 + 1640);
    else
      v19 = *(struct _KTHREAD ***)(a1 + 1632);
    if ( !v19 )
    {
      v37 = WdLogNewEntry5_WdError(v33, v32);
      *(_QWORD *)(v37 + 24) = 1431LL;
      WdLogEvent5_WdError(v37);
      LODWORD(v19) = -1073741811;
      goto LABEL_40;
    }
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v52, v19 + 5, 0);
    DXGPUSHLOCK::AcquireExclusive(v53);
    v39 = *a3;
    v54 = 2;
    if ( v5 == 1 )
      v40 = *(DXGVIRTUALGPUMANAGER **)(a1 + 1640);
    else
      v40 = *(DXGVIRTUALGPUMANAGER **)(a1 + 1632);
    if ( v40 && (v41 = DXGVIRTUALGPUMANAGER::GetVirtualGpuByIndex(v40, v39), (v39 = (__int64)v41) != 0) )
    {
      if ( v10 == *((struct DXGPROCESS **)v41 + 11) )
      {
        LODWORD(v19) = (*((__int64 (__fastcall **)(struct _KTHREAD **, struct DXGK_VIRTUAL_GPU *))*v19 + 3))(v19, v41);
LABEL_39:
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v52);
        goto LABEL_40;
      }
      v42 = WdLogNewEntry5_WdError(v40, v41);
      *(_QWORD *)(v42 + 24) = 1445LL;
      WdLogEvent5_WdError(v42);
    }
    else
    {
      v43 = WdLogNewEntry5_WdWarning(v40, v39, v38);
      *(_QWORD *)(v43 + 24) = *a3;
      WdLogEvent5_WdWarning(v43);
    }
    LODWORD(v19) = -1073741811;
    goto LABEL_39;
  }
  v44 = WdLogNewEntry5_WdError(v9, v8);
  *(_QWORD *)(v44 + 24) = 1371LL;
  WdLogEvent5_WdError(v44);
  return 3221225485LL;
}
