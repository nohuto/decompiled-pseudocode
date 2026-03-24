/*
 * XREFs of ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C02367B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000381C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0003894 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C0008660 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?ActivateVirtualGpu@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C0040454 (-ActivateVirtualGpu@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?AddVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C004049C (-AddVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C0123260 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C0125434 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z.c)
 *     ?CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x1C0238F4C (-CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z.c)
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z @ 0x1C0285BB8 (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z.c)
 *     ?InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALMACHINE@@@Z @ 0x1C0285D0C (-InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALM.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::SetVirtualGpuVmBus(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGKARG_SETVIRTUALGPUVMBUS *a2)
{
  __int64 *v2; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  DXGPROCESSVMWP **v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // eax
  struct _EPROCESS *v17; // r15
  struct DXGVIRTUALMACHINE *v18; // r14
  __int64 CurrentProcess; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 ProcessDxgProcess; // rbx
  __int64 v23; // r9
  int DxgProcess; // eax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  DXGPROCESS *v29; // rcx
  DXGPROCESS **Current; // rax
  __int64 v31; // r9
  int v32; // eax
  char v33; // cl
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  struct _EPROCESS *v38; // rax
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  DXGVIRTUALMACHINE *v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  _BYTE v50[8]; // [rsp+40h] [rbp-20h] BYREF
  DXGPUSHLOCK *v51; // [rsp+48h] [rbp-18h]
  int v52; // [rsp+50h] [rbp-10h]
  struct DXGPROCESS *v53; // [rsp+A0h] [rbp+40h] BYREF
  struct _EPROCESS *v54; // [rsp+A8h] [rbp+48h] BYREF

  v2 = (__int64 *)((char *)this + 168);
  LODWORD(v7) = DXG_HOST_VIRTUALGPU_VMBUS::CreateVmBusChannel((struct VMBCHANNEL__ **)this + 21, a2->VmBusHandle, this);
  if ( (int)v7 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v6, v5);
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v50, (struct _KTHREAD **)Global + 50, 0);
    DXGPUSHLOCK::AcquireExclusive(v51);
    v13 = (DXGPROCESSVMWP **)((char *)this + 96);
    v52 = 2;
    v14 = *((_QWORD *)this + 12);
    if ( v14 )
    {
      if ( !*(_BYTE *)(v14 + 520) )
      {
        v46 = WdLogNewEntry5_WdError(v10, v9);
        *(_QWORD *)(v46 + 24) = 389LL;
        WdLogEvent5_WdError(v46);
        LODWORD(v7) = -1073741823;
        goto LABEL_40;
      }
      LODWORD(v7) = DXGVIRTUALMACHINE::InitializeVirtualMachine(*((DXGVIRTUALMACHINE **)this + 13), a2->VmBusHandle, 1u);
      if ( (int)v7 < 0 )
      {
        v42 = WdLogNewEntry5_WdError(v48, v47);
        *(_QWORD *)(v42 + 24) = 401LL;
        goto LABEL_37;
      }
      DXGVIRTUALMACHINE::ActivateVirtualGpu(*((struct _KTHREAD ***)this + 13));
      goto LABEL_39;
    }
    v15 = *v2;
    v54 = 0LL;
    if ( g_VgpuDisableVaBackedVm
      || (v16 = ((__int64 (__fastcall *)(__int64, struct _EPROCESS **))qword_1C00B4598)(v15, &v54), v17 = v54, v16 < 0) )
    {
      v17 = 0LL;
    }
    v18 = 0LL;
    if ( !v17 )
    {
      Current = (DXGPROCESS **)DXGPROCESS::GetCurrent(v15, v9, v11, v12);
      v53 = (struct DXGPROCESS *)Current;
      if ( !Current )
        goto LABEL_22;
      if ( (*((_BYTE *)Current + 347) & 0x10) == 0 )
      {
        DXGPROCESS::DestroyDxgProcess((struct DXGPROCESS *)Current);
        Current = 0LL;
        v53 = 0LL;
      }
      if ( !Current )
      {
LABEL_22:
        LOBYTE(v31) = a2->VmBusHandle != 0LL;
        v32 = DXGPROCESS::CreateDxgProcess(&v53, 0LL, 0LL, v31, 0LL, 0LL);
        v7 = v32;
        if ( v32 < 0 )
        {
LABEL_16:
          v28 = WdLogNewEntry5_WdLowResource(v25, v20, v26, v27);
          *(_QWORD *)(v28 + 24) = v7;
          WdLogEvent5_WdLowResource(v28);
LABEL_40:
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v50);
          return (unsigned int)v7;
        }
        Current = (DXGPROCESS **)v53;
      }
      v33 = *((_BYTE *)Current + 347);
      if ( (v33 & 0x20) != 0 )
        v29 = Current[62];
      else
        v29 = (DXGPROCESS *)((unsigned __int64)Current & -(__int64)((v33 & 0x10) != 0));
      *v13 = v29;
      goto LABEL_28;
    }
    CurrentProcess = PsGetCurrentProcess(v15, v9, v11, v12);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
    if ( ProcessDxgProcess )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v21, v20) + 24) = ProcessDxgProcess;
      if ( (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) != 0 )
      {
        *v13 = (DXGPROCESSVMWP *)ProcessDxgProcess;
        v18 = *(struct DXGVIRTUALMACHINE **)(ProcessDxgProcess + 496);
        if ( v18 )
        {
          if ( *((_QWORD *)v18 + 29) )
            goto LABEL_14;
          *(_QWORD *)(ProcessDxgProcess + 496) = 0LL;
          *((_QWORD *)v18 + 7) = 0LL;
        }
        DXGPROCESS::DestroyDxgProcess((struct DXGPROCESS *)ProcessDxgProcess);
        *v13 = 0LL;
      }
      else
      {
        DXGPROCESS::DestroyDxgProcess((struct DXGPROCESS *)ProcessDxgProcess);
      }
    }
LABEL_14:
    if ( !*v13 )
    {
      LOBYTE(v23) = a2->VmBusHandle != 0LL;
      DxgProcess = DXGPROCESS::CreateDxgProcess((struct DXGPROCESS **)this + 12, 0LL, 0LL, v23, v17, 0LL);
      v7 = DxgProcess;
      if ( DxgProcess < 0 )
        goto LABEL_16;
    }
    v29 = *v13;
LABEL_28:
    DXGPROCESS::AcquireReference(v29, v20);
    v38 = (struct _EPROCESS *)PsGetCurrentProcess(v35, v34, v36, v37);
    v39 = DXGPROCESSVMWP::InitializeVmwpProcess(
            *v13,
            a2->VmBusHandle,
            *((struct DXGPROCESS **)this + 11),
            v38,
            v17,
            *((_BYTE *)this + 153),
            v18);
    v7 = v39;
    if ( v39 < 0 )
    {
      v42 = WdLogNewEntry5_WdError(v41, v40);
      *(_QWORD *)(v42 + 24) = v7;
LABEL_37:
      WdLogEvent5_WdError(v42);
      goto LABEL_40;
    }
    v43 = (DXGVIRTUALMACHINE *)*((_QWORD *)*v13 + 62);
    *((_QWORD *)this + 13) = v43;
    LODWORD(v7) = DXGVIRTUALMACHINE::InitializeVirtualMachine(v43, a2->VmBusHandle, 1u);
    if ( (int)v7 < 0 )
    {
      v42 = WdLogNewEntry5_WdError(v45, v44);
      *(_QWORD *)(v42 + 24) = 374LL;
      goto LABEL_37;
    }
    *(_OWORD *)(*((_QWORD *)this + 13) + 248LL) = *(_OWORD *)((char *)this + 328);
    DXGVIRTUALMACHINE::AddVirtualGpu(*((struct _KTHREAD ***)this + 13), (struct _LIST_ENTRY *)((char *)this + 136));
LABEL_39:
    *((_BYTE *)this + 154) = 0;
    goto LABEL_40;
  }
  return (unsigned int)v7;
}
