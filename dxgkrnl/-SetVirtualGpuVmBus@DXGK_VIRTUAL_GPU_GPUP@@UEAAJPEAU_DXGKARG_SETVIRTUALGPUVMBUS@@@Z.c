__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::SetVirtualGpuVmBus(
        DXGK_VIRTUAL_GPU_GPUP *this,
        struct _DXGKARG_SETVIRTUALGPUVMBUS *a2)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  DXGPROCESS **Current; // rax
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rdi
  int v11; // edx
  const wchar_t *v12; // r9
  int v13; // ecx
  DXGPROCESS *v14; // rcx
  DXGPROCESSVMWP *v15; // rbx
  __int64 v16; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  int v18; // eax
  struct DXGPROCESSVMWP **v19; // rcx
  ULONG v20; // eax
  __int64 v21; // r8
  struct DXGPROCESS *v23; // [rsp+50h] [rbp-D8h] BYREF
  _BYTE v24[8]; // [rsp+58h] [rbp-D0h] BYREF
  DXGPUSHLOCK *v25; // [rsp+60h] [rbp-C8h]
  int v26; // [rsp+68h] [rbp-C0h]
  _BYTE v27[144]; // [rsp+70h] [rbp-B8h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v24, (struct _KTHREAD **)Global + 57, 0);
  DXGPUSHLOCK::AcquireExclusive(v25);
  v6 = *((_QWORD *)this + 12);
  v26 = 2;
  if ( v6 )
  {
    if ( !*(_BYTE *)(v6 + 632) )
    {
      v10 = 249LL;
      WdLogSingleEntry1(2LL, 249LL);
      v12 = L"VMWP process failed to reset";
      v9 = -1073741823;
      goto LABEL_22;
    }
    v9 = DXGVIRTUALMACHINE::InitializeVirtualMachine(*((struct DXGPROCESSVMWP ***)this + 13), 0LL, 0);
    if ( v9 < 0 )
    {
      v10 = 260LL;
      WdLogSingleEntry1(2LL, 260LL);
      goto LABEL_21;
    }
    DXGVIRTUALMACHINE::ActivateVirtualGpu(*((struct _KTHREAD ***)this + 13));
  }
  else
  {
    Current = (DXGPROCESS **)DXGPROCESS::GetCurrent(v5);
    v23 = (struct DXGPROCESS *)Current;
    if ( !Current )
      goto LABEL_6;
    if ( ((_DWORD)Current[53] & 0x80) == 0 )
    {
      DXGPROCESS::DestroyDxgProcess((struct DXGPROCESS *)Current);
      Current = 0LL;
      v23 = 0LL;
    }
    if ( !Current )
    {
LABEL_6:
      v8 = DXGPROCESS::CreateDxgProcess(&v23, 0LL, 0LL, a2->VmBusHandle != 0LL, 0LL);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = v8;
        WdLogSingleEntry1(6LL, v8);
        v11 = 262145;
        v12 = L"Failed to create DXGPROCESS for VMWP process: 0x%I64x";
LABEL_23:
        DxgkLogInternalTriageEvent(0LL, v11, -1, (__int64)v12, v10, 0LL, 0LL, 0LL, 0LL);
        goto LABEL_28;
      }
      Current = (DXGPROCESS **)v23;
    }
    v13 = *((_DWORD *)Current + 106);
    if ( (v13 & 0x100) != 0 )
      v14 = Current[76];
    else
      v14 = (DXGPROCESS *)((unsigned __int64)Current & -(__int64)((v13 & 0x80u) != 0));
    *((_QWORD *)this + 12) = v14;
    DXGPROCESS::AcquireReference(v14);
    v15 = (DXGPROCESSVMWP *)*((_QWORD *)this + 12);
    CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v16);
    v18 = DXGPROCESSVMWP::InitializeVmwpProcess(
            v15,
            a2->VmBusHandle,
            *((struct DXGPROCESS **)this + 11),
            CurrentProcess,
            0LL,
            0,
            0LL);
    v9 = v18;
    if ( v18 < 0 )
    {
      v10 = v18;
      WdLogSingleEntry1(2LL, v18);
      v12 = L"Failed to setup VM worker process: 0x%I64x";
LABEL_22:
      v11 = 0x40000;
      goto LABEL_23;
    }
    v19 = *(struct DXGPROCESSVMWP ***)(*((_QWORD *)this + 12) + 608LL);
    *((_QWORD *)this + 13) = v19;
    v9 = DXGVIRTUALMACHINE::InitializeVirtualMachine(v19, 0LL, 0);
    if ( v9 < 0 )
    {
      v10 = 235LL;
      WdLogSingleEntry1(2LL, 235LL);
LABEL_21:
      v12 = L"Failed to initalize virtual machine";
      goto LABEL_22;
    }
    DXGVIRTUALMACHINE::AddVirtualGpu(*((struct _KTHREAD ***)this + 13), (struct _LIST_ENTRY *)((char *)this + 136));
  }
  v20 = *((_DWORD *)this + 6);
  *((_BYTE *)this + 156) = 0;
  a2->VirtualGpuIndex = v20;
  COREADAPTERACCESS::COREADAPTERACCESS(
    (COREADAPTERACCESS *)v27,
    *(struct DXGADAPTER *const *)(*((_QWORD *)this + 1) + 16LL),
    0LL);
  v9 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v27, 0LL);
  if ( v9 >= 0 )
    v9 = ADAPTER_RENDER::DdiSetVirtualGpuVmBus(*((ADAPTER_RENDER **)this + 1), a2, v21);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v27);
LABEL_28:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v24);
  return (unsigned int)v9;
}
