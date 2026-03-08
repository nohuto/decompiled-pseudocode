/*
 * XREFs of ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C036AF40
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C0008E50 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?ActivateVirtualGpu@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C005A9A4 (-ActivateVirtualGpu@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?AddVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C005A9EC (-AddVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C01A6B80 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z @ 0x1C01A7864 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z.c)
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z @ 0x1C03407BC (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z.c)
 *     ?InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALMACHINE@@@Z @ 0x1C0340994 (-InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALM.c)
 *     ?SetVmGuid@DXGVIRTUALMACHINE@@QEAAXPEBU_GUID@@@Z @ 0x1C03418F0 (-SetVmGuid@DXGVIRTUALMACHINE@@QEAAXPEBU_GUID@@@Z.c)
 *     ?CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x1C036EA18 (-CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::SetVirtualGpuVmBus(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGKARG_SETVIRTUALGPUVMBUS *a2)
{
  __int64 *v2; // rdi
  __int64 v5; // rbx
  struct DXGGLOBAL *Global; // rax
  DXGPROCESS **v7; // r14
  __int64 v8; // rax
  __int64 v9; // rcx
  struct _EPROCESS *v10; // r15
  struct DXGVIRTUALMACHINE *v11; // r13
  __int64 CurrentProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 ProcessDxgProcess; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  int DxgProcess; // eax
  struct DXGPROCESS *Current; // rax
  int v20; // eax
  __int64 v21; // rdi
  int v22; // edx
  const wchar_t *v23; // r9
  int v24; // ecx
  __int64 v25; // rcx
  DXGPROCESSVMWP *v26; // rdi
  unsigned __int8 v27; // bl
  __int64 v28; // rcx
  struct _EPROCESS *v29; // rax
  int v30; // eax
  struct DXGPROCESSVMWP **v31; // rcx
  _BYTE v33[8]; // [rsp+50h] [rbp-20h] BYREF
  DXGPUSHLOCK *v34; // [rsp+58h] [rbp-18h]
  int v35; // [rsp+60h] [rbp-10h]
  struct DXGPROCESS *v36; // [rsp+B0h] [rbp+40h] BYREF
  struct _EPROCESS *v37; // [rsp+B8h] [rbp+48h] BYREF

  v2 = (__int64 *)((char *)this + 176);
  LODWORD(v5) = DXG_HOST_VIRTUALGPU_VMBUS::CreateVmBusChannel((struct VMBCHANNEL__ **)this + 22, a2->VmBusHandle, this);
  if ( (int)v5 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v33, (struct _KTHREAD **)Global + 57, 0);
    DXGPUSHLOCK::AcquireExclusive(v34);
    v7 = (DXGPROCESS **)((char *)this + 96);
    v8 = *((_QWORD *)this + 12);
    v35 = 2;
    if ( v8 )
    {
      if ( !*(_BYTE *)(v8 + 632) )
      {
        v21 = 404LL;
        WdLogSingleEntry1(2LL, 404LL);
        v23 = L"VMWP process failed to reset";
        LODWORD(v5) = -1073741823;
        goto LABEL_38;
      }
      LODWORD(v5) = DXGVIRTUALMACHINE::InitializeVirtualMachine(
                      *((struct DXGPROCESSVMWP ***)this + 13),
                      a2->VmBusHandle,
                      1);
      if ( (int)v5 < 0 )
      {
        v21 = 416LL;
        WdLogSingleEntry1(2LL, 416LL);
        goto LABEL_37;
      }
      DXGVIRTUALMACHINE::ActivateVirtualGpu(*((struct _KTHREAD ***)this + 13));
LABEL_41:
      *((_BYTE *)this + 156) = 0;
      goto LABEL_42;
    }
    v9 = *v2;
    v37 = 0LL;
    if ( g_VgpuDisableVaBackedVm
      || (int)((__int64 (__fastcall *)(__int64, struct _EPROCESS **))qword_1C013D0A8)(v9, &v37) < 0 )
    {
      v10 = 0LL;
      v11 = 0LL;
    }
    else
    {
      v10 = v37;
      v11 = 0LL;
      if ( v37 )
      {
        CurrentProcess = PsGetCurrentProcess(v9);
        ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
        if ( ProcessDxgProcess )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v14, v13, v16, v17) + 24) = ProcessDxgProcess;
          if ( (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0 )
          {
            DXGPROCESS::DestroyDxgProcess((struct DXGPROCESS *)ProcessDxgProcess);
            goto LABEL_13;
          }
          *v7 = (DXGPROCESS *)ProcessDxgProcess;
          v11 = *(struct DXGVIRTUALMACHINE **)(ProcessDxgProcess + 608);
          if ( !v11 )
            goto LABEL_11;
          if ( !*((_QWORD *)v11 + 34) )
          {
            *(_QWORD *)(ProcessDxgProcess + 608) = 0LL;
            *((_QWORD *)v11 + 7) = 0LL;
LABEL_11:
            DXGPROCESS::DestroyDxgProcess((struct DXGPROCESS *)ProcessDxgProcess);
            *v7 = 0LL;
          }
        }
LABEL_13:
        if ( *v7
          || (DxgProcess = DXGPROCESS::CreateDxgProcess(
                             (struct DXGPROCESS **)this + 12,
                             0LL,
                             0LL,
                             a2->VmBusHandle != 0LL,
                             v10),
              v5 = DxgProcess,
              DxgProcess >= 0) )
        {
LABEL_28:
          DXGPROCESS::AcquireReference(*v7);
          v26 = *v7;
          v27 = *((_BYTE *)this + 153);
          v29 = (struct _EPROCESS *)PsGetCurrentProcess(v28);
          v30 = DXGPROCESSVMWP::InitializeVmwpProcess(
                  v26,
                  a2->VmBusHandle,
                  *((struct DXGPROCESS **)this + 11),
                  v29,
                  v10,
                  v27,
                  v11);
          LODWORD(v5) = v30;
          if ( v30 < 0 )
          {
            v21 = v30;
            WdLogSingleEntry1(2LL, v30);
            v23 = L"Failed to setup VM worker process: 0x%I64x";
LABEL_38:
            v22 = 0x40000;
            goto LABEL_39;
          }
          v31 = (struct DXGPROCESSVMWP **)*((_QWORD *)*v7 + 76);
          *((_QWORD *)this + 13) = v31;
          LODWORD(v5) = DXGVIRTUALMACHINE::InitializeVirtualMachine(v31, a2->VmBusHandle, 1);
          if ( (int)v5 < 0 )
          {
            v21 = 389LL;
            WdLogSingleEntry1(2LL, 389LL);
LABEL_37:
            v23 = L"Failed to initalize virtual machine";
            goto LABEL_38;
          }
          DXGVIRTUALMACHINE::SetVmGuid(*((struct _GUID **)this + 13), (const struct _GUID *)this + 22);
          DXGVIRTUALMACHINE::AddVirtualGpu(
            *((struct _KTHREAD ***)this + 13),
            (struct _LIST_ENTRY *)((char *)this + 136));
          goto LABEL_41;
        }
LABEL_22:
        v21 = v5;
        WdLogSingleEntry1(6LL, v5);
        v22 = 262145;
        v23 = L"Failed to create DXGPROCESS for VMWP process: 0x%I64x";
LABEL_39:
        DxgkLogInternalTriageEvent(0LL, v22, -1, (__int64)v23, v21, 0LL, 0LL, 0LL, 0LL);
LABEL_42:
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v33);
        return (unsigned int)v5;
      }
    }
    Current = DXGPROCESS::GetCurrent(v9);
    v36 = Current;
    if ( !Current )
      goto LABEL_21;
    if ( (*((_DWORD *)Current + 106) & 0x80) == 0 )
    {
      DXGPROCESS::DestroyDxgProcess(Current);
      Current = 0LL;
      v36 = 0LL;
    }
    if ( !Current )
    {
LABEL_21:
      v20 = DXGPROCESS::CreateDxgProcess(&v36, 0LL, 0LL, a2->VmBusHandle != 0LL, 0LL);
      v5 = v20;
      if ( v20 < 0 )
        goto LABEL_22;
      Current = v36;
    }
    v24 = *((_DWORD *)Current + 106);
    if ( (v24 & 0x100) != 0 )
      v25 = *((_QWORD *)Current + 76);
    else
      v25 = (unsigned __int64)Current & -(__int64)((v24 & 0x80u) != 0);
    *v7 = (DXGPROCESS *)v25;
    goto LABEL_28;
  }
  return (unsigned int)v5;
}
