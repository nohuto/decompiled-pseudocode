/*
 * XREFs of ?VmBusSendSetAllocationPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEBU_D3DKMT_SETALLOCATIONPRIORITY@@@Z @ 0x1C024C0B8
 * Callers:
 *     ?SetAllocationPriority@DXGDEVICE@@QEAAJPEAU_D3DKMT_SETALLOCATIONPRIORITY@@E@Z @ 0x1C02293B0 (-SetAllocationPriority@DXGDEVICE@@QEAAJPEAU_D3DKMT_SETALLOCATIONPRIORITY@@E@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0005218 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0005488 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0005790 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008F14 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetResourceUnsafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0025ECC (-GetResourceUnsafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0101D00 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107C00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C024DD40 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetAllocationPriority(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        const struct DXGDEVICE *a3,
        const struct _D3DKMT_SETALLOCATIONPRIORITY *a4)
{
  int v6; // ebx
  int v7; // r13d
  size_t v8; // r14
  struct _EX_RUNDOWN_REF *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  UINT AllocationCount; // eax
  unsigned int v15; // r12d
  unsigned int v16; // r13d
  int v17; // eax
  D3DKMT_HANDLE hResource; // r8d
  __int64 v19; // rdx
  const UINT *pPriorities; // rdx
  ULONG64 v21; // r9
  struct _MDL *v22; // r9
  const D3DKMT_HANDLE *phAllocationList; // rdx
  __int64 v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rax
  struct _EX_RUNDOWN_REF *v27; // [rsp+20h] [rbp-68h] BYREF
  struct _EX_RUNDOWN_REF *v28[2]; // [rsp+28h] [rbp-60h] BYREF
  void *v29; // [rsp+38h] [rbp-50h]
  _BYTE v30[32]; // [rsp+40h] [rbp-48h] BYREF

  v6 = -1073741811;
  v7 = 40;
  v8 = 0LL;
  v9 = 0LL;
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 408) <= 0x10u )
    return 0LL;
  AllocationCount = a4->AllocationCount;
  if ( AllocationCount <= 0x20000 )
  {
    if ( a4->hResource )
    {
      v15 = 1;
    }
    else
    {
      if ( !AllocationCount )
        goto LABEL_27;
      v8 = AllocationCount;
      v7 = v8 * 4 + 40;
      v15 = AllocationCount;
    }
    v16 = v15 * 4 + v7;
    v9 = (struct _EX_RUNDOWN_REF *)operator new(v16, 0x4B677844u, 1, (POOL_TYPE)512);
    v28[1] = v9;
    if ( !v9 )
    {
      v6 = -1073741801;
LABEL_28:
      v26 = WdLogNewEntry5_WdWarning(v11, v10, v12);
      *(_QWORD *)(v26 + 24) = v6;
      WdLogEvent5_WdWarning(v26);
      goto LABEL_29;
    }
    v17 = *((_DWORD *)a2 + 106);
    v9->Count = 0LL;
    LODWORD(v9[1].Count) = v17;
    HIDWORD(v9[1].Ptr) = 0;
    LODWORD(v9[2].Count) = 59;
    LODWORD(v9[3].Count) = *((_DWORD *)a3 + 110);
    LODWORD(v9[4].Count) = a4->AllocationCount;
    v29 = (char *)&v9[5] + v8 * 4;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v30, (struct _KTHREAD **)a2);
    hResource = a4->hResource;
    if ( hResource )
    {
      DXGPROCESS::GetResourceUnsafe((__int64)a2, (DXGRESOURCEREFERENCE *)&v27, hResource);
      if ( !v27 )
      {
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v27, v19);
LABEL_13:
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v30);
        goto LABEL_27;
      }
      HIDWORD(v9[3].Ptr) = HIDWORD(v27[2].Ptr);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v27, v19);
    }
    else
    {
      phAllocationList = a4->phAllocationList;
      if ( &phAllocationList[v8] < phAllocationList || (unsigned __int64)&phAllocationList[v8] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(&v9[5], phAllocationList, v8 * 4);
      v24 = 0LL;
      if ( a4->AllocationCount )
      {
        while ( 1 )
        {
          DXGPROCESS::GetAllocationUnsafe((__int64)a2, (DXGALLOCATIONREFERENCE *)v28, *((_DWORD *)&v9[5].Count + v24));
          if ( !v28[0] )
            break;
          *((_DWORD *)&v9[5].Count + v24) = v28[0][12].Count;
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v28, v25);
          v24 = (unsigned int)(v24 + 1);
          if ( (unsigned int)v24 >= a4->AllocationCount )
            goto LABEL_15;
        }
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v28, v25);
        goto LABEL_13;
      }
    }
LABEL_15:
    pPriorities = a4->pPriorities;
    v21 = (ULONG64)&pPriorities[v15];
    if ( v21 < (unsigned __int64)pPriorities || v21 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v29, pPriorities, v15 * 4);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v30);
    v6 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(this, (struct DXGKVMB_COMMAND_BASE *)v9, v16, v22);
  }
LABEL_27:
  if ( v6 < 0 )
    goto LABEL_28;
LABEL_29:
  operator delete[](v9);
  return (unsigned int)v6;
}
