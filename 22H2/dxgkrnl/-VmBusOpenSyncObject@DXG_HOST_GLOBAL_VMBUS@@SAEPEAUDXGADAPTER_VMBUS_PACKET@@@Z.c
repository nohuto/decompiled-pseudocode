/*
 * XREFs of ?VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0244D90
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000381C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0004E50 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0005090 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0005100 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00088C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0008BB0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0008C04 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008F14 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008F8C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00406AC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00418B0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C011AC00 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C012AE78 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0171360 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     ?AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C0238348 (-AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C023B42C (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusOpenSyncObject(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  unsigned int *v3; // rdi
  __int64 v4; // rbx
  DXGSHAREDVMOBJECT *v5; // rsi
  unsigned int v6; // r14d
  __int64 v7; // r15
  __int64 v8; // rdx
  int v9; // r8d
  int EntryType; // ebx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  DXGSYNCOBJECT *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  PERESOURCE *Global; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rdx
  DXGSYNCOBJECTLOCK *v30; // rcx
  unsigned __int64 v31; // rbx
  struct DXGPROCESS *Current; // rdi
  __int64 v33; // rcx
  __int64 v34; // rdx
  int v35; // r8d
  __int64 v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rdx
  struct _KTHREAD **v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rcx
  struct DXGDEVICE *v43; // r13
  __int64 v44; // rax
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rcx
  PERESOURCE *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r14
  unsigned int v51; // esi
  __int64 v52; // rax
  __int64 v53; // rdx
  int v54; // ecx
  __int64 v55; // rbx
  __int64 v56; // r14
  unsigned int v57; // esi
  __int64 v58; // rax
  __int64 v59; // rdx
  int v60; // ecx
  __int64 v61; // rcx
  __int64 v62; // rax
  DXGSYNCOBJECT *v63; // rbx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rax
  struct ADAPTER_RENDER *v67; // rdx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rax
  unsigned __int64 v73; // rbx
  struct DXGPROCESS *v74; // rdi
  __int64 v75; // rcx
  __int64 v76; // rdx
  int v77; // r8d
  __int64 v78; // rcx
  __int64 v79; // rbx
  __int64 v80; // rax
  PERESOURCE *v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rdx
  __int64 v84; // rcx
  PERESOURCE *v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rax
  unsigned __int64 v91; // rbx
  struct DXGPROCESS *v92; // rdi
  __int64 v93; // rcx
  __int64 v94; // rdx
  int v95; // r8d
  __int64 v96; // rcx
  __int64 v97; // rbx
  __int64 v98; // rax
  unsigned int v100; // [rsp+40h] [rbp-C8h]
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS v101; // [rsp+58h] [rbp-B0h]
  struct DXGDEVICE *v102; // [rsp+68h] [rbp-A0h] BYREF
  void *v103; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v104[2]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v105[16]; // [rsp+88h] [rbp-80h] BYREF
  struct DXGDEVICE *v106; // [rsp+98h] [rbp-70h] BYREF
  struct DXGADAPTERSYNCOBJECT *v107; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v108[16]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v109[8]; // [rsp+B8h] [rbp-50h] BYREF
  char v110; // [rsp+C0h] [rbp-48h]
  _BYTE v111[24]; // [rsp+C8h] [rbp-40h] BYREF
  struct DXGADAPTERSYNCOBJECT *v112; // [rsp+E0h] [rbp-28h] BYREF
  struct DXGSYNCOBJECT *v113; // [rsp+E8h] [rbp-20h] BYREF
  unsigned int v114[4]; // [rsp+F0h] [rbp-18h] BYREF
  void *v115; // [rsp+100h] [rbp-8h]
  _BYTE v116[8]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v117[64]; // [rsp+110h] [rbp+8h] BYREF
  _BYTE v118[88]; // [rsp+150h] [rbp+48h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  v3 = (unsigned int *)v2;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 36) &= ~2u;
    v4 = *((_QWORD *)a1 + 7);
    *(_OWORD *)v114 = 0LL;
    v115 = 0LL;
    v5 = 0LL;
    v6 = *(_DWORD *)(v2 + 28);
    v7 = v4 + 208;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v4 + 208));
    v8 = (v6 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v8 < *(_DWORD *)(v4 + 256)
      && (v9 = *(_DWORD *)(*(_QWORD *)(v4 + 240) + 16LL * (unsigned int)v8 + 8),
          ((v6 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)(v4 + 240) + 16LL * (unsigned int)v8 + 8) & 0x60))
      && (v9 & 0x2000) == 0
      && (v9 & 0x1F) != 0 )
    {
      EntryType = HMGRTABLE::GetEntryType(v4 + 240, v8);
    }
    else
    {
      EntryType = 0;
    }
    ExReleasePushLockSharedEx(v7, 0LL);
    KeLeaveCriticalRegion();
    if ( EntryType == 13 )
    {
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
        (DXGHANDLETABLELOCKSHARED *)v111,
        *((struct _KTHREAD ***)a1 + 7));
      v12 = v3[7];
      v13 = *((_QWORD *)a1 + 7);
      v14 = (v3[7] >> 6) & 0xFFFFFF;
      if ( (unsigned int)v14 >= *(_DWORD *)(v13 + 256) )
        goto LABEL_15;
      v15 = *(_QWORD *)(v13 + 240);
      v12 = ((unsigned int)v12 >> 25) & 0x60;
      v13 = *(unsigned int *)(v15 + 16 * v14 + 8);
      if ( (_BYTE)v12 != (*(_BYTE *)(v15 + 16 * v14 + 8) & 0x60) || (v13 & 0x2000) != 0 || (v13 & 0x1F) == 0 )
        goto LABEL_15;
      v13 &= 0x1Fu;
      if ( (_BYTE)v13 != 13 )
      {
        v16 = WdLogNewEntry5_WdError(v13, v12);
        *(_QWORD *)(v16 + 24) = 316LL;
        WdLogEvent5_WdError(v16);
        goto LABEL_15;
      }
      v5 = *(DXGSHAREDVMOBJECT **)(v15 + 16LL * (unsigned int)v14);
      if ( !v5 )
        goto LABEL_15;
      if ( *(_DWORD *)v5 != 4 )
      {
        v17 = WdLogNewEntry5_WdError(v13, v12);
        v18 = *(int *)v5;
        goto LABEL_16;
      }
      v19 = *(DXGSYNCOBJECT **)(*((_QWORD *)v5 + 1) + 32LL);
      if ( !v19 )
      {
LABEL_15:
        v17 = WdLogNewEntry5_WdError(v13, v12);
        v18 = v3[7];
LABEL_16:
        *(_QWORD *)(v17 + 24) = v18;
        WdLogEvent5_WdError(v17);
        v114[1] = -1073741811;
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v111);
LABEL_85:
        VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), v114, 0x18u);
        LOBYTE(v2) = 1;
        return v2;
      }
      DXGSHAREDVMOBJECT::AddReference(v5, v12);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v111);
      Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v21, v20);
      DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v108, Global, 0);
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v108, v23);
      v114[1] = DXGSYNCOBJECT::Open(v19, 0LL, 0LL, 0LL, v114, 0LL, 0LL, 0, 0LL, 0, DXGSYNCOBJECT::FlagsDefault);
      if ( (v114[1] & 0x80000000) == 0 )
      {
        v31 = v114[0];
        Current = DXGPROCESS::GetCurrent(v25, v24, v26, v27);
        DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
        v33 = ((unsigned int)v31 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v33 < *((_DWORD *)Current + 64) )
        {
          v34 = *((_QWORD *)Current + 30);
          v35 = *(_DWORD *)(v34 + 16 * v33 + 8);
          v36 = ((unsigned int)v31 >> 25) & 0x60;
          if ( (((unsigned int)v31 >> 25) & 0x60) == (v35 & 0x60) && (v35 & 0x1F) != 0 )
          {
            v37 = 2 * ((v31 >> 6) & 0xFFFFFF);
            if ( (*(_DWORD *)(v34 + 8 * v37 + 8) & 0x2000) == 0 )
            {
              v38 = WdLogNewEntry5_WdAssertion(v36, v34);
              *(_QWORD *)(v38 + 24) = 222LL;
              WdLogEvent5_WdAssertion(v38);
              v34 = *((_QWORD *)Current + 30);
            }
            *(_DWORD *)(v34 + 8 * v37 + 8) &= ~0x2000u;
          }
        }
        *((_QWORD *)Current + 27) = 0LL;
        ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
        KeLeaveCriticalRegion();
      }
      else
      {
        v28 = WdLogNewEntry5_WdError(v25, v24);
        *(_QWORD *)(v28 + 24) = v3[7];
        *(_QWORD *)(v28 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v28);
      }
      if ( !v108[8] )
      {
LABEL_83:
        if ( v5 )
          DXGSHAREDVMOBJECT::ReleaseReference(v5, v29);
        goto LABEL_85;
      }
      v30 = (DXGSYNCOBJECTLOCK *)v108;
LABEL_82:
      DXGSYNCOBJECTLOCK::Release(v30);
      goto LABEL_83;
    }
    v39 = v3[6];
    if ( !(_DWORD)v39 )
    {
      v81 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v11, v39);
      DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v109, v81, 0);
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v109, v82);
      v85 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v84, v83);
      v114[1] = DXGGLOBAL::OpenSyncObject(v85, v3[7], &v113, v114, &v112);
      if ( (v114[1] & 0x80000000) != 0 )
      {
        v90 = WdLogNewEntry5_WdError(v87, v86);
        *(_QWORD *)(v90 + 24) = v3[7];
        *(_QWORD *)(v90 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v90);
        if ( v110 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v109);
        goto LABEL_85;
      }
      v91 = v114[0];
      v92 = DXGPROCESS::GetCurrent(v87, v86, v88, v89);
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)v92 + 208));
      v93 = ((unsigned int)v91 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v93 < *((_DWORD *)v92 + 64) )
      {
        v94 = *((_QWORD *)v92 + 30);
        v95 = *(_DWORD *)(v94 + 16 * v93 + 8);
        v96 = ((unsigned int)v91 >> 25) & 0x60;
        if ( (((unsigned int)v91 >> 25) & 0x60) == (v95 & 0x60) && (v95 & 0x1F) != 0 )
        {
          v97 = 2 * ((v91 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v94 + 8 * v97 + 8) & 0x2000) == 0 )
          {
            v98 = WdLogNewEntry5_WdAssertion(v96, v94);
            *(_QWORD *)(v98 + 24) = 222LL;
            WdLogEvent5_WdAssertion(v98);
            v94 = *((_QWORD *)v92 + 30);
          }
          *(_DWORD *)(v94 + 8 * v97 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)v92 + 27) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v92 + 208, 0LL);
      KeLeaveCriticalRegion();
      if ( !v110 )
        goto LABEL_85;
      v30 = (DXGSYNCOBJECTLOCK *)v109;
      goto LABEL_82;
    }
    v40 = (struct _KTHREAD **)*((_QWORD *)a1 + 6);
    v106 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v102, v39, v40, &v106);
    v43 = v106;
    if ( !v106 )
    {
      v44 = WdLogNewEntry5_WdError(v42, v41);
      *(_QWORD *)(v44 + 24) = v3[6];
      *(_QWORD *)(v44 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v44);
      v114[1] = -1073741811;
LABEL_35:
      if ( v102 && _InterlockedExchangeAdd64((volatile signed __int64 *)v102 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v102 + 2), v102);
      goto LABEL_85;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v104, v106);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v116, (__int64)v43, 0, v45, 0);
    v114[1] = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v116, 0LL);
    if ( (v114[1] & 0x80000000) != 0 )
    {
LABEL_39:
      COREACCESS::~COREACCESS((COREACCESS *)v118);
      COREACCESS::~COREACCESS((COREACCESS *)v117);
      if ( v104[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v104);
      goto LABEL_35;
    }
    v48 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v47, v46);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v105, v48, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v105, v49);
    v50 = *((_QWORD *)a1 + 7);
    v51 = v3[7];
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v50 + 208));
    v52 = (v51 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v52 < *(_DWORD *)(v50 + 256)
      && (v53 = *(_QWORD *)(v50 + 240),
          v54 = *(_DWORD *)(v53 + 16 * v52 + 8),
          ((v51 >> 25) & 0x60) == (*(_BYTE *)(v53 + 16 * v52 + 8) & 0x60))
      && (v54 & 0x2000) == 0
      && (v54 & 0x1F) == 0xB )
    {
      v55 = *(_QWORD *)(v53 + 16LL * (unsigned int)v52);
    }
    else
    {
      v55 = 0LL;
    }
    ExReleasePushLockSharedEx(v50 + 208, 0LL);
    KeLeaveCriticalRegion();
    if ( v55 )
    {
      v63 = *(DXGSYNCOBJECT **)(v55 + 32);
      goto LABEL_62;
    }
    v56 = *((_QWORD *)a1 + 7);
    v57 = v3[7];
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v56 + 208));
    v58 = (v57 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v58 < *(_DWORD *)(v56 + 256) )
    {
      v59 = *(_QWORD *)(v56 + 240);
      v60 = *(_DWORD *)(v59 + 16 * v58 + 8);
      if ( ((v57 >> 25) & 0x60) == (*(_BYTE *)(v59 + 16 * v58 + 8) & 0x60) && (v60 & 0x2000) == 0 && (v60 & 0x1F) != 0 )
      {
        v61 = v60 & 0x1F;
        if ( (_BYTE)v61 == 8 )
        {
          v63 = *(DXGSYNCOBJECT **)(v59 + 16LL * (unsigned int)v58);
LABEL_55:
          ExReleasePushLockSharedEx(v56 + 208, 0LL);
          KeLeaveCriticalRegion();
          if ( !v63 )
          {
            v66 = WdLogNewEntry5_WdError(v65, v64);
            *(_QWORD *)(v66 + 24) = v3[7];
            *(_QWORD *)(v66 + 32) = -1073741811LL;
            WdLogEvent5_WdError(v66);
            v114[1] = -1073741811;
LABEL_57:
            if ( v105[8] )
              DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v105);
            goto LABEL_39;
          }
LABEL_62:
          v67 = (struct ADAPTER_RENDER *)*((_QWORD *)v43 + 2);
          v101.0 = (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E)v3[9];
          v100 = v3[8];
          v103 = 0LL;
          v114[1] = DXGSYNCOBJECT::Open(
                      v63,
                      v67,
                      v43,
                      0LL,
                      v114,
                      &v103,
                      (unsigned __int64 *)&v114[2],
                      v100,
                      &v107,
                      1,
                      v101);
          if ( (v114[1] & 0x80000000) == 0 )
          {
            v73 = v114[0];
            v74 = DXGPROCESS::GetCurrent(v69, v68, v70, v71);
            DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)v74 + 208));
            v75 = ((unsigned int)v73 >> 6) & 0xFFFFFF;
            if ( (unsigned int)v75 < *((_DWORD *)v74 + 64) )
            {
              v76 = *((_QWORD *)v74 + 30);
              v77 = *(_DWORD *)(v76 + 16 * v75 + 8);
              v78 = ((unsigned int)v73 >> 25) & 0x60;
              if ( (((unsigned int)v73 >> 25) & 0x60) == (v77 & 0x60) && (v77 & 0x1F) != 0 )
              {
                v79 = 2 * ((v73 >> 6) & 0xFFFFFF);
                if ( (*(_DWORD *)(v76 + 8 * v79 + 8) & 0x2000) == 0 )
                {
                  v80 = WdLogNewEntry5_WdAssertion(v78, v76);
                  *(_QWORD *)(v80 + 24) = 222LL;
                  WdLogEvent5_WdAssertion(v80);
                  v76 = *((_QWORD *)v74 + 30);
                }
                *(_DWORD *)(v76 + 8 * v79 + 8) &= ~0x2000u;
              }
            }
            *((_QWORD *)v74 + 27) = 0LL;
            ExReleasePushLockExclusiveEx((char *)v74 + 208, 0LL);
            KeLeaveCriticalRegion();
            v115 = v103;
          }
          else
          {
            v72 = WdLogNewEntry5_WdError(v69, v68);
            *(_QWORD *)(v72 + 24) = v3[7];
            *(_QWORD *)(v72 + 32) = -1073741811LL;
            WdLogEvent5_WdError(v72);
          }
          goto LABEL_57;
        }
        v62 = WdLogNewEntry5_WdError(v61, v59);
        *(_QWORD *)(v62 + 24) = 316LL;
        WdLogEvent5_WdError(v62);
      }
    }
    v63 = 0LL;
    goto LABEL_55;
  }
  return v2;
}
