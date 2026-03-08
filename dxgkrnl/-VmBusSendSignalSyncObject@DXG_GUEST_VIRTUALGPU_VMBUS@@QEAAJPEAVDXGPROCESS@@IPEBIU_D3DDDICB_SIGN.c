/*
 * XREFs of ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x1C0389BFC
 * Callers:
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x1C01944A0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C03166DC (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C034CCAC (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C03CE0B0 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0003A50 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0024424 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005B244 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0340210 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1C034B4E8 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C03715E8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncOrAsyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@@Z @ 0x1C038B7B4 (-VmBusSendSyncOrAsyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@@Z.c)
 *     ?VmBusSubmitSignalToHwQueueHelper@@YAJPEAVDXGPROCESS@@_NIIPEBI2PEB_KPEAI4PEA_K@Z @ 0x1C038FABC (-VmBusSubmitSignalToHwQueueHelper@@YAJPEAVDXGPROCESS@@_NIIPEBI2PEB_KPEAI4PEA_K@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        unsigned int a3,
        unsigned int *a4,
        struct _D3DDDICB_SIGNALFLAGS a5,
        unsigned int a6,
        unsigned int *a7,
        unsigned __int64 *a8,
        unsigned __int64 a9,
        void *const *a10,
        bool a11,
        bool a12,
        struct DXGDEVICE *a13)
{
  __int64 v14; // rbx
  const wchar_t *v15; // r9
  __int64 v16; // rbx
  char v18; // r13
  struct DXGPROCESS *v19; // r10
  unsigned int v20; // ecx
  unsigned int v21; // r9d
  unsigned int v22; // r11d
  __int64 v23; // r10
  unsigned int v24; // edx
  bool v25; // zf
  NTSTATUS v26; // esi
  PVOID v27; // r12
  __int64 v28; // rdx
  __int64 v29; // r8
  unsigned int v30; // ecx
  int v31; // ecx
  __int64 v32; // rax
  const wchar_t *v33; // r9
  unsigned int i; // r13d
  unsigned int v35; // eax
  __int64 v36; // r9
  int v37; // ecx
  __int64 v38; // rax
  void *const *v39; // r15
  void *v40; // rcx
  PVOID v41; // rax
  unsigned int v42; // r15d
  unsigned __int64 *v43; // r13
  unsigned int v44; // edx
  unsigned int v45; // eax
  unsigned int v46; // r11d
  __int64 v47; // r9
  unsigned int v48; // ecx
  DXGSYNCOBJECT *v49; // rbx
  unsigned int v50; // eax
  unsigned int v51; // edx
  __int64 v52; // r8
  unsigned int v53; // ecx
  int v54; // ecx
  __int64 v55; // rbx
  unsigned __int64 *v56; // rdx
  int v59; // [rsp+5Ch] [rbp-1DCh]
  PVOID v60; // [rsp+60h] [rbp-1D8h] BYREF
  unsigned __int64 *v61; // [rsp+68h] [rbp-1D0h]
  unsigned int *v62; // [rsp+70h] [rbp-1C8h]
  unsigned __int64 *v63; // [rsp+78h] [rbp-1C0h]
  unsigned int *v64; // [rsp+80h] [rbp-1B8h]
  void *const *v65; // [rsp+88h] [rbp-1B0h]
  PVOID Object; // [rsp+90h] [rbp-1A8h]
  _BYTE v67[24]; // [rsp+98h] [rbp-1A0h] BYREF
  struct DXGPROCESS *v68; // [rsp+B0h] [rbp-188h]
  DXG_GUEST_VIRTUALGPU_VMBUS *v69; // [rsp+C0h] [rbp-178h]
  __int128 v70; // [rsp+D0h] [rbp-168h] BYREF
  int v71; // [rsp+E0h] [rbp-158h]

  v64 = a4;
  v69 = this;
  v68 = a2;
  v63 = a8;
  v65 = a10;
  if ( a3 >= 0x4000 || a6 >= 0x4000 )
  {
    v14 = 8944LL;
    WdLogSingleEntry1(2LL, 8944LL);
    v15 = L"ObjectCount or BroadcastContextCount is too big";
    goto LABEL_93;
  }
  if ( a12 && (!a13 || a6 || a7 || (*(_BYTE *)&a5.0 & 2) != 0) )
  {
    v14 = 8952LL;
    WdLogSingleEntry1(2LL, 8952LL);
    v15 = L"Invalid parameters for signal from CPU";
LABEL_93:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v15, v14, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  v59 = a8 != 0LL ? 8 * a3 : 0;
  v70 = 0LL;
  v71 = 0;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v70, this, v59 + 4 * (a6 + a3 + 14), 0LL, 0LL, 0LL);
  v16 = v70;
  if ( !(_QWORD)v70 )
  {
    WdLogSingleEntry1(2LL, 8965LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to allocate memory", 8965LL, 0LL, 0LL, 0LL, 0LL);
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v70);
    return 3221225495LL;
  }
  *(_QWORD *)v70 = 0LL;
  *(_DWORD *)(v16 + 8) = 0;
  *(_BYTE *)(v16 + 12) = 0;
  *(_DWORD *)(v16 + 12) &= 0x1FFu;
  *(_QWORD *)(v16 + 16) = 26LL;
  *(_DWORD *)(v16 + 8) = DXGPROCESS::GetHostProcess(a2);
  *(_DWORD *)(v16 + 32) = a6;
  *(struct _D3DDDICB_SIGNALFLAGS *)(v16 + 28) = a5;
  if ( a12 )
    *(_DWORD *)(v16 + 48) = *((_DWORD *)a13 + 118);
  *(_DWORD *)(v16 + 24) = a3;
  *(_QWORD *)(v16 + 40) = a9;
  v62 = (unsigned int *)(v16 + 56);
  v60 = (PVOID)(v16 + 56 + 4LL * a3);
  if ( v59 )
    v61 = (unsigned __int64 *)(v16 + 56 + 4LL * a3 + 4LL * a6);
  else
    v61 = 0LL;
  Object = 0LL;
  v18 = 0;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v67, a2);
  v19 = a2;
  if ( a12 )
    goto LABEL_22;
  v20 = (*a7 >> 6) & 0xFFFFFF;
  v21 = *a7 >> 30;
  v22 = *((_DWORD *)a2 + 74);
  if ( v20 >= v22 )
    goto LABEL_37;
  v23 = *((_QWORD *)a2 + 35);
  v24 = *(_DWORD *)(v23 + 16LL * v20 + 8);
  if ( v21 != ((v24 >> 5) & 3) || (v24 & 0x2000) != 0 || (v24 & 0x1F) != 7 )
  {
    v19 = a2;
    goto LABEL_31;
  }
  v25 = *(_QWORD *)(v23 + 16LL * v20) == 0LL;
  v19 = a2;
  if ( v25 )
  {
LABEL_31:
    if ( v20 < v22 )
    {
      v28 = 2LL * v20;
      v29 = *((_QWORD *)v19 + 35);
      v30 = *(_DWORD *)(v29 + 16LL * v20 + 8);
      if ( v21 == ((v30 >> 5) & 3) && (v30 & 0x2000) == 0 )
      {
        v31 = v30 & 0x1F;
        if ( v31 )
        {
          if ( v31 == 15 )
          {
            if ( *(_QWORD *)(v29 + 8 * v28) )
            {
              v18 = 1;
              goto LABEL_22;
            }
          }
          else
          {
            WdLogSingleEntry1(2LL, 267LL);
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
      }
    }
LABEL_37:
    WdLogSingleEntry1(2LL, *a7);
    v32 = *a7;
LABEL_38:
    v33 = L"Invalid context handle: 0x%I64x";
LABEL_39:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v33, v32, 0LL, 0LL, 0LL, 0LL);
    v26 = -1073741811;
    goto LABEL_40;
  }
LABEL_22:
  if ( v18 )
  {
    v26 = VmBusSubmitSignalToHwQueueHelper(v19, a11, a3, a6, a7, v64, v63, (unsigned int *)v60, v62, v61);
    if ( v26 >= 0 )
    {
LABEL_24:
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v67);
      v26 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncOrAsyncMessage(v69, (struct DXGVMBUSMESSAGE *)&v70);
      v27 = Object;
      goto LABEL_25;
    }
LABEL_40:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v67);
    v27 = 0LL;
    goto LABEL_25;
  }
  for ( i = 0; i < a6; ++i )
  {
    v35 = (a7[i] >> 6) & 0xFFFFFF;
    if ( v35 >= *((_DWORD *)v19 + 74) )
      goto LABEL_51;
    v36 = *((_QWORD *)v19 + 35);
    if ( ((a7[i] >> 25) & 0x60) != (*(_BYTE *)(v36 + 16LL * v35 + 8) & 0x60) )
      goto LABEL_51;
    if ( (*(_DWORD *)(v36 + 16LL * v35 + 8) & 0x2000) != 0 )
      goto LABEL_51;
    v37 = *(_DWORD *)(v36 + 16LL * v35 + 8) & 0x1F;
    if ( !v37 )
      goto LABEL_51;
    if ( v37 != 7 )
    {
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      v19 = a2;
LABEL_51:
      v38 = 0LL;
      goto LABEL_52;
    }
    v38 = *(_QWORD *)(v36 + 16LL * v35);
LABEL_52:
    if ( !v38 )
    {
      WdLogSingleEntry1(2LL, a7[i]);
      v32 = a7[i];
      goto LABEL_38;
    }
    *((_DWORD *)v60 + i) = *(_DWORD *)(v38 + 28);
  }
  if ( (*(_BYTE *)&a5.0 & 2) == 0 )
  {
    v42 = 0;
    v43 = v61;
    while ( 1 )
    {
      if ( v42 >= a3 )
        goto LABEL_24;
      v44 = v64[v42];
      v45 = (v44 >> 6) & 0xFFFFFF;
      v46 = *((_DWORD *)v19 + 74);
      if ( v45 < v46
        && (v47 = *((_QWORD *)v19 + 35), v48 = *(_DWORD *)(v47 + 16LL * v45 + 8), v64[v42] >> 30 == ((v48 >> 5) & 3))
        && (v48 & 0x2000) == 0
        && (v48 & 0x1F) == 8 )
      {
        v49 = *(DXGSYNCOBJECT **)(v47 + 16LL * v45);
      }
      else
      {
        v49 = 0LL;
      }
      if ( v49 )
      {
        v62[v42] = DXGSYNCOBJECT::GetHostHandle(v49, v44);
        goto LABEL_83;
      }
      v50 = (v44 >> 6) & 0xFFFFFF;
      v51 = v44 >> 30;
      if ( v50 >= v46 )
        goto LABEL_80;
      v52 = *((_QWORD *)v19 + 35);
      v53 = *(_DWORD *)(v52 + 16LL * v50 + 8);
      if ( v51 != ((v53 >> 5) & 3) )
        goto LABEL_80;
      if ( (v53 & 0x2000) != 0 )
        goto LABEL_80;
      v54 = v53 & 0x1F;
      if ( !v54 )
        goto LABEL_80;
      if ( v54 != 11 )
        break;
      v55 = *(_QWORD *)(v52 + 16LL * v50);
LABEL_81:
      if ( !v55 )
      {
        WdLogSingleEntry1(2LL, v64[v42]);
        v32 = v64[v42];
        v33 = L"Invalid sync object handle 0x%I64x";
        goto LABEL_39;
      }
      v62[v42] = *(_DWORD *)(v55 + 44);
      v49 = *(DXGSYNCOBJECT **)(v55 + 32);
LABEL_83:
      if ( v59 && *((_DWORD *)v49 + 50) == 5 )
      {
        if ( a11 )
        {
          v56 = &v63[v42];
          if ( (unsigned __int64)v56 >= MmUserProbeAddress )
            v56 = (unsigned __int64 *)MmUserProbeAddress;
          v43[v42] = *v56;
        }
        else
        {
          v43[v42] = v63[v42];
        }
      }
      ++v42;
      v19 = a2;
    }
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_80:
    v55 = 0LL;
    goto LABEL_81;
  }
  v39 = v65;
  if ( (*((_DWORD *)v19 + 106) & 0x10) != 0 )
  {
    v41 = *v65;
    goto LABEL_62;
  }
  v40 = *v65;
  v60 = 0LL;
  v26 = ObReferenceObjectByHandle(v40, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &v60, 0LL);
  v27 = v60;
  Object = v60;
  if ( v26 >= 0 )
  {
    v41 = v60;
LABEL_62:
    *(_QWORD *)(v16 + 48) = v41;
    goto LABEL_24;
  }
  WdLogSingleEntry1(3LL, *v39);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v67);
LABEL_25:
  if ( v26 < 0 )
  {
    if ( v27 )
      ObfDereferenceObject(v27);
    WdLogSingleEntry1(2LL, v26);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VmBusSendSignalSyncObject failed: 0x%I64x",
      v26,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v70);
  return (unsigned int)v26;
}
