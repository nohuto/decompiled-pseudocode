/*
 * XREFs of ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C0237FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000381C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0003894 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C0008660 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?ActivateVirtualGpu@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C0040454 (-ActivateVirtualGpu@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?AddVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C004049C (-AddVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C0123260 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C0125434 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z.c)
 *     ?DdiSetVirtualGpuVmBus@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C0235468 (-DdiSetVirtualGpuVmBus@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z @ 0x1C0285BB8 (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z.c)
 *     ?InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALMACHINE@@@Z @ 0x1C0285D0C (-InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALM.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::SetVirtualGpuVmBus(
        DXGK_VIRTUAL_GPU_GPUP *this,
        struct _DXGKARG_SETVIRTUALGPUVMBUS *a2)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  DXGPROCESS **Current; // rax
  __int64 v11; // rdx
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 v18; // rax
  char v19; // cl
  DXGPROCESS *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  struct _EPROCESS *CurrentProcess; // rax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  DXGVIRTUALMACHINE *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  ULONG v36; // eax
  __int64 v37; // rdx
  __int64 v38; // r8
  struct DXGPROCESS *v40; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v41[8]; // [rsp+48h] [rbp-C0h] BYREF
  DXGPUSHLOCK *v42; // [rsp+50h] [rbp-B8h]
  int v43; // [rsp+58h] [rbp-B0h]
  _BYTE v44[144]; // [rsp+60h] [rbp-A8h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v41, (struct _KTHREAD **)Global + 50, 0);
  DXGPUSHLOCK::AcquireExclusive(v42);
  v9 = *((_QWORD *)this + 12);
  v43 = 2;
  if ( v9 )
  {
    if ( !*(_BYTE *)(v9 + 520) )
    {
      v33 = WdLogNewEntry5_WdError(v6, v5);
      *(_QWORD *)(v33 + 24) = 239LL;
      WdLogEvent5_WdError(v33);
      LODWORD(v17) = -1073741823;
      goto LABEL_26;
    }
    LODWORD(v17) = DXGVIRTUALMACHINE::InitializeVirtualMachine(*((DXGVIRTUALMACHINE **)this + 13), 0LL, 0);
    if ( (int)v17 < 0 )
    {
      v29 = WdLogNewEntry5_WdError(v35, v34);
      *(_QWORD *)(v29 + 24) = 250LL;
      goto LABEL_21;
    }
    DXGVIRTUALMACHINE::ActivateVirtualGpu(*((struct _KTHREAD ***)this + 13));
  }
  else
  {
    Current = (DXGPROCESS **)DXGPROCESS::GetCurrent(v6, v5, v7, v8);
    v40 = (struct DXGPROCESS *)Current;
    if ( !Current )
      goto LABEL_6;
    if ( (*((_BYTE *)Current + 347) & 0x10) == 0 )
    {
      DXGPROCESS::DestroyDxgProcess((struct DXGPROCESS *)Current);
      Current = 0LL;
      v40 = 0LL;
    }
    if ( !Current )
    {
LABEL_6:
      LOBYTE(v12) = a2->VmBusHandle != 0LL;
      v13 = DXGPROCESS::CreateDxgProcess(&v40, 0LL, 0LL, v12, 0LL, 0LL);
      v17 = v13;
      if ( v13 < 0 )
      {
        v18 = WdLogNewEntry5_WdLowResource(v14, v11, v15, v16);
        *(_QWORD *)(v18 + 24) = v17;
        WdLogEvent5_WdLowResource(v18);
        goto LABEL_26;
      }
      Current = (DXGPROCESS **)v40;
    }
    v19 = *((_BYTE *)Current + 347);
    if ( (v19 & 0x20) != 0 )
      v20 = Current[62];
    else
      v20 = (DXGPROCESS *)((unsigned __int64)Current & -(__int64)((v19 & 0x10) != 0));
    *((_QWORD *)this + 12) = v20;
    DXGPROCESS::AcquireReference(v20, v11);
    CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v22, v21, v23, v24);
    v26 = DXGPROCESSVMWP::InitializeVmwpProcess(
            *((DXGPROCESSVMWP **)this + 12),
            a2->VmBusHandle,
            *((struct DXGPROCESS **)this + 11),
            CurrentProcess,
            0LL,
            0,
            0LL);
    v17 = v26;
    if ( v26 < 0 )
    {
      v29 = WdLogNewEntry5_WdError(v28, v27);
      *(_QWORD *)(v29 + 24) = v17;
LABEL_21:
      WdLogEvent5_WdError(v29);
      goto LABEL_26;
    }
    v30 = *(DXGVIRTUALMACHINE **)(*((_QWORD *)this + 12) + 496LL);
    *((_QWORD *)this + 13) = v30;
    LODWORD(v17) = DXGVIRTUALMACHINE::InitializeVirtualMachine(v30, 0LL, 0);
    if ( (int)v17 < 0 )
    {
      v29 = WdLogNewEntry5_WdError(v32, v31);
      *(_QWORD *)(v29 + 24) = 225LL;
      goto LABEL_21;
    }
    DXGVIRTUALMACHINE::AddVirtualGpu(*((struct _KTHREAD ***)this + 13), (struct _LIST_ENTRY *)((char *)this + 136));
  }
  v36 = *((_DWORD *)this + 6);
  *((_BYTE *)this + 154) = 0;
  a2->VirtualGpuIndex = v36;
  COREADAPTERACCESS::COREADAPTERACCESS(
    (COREADAPTERACCESS *)v44,
    *(struct DXGADAPTER *const *)(*((_QWORD *)this + 1) + 16LL),
    0LL);
  LODWORD(v17) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v44, 0LL);
  if ( (int)v17 >= 0 )
    LODWORD(v17) = ADAPTER_RENDER::DdiSetVirtualGpuVmBus(*((ADAPTER_RENDER **)this + 1), a2, v38);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v44, v37);
LABEL_26:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v41);
  return (unsigned int)v17;
}
