/*
 * XREFs of ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1C0385DF8
 * Callers:
 *     DxgkLock2Internal @ 0x1C019DDA0 (DxgkLock2Internal.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B8330 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01C8C80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C03CD888 (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0003A50 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C0009B30 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005B244 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0194420 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C019A030 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C01B2F2C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z @ 0x1C02D4100 (-UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0340210 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C03715E8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x1C038B3B0 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        struct _D3DKMT_LOCK2 *a4,
        unsigned __int8 a5)
{
  D3DKMT_HANDLE hAllocation; // ebx
  volatile signed __int32 *v6; // rdi
  struct _D3DKMT_LOCK2 *v8; // r14
  unsigned int v11; // eax
  __int64 v12; // r8
  int v13; // ecx
  struct _EX_RUNDOWN_REF *v14; // rdx
  struct DXGALLOCATION *v15; // rbx
  int v16; // edi
  signed __int32 v17; // eax
  struct DXGALLOCATION *v18; // rdi
  PVOID v19; // rax
  char v20; // al
  __int64 v21; // rcx
  __int64 v22; // r14
  struct _D3DKMT_LOCK2 *v23; // rcx
  __int64 v24; // rdi
  int HostProcess; // eax
  __int64 v26; // r13
  struct _MDL *v27; // r14
  unsigned int v28; // edi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v30; // eax
  __int64 v31; // rbx
  const wchar_t *v32; // r9
  PMDL Mdl; // rax
  __int64 v34; // rsi
  struct _MDL *v35; // rdx
  struct _MDL *v36; // rcx
  __int64 v37; // r8
  struct _MDL *v38; // rax
  NTSTATUS v39; // eax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v40; // rax
  ULONG Length[2]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID VirtualAddress; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGALLOCATION *v44; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v45; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v46; // [rsp+6Ch] [rbp-94h] BYREF
  struct _D3DKMT_LOCK2 *v47; // [rsp+70h] [rbp-90h]
  struct _EX_RUNDOWN_REF *v48; // [rsp+78h] [rbp-88h] BYREF
  __int64 v49; // [rsp+80h] [rbp-80h]
  _BYTE v50[24]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v51[32]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v52; // [rsp+C0h] [rbp-40h] BYREF
  int v53; // [rsp+D0h] [rbp-30h]
  __int128 v54; // [rsp+1E0h] [rbp+E0h] BYREF
  int v55; // [rsp+1F0h] [rbp+F0h]
  int v56; // [rsp+300h] [rbp+200h] BYREF
  unsigned __int64 v57; // [rsp+308h] [rbp+208h]
  char v58[16]; // [rsp+310h] [rbp+210h] BYREF

  hAllocation = a4->hAllocation;
  v6 = (volatile signed __int32 *)((char *)a2 + 248);
  v47 = a4;
  v8 = a4;
  v44 = 0LL;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a2 + 248));
  v11 = (hAllocation >> 6) & 0xFFFFFF;
  if ( v11 >= *((_DWORD *)a2 + 74) )
    goto LABEL_7;
  v12 = *((_QWORD *)a2 + 35);
  if ( ((hAllocation >> 25) & 0x60) != (*(_BYTE *)(v12 + 16LL * v11 + 8) & 0x60) )
    goto LABEL_7;
  if ( (*(_DWORD *)(v12 + 16LL * v11 + 8) & 0x2000) != 0 )
    goto LABEL_7;
  v13 = *(_DWORD *)(v12 + 16LL * v11 + 8) & 0x1F;
  if ( !v13 )
    goto LABEL_7;
  if ( v13 != 5 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_7:
    v14 = 0LL;
    goto LABEL_8;
  }
  v14 = *(struct _EX_RUNDOWN_REF **)(v12 + 16LL * v11);
LABEL_8:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v48, v14);
  _InterlockedDecrement(v6 + 4);
  ExReleasePushLockSharedEx(v6, 0LL);
  KeLeaveCriticalRegion();
  DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v44, &v48);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v48);
  v15 = v44;
  v16 = -1073741811;
  if ( !v44 )
  {
    WdLogSingleEntry1(3LL, 10770LL);
    goto LABEL_62;
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v44 + 1) + 16LL) + 16LL) != *(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL) )
  {
    WdLogSingleEntry3(2LL, a3, v44, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
      (__int64)a3,
      (__int64)v15,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_62;
  }
  *(_QWORD *)Length = *((unsigned int *)v44 + 30);
  if ( !*((_QWORD *)v44 + 13) )
  {
    v49 = *((_QWORD *)v44 + 6);
    v54 = 0LL;
    v55 = 0;
    DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v54, this, 0x40u, 0LL, 0LL, 0LL);
    v24 = v54;
    if ( !(_QWORD)v54 )
    {
      v16 = -1073741801;
LABEL_61:
      DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v54);
      goto LABEL_62;
    }
    HostProcess = DXGPROCESS::GetHostProcess(a2);
    *(_BYTE *)(v24 + 12) = 0;
    *(_DWORD *)(v24 + 12) &= 0x1FFu;
    *(_QWORD *)v24 = 0LL;
    *(_DWORD *)(v24 + 8) = HostProcess;
    *(_QWORD *)(v24 + 16) = 23LL;
    *(_BYTE *)(v24 + 48) = 0;
    *(_QWORD *)(v24 + 52) = 0LL;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v51, a2);
    *(_DWORD *)(v24 + 28) = *((_DWORD *)v15 + 5);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v51);
    *(_DWORD *)(v24 + 24) = *((_DWORD *)a3 + 118);
    *(struct _D3DDDICB_LOCK2FLAGS::$8E8E2CD94D4182533FEB50916D5F70D0::$345C9315266921A5615E194C0B7E8CDB *)(v24 + 32) = v8->Flags.0;
    if ( a5 )
    {
      *(_BYTE *)(v24 + 48) = 1;
      *(_QWORD *)(v24 + 52) = 0LL;
    }
    v46 = 16;
    v16 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v54, &v56, &v46);
    if ( v16 < 0 || (v16 = -1073741823, v46 < 0x10) || (v16 = v56, v56 < 0) )
    {
LABEL_60:
      WdLogSingleEntry1(2LL, v16);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"VmBusSendLock2 failed: 0x%I64x", v16, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_61;
    }
    v26 = v49;
    v27 = 0LL;
    VirtualAddress = 0LL;
    v28 = *(_DWORD *)(v49 + 4);
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    v30 = (*(__int64 (__fastcall **)(__int64, PVOID *, _QWORD, ULONG *, int, unsigned int))VirtualMemoryInterface)(
            -1LL,
            &VirtualAddress,
            0LL,
            Length,
            8392704,
            ~(unsigned __int16)(v28 >> 9) & 0x400 | 4u);
    v16 = v30;
    if ( v30 >= 0 )
    {
      Mdl = IoAllocateMdl(0LL, Length[0], 0, 0, 0LL);
      v27 = Mdl;
      if ( !Mdl )
      {
        v34 = 10904LL;
        v16 = -1073741801;
        WdLogSingleEntry3(2LL, *((_QWORD *)this + 9), -1073741801LL, 10904LL);
        this = (DXG_GUEST_VIRTUALGPU_VMBUS *)*((_QWORD *)this + 9);
        v32 = L"Adapter 0x%I64x: Failed to allocate memory for CPU visible buffer, returning 0x%I64x";
        v31 = -1073741801LL;
        goto LABEL_51;
      }
      v35 = Mdl + 1;
      v36 = (struct _MDL *)(v57 >> 12);
      if ( (unsigned int)(*(_QWORD *)Length >> 12) )
      {
        v37 = (unsigned int)(*(_QWORD *)Length >> 12);
        do
        {
          v38 = v36;
          v36 = (struct _MDL *)((char *)v36 + 1);
          v35->Next = v38;
          v35 = (struct _MDL *)((char *)v35 + 8);
          --v37;
        }
        while ( v37 );
      }
      v39 = MmRotatePhysicalView(VirtualAddress, (PSIZE_T)Length, v27, MmToFrameBufferNoCopy, 0LL, 0LL);
      v16 = v39;
      if ( v39 >= 0 )
      {
        *((_DWORD *)v15 + 18) |= 0x80000u;
        *((_QWORD *)v15 + 13) = VirtualAddress;
        *((_QWORD *)v15 + 14) = v57;
        _InterlockedAdd((volatile signed __int32 *)v15 + 24, 1u);
        _InterlockedAdd(&g_VgpuNumAllocationsUnderCpuAccess, 1u);
        _InterlockedAdd(&g_VgpuNumAllocationsLocked, 1u);
        g_VgpuNumLockedBytes += *(_QWORD *)Length;
        v47->pData = VirtualAddress;
        goto LABEL_58;
      }
      v31 = 10919LL;
      this = (DXG_GUEST_VIRTUALGPU_VMBUS *)v39;
      WdLogSingleEntry2(2LL, v39, 10919LL);
      v32 = L"MmRotatePhysicalView failed: 0x%I64x";
    }
    else
    {
      v31 = v30;
      WdLogSingleEntry2(2LL, this, v30);
      v32 = L"Adapter 0x%I64x: Failed to allocate memory, returning 0x%I64x";
    }
    v34 = 0LL;
LABEL_51:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v32, (__int64)this, v31, v34, 0LL, 0LL);
    WdLogSingleEntry1(2LL, v16);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"VmBusSendLock2 failed: 0x%I64x", v16, 0LL, 0LL, 0LL, 0LL);
    if ( VirtualAddress )
    {
      if ( (*(_DWORD *)(v26 + 4) & 0x40000) != 0 )
      {
        MmUnmapLockedPages(VirtualAddress, v27);
      }
      else
      {
        v40 = DxgkGetVirtualMemoryInterface();
        (*((void (__fastcall **)(__int64, PVOID *, ULONG *, __int64))v40 + 2))(-1LL, &VirtualAddress, Length, 0x8000LL);
      }
    }
    if ( !v27 )
    {
LABEL_59:
      if ( v16 >= 0 )
        goto LABEL_61;
      goto LABEL_60;
    }
LABEL_58:
    IoFreeMdl(v27);
    goto LABEL_59;
  }
  v17 = _InterlockedExchangeAdd((volatile signed __int32 *)v44 + 24, 1u);
  v18 = v44;
  if ( !v17 && !(*((_BYTE *)v44 + 128) & 1 | ((*((_BYTE *)v44 + 128) & 2) != 0)) )
  {
    _InterlockedAdd(&g_VgpuNumAllocationsUnderCpuAccess, 1u);
    v18 = v44;
  }
  if ( (*((_BYTE *)v18 + 128) & 2) != 0 && (*((_BYTE *)DXGGLOBAL::GetGlobal() + 1776) & 1) != 0 )
  {
    v19 = *(PVOID *)(*((_QWORD *)v15 + 13) + 32LL);
  }
  else
  {
    v20 = *((_BYTE *)v18 + 128);
    if ( (v20 & 1) != 0 )
    {
      v21 = *((_QWORD *)v15 + 13);
      if ( (*(_BYTE *)(v21 + 10) & 5) != 0 )
        v19 = *(PVOID *)(v21 + 24);
      else
        v19 = MmMapLockedPagesSpecifyCache((PMDL)v21, 0, MmCached, 0LL, 0, 0x40000010u);
    }
    else
    {
      if ( *((_BYTE *)this + 80) && (v20 & 2) == 0 )
      {
        v53 = 0;
        v52 = 0LL;
        DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v52, this, 0x40u, 0LL, 0LL, 0LL);
        v22 = v52;
        *(_DWORD *)(v22 + 8) = DXGPROCESS::GetHostProcess(a2);
        *(_BYTE *)(v22 + 12) = 0;
        *(_DWORD *)(v22 + 12) &= 0x1FFu;
        *(_QWORD *)v22 = 0LL;
        *(_BYTE *)(v22 + 48) = 0;
        *(_QWORD *)(v22 + 52) = 0LL;
        *(_QWORD *)(v22 + 16) = 23LL;
        DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v50, a2);
        *(_DWORD *)(v22 + 28) = *((_DWORD *)v18 + 5);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v50);
        v23 = v47;
        *(_DWORD *)(v22 + 24) = *((_DWORD *)a3 + 118);
        *(struct _D3DDDICB_LOCK2FLAGS::$8E8E2CD94D4182533FEB50916D5F70D0::$345C9315266921A5615E194C0B7E8CDB *)(v22 + 32) = v23->Flags.0;
        if ( a5 )
        {
          *(_BYTE *)(v22 + 48) = 1;
          *(_QWORD *)(v22 + 52) = 0LL;
        }
        v45 = 16;
        if ( DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v52, v58, &v45) < 0
          || v45 < 0x10 )
        {
          UnlockParavirtualizedAllocationOnGuest(v18, 1);
          *((_QWORD *)v15 + 13) = 0LL;
          DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v52);
          v16 = -1073741823;
          goto LABEL_62;
        }
        DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v52);
        v8 = v47;
      }
      v19 = (PVOID)*((_QWORD *)v15 + 13);
    }
  }
  v8->pData = v19;
  v16 = 0;
LABEL_62:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v44);
  return (unsigned int)v16;
}
