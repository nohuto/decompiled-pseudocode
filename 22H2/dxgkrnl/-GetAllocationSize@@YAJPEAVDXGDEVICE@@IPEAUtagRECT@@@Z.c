/*
 * XREFs of ?GetAllocationSize@@YAJPEAVDXGDEVICE@@IPEAUtagRECT@@@Z @ 0x1C029A1B8
 * Callers:
 *     ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1C02A2A88 (-ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUT.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0101520 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107C00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0109380 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall GetAllocationSize(struct DXGDEVICE *a1, __int64 a2, struct tagRECT *a3, __int64 a4)
{
  __int64 v5; // r15
  struct DXGPROCESS *Current; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGPROCESS *v10; // rdi
  __int64 v11; // rax
  char *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // r9d
  __int64 v17; // rax
  __int64 v18; // r9
  int v19; // edx
  __int64 v20; // rdx
  __int64 v21; // rax
  struct _EX_RUNDOWN_REF *v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  unsigned int v30; // ebx
  __int64 v31; // rdx
  __int64 v32; // rcx
  UINT Width; // eax
  struct _DXGKARG_DESCRIBEALLOCATION v34; // [rsp+20h] [rbp-30h] BYREF
  struct _EX_RUNDOWN_REF *v35; // [rsp+88h] [rbp+38h] BYREF

  v5 = (unsigned int)a2;
  Current = DXGPROCESS::GetCurrent((__int64)a1, a2, (__int64)a3, a4);
  v10 = Current;
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v11 + 24) = 2612LL;
    WdLogEvent5_WdError(v11);
    return -1073741811LL;
  }
  v13 = (char *)Current + 208;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v13, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v16 = *((_DWORD *)v13 + 6);
      if ( v16 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v14, &EventBlockThread, v15, v16);
    }
    ExAcquirePushLockSharedEx(v13, 0LL);
  }
  v17 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v17 >= *((_DWORD *)v10 + 64) )
    goto LABEL_15;
  v18 = *((_QWORD *)v10 + 30);
  v19 = *(_DWORD *)(v18 + 16 * v17 + 8);
  if ( (((unsigned int)v5 >> 25) & 0x60) != (*(_BYTE *)(v18 + 16 * v17 + 8) & 0x60)
    || (v19 & 0x2000) != 0
    || (v19 & 0x1F) == 0 )
  {
    goto LABEL_15;
  }
  v20 = v19 & 0x1F;
  if ( (_BYTE)v20 != 5 )
  {
    v21 = WdLogNewEntry5_WdError(((unsigned int)v5 >> 25) & 0x60, v20);
    *(_QWORD *)(v21 + 24) = 316LL;
    WdLogEvent5_WdError(v21);
LABEL_15:
    v22 = 0LL;
    goto LABEL_16;
  }
  v22 = *(struct _EX_RUNDOWN_REF **)(v18 + 16LL * (unsigned int)v17);
LABEL_16:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v35, v22);
  ExReleasePushLockSharedEx(v13, 0LL);
  KeLeaveCriticalRegion();
  if ( !v35 )
  {
    v25 = WdLogNewEntry5_WdError(v24, v23);
    *(_QWORD *)(v25 + 24) = v5;
LABEL_23:
    WdLogEvent5_WdError(v25);
    v30 = -1073741823;
    goto LABEL_25;
  }
  v26 = *((_QWORD *)a1 + 2);
  v27 = *(_QWORD *)(v35[1].Count + 16);
  v28 = *(_QWORD *)(v26 + 16);
  if ( *(_QWORD *)(v27 + 16) == v28 )
  {
    memset(&v34, 0, sizeof(v34));
    v34.hAllocation = *(HANDLE *)(v35[6].Count + 16);
    if ( (int)ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*(_QWORD *)(v26 + 16) + 2704LL), &v34, v26) >= 0 )
    {
      Width = v34.Width;
      a3->left = 0;
      a3->top = 0;
      a3->right = Width;
      a3->bottom = v34.Height;
      v30 = 0;
      goto LABEL_25;
    }
    v25 = WdLogNewEntry5_WdError(v32, v31);
    *(_QWORD *)(v25 + 24) = v34.hAllocation;
    *(_QWORD *)(v25 + 32) = a1;
    goto LABEL_23;
  }
  v29 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27);
  v30 = -1073741811;
  v29[3] = a1;
  v29[4] = v35;
  v29[5] = -1073741811LL;
  WdLogEvent5_WdError(v29);
LABEL_25:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v35, v31);
  return v30;
}
