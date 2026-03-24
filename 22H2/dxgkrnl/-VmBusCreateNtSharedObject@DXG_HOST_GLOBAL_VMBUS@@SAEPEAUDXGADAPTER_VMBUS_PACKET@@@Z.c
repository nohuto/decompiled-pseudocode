/*
 * XREFs of ?VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023EEA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00033B0 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     Feature_309893433__private_IsEnabledDeviceUsage @ 0x1C00259A0 (Feature_309893433__private_IsEnabledDeviceUsage.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C004065C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00418B0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0101D00 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C0112F64 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C0116660 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C012A998 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     DxgkShareObjectsInternal @ 0x1C012AA60 (DxgkShareObjectsInternal.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C012AE78 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C023B42C (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

char __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusCreateNtSharedObject(
        struct DXGADAPTER_VMBUS_PACKET *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct DXGPROCESS *Current; // rax
  char v6; // bl
  struct _KTHREAD **v7; // r15
  DXGSHAREDVMOBJECT *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  DXGSHAREDVMOBJECT *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r14
  __int64 v18; // rsi
  __int64 v19; // rcx
  char *Src; // r14
  __int64 v21; // r15
  __int64 v22; // rdx
  int v23; // r9d
  int EntryType; // eax
  int v25; // r12d
  __int64 v26; // rsi
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // ecx
  __int64 v36; // rcx
  __int64 v37; // rax
  struct _EX_RUNDOWN_REF *v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  DXGAUTOPUSHLOCK *v46; // rcx
  __int64 v48; // [rsp+50h] [rbp-49h] BYREF
  struct _EX_RUNDOWN_REF *v49; // [rsp+58h] [rbp-41h] BYREF
  _BYTE v50[24]; // [rsp+60h] [rbp-39h] BYREF
  __int64 v51[4]; // [rsp+78h] [rbp-21h] BYREF
  __int128 v52; // [rsp+98h] [rbp-1h]
  _BYTE v53[72]; // [rsp+A8h] [rbp+Fh] BYREF
  int v54; // [rsp+108h] [rbp+6Fh] BYREF
  struct _EX_RUNDOWN_REF *v55; // [rsp+110h] [rbp+77h] BYREF
  __int64 v56; // [rsp+118h] [rbp+7Fh] BYREF

  Current = DXGPROCESS::GetCurrent((__int64)a1, a2, a3, a4);
  v6 = 0;
  v54 = 0;
  v7 = (struct _KTHREAD **)Current;
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v49, 0LL);
  v8 = (DXGSHAREDVMOBJECT *)operator new[](0x20uLL, 0x4B677844u, PagedPool);
  v13 = v8;
  if ( v8 )
  {
    *(_DWORD *)v8 = 0;
    *((_QWORD *)v8 + 1) = 0LL;
    *((_DWORD *)v8 + 4) = 0;
    *((_DWORD *)v8 + 6) = 1;
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v13 )
  {
    v14 = WdLogNewEntry5_WdLowResource(v10, v9, v11, v12);
    *(_QWORD *)(v14 + 24) = 6308LL;
    WdLogEvent5_WdLowResource(v14);
    goto LABEL_54;
  }
  v17 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
  if ( !v17 )
    goto LABEL_58;
  v48 = 0LL;
  v18 = 0LL;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v50, v7);
  Src = (char *)(v17 + 24);
  v21 = (__int64)(v7 + 30);
  v22 = (*(_DWORD *)Src >> 6) & 0xFFFFFF;
  if ( (unsigned int)v22 >= *(_DWORD *)(v21 + 16) )
    goto LABEL_51;
  v19 = 2LL * (unsigned int)v22;
  v23 = *(_DWORD *)(*(_QWORD *)v21 + 16LL * (unsigned int)v22 + 8);
  if ( ((*(_DWORD *)Src >> 25) & 0x60) != (*(_BYTE *)(*(_QWORD *)v21 + 16LL * (unsigned int)v22 + 8) & 0x60)
    || (v23 & 0x2000) != 0
    || (v23 & 0x1F) == 0 )
  {
    goto LABEL_51;
  }
  EntryType = HMGRTABLE::GetEntryType(v21, v22);
  v25 = EntryType;
  if ( EntryType == 4 )
  {
    if ( !(unsigned int)Feature_309893433__private_IsEnabledDeviceUsage() )
      goto LABEL_43;
    v34 = (*(_DWORD *)Src >> 6) & 0xFFFFFF;
    if ( (unsigned int)v34 < *(_DWORD *)(v21 + 16) )
    {
      v35 = *(_DWORD *)(*(_QWORD *)v21 + 16 * v34 + 8);
      if ( ((*(_DWORD *)Src >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)v21 + 16 * v34 + 8) & 0x60)
        && (v35 & 0x2000) == 0
        && (v35 & 0x1F) != 0 )
      {
        v36 = v35 & 0x1F;
        if ( (_BYTE)v36 == 4 )
        {
          v38 = *(struct _EX_RUNDOWN_REF **)(*(_QWORD *)v21 + 16LL * (unsigned int)v34);
          goto LABEL_42;
        }
        v37 = WdLogNewEntry5_WdError(v36, 2LL * (unsigned int)v34);
        *(_QWORD *)(v37 + 24) = 316LL;
        WdLogEvent5_WdError(v37);
      }
    }
    v38 = 0LL;
LABEL_42:
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v55, v38);
    DXGRESOURCEREFERENCE::MoveAssign(&v49, &v55);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v55, v39);
    goto LABEL_43;
  }
  if ( EntryType != 8 )
  {
    if ( EntryType != 11 )
      goto LABEL_51;
    v22 = *(unsigned int *)Src;
    v19 = (*(_DWORD *)Src >> 6) & 0xFFFFFF;
    if ( (unsigned int)v19 >= *(_DWORD *)(v21 + 16) )
      goto LABEL_51;
    v26 = (unsigned int)v19;
    v22 = ((unsigned int)v22 >> 25) & 0x60;
    v19 = *(unsigned int *)(*(_QWORD *)v21 + 16LL * (unsigned int)v19 + 8);
    if ( (_BYTE)v22 != (v19 & 0x60) || (v19 & 0x2000) != 0 || (v19 & 0x1F) == 0 )
      goto LABEL_51;
    v27 = 2 * v26;
    v19 &= 0x1Fu;
    if ( (_BYTE)v19 != (_BYTE)EntryType )
    {
      v28 = WdLogNewEntry5_WdError(v19, v22);
      *(_QWORD *)(v28 + 24) = 316LL;
      WdLogEvent5_WdError(v28);
LABEL_51:
      v33 = WdLogNewEntry5_WdError(v19, v22);
      *(_QWORD *)(v33 + 24) = *(unsigned int *)Src;
      goto LABEL_52;
    }
    v29 = *(_QWORD *)(*(_QWORD *)v21 + 8 * v27);
    if ( !v29 || (*(_DWORD *)(v29 + 72) & 2) == 0 )
      goto LABEL_51;
    v18 = *(_QWORD *)(v29 + 32);
    goto LABEL_33;
  }
  v30 = *(unsigned int *)Src;
  v31 = (*(_DWORD *)Src >> 6) & 0xFFFFFF;
  if ( (unsigned int)v31 >= *(_DWORD *)(v21 + 16)
    || (v30 = ((unsigned int)v30 >> 25) & 0x60,
        v19 = *(unsigned int *)(*(_QWORD *)v21 + 16 * v31 + 8),
        (_BYTE)v30 != (*(_BYTE *)(*(_QWORD *)v21 + 16 * v31 + 8) & 0x60))
    || (v19 & 0x2000) != 0
    || (v19 & 0x1F) == 0 )
  {
LABEL_30:
    v33 = WdLogNewEntry5_WdError(v19, v30);
    *(_QWORD *)(v33 + 24) = *(unsigned int *)Src;
    *(_QWORD *)(v33 + 32) = 6331LL;
LABEL_52:
    WdLogEvent5_WdError(v33);
    v46 = (DXGAUTOPUSHLOCK *)v50;
    goto LABEL_53;
  }
  v19 &= 0x1Fu;
  if ( (_BYTE)v19 != 8 )
  {
    v32 = WdLogNewEntry5_WdError(v19, v30);
    *(_QWORD *)(v32 + 24) = 316LL;
    WdLogEvent5_WdError(v32);
    goto LABEL_30;
  }
  v18 = *(_QWORD *)(*(_QWORD *)v21 + 16LL * (unsigned int)v31);
  if ( !v18 || (*(_DWORD *)(v18 + 196) & 2) == 0 )
    goto LABEL_30;
LABEL_33:
  _InterlockedIncrement((volatile signed __int32 *)(v18 + 24));
LABEL_43:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v50);
  if ( v25 == 4 )
  {
    v51[0] = 48LL;
    v51[3] = 512LL;
    v51[1] = 0LL;
    v51[2] = 0LL;
    v52 = 0LL;
    v56 = 0LL;
    if ( (int)DxgkShareObjectsInternal(0LL, 0, 0LL, 1u, Src, (__int64)v51, 0x10000000u, (HANDLE *)&v48, (PVOID *)&v56) < 0 )
    {
      v42 = WdLogNewEntry5_WdError(v41, v40);
      *(_QWORD *)(v42 + 24) = *(unsigned int *)Src;
      WdLogEvent5_WdError(v42);
      goto LABEL_54;
    }
    v18 = v56;
  }
  *(_DWORD *)v13 = v25;
  *((_QWORD *)v13 + 1) = v18;
  *((_QWORD *)v13 + 2) = v48;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v53,
    *((struct _KTHREAD ***)a1 + 7));
  v54 = HMGRTABLE::AllocHandle((unsigned int *)(*((_QWORD *)a1 + 7) + 240LL), (__int64)v13, 13, 0, 0);
  if ( !v54 )
  {
    v45 = WdLogNewEntry5_WdError(v44, v43);
    *(_QWORD *)(v45 + 24) = 6399LL;
    WdLogEvent5_WdError(v45);
  }
  v46 = (DXGAUTOPUSHLOCK *)v53;
LABEL_53:
  DXGAUTOPUSHLOCK::Release(v46);
LABEL_54:
  if ( !v54 && v13 )
    DXGSHAREDVMOBJECT::ReleaseReference(v13, v15);
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v54, 4u);
  v6 = 1;
LABEL_58:
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v49, v16);
  return v6;
}
