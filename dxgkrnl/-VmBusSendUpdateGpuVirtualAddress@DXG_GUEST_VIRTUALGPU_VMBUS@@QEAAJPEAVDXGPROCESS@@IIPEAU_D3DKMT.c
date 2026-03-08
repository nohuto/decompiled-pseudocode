/*
 * XREFs of ?VmBusSendUpdateGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IIPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@@Z @ 0x1C038BCE4
 * Callers:
 *     DxgkUpdateGpuVirtualAddress @ 0x1C02D7690 (DxgkUpdateGpuVirtualAddress.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0003A50 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0024424 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0025398 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005B244 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0194420 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C01B2F2C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0340210 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C03715E8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C038B754 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUpdateGpuVirtualAddress(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        int a3,
        int a4,
        struct _D3DKMT_UPDATEGPUVIRTUALADDRESS *a5)
{
  unsigned __int64 v9; // rcx
  __int64 v10; // r15
  unsigned int v11; // esi
  struct DXGKVMB_COMMAND_BASE *v12; // rdi
  int HostProcess; // eax
  D3DKMT_HANDLE v14; // eax
  __int64 v15; // r9
  unsigned int v16; // ecx
  int v17; // ecx
  __int64 v18; // rax
  int v19; // ecx
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *Operations; // rdx
  int v21; // r13d
  int Ptr_high; // r12d
  unsigned int v23; // r15d
  unsigned __int64 v24; // rsi
  int v25; // eax
  unsigned int v26; // r8d
  struct _EX_RUNDOWN_REF **AllocationUnsafe; // rax
  struct _EX_RUNDOWN_REF *v29; // [rsp+58h] [rbp-1B0h] BYREF
  _BYTE v30[8]; // [rsp+60h] [rbp-1A8h] BYREF
  __int64 v31; // [rsp+68h] [rbp-1A0h]
  char v32; // [rsp+70h] [rbp-198h]
  unsigned int v33; // [rsp+78h] [rbp-190h]
  struct _EX_RUNDOWN_REF *v34; // [rsp+80h] [rbp-188h] BYREF
  DXG_VMBUS_CHANNEL_BASE *v35; // [rsp+88h] [rbp-180h]
  _BYTE v36[32]; // [rsp+90h] [rbp-178h] BYREF
  struct DXGKVMB_COMMAND_BASE *v37[2]; // [rsp+B0h] [rbp-158h] BYREF
  unsigned int v38; // [rsp+C0h] [rbp-148h]

  v35 = this;
  v31 = *((_QWORD *)this + 9);
  v32 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v30);
  if ( *(_DWORD *)(*((_QWORD *)this + 9) + 200LL) != 1 )
  {
    if ( v32 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v30);
    return 3221226166LL;
  }
  v9 = (unsigned __int64)a5->NumOperations << 6;
  v10 = 0xFFFFFFFFLL;
  if ( v9 <= 0xFFFFFFFF )
    v10 = (unsigned int)v9;
  v11 = v9 > 0xFFFFFFFF ? 0xC0000095 : 0;
  v33 = v11;
  if ( (unsigned int)v10 >= 0x20000 || (unsigned int)(v10 + 56) > 0x20000 )
  {
    if ( v32 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v30);
    return 3221225659LL;
  }
  *(_OWORD *)v37 = 0LL;
  v38 = 0;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v37, this, v10 + 56, 0LL, 0LL, 0LL);
  v12 = v37[0];
  if ( !v37[0] )
  {
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v37);
    if ( v32 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v30);
    return 3221225495LL;
  }
  HostProcess = DXGPROCESS::GetHostProcess(a2);
  *(_QWORD *)v12 = 0LL;
  *((_DWORD *)v12 + 2) = HostProcess;
  *((_BYTE *)v12 + 12) = 0;
  *((_DWORD *)v12 + 3) &= 0x1FFu;
  *((_QWORD *)v12 + 2) = 19LL;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v36, a2);
  v14 = (a5->hFenceObject >> 6) & 0xFFFFFF;
  if ( v14 >= *((_DWORD *)a2 + 74) )
    goto LABEL_22;
  v15 = *((_QWORD *)a2 + 35);
  v16 = *(_DWORD *)(v15 + 16LL * v14 + 8);
  if ( a5->hFenceObject >> 30 != ((v16 >> 5) & 3) )
    goto LABEL_22;
  if ( (v16 & 0x2000) != 0 )
    goto LABEL_22;
  v17 = v16 & 0x1F;
  if ( !v17 )
    goto LABEL_22;
  if ( v17 != 11 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_22:
    v18 = 0LL;
    goto LABEL_23;
  }
  v18 = *(_QWORD *)(v15 + 16LL * v14);
LABEL_23:
  if ( !v18 )
  {
    WdLogSingleEntry2(3LL, a5->hFenceObject, -1073741811LL);
    goto LABEL_25;
  }
  v19 = *(_DWORD *)(v18 + 44);
  *((_QWORD *)v12 + 3) = a5->FenceValue;
  *((_DWORD *)v12 + 12) = a5->Flags.Value;
  *((_DWORD *)v12 + 9) = a4;
  *((_DWORD *)v12 + 8) = a3;
  *((_DWORD *)v12 + 10) = v19;
  *((_DWORD *)v12 + 11) = a5->NumOperations;
  Operations = a5->Operations;
  if ( (D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)((char *)Operations + v10) < Operations
    || (unsigned __int64)Operations + v10 > MmUserProbeAddress )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove((char *)v12 + 56, Operations, (unsigned int)v10);
  v21 = 0;
  Ptr_high = 0;
  v23 = 0;
  if ( !a5->NumOperations )
  {
LABEL_38:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v36);
    v11 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
            (struct _KTHREAD **)v35,
            (unsigned __int8 *)v37[1],
            v37[0],
            v38);
    goto LABEL_40;
  }
  while ( 1 )
  {
    v24 = (unsigned __int64)v23 << 6;
    v25 = *(_DWORD *)((char *)v12 + v24 + 56);
    if ( v25 && v25 != 3 )
      goto LABEL_37;
    v26 = *(_DWORD *)((char *)v12 + v24 + 80);
    if ( v26 != v21 )
      break;
    *(_DWORD *)((char *)v12 + v24 + 80) = Ptr_high;
LABEL_37:
    if ( ++v23 >= a5->NumOperations )
      goto LABEL_38;
  }
  v29 = 0LL;
  AllocationUnsafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationUnsafe(
                                                  (__int64)a2,
                                                  (DXGALLOCATIONREFERENCE *)&v34,
                                                  v26);
  DXGALLOCATIONREFERENCE::MoveAssign(&v29, AllocationUnsafe);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v34);
  if ( v29 )
  {
    v21 = *(_DWORD *)((char *)v12 + v24 + 80);
    Ptr_high = HIDWORD(v29[2].Ptr);
    *(_DWORD *)((char *)v12 + v24 + 80) = Ptr_high;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v29);
    goto LABEL_37;
  }
  v11 = -1073741811;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v29);
LABEL_25:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v36);
LABEL_40:
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v37);
  if ( v32 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v30);
  return v11;
}
