/*
 * XREFs of ?VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037DF70
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003634 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0003A50 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003AA0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AF0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000717C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00071E8 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0007344 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00098CC (--1COREACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0018D48 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005AC74 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005C334 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0166CCC (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C0186640 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C01A314C (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C036DA00 (-AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C0371BC8 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusOpenSyncObject(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  _DWORD *v3; // rdi
  __int64 v4; // rbx
  unsigned int v5; // esi
  __int64 v6; // r14
  unsigned int v7; // edx
  int v8; // r8d
  int EntryType; // ebx
  __int64 v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // r8
  int v13; // ecx
  const wchar_t *v14; // r9
  __int64 v15; // rax
  DXGSHAREDVMOBJECT *v16; // rsi
  DXGSYNCOBJECT *v17; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v19; // rcx
  struct DXGPROCESS *Current; // rax
  unsigned __int64 v21; // rbx
  struct DXGPROCESS *v22; // r14
  char *v23; // r15
  unsigned int v24; // ecx
  __int64 v25; // r8
  int v26; // edx
  __int64 v27; // rbx
  unsigned int v28; // edx
  struct _KTHREAD **v29; // r8
  struct DXGDEVICE *v30; // rbx
  __int64 v31; // r9
  struct DXGGLOBAL *v32; // rax
  __int64 v33; // r14
  unsigned int v34; // ebx
  unsigned int v35; // eax
  __int64 v36; // r8
  __int64 v37; // rbx
  __int64 v38; // r14
  unsigned int v39; // ebx
  unsigned int v40; // eax
  __int64 v41; // r8
  int v42; // ecx
  DXGSYNCOBJECT *v43; // rbx
  struct ADAPTER_RENDER *v44; // rdx
  __int64 v45; // rcx
  struct DXGPROCESS *v46; // rax
  unsigned __int64 v47; // rbx
  struct DXGPROCESS *v48; // rsi
  char *v49; // r14
  unsigned int v50; // ecx
  __int64 v51; // r8
  int v52; // edx
  __int64 v53; // rbx
  struct DXGGLOBAL *v54; // rax
  PERESOURCE *v55; // rax
  __int64 v56; // rcx
  struct DXGPROCESS *v57; // rax
  unsigned __int64 v58; // rbx
  struct DXGPROCESS *v59; // rsi
  char *v60; // r14
  unsigned int v61; // ecx
  __int64 v62; // r8
  int v63; // edx
  __int64 v64; // rbx
  unsigned int v66; // [rsp+40h] [rbp-C8h]
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS v67; // [rsp+58h] [rbp-B0h]
  struct DXGDEVICE *v68; // [rsp+68h] [rbp-A0h] BYREF
  void *v69; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v70[2]; // [rsp+78h] [rbp-90h] BYREF
  struct DXGDEVICE *v71; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v72[16]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v73[24]; // [rsp+A0h] [rbp-68h] BYREF
  struct DXGSYNCOBJECT *v74; // [rsp+B8h] [rbp-50h] BYREF
  char v75; // [rsp+C0h] [rbp-48h]
  struct DXGADAPTERSYNCOBJECT *v76; // [rsp+C8h] [rbp-40h] BYREF
  struct DXGADAPTERSYNCOBJECT *v77; // [rsp+D0h] [rbp-38h] BYREF
  unsigned int v78[4]; // [rsp+D8h] [rbp-30h] BYREF
  void *v79; // [rsp+E8h] [rbp-20h]
  _BYTE v80[8]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v81[64]; // [rsp+100h] [rbp-8h] BYREF
  _BYTE v82[88]; // [rsp+140h] [rbp+38h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  v3 = (_DWORD *)v2;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 36) &= ~2u;
    v4 = *((_QWORD *)a1 + 12);
    *(_OWORD *)v78 = 0LL;
    v79 = 0LL;
    v5 = *(_DWORD *)(v2 + 28);
    v6 = v4 + 248;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v4 + 248));
    v7 = (v5 >> 6) & 0xFFFFFF;
    if ( v7 < *(_DWORD *)(v4 + 296)
      && (v8 = *(_DWORD *)(*(_QWORD *)(v4 + 280) + 16LL * v7 + 8),
          ((v5 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)(v4 + 280) + 16LL * v7 + 8) & 0x60))
      && (v8 & 0x2000) == 0
      && (v8 & 0x1F) != 0 )
    {
      EntryType = HMGRTABLE::GetEntryType(v4 + 280, v7);
    }
    else
    {
      EntryType = 0;
    }
    _InterlockedAdd((volatile signed __int32 *)(v6 + 16), 0xFFFFFFFF);
    ExReleasePushLockSharedEx(v6, 0LL);
    KeLeaveCriticalRegion();
    if ( EntryType == 13 )
    {
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
        (DXGHANDLETABLELOCKSHARED *)v73,
        *((struct DXGPROCESS **)a1 + 12));
      v10 = *((_QWORD *)a1 + 12);
      v11 = (v3[7] >> 6) & 0xFFFFFF;
      if ( v11 < *(_DWORD *)(v10 + 296) )
      {
        v12 = *(_QWORD *)(v10 + 280);
        if ( ((v3[7] >> 25) & 0x60) == (*(_BYTE *)(v12 + 16LL * v11 + 8) & 0x60)
          && (*(_DWORD *)(v12 + 16LL * v11 + 8) & 0x2000) == 0 )
        {
          v13 = *(_DWORD *)(v12 + 16LL * v11 + 8) & 0x1F;
          if ( v13 )
          {
            if ( v13 == 13 )
            {
              v16 = *(DXGSHAREDVMOBJECT **)(v12 + 16LL * v11);
              if ( v16 )
              {
                if ( *(_DWORD *)v16 != 4 )
                {
                  WdLogSingleEntry1(2LL, *(int *)v16);
                  v15 = *(int *)v16;
                  v14 = L"Invalid shared vm object type: 0x%I64x";
                  goto LABEL_17;
                }
                v17 = *(DXGSYNCOBJECT **)(*((_QWORD *)v16 + 1) + 32LL);
                if ( v17 )
                {
                  DXGSHAREDVMOBJECT::AddReference(v16);
                  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v73);
                  Global = DXGGLOBAL::GetGlobal();
                  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v74, Global, 0);
                  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)&v74);
                  v78[1] = DXGSYNCOBJECT::Open(
                             v17,
                             0LL,
                             0LL,
                             0LL,
                             v78,
                             0LL,
                             0LL,
                             0,
                             0LL,
                             0,
                             DXGDEVICE::DestroyFlagsDefault);
                  if ( (v78[1] & 0x80000000) == 0 )
                  {
                    Current = DXGPROCESS::GetCurrent(v19);
                    v21 = v78[0];
                    v22 = Current;
                    v23 = (char *)Current + 248;
                    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
                    v24 = ((unsigned int)v21 >> 6) & 0xFFFFFF;
                    if ( v24 < *((_DWORD *)v22 + 74) )
                    {
                      v25 = *((_QWORD *)v22 + 35);
                      v26 = *(_DWORD *)(v25 + 16LL * v24 + 8);
                      if ( (((unsigned int)v21 >> 25) & 0x60) == (v26 & 0x60) && (v26 & 0x1F) != 0 )
                      {
                        v27 = 2 * ((v21 >> 6) & 0xFFFFFF);
                        if ( (*(_DWORD *)(v25 + 8 * v27 + 8) & 0x2000) == 0 )
                        {
                          WdLogSingleEntry1(1LL, 217LL);
                          DxgkLogInternalTriageEvent(
                            0LL,
                            262146,
                            -1,
                            (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
                            217LL,
                            0LL,
                            0LL,
                            0LL,
                            0LL);
                        }
                        *(_DWORD *)(*((_QWORD *)v22 + 35) + 8 * v27 + 8) &= ~0x2000u;
                      }
                    }
                    *((_QWORD *)v23 + 1) = 0LL;
                    ExReleasePushLockExclusiveEx(v23, 0LL);
                    KeLeaveCriticalRegion();
                  }
                  else
                  {
                    WdLogSingleEntry2(2LL, (unsigned int)v3[7], -1073741811LL);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      -1,
                      (__int64)L"Failed to open sync object (0x%I64x), returning 0x%I64x",
                      (unsigned int)v3[7],
                      -1073741811LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  if ( v75 )
                    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v74);
                  DXGSHAREDVMOBJECT::ReleaseReference(v16);
                  goto LABEL_84;
                }
                WdLogSingleEntry1(2LL, (unsigned int)v3[7]);
                v14 = L"Cannot open keyed mutex from a shared resource which doesn't include a keyed mutex: 0x%I64x";
LABEL_16:
                v15 = (unsigned int)v3[7];
LABEL_17:
                DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v14, v15, 0LL, 0LL, 0LL, 0LL);
                v78[1] = -1073741811;
                DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v73);
LABEL_84:
                VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v78, 0x18u);
                LOBYTE(v2) = 1;
                return v2;
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
      WdLogSingleEntry1(2LL, (unsigned int)v3[7]);
      v14 = L"Invalid shared vm object handle: 0x%I64x";
      goto LABEL_16;
    }
    v28 = v3[6];
    if ( !v28 )
    {
      v54 = DXGGLOBAL::GetGlobal();
      DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v73, v54, 0);
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v73);
      v55 = (PERESOURCE *)DXGGLOBAL::GetGlobal();
      v78[1] = DXGGLOBAL::OpenSyncObject(v55, v3[7], &v74, v78, &v77);
      if ( (v78[1] & 0x80000000) == 0 )
      {
        v57 = DXGPROCESS::GetCurrent(v56);
        v58 = v78[0];
        v59 = v57;
        v60 = (char *)v57 + 248;
        DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)v57 + 248));
        v61 = ((unsigned int)v58 >> 6) & 0xFFFFFF;
        if ( v61 < *((_DWORD *)v59 + 74) )
        {
          v62 = *((_QWORD *)v59 + 35);
          v63 = *(_DWORD *)(v62 + 16LL * v61 + 8);
          if ( (((unsigned int)v58 >> 25) & 0x60) == (v63 & 0x60) && (v63 & 0x1F) != 0 )
          {
            v64 = 2 * ((v58 >> 6) & 0xFFFFFF);
            if ( (*(_DWORD *)(v62 + 8 * v64 + 8) & 0x2000) == 0 )
            {
              WdLogSingleEntry1(1LL, 217LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
                217LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            *(_DWORD *)(*((_QWORD *)v59 + 35) + 8 * v64 + 8) &= ~0x2000u;
          }
        }
        *((_QWORD *)v60 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v60, 0LL);
        KeLeaveCriticalRegion();
      }
      else
      {
        WdLogSingleEntry2(2LL, (unsigned int)v3[7], -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to open sync object (0x%I64x), returning 0x%I64x",
          (unsigned int)v3[7],
          -1073741811LL,
          0LL,
          0LL,
          0LL);
      }
      if ( v73[8] )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v73);
      goto LABEL_84;
    }
    v29 = (struct _KTHREAD **)*((_QWORD *)a1 + 11);
    v71 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v68, v28, v29, &v71);
    v30 = v71;
    if ( !v71 )
    {
      WdLogSingleEntry2(2LL, (unsigned int)v3[6], -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
        (unsigned int)v3[6],
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      v78[1] = -1073741811;
LABEL_38:
      if ( v68 && _InterlockedExchangeAdd64((volatile signed __int64 *)v68 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v68 + 2), v68);
      goto LABEL_84;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v70, v71);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v80, (__int64)v30, 0, v31, 0);
    v78[1] = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v80, 0LL);
    if ( (v78[1] & 0x80000000) != 0 )
    {
LABEL_42:
      COREACCESS::~COREACCESS((COREACCESS *)v82);
      COREACCESS::~COREACCESS((COREACCESS *)v81);
      if ( v70[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v70);
      goto LABEL_38;
    }
    v32 = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v72, v32, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v72);
    v33 = *((_QWORD *)a1 + 12);
    v34 = v3[7];
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v33 + 248));
    v35 = (v34 >> 6) & 0xFFFFFF;
    if ( v35 < *(_DWORD *)(v33 + 296)
      && (v36 = *(_QWORD *)(v33 + 280), ((v34 >> 25) & 0x60) == (*(_BYTE *)(v36 + 16LL * v35 + 8) & 0x60))
      && (*(_DWORD *)(v36 + 16LL * v35 + 8) & 0x2000) == 0
      && (*(_DWORD *)(v36 + 16LL * v35 + 8) & 0x1F) == 0xB )
    {
      v37 = *(_QWORD *)(v36 + 16LL * v35);
    }
    else
    {
      v37 = 0LL;
    }
    _InterlockedAdd((volatile signed __int32 *)(v33 + 264), 0xFFFFFFFF);
    ExReleasePushLockSharedEx(v33 + 248, 0LL);
    KeLeaveCriticalRegion();
    if ( v37 )
    {
      v43 = *(DXGSYNCOBJECT **)(v37 + 32);
      goto LABEL_64;
    }
    v38 = *((_QWORD *)a1 + 12);
    v39 = v3[7];
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v38 + 248));
    v40 = (v39 >> 6) & 0xFFFFFF;
    if ( v40 < *(_DWORD *)(v38 + 296) )
    {
      v41 = *(_QWORD *)(v38 + 280);
      if ( ((v39 >> 25) & 0x60) == (*(_BYTE *)(v41 + 16LL * v40 + 8) & 0x60)
        && (*(_DWORD *)(v41 + 16LL * v40 + 8) & 0x2000) == 0 )
      {
        v42 = *(_DWORD *)(v41 + 16LL * v40 + 8) & 0x1F;
        if ( v42 )
        {
          if ( v42 == 8 )
          {
            v43 = *(DXGSYNCOBJECT **)(v41 + 16LL * v40);
LABEL_58:
            _InterlockedAdd((volatile signed __int32 *)(v38 + 264), 0xFFFFFFFF);
            ExReleasePushLockSharedEx(v38 + 248, 0LL);
            KeLeaveCriticalRegion();
            if ( !v43 )
            {
              WdLogSingleEntry2(2LL, (unsigned int)v3[7], -1073741811LL);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Invalid sync object (0x%I64x) specified, returning 0x%I64x",
                (unsigned int)v3[7],
                -1073741811LL,
                0LL,
                0LL,
                0LL);
              v78[1] = -1073741811;
LABEL_60:
              if ( v72[8] )
                DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v72);
              goto LABEL_42;
            }
LABEL_64:
            v67.0 = (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E)v3[9];
            v44 = (struct ADAPTER_RENDER *)*((_QWORD *)v71 + 2);
            v66 = v3[8];
            v69 = 0LL;
            v78[1] = DXGSYNCOBJECT::Open(v43, v44, v71, 0LL, v78, &v69, (unsigned __int64 *)&v78[2], v66, &v76, 1, v67);
            if ( (v78[1] & 0x80000000) == 0 )
            {
              v46 = DXGPROCESS::GetCurrent(v45);
              v47 = v78[0];
              v48 = v46;
              v49 = (char *)v46 + 248;
              DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)v46 + 248));
              v50 = ((unsigned int)v47 >> 6) & 0xFFFFFF;
              if ( v50 < *((_DWORD *)v48 + 74) )
              {
                v51 = *((_QWORD *)v48 + 35);
                v52 = *(_DWORD *)(v51 + 16LL * v50 + 8);
                if ( (((unsigned int)v47 >> 25) & 0x60) == (v52 & 0x60) && (v52 & 0x1F) != 0 )
                {
                  v53 = 2 * ((v47 >> 6) & 0xFFFFFF);
                  if ( (*(_DWORD *)(v51 + 8 * v53 + 8) & 0x2000) == 0 )
                  {
                    WdLogSingleEntry1(1LL, 217LL);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      -1,
                      (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
                      217LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  *(_DWORD *)(*((_QWORD *)v48 + 35) + 8 * v53 + 8) &= ~0x2000u;
                }
              }
              *((_QWORD *)v49 + 1) = 0LL;
              ExReleasePushLockExclusiveEx(v49, 0LL);
              KeLeaveCriticalRegion();
              v79 = v69;
            }
            else
            {
              WdLogSingleEntry2(2LL, (unsigned int)v3[7], -1073741811LL);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed to open sync object (0x%I64x), returning 0x%I64x",
                (unsigned int)v3[7],
                -1073741811LL,
                0LL,
                0LL,
                0LL);
            }
            goto LABEL_60;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v43 = 0LL;
    goto LABEL_58;
  }
  return v2;
}
