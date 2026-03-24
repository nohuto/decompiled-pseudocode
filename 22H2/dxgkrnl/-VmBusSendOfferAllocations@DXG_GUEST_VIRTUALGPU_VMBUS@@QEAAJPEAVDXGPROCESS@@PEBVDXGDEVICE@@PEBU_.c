/*
 * XREFs of ?VmBusSendOfferAllocations@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEBU_D3DKMT_OFFERALLOCATIONS@@PEBI@Z @ 0x1C024A658
 * Callers:
 *     ?OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@E@Z @ 0x1C01534C0 (-OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@E@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0005488 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008F14 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0101D00 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107C00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0109380 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C0112F64 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C024DD40 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOfferAllocations(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        const struct DXGDEVICE *a3,
        const struct _D3DKMT_OFFERALLOCATIONS *a4,
        const unsigned int *a5)
{
  UINT NumAllocations; // eax
  DXG_VMBUS_CHANNEL_BASE *v9; // r13
  __int64 v10; // rdi
  __int64 v11; // rax
  unsigned int v12; // r12d
  struct DXGKVMB_COMMAND_BASE *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  struct DXGKVMB_COMMAND_BASE *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // r9
  int v22; // ecx
  __int64 v23; // rcx
  __int64 v24; // rax
  struct _EX_RUNDOWN_REF *v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r15
  __int64 v32; // rax
  __int64 v33; // r9
  int v34; // ecx
  __int64 v35; // rcx
  __int64 v36; // rax
  struct _EX_RUNDOWN_REF *v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  struct _MDL *v41; // r9
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  _QWORD *v47; // rax
  __int64 v48; // rdx
  struct _EX_RUNDOWN_REF *v49; // [rsp+20h] [rbp-20h] BYREF
  _BYTE v50[24]; // [rsp+28h] [rbp-18h] BYREF

  NumAllocations = a4->NumAllocations;
  v9 = this;
  LODWORD(v10) = -1073741811;
  if ( NumAllocations > 0x8000 )
  {
    v11 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v11 + 24) = 8761LL;
    WdLogEvent5_WdError(v11);
    return (unsigned int)v10;
  }
  v12 = 4 * NumAllocations + 44;
  v13 = (struct DXGKVMB_COMMAND_BASE *)operator new(v12, 0x4B677844u, 1, (POOL_TYPE)512);
  v17 = v13;
  if ( !v13 )
  {
    v18 = WdLogNewEntry5_WdLowResource(0LL, v14, v15, v16);
    *(_QWORD *)(v18 + 24) = 8769LL;
    WdLogEvent5_WdLowResource(v18);
    return (unsigned int)v10;
  }
  *((_QWORD *)v13 + 1) = 0LL;
  *(_QWORD *)v13 = 0LL;
  *((_DWORD *)v13 + 4) = 57;
  *((_DWORD *)v13 + 6) = *((_DWORD *)a3 + 110);
  *((_DWORD *)v13 + 2) = *((_DWORD *)a2 + 106);
  *((_DWORD *)v13 + 7) = a4->NumAllocations;
  *((_DWORD *)v13 + 8) = a4->Priority;
  *((_DWORD *)v13 + 9) = a4->Flags.0;
  if ( a4->pResources )
  {
    *((_BYTE *)v13 + 40) = 1;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v50, (struct _KTHREAD **)a2);
    v19 = 0LL;
    if ( a4->NumAllocations )
    {
      while ( 1 )
      {
        v20 = (a5[v19] >> 6) & 0xFFFFFF;
        if ( (unsigned int)v20 >= *((_DWORD *)a2 + 64) )
          goto LABEL_13;
        v21 = *((_QWORD *)a2 + 30);
        v22 = *(_DWORD *)(v21 + 16 * v20 + 8);
        if ( ((a5[v19] >> 25) & 0x60) != (*(_BYTE *)(v21 + 16 * v20 + 8) & 0x60)
          || (v22 & 0x2000) != 0
          || (v22 & 0x1F) == 0 )
        {
          goto LABEL_13;
        }
        v23 = v22 & 0x1F;
        if ( (_BYTE)v23 != 4 )
          break;
        v25 = *(struct _EX_RUNDOWN_REF **)(v21 + 16LL * (unsigned int)v20);
LABEL_14:
        DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v49, v25);
        if ( !v49 )
        {
          v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28);
          v29[3] = a3;
          v29[4] = a5[v19];
          v29[5] = -1073741811LL;
          WdLogEvent5_WdWarning(v29);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v49, v30);
          goto LABEL_36;
        }
        *((_DWORD *)v17 + v19 + 11) = HIDWORD(v49[2].Ptr);
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v49, v26);
        v19 = (unsigned int)(v19 + 1);
        if ( (unsigned int)v19 >= a4->NumAllocations )
          goto LABEL_29;
      }
      v24 = WdLogNewEntry5_WdError(v23, (a5[v19] >> 25) & 0x60);
      *(_QWORD *)(v24 + 24) = 316LL;
      WdLogEvent5_WdError(v24);
LABEL_13:
      v25 = 0LL;
      goto LABEL_14;
    }
LABEL_30:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v50);
    v42 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(v9, v17, v12, v41);
    v10 = v42;
    if ( v42 < 0 )
    {
      v45 = WdLogNewEntry5_WdError(v44, v43);
      *(_QWORD *)(v45 + 24) = v10;
      WdLogEvent5_WdError(v45);
    }
    goto LABEL_32;
  }
  *((_BYTE *)v13 + 40) = 0;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v50, (struct _KTHREAD **)a2);
  v31 = 0LL;
  if ( !a4->NumAllocations )
    goto LABEL_30;
  while ( 1 )
  {
    v32 = (a5[v31] >> 6) & 0xFFFFFF;
    if ( (unsigned int)v32 >= *((_DWORD *)a2 + 64) )
      goto LABEL_26;
    v33 = *((_QWORD *)a2 + 30);
    v34 = *(_DWORD *)(v33 + 16 * v32 + 8);
    if ( ((a5[v31] >> 25) & 0x60) != (*(_BYTE *)(v33 + 16 * v32 + 8) & 0x60) || (v34 & 0x2000) != 0 || (v34 & 0x1F) == 0 )
      goto LABEL_26;
    v35 = v34 & 0x1F;
    if ( (_BYTE)v35 != 5 )
    {
      v36 = WdLogNewEntry5_WdError(v35, (a5[v31] >> 25) & 0x60);
      *(_QWORD *)(v36 + 24) = 316LL;
      WdLogEvent5_WdError(v36);
LABEL_26:
      v37 = 0LL;
      goto LABEL_27;
    }
    v37 = *(struct _EX_RUNDOWN_REF **)(v33 + 16LL * (unsigned int)v32);
LABEL_27:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v49, v37);
    if ( !v49 )
      break;
    *((_DWORD *)v17 + v31 + 11) = v49[12].Count;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v49, v38);
    v31 = (unsigned int)(v31 + 1);
    if ( (unsigned int)v31 >= a4->NumAllocations )
    {
LABEL_29:
      v9 = this;
      goto LABEL_30;
    }
  }
  v47 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v38, v40);
  v47[3] = a3;
  v47[4] = a5[v31];
  v47[5] = -1073741811LL;
  WdLogEvent5_WdWarning(v47);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v49, v48);
LABEL_36:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v50);
LABEL_32:
  operator delete[](v17);
  return (unsigned int)v10;
}
