/*
 * XREFs of ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x1C024C724
 * Callers:
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0105B50 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C026F85C (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C02927EC (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02FE9E4 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0005218 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0005488 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008F14 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C024DD40 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 *     ?VmBusSubmitSignalToHwQueueHelper@@YAJPEAVDXGPROCESS@@_NIIPEBI2PEB_KPEAI4PEA_K@Z @ 0x1C0250888 (-VmBusSubmitSignalToHwQueueHelper@@YAJPEAVDXGPROCESS@@_NIIPEBI2PEB_KPEAI4PEA_K@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C02857F4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1C02912E8 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        unsigned int a3,
        const unsigned int *a4,
        struct _D3DDDICB_SIGNALFLAGS a5,
        UINT a6,
        unsigned int *a7,
        unsigned __int64 *a8,
        unsigned __int64 a9,
        void *const *a10,
        bool a11,
        bool a12,
        struct DXGDEVICE *a13)
{
  __int64 v13; // r12
  const unsigned int *v15; // r15
  __int64 v16; // rax
  struct _D3DDDICB_SIGNALFLAGS *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct _D3DDDICB_SIGNALFLAGS *v20; // rsi
  __int64 v21; // rax
  char v23; // r12
  PVOID v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  unsigned int v27; // r9d
  unsigned int v28; // r11d
  __int64 v29; // r10
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  NTSTATUS v34; // edi
  __int64 v35; // rdx
  __int64 v36; // rcx
  void *v37; // rax
  struct _MDL *v38; // r9
  __int64 v39; // rax
  unsigned int i; // edi
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // rax
  void *v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rax
  unsigned int j; // r15d
  __int64 v52; // rdx
  unsigned int v53; // r10d
  unsigned int v54; // r11d
  unsigned int v55; // ecx
  DXGSYNCOBJECT *v56; // rdi
  unsigned int v57; // ecx
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rcx
  unsigned __int64 *v61; // rdx
  int v62; // [rsp+50h] [rbp-88h]
  PVOID Object; // [rsp+58h] [rbp-80h] BYREF
  unsigned __int64 *v64; // [rsp+60h] [rbp-78h]
  unsigned int v65; // [rsp+68h] [rbp-70h]
  PVOID v66; // [rsp+70h] [rbp-68h]
  _BYTE v67[24]; // [rsp+78h] [rbp-60h] BYREF
  struct _D3DDDICB_SIGNALFLAGS *v68; // [rsp+90h] [rbp-48h]
  __int64 v69; // [rsp+98h] [rbp-40h]

  v13 = a3;
  if ( a3 >= 0x4000 || a6 >= 0x4000 )
  {
    v16 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v16 + 24) = 7593LL;
    goto LABEL_91;
  }
  if ( a12 )
  {
    if ( !a13 || a6 || (v15 = a7) != 0LL || (*(_BYTE *)&a5.0 & 2) != 0 )
    {
      v16 = WdLogNewEntry5_WdError(this, a2);
      *(_QWORD *)(v16 + 24) = 7601LL;
LABEL_91:
      WdLogEvent5_WdError(v16);
      return 3221225485LL;
    }
  }
  else
  {
    v15 = a7;
  }
  v62 = a8 != 0LL ? 8 * a3 : 0;
  v65 = v62 + 4 * (a3 + a6 + 14);
  v17 = (struct _D3DDDICB_SIGNALFLAGS *)operator new(v65, 0x4B677844u, 1, (POOL_TYPE)512);
  v20 = v17;
  v68 = v17;
  if ( !v17 )
  {
    v21 = WdLogNewEntry5_WdError(v19, v18);
    *(_QWORD *)(v21 + 24) = 7613LL;
    WdLogEvent5_WdError(v21);
    return 3221225495LL;
  }
  *(_QWORD *)&v17->0 = 0LL;
  *(_QWORD *)&v17[2].0 = 0LL;
  v17[4].Value = 26;
  v17[2].Value = DXGPROCESS::GetHostProcess(a2);
  v20[8].Value = a6;
  v20[7].0 = a5.0;
  if ( a12 )
    v20[12].0 = *(struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535 *)((char *)a13 + 440);
  v20[6].Value = v13;
  *(_QWORD *)&v20[10].0 = a9;
  Object = &v20[v13 + 14];
  if ( v62 )
    v64 = (unsigned __int64 *)&v20[v13 + 14 + a6];
  else
    v64 = 0LL;
  v66 = 0LL;
  v69 = 0LL;
  v23 = 0;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v67, (struct _KTHREAD **)a2);
  if ( !a12 )
  {
    v26 = (*v15 >> 6) & 0xFFFFFF;
    v27 = *v15 >> 30;
    v28 = *((_DWORD *)a2 + 64);
    if ( (unsigned int)v26 >= v28 )
    {
LABEL_30:
      v32 = WdLogNewEntry5_WdError(v24, v26);
      v33 = *v15;
      goto LABEL_31;
    }
    v29 = *((_QWORD *)a2 + 30);
    v24 = (PVOID)*(unsigned int *)(v29 + 16LL * (unsigned int)v26 + 8);
    if ( v27 != ((*(_DWORD *)(v29 + 16LL * (unsigned int)v26 + 8) >> 5) & 3)
      || ((unsigned __int16)v24 & 0x2000) != 0
      || ((unsigned __int8)v24 & 0x1F) == 0
      || (LOBYTE(v25) = 2 * (*v15 >> 6), v24 = (PVOID)((unsigned __int8)v24 & 0x1F), (_BYTE)v24 != 7)
      || !*(_QWORD *)(v29 + 16LL * (unsigned int)v26) )
    {
      if ( (unsigned int)v26 >= v28 )
        goto LABEL_30;
      v30 = (unsigned int)v26;
      v26 = *((_QWORD *)a2 + 30);
      v24 = (PVOID)*(unsigned int *)(v26 + 16LL * (unsigned int)v30 + 8);
      if ( v27 != ((*(_DWORD *)(v26 + 16LL * (unsigned int)v30 + 8) >> 5) & 3)
        || ((unsigned __int16)v24 & 0x2000) != 0
        || ((unsigned __int8)v24 & 0x1F) == 0 )
      {
        goto LABEL_30;
      }
      v25 = 2 * v30;
      v24 = (PVOID)((unsigned __int8)v24 & 0x1F);
      if ( (_BYTE)v24 != 15 )
      {
        v31 = WdLogNewEntry5_WdError(v24, v26);
        *(_QWORD *)(v31 + 24) = 316LL;
        WdLogEvent5_WdError(v31);
        goto LABEL_30;
      }
      if ( !*(_QWORD *)(v26 + 8 * v25) )
        goto LABEL_30;
      v23 = 1;
    }
  }
  if ( v23 )
  {
    v34 = VmBusSubmitSignalToHwQueueHelper(
            a2,
            a11,
            a3,
            a6,
            v15,
            a4,
            a8,
            (unsigned int *)Object,
            (unsigned int *)&v20[14],
            v64);
    if ( v34 < 0 )
      goto LABEL_32;
    goto LABEL_37;
  }
  for ( i = 0; ; ++i )
  {
    if ( i >= a6 )
    {
      if ( (*(_BYTE *)&a5.0 & 2) != 0 )
      {
        v46 = *a10;
        Object = 0LL;
        v34 = ObReferenceObjectByHandle(v46, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
        v66 = Object;
        if ( v34 < 0 )
        {
          v50 = WdLogNewEntry5_WdWarning(v48, v47, v49);
          *(void **)(v50 + 24) = *a10;
          WdLogEvent5_WdWarning(v50);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v67);
          goto LABEL_38;
        }
        *(_QWORD *)&v20[12].0 = Object;
LABEL_37:
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v67);
        v34 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
                this,
                (struct DXGKVMB_COMMAND_BASE *)v20,
                v65,
                v38);
LABEL_38:
        v37 = v66;
        goto LABEL_39;
      }
      for ( j = 0; ; ++j )
      {
        if ( j >= a3 )
          goto LABEL_37;
        v52 = (a4[j] >> 6) & 0xFFFFFF;
        v53 = a4[j] >> 30;
        v54 = *((_DWORD *)a2 + 64);
        if ( (unsigned int)v52 < v54
          && (v25 = *((_QWORD *)a2 + 30), v55 = *(_DWORD *)(v25 + 16LL * (unsigned int)v52 + 8), v53 == ((v55 >> 5) & 3))
          && (v55 & 0x2000) == 0
          && (v55 & 0x1F) == 8 )
        {
          v56 = *(DXGSYNCOBJECT **)(v25 + 16LL * (unsigned int)v52);
        }
        else
        {
          v56 = 0LL;
        }
        if ( v56 )
        {
          v20[j + 14].Value = DXGSYNCOBJECT::GetHostHandle(v56, a4[j], v25);
          goto LABEL_81;
        }
        if ( (unsigned int)v52 >= v54 )
          goto LABEL_78;
        v25 = *((_QWORD *)a2 + 30);
        v57 = *(_DWORD *)(v25 + 16 * v52 + 8);
        if ( v53 != ((v57 >> 5) & 3) || (v57 & 0x2000) != 0 || (v57 & 0x1F) == 0 )
          goto LABEL_78;
        v52 *= 2LL;
        v58 = v57 & 0x1F;
        if ( (_BYTE)v58 != 11 )
          break;
        v60 = *(_QWORD *)(v25 + 8 * v52);
LABEL_79:
        if ( !v60 )
        {
          v32 = WdLogNewEntry5_WdError(0LL, v52);
          v33 = a4[j];
          goto LABEL_31;
        }
        v20[j + 14] = *(struct _D3DDDICB_SIGNALFLAGS *)(v60 + 44);
        v56 = *(DXGSYNCOBJECT **)(v60 + 32);
LABEL_81:
        if ( v62 && *((_DWORD *)v56 + 48) == 5 )
        {
          if ( a11 )
          {
            v61 = &a8[j];
            if ( (unsigned __int64)v61 >= MmUserProbeAddress )
              v61 = (unsigned __int64 *)MmUserProbeAddress;
            v64[j] = *v61;
          }
          else
          {
            v64[j] = a8[j];
          }
        }
      }
      v59 = WdLogNewEntry5_WdError(v58, v52);
      *(_QWORD *)(v59 + 24) = 316LL;
      WdLogEvent5_WdError(v59);
LABEL_78:
      v60 = 0LL;
      goto LABEL_79;
    }
    v41 = v15[i];
    v42 = (v15[i] >> 6) & 0xFFFFFF;
    if ( (unsigned int)v42 >= *((_DWORD *)a2 + 64) )
      goto LABEL_52;
    LOBYTE(v25) = v15[i] >> 6;
    v43 = *((_QWORD *)a2 + 30);
    v24 = (PVOID)*(unsigned int *)(v43 + 16 * v42 + 8);
    v41 = ((unsigned int)v41 >> 25) & 0x60;
    if ( (_BYTE)v41 != (*(_BYTE *)(v43 + 16 * v42 + 8) & 0x60)
      || ((unsigned __int16)v24 & 0x2000) != 0
      || ((unsigned __int8)v24 & 0x1F) == 0 )
    {
      goto LABEL_52;
    }
    LOBYTE(v25) = 2 * (v15[i] >> 6);
    v24 = (PVOID)((unsigned __int8)v24 & 0x1F);
    if ( (_BYTE)v24 != 7 )
    {
      v44 = WdLogNewEntry5_WdError(v24, v41);
      *(_QWORD *)(v44 + 24) = 316LL;
      WdLogEvent5_WdError(v44);
LABEL_52:
      v45 = 0LL;
      goto LABEL_53;
    }
    v45 = *(_QWORD *)(v43 + 16LL * (unsigned int)v42);
LABEL_53:
    if ( !v45 )
      break;
    v24 = Object;
    *((_DWORD *)Object + i) = *(_DWORD *)(v45 + 28);
  }
  v32 = WdLogNewEntry5_WdError(v24, v41);
  v33 = v15[i];
LABEL_31:
  *(_QWORD *)(v32 + 24) = v33;
  WdLogEvent5_WdError(v32);
  v34 = -1073741811;
LABEL_32:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v67);
  v37 = 0LL;
LABEL_39:
  if ( v34 < 0 )
  {
    if ( v37 )
      ObfDereferenceObject(v37);
    v39 = WdLogNewEntry5_WdError(v36, v35);
    *(_QWORD *)(v39 + 24) = v34;
    WdLogEvent5_WdError(v39);
  }
  operator delete[](v20);
  return (unsigned int)v34;
}
