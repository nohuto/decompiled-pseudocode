/*
 * XREFs of ?VmBusSendCddGdiCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBU_D3DKMT_RENDER@@@Z @ 0x1C0380A84
 * Callers:
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z @ 0x1C01A0C10 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005B244 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0194420 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C019A030 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C03715E8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C038B754 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCddGdiCommand(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGCONTEXT *a3,
        const struct _D3DKMT_RENDER *a4)
{
  struct DXG_VMBUS_CHANNEL_BASE *v4; // r12
  UINT CommandLength; // ecx
  __int64 v9; // rbx
  const wchar_t *v10; // r9
  UINT AllocationCount; // eax
  size_t v13; // rbx
  struct DXGKVMB_COMMAND_BASE *v14; // r14
  __int64 v15; // rsi
  D3DDDI_ALLOCATIONLIST *pNewAllocationList; // rdx
  int v17; // r14d
  struct _EX_RUNDOWN_REF *v18; // r12
  D3DKMT_HANDLE hAllocation; // ebx
  unsigned int v20; // eax
  __int64 v21; // r8
  int v22; // ecx
  struct _EX_RUNDOWN_REF *v23; // rdx
  int v24; // eax
  struct _MDL *v25; // [rsp+20h] [rbp-1A8h]
  struct _EX_RUNDOWN_REF *v26; // [rsp+50h] [rbp-178h] BYREF
  DXG_GUEST_VIRTUALGPU_VMBUS *v27; // [rsp+58h] [rbp-170h]
  struct DXGKVMB_COMMAND_BASE *v28[2]; // [rsp+60h] [rbp-168h] BYREF
  unsigned int v29; // [rsp+70h] [rbp-158h]

  v4 = this;
  v27 = this;
  CommandLength = a4->CommandLength;
  if ( CommandLength > 0x20000 )
  {
    v9 = 11116LL;
    WdLogSingleEntry1(2LL, 11116LL);
    v10 = L"CommandLength is invalid";
LABEL_3:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v10, v9, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  AllocationCount = a4->AllocationCount;
  if ( AllocationCount > 0x4000 )
  {
    v9 = 11121LL;
    WdLogSingleEntry1(2LL, 11121LL);
    v10 = L"AllocationCount is invalid";
    goto LABEL_3;
  }
  v13 = 8 * AllocationCount;
  *(_OWORD *)v28 = 0LL;
  v29 = 0;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v28, v4, v13 + CommandLength + 56, 0LL, 0LL, 0LL);
  v14 = v28[0];
  if ( v28[0] )
  {
    *((_BYTE *)v28[0] + 12) = 0;
    *((_DWORD *)v14 + 3) &= 0x1FFu;
    *((_DWORD *)v14 + 2) = 0;
    *(_QWORD *)v14 = 0LL;
    *((_QWORD *)v14 + 2) = 40LL;
    *((_DWORD *)v14 + 2) = *((_DWORD *)a2 + 126);
    *((_DWORD *)v14 + 8) = a4->AllocationCount;
    *((_DWORD *)v14 + 7) = a4->CommandLength;
    *((_QWORD *)v14 + 5) = a4->pNewCommandBuffer;
    *((_DWORD *)v14 + 12) = a4->Flags;
    *((_DWORD *)v14 + 6) = *((_DWORD *)a3 + 7);
    pNewAllocationList = a4->pNewAllocationList;
    v26 = (struct _EX_RUNDOWN_REF *)((char *)v14 + 56);
    memmove((char *)v14 + 56, pNewAllocationList, v13);
    memmove((char *)v14 + v13 + 56, a4->pNewCommandBuffer, a4->CommandLength);
    v17 = 0;
    if ( !a4->AllocationCount )
    {
LABEL_19:
      v24 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(v4, (unsigned __int8 *)v28[1], v28[0], v29, v25);
      v15 = v24;
      if ( v24 < 0 )
      {
        WdLogSingleEntry1(2LL, v24);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"VmBusSendCddGdiCommand failed: 0x%I64x",
          v15,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      goto LABEL_21;
    }
    v18 = v26;
    while ( 1 )
    {
      hAllocation = a4->pNewAllocationList[v17].hAllocation;
      DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a2 + 248));
      v20 = (hAllocation >> 6) & 0xFFFFFF;
      if ( v20 < *((_DWORD *)a2 + 74) )
      {
        v21 = *((_QWORD *)a2 + 35);
        if ( ((hAllocation >> 25) & 0x60) == (*(_BYTE *)(v21 + 16LL * v20 + 8) & 0x60)
          && (*(_DWORD *)(v21 + 16LL * v20 + 8) & 0x2000) == 0 )
        {
          v22 = *(_DWORD *)(v21 + 16LL * v20 + 8) & 0x1F;
          if ( v22 )
          {
            if ( v22 == 5 )
            {
              v23 = *(struct _EX_RUNDOWN_REF **)(v21 + 16LL * v20);
              goto LABEL_17;
            }
            WdLogSingleEntry1(2LL, 267LL);
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
      }
      v23 = 0LL;
LABEL_17:
      DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v26, v23);
      _InterlockedDecrement((volatile signed __int32 *)a2 + 66);
      ExReleasePushLockSharedEx((char *)a2 + 248, 0LL);
      KeLeaveCriticalRegion();
      LODWORD(v18[v17].Count) = HIDWORD(v26[2].Ptr);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v26);
      if ( ++v17 >= a4->AllocationCount )
      {
        v4 = v27;
        goto LABEL_19;
      }
    }
  }
  LODWORD(v15) = -1073741801;
LABEL_21:
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v28);
  return (unsigned int)v15;
}
