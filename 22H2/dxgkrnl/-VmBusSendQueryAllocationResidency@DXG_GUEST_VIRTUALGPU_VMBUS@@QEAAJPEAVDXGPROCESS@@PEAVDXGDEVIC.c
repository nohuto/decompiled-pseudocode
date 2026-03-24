/*
 * XREFs of ?VmBusSendQueryAllocationResidency@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@@Z @ 0x1C024B270
 * Callers:
 *     ?QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z @ 0x1C0228F60 (-QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0005218 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0005488 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0005790 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008F14 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetResourceUnsafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0025ECC (-GetResourceUnsafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0101D00 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107C00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C024DA2C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAllocationResidency(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        char a4,
        struct _D3DKMT_QUERYALLOCATIONRESIDENCY *a5)
{
  struct _D3DKMT_QUERYALLOCATIONRESIDENCY *v7; // r14
  unsigned int v8; // r12d
  __int64 AllocationCount; // r11
  __int64 v10; // rax
  __int64 v12; // rcx
  unsigned int v13; // r13d
  char *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct DXGKVMB_COMMAND_BASE *v19; // rdi
  __int64 v20; // rax
  int Count; // ebx
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct _EX_RUNDOWN_REF *v24; // rsi
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  unsigned int hResource; // r8d
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 i; // r15
  unsigned int *v34; // rdx
  unsigned int v35; // r8d
  __int64 v36; // rdx
  __int64 Count_low; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 j; // r8
  D3DKMT_ALLOCATIONRESIDENCYSTATUS *pResidencyStatus; // rax
  D3DKMT_ALLOCATIONRESIDENCYSTATUS *v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  struct _MDL *v46; // [rsp+28h] [rbp-80h]
  unsigned int v47[4]; // [rsp+30h] [rbp-78h] BYREF
  struct _EX_RUNDOWN_REF *v48[3]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v49[80]; // [rsp+58h] [rbp-50h] BYREF

  v7 = a5;
  v8 = 56;
  AllocationCount = a5->AllocationCount;
  if ( (a5->hResource == 0) == ((_DWORD)AllocationCount == 0) )
  {
    v10 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v10 + 24) = 9558LL;
LABEL_3:
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
  if ( (_DWORD)AllocationCount )
  {
    if ( (unsigned __int64)(4 * AllocationCount) > 0xFFFFFFFF )
    {
      v10 = WdLogNewEntry5_WdError(0xFFFFFFFFLL, a2);
      *(_QWORD *)(v10 + 24) = 9565LL;
      goto LABEL_3;
    }
    v12 = (unsigned int)(4 * AllocationCount + 56);
    if ( (unsigned int)v12 < 0x38 )
    {
      v10 = WdLogNewEntry5_WdError(v12, a2);
      *(_QWORD *)(v10 + 24) = 9570LL;
      goto LABEL_3;
    }
    v8 = 4 * AllocationCount + 56;
  }
  v13 = 1;
  v14 = (char *)operator new(v8, 0x4B677844u, 1, (POOL_TYPE)512);
  v19 = (struct DXGKVMB_COMMAND_BASE *)v14;
  v48[1] = (struct _EX_RUNDOWN_REF *)v14;
  if ( !v14 )
  {
    v20 = WdLogNewEntry5_WdLowResource(v16, v15, v17, v18);
    *(_QWORD *)(v20 + 24) = 9578LL;
    WdLogEvent5_WdLowResource(v20);
    return 3221225495LL;
  }
  *(_QWORD *)v14 = 0LL;
  *((_DWORD *)v14 + 2) = 0;
  *((_DWORD *)v14 + 3) = 0;
  *((_DWORD *)v14 + 4) = 41;
  *(_OWORD *)(v14 + 24) = 0LL;
  *(_OWORD *)(v14 + 40) = 0LL;
  *((_DWORD *)v14 + 2) = *((_DWORD *)a2 + 106);
  *((_DWORD *)v14 + 6) = *((_DWORD *)a3 + 110);
  *((_DWORD *)v14 + 10) = v7->AllocationCount;
  if ( !v7->hResource )
    v13 = v7->AllocationCount;
  LODWORD(a5) = v13;
  Count = -1073741811;
  v47[1] = -1073741811;
  v47[0] = (4 * v13 + 11) & 0xFFFFFFF8;
  v24 = (struct _EX_RUNDOWN_REF *)operator new[](v47[0], 0x4B677844u, (POOL_TYPE)512);
  v48[2] = v24;
  if ( v24 )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v49, (struct _KTHREAD **)a2);
    hResource = v7->hResource;
    if ( hResource )
    {
      DXGPROCESS::GetResourceUnsafe((__int64)a2, (DXGRESOURCEREFERENCE *)&a5, hResource);
      if ( !a5 || (v30 = *(&a5->AllocationCount + 1), !(_DWORD)v30) )
      {
        v31 = WdLogNewEntry5_WdError(v30, v29);
        *(_QWORD *)(v31 + 24) = 9610LL;
        WdLogEvent5_WdError(v31);
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&a5, v32);
LABEL_21:
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v49);
        goto LABEL_45;
      }
      v7->hResource = v30;
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&a5, v29);
    }
    else
    {
      for ( i = 0LL; (unsigned int)i < v7->AllocationCount; i = (unsigned int)(i + 1) )
      {
        v34 = (unsigned int *)&v7->phAllocationList[i];
        if ( a4 )
        {
          if ( (unsigned __int64)v34 >= MmUserProbeAddress )
            v34 = (unsigned int *)MmUserProbeAddress;
          v35 = *v34;
        }
        else
        {
          v35 = *v34;
          v47[2] = *v34;
        }
        DXGPROCESS::GetAllocationUnsafe((__int64)a2, (DXGALLOCATIONREFERENCE *)v48, v35);
        if ( !v48[0] || (Count_low = LODWORD(v48[0][12].Count), !(_DWORD)Count_low) )
        {
          v38 = WdLogNewEntry5_WdError(Count_low, v36);
          *(_QWORD *)(v38 + 24) = 9643LL;
          WdLogEvent5_WdError(v38);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v48, v39);
          goto LABEL_21;
        }
        *((_DWORD *)v19 + i + 14) = Count_low;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v48, v36);
      }
      v13 = (unsigned int)a5;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v49);
    Count = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, v19, v8, v24, v47, v46);
    if ( Count >= 0 )
    {
      Count = -1073741823;
      if ( v47[0] >= 4 * v13 + 4 )
      {
        Count = v24->Count;
        if ( SLODWORD(v24->Count) >= 0 )
        {
          for ( j = 0LL; (unsigned int)j < v13; j = (unsigned int)(j + 1) )
          {
            pResidencyStatus = v7->pResidencyStatus;
            if ( a4 )
            {
              v42 = &pResidencyStatus[j];
              if ( (unsigned __int64)v42 >= MmUserProbeAddress )
                v42 = (D3DKMT_ALLOCATIONRESIDENCYSTATUS *)MmUserProbeAddress;
              *v42 = *((D3DKMT_ALLOCATIONRESIDENCYSTATUS *)&v24->Ptr + j + 1);
            }
            else
            {
              pResidencyStatus[j] = *((D3DKMT_ALLOCATIONRESIDENCYSTATUS *)&v24->Ptr + j + 1);
            }
          }
        }
      }
    }
  }
  else
  {
    v27 = WdLogNewEntry5_WdLowResource(v23, v22, v25, v26);
    *(_QWORD *)(v27 + 24) = 9598LL;
    WdLogEvent5_WdLowResource(v27);
    Count = -1073741801;
  }
LABEL_45:
  operator delete[](v19);
  operator delete[](v24);
  if ( Count < 0 )
  {
    v45 = WdLogNewEntry5_WdError(v44, v43);
    *(_QWORD *)(v45 + 24) = Count;
    WdLogEvent5_WdError(v45);
  }
  return (unsigned int)Count;
}
