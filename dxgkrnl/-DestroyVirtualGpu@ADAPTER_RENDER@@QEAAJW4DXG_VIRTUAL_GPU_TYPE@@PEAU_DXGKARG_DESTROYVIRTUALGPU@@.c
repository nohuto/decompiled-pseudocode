/*
 * XREFs of ?DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_DESTROYVIRTUALGPU@@E@Z @ 0x1C0362F74
 * Callers:
 *     DxgkDdiDestroyVirtualGpu @ 0x1C0365474 (DxgkDdiDestroyVirtualGpu.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0006AAC (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006C80 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00071E8 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00098CC (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z @ 0x1C0009AF0 (-GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DestroyVirtualGpu(__int64 a1, int a2, unsigned int *a3, char a4)
{
  struct DXGPROCESS *Current; // rax
  DXGPROCESS *v9; // rcx
  __int64 v10; // rbx
  struct DXGPROCESS_RENDER_ADAPTER_INFO *RenderAdapterInfo; // r14
  struct DXGDEVICE *v12; // rdx
  __int64 v13; // r9
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  struct _KTHREAD ***v21; // r14
  struct _KTHREAD **v22; // rbx
  __int64 v23; // rcx
  struct _KTHREAD **v24; // rax
  _BYTE v25[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h]
  char v27; // [rsp+60h] [rbp-A0h]
  _BYTE v28[8]; // [rsp+68h] [rbp-98h] BYREF
  DXGPUSHLOCK *v29; // [rsp+70h] [rbp-90h]
  int v30; // [rsp+78h] [rbp-88h]
  _BYTE v31[16]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v32[8]; // [rsp+90h] [rbp-70h] BYREF
  DXGPUSHLOCK *v33; // [rsp+98h] [rbp-68h]
  int v34; // [rsp+A0h] [rbp-60h]
  _BYTE v35[8]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v36[64]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v37[88]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v38[144]; // [rsp+150h] [rbp+50h] BYREF

  if ( a4 )
  {
    Current = DXGPROCESS::GetCurrent(a1);
    if ( !Current || (*((_DWORD *)Current + 106) & 0xC0) == 0 )
    {
      WdLogSingleEntry1(2LL, 1610LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Only VVMS or VMWP process can destroy vGPU",
        1610LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
  }
  v9 = (DXGPROCESS *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 171);
  if ( a2 )
    goto LABEL_17;
  v10 = *(_QWORD *)(a1 + 16);
  RenderAdapterInfo = DXGPROCESS::GetRenderAdapterInfo(v9, *(_DWORD *)(v10 + 240));
  v12 = (struct DXGDEVICE *)*((_QWORD *)RenderAdapterInfo + 9);
  if ( !v12 )
    goto LABEL_17;
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v31,
    v12);
  v26 = v10;
  v27 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v35, *((_QWORD *)RenderAdapterInfo + 9), 2, v13, 0);
  v14 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v35, 0LL);
  v15 = v14;
  if ( v14 >= 0 )
  {
    v16 = *(_QWORD *)(a1 + 1864);
    if ( !v16 )
    {
      WdLogSingleEntry1(2LL, 1641LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Destroying invalid virtual GPU",
        1641LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v15 = -1073741811;
      goto LABEL_20;
    }
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v28, (struct _KTHREAD **)(v16 + 40), 0);
    DXGPUSHLOCK::AcquireExclusive(v29);
    v17 = *(_QWORD *)(a1 + 1864);
    v18 = *a3;
    v30 = 2;
    if ( v18 >= *(_DWORD *)(v17 + 12)
      || !*(_QWORD *)(*(_QWORD *)(v17 + 24) + 8LL * v18)
      || (_mm_lfence(), (v19 = *(_QWORD *)(*(_QWORD *)(v17 + 24) + 8LL * v18)) == 0) )
    {
      WdLogSingleEntry1(3LL, *a3);
      v15 = -1073741811;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v28);
      goto LABEL_20;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 144LL))(v19);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v28);
    COREACCESS::~COREACCESS((COREACCESS *)v37);
    COREACCESS::~COREACCESS((COREACCESS *)v36);
    if ( v27 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v31);
LABEL_17:
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v38, *(struct DXGADAPTER *const *)(a1 + 16), 0LL);
    v20 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v38, 0LL);
    v15 = v20;
    if ( v20 >= 0 )
    {
      v21 = (struct _KTHREAD ***)(a1 + 1872);
      if ( a2 == 1 )
        v22 = *v21;
      else
        v22 = *(struct _KTHREAD ***)(a1 + 1864);
      if ( v22 )
      {
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v32, v22 + 5, 0);
        DXGPUSHLOCK::AcquireExclusive(v33);
        v23 = *a3;
        v34 = 2;
        if ( a2 != 1 )
          v21 = (struct _KTHREAD ***)(a1 + 1864);
        v24 = *v21;
        if ( *v21 && (unsigned int)v23 < *((_DWORD *)v24 + 3) && *((_QWORD *)v24[3] + v23) )
        {
          v15 = (*((__int64 (__fastcall **)(struct _KTHREAD **))*v22 + 3))(v22);
        }
        else
        {
          WdLogSingleEntry1(3LL, v23);
          v15 = -1073741811;
        }
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v32);
      }
      else
      {
        WdLogSingleEntry1(2LL, 1667LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Destroying invalid virtual GPU",
          1667LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v15 = -1073741811;
      }
    }
    else
    {
      WdLogSingleEntry1(3LL, v20);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v38);
    return v15;
  }
  WdLogSingleEntry2(3LL, *((_QWORD *)RenderAdapterInfo + 9), v14);
LABEL_20:
  COREACCESS::~COREACCESS((COREACCESS *)v37);
  COREACCESS::~COREACCESS((COREACCESS *)v36);
  if ( v27 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v31);
  return v15;
}
