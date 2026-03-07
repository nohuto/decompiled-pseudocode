__int64 __fastcall SubmitSignalSyncObjectsToHwQueue(
        unsigned int a1,
        const unsigned int *a2,
        struct _D3DDDICB_SIGNALFLAGS a3,
        unsigned int a4,
        unsigned int *a5,
        unsigned __int64 *a6,
        struct DXGPROCESS *a7,
        bool a8,
        bool a9)
{
  unsigned __int64 Value; // rbx
  struct DXGHWQUEUE **Elements; // r14
  unsigned int v14; // edi
  __int64 v15; // rax
  __int64 v16; // rsi
  void **v17; // r10
  int v18; // eax
  __int64 v19; // r9
  __int64 v20; // rsi
  int v21; // esi
  struct DXGGLOBAL *Global; // rax
  __int64 v23; // rbx
  bool v24; // zf
  __int64 v25; // rbx
  const wchar_t *v26; // r9
  __int64 v27; // r9
  unsigned int *v28; // r10
  const unsigned int *v29; // rcx
  unsigned int v30; // eax
  unsigned int v31; // edx
  __int64 v32; // r11
  unsigned int v33; // ecx
  int v34; // ecx
  __int64 v35; // r8
  __int64 v36; // rbx
  PVOID v37; // rcx
  unsigned int v38; // r13d
  const unsigned int *v39; // rdx
  unsigned int v40; // esi
  unsigned int v41; // eax
  unsigned int v42; // esi
  __int64 v43; // r8
  unsigned int v44; // ecx
  __int64 v45; // rsi
  __int64 v46; // r13
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // rsi
  unsigned int v50; // esi
  unsigned int v51; // eax
  unsigned int v52; // esi
  __int64 v53; // r8
  unsigned int v54; // ecx
  int v55; // ecx
  char *v56; // rcx
  PVOID v57; // rcx
  bool v58; // zf
  const unsigned int *v59; // rdi
  const unsigned int *v61; // r13
  struct DXGPROCESS *v62; // rsi
  struct DXGPROCESS *v63; // r8
  void *v64; // rdx
  struct DXGPROCESS *v65; // rax
  __int64 v66; // r13
  struct DXGPROCESS *v67; // rcx
  const unsigned int *v68; // rax
  DXGSYNCOBJECT *v69; // r13
  __int64 DxgAdapterSyncObject; // rdx
  __int64 v71; // rax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  struct DXGPROCESS *v73; // rcx
  int v74; // eax
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // rbx
  const unsigned int *v78; // r13
  __int64 v79; // rbx
  unsigned int v80; // [rsp+70h] [rbp-378h]
  unsigned int v81; // [rsp+70h] [rbp-378h]
  unsigned int v82; // [rsp+70h] [rbp-378h]
  char v83[8]; // [rsp+78h] [rbp-370h] BYREF
  char v84; // [rsp+80h] [rbp-368h]
  __int64 v85; // [rsp+88h] [rbp-360h] BYREF
  int v86; // [rsp+90h] [rbp-358h]
  unsigned int v87; // [rsp+98h] [rbp-350h]
  PVOID v88; // [rsp+A0h] [rbp-348h] BYREF
  _BYTE v89[16]; // [rsp+A8h] [rbp-340h] BYREF
  int v90; // [rsp+B8h] [rbp-330h]
  unsigned int v91; // [rsp+C0h] [rbp-328h]
  const unsigned int *v92; // [rsp+C8h] [rbp-320h]
  const unsigned int *v93; // [rsp+D0h] [rbp-318h]
  struct DXGHWQUEUE **v94; // [rsp+D8h] [rbp-310h]
  char *v95; // [rsp+E0h] [rbp-308h]
  struct DXGPROCESS *v96; // [rsp+E8h] [rbp-300h]
  _BYTE v97[16]; // [rsp+F0h] [rbp-2F8h] BYREF
  const unsigned int *v98; // [rsp+100h] [rbp-2E8h]
  void *Src; // [rsp+108h] [rbp-2E0h] BYREF
  PVOID v100; // [rsp+110h] [rbp-2D8h] BYREF
  _BYTE v101[16]; // [rsp+118h] [rbp-2D0h] BYREF
  int v102; // [rsp+128h] [rbp-2C0h]
  _QWORD *v103; // [rsp+130h] [rbp-2B8h]
  struct DXGPROCESS *v104; // [rsp+138h] [rbp-2B0h]
  PVOID P; // [rsp+140h] [rbp-2A8h] BYREF
  _BYTE v106[128]; // [rsp+148h] [rbp-2A0h] BYREF
  int v107; // [rsp+1C8h] [rbp-220h]
  _QWORD v108[4]; // [rsp+1D0h] [rbp-218h] BYREF
  char v109; // [rsp+1F0h] [rbp-1F8h]
  __int64 v110[3]; // [rsp+1F8h] [rbp-1F0h] BYREF
  int v111; // [rsp+210h] [rbp-1D8h]
  PVOID v112; // [rsp+218h] [rbp-1D0h]
  _BYTE v113[24]; // [rsp+220h] [rbp-1C8h] BYREF
  PVOID v114; // [rsp+238h] [rbp-1B0h] BYREF
  _BYTE v115[32]; // [rsp+240h] [rbp-1A8h] BYREF
  unsigned int v116; // [rsp+260h] [rbp-188h]
  _BYTE v117[160]; // [rsp+270h] [rbp-178h] BYREF
  _BYTE v118[144]; // [rsp+310h] [rbp-D8h] BYREF

  v91 = a4;
  Value = a3.Value;
  v98 = a2;
  v87 = a1;
  Src = a6;
  v96 = a7;
  v104 = a7;
  v110[0] = 0LL;
  v111 = 0;
  Elements = (struct DXGHWQUEUE **)PagedPoolZeroedArray<DXGHWQUEUE *,2>::AllocateElements(v110, a4);
  v94 = Elements;
  if ( !Elements )
  {
    v14 = -1073741801;
    goto LABEL_108;
  }
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v97, *a5, a7, Elements, a9);
  if ( !*Elements )
  {
    v14 = -1073741811;
    WdLogSingleEntry3(2LL, v96, *a5, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x failed with invalid hHwQueue 0x%I64x returning 0x%I64x",
      (__int64)v96,
      *a5,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_5;
  }
  v15 = *((_QWORD *)*Elements + 2);
  if ( !*(_BYTE *)(v15 + 442) )
  {
    P = 0LL;
    v107 = 0;
    v103 = (_QWORD *)NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,16,1265072196>::AllocateElements((__int64 *)&P, a4);
    if ( v103 )
    {
      v20 = *(_QWORD *)(*((_QWORD *)*Elements + 2) + 16LL);
      v85 = v20;
      v86 = 0;
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v117, v20, 0, v19, a9);
      if ( !a9 )
      {
        if ( a8
          || *(_DWORD *)(*(_QWORD *)(*((_QWORD *)*Elements + 2) + 16LL) + 464LL) == 2
          || (*((_DWORD *)a7 + 106) & 0x100) != 0 )
        {
          DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v85);
        }
        else if ( !(unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v85) )
        {
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v117);
          if ( v85 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v85);
          if ( P != v106 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v107 = 0;
          DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v97);
          v14 = -2147483631;
          goto LABEL_108;
        }
        v21 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v117, 0LL);
        if ( v21 < 0 )
        {
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v117);
          if ( v85 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v85);
          if ( P != v106 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v107 = 0;
          DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v97);
          v14 = v21;
          goto LABEL_108;
        }
        v20 = v85;
      }
      Global = DXGGLOBAL::GetGlobal();
      DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v83, Global, 0);
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v83);
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)*Elements + 2)
                                                                                         + 16LL)
                                                                             + 16LL)
                                                                 + 16LL)) )
      {
        WdLogSingleEntry1(1LL, 1839LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pBroadcastDxgHwQueue[0]->GetRenderCore()->IsCoreResourceSharedOwner()",
          1839LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( (Value & 0x7FFFFFF8) != 0 )
      {
        v23 = (Value >> 3) & 0xFFFFFFF;
        v14 = -1073741811;
        WdLogSingleEntry3(2LL, *a5, (unsigned int)v23, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"hHwQueue 0x%I64x SignalSyncObject.Flags.Reserved is not Zero, but %I64d, returning 0x%I64x",
          *a5,
          (unsigned int)v23,
          -1073741811LL,
          0LL,
          0LL);
        if ( v84 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v83);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v117);
        v24 = v20 == 0;
        goto LABEL_115;
      }
      if ( (Value & 0x80000000) != 0LL )
      {
        v25 = 1853LL;
        WdLogSingleEntry1(2LL, 1853LL);
        v26 = L"SignalSynchronizationObject is called with the DXGK_SIGNAL_FLAG_INTERNAL0 flag bits.";
LABEL_40:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v26, v25, 0LL, 0LL, 0LL, 0LL);
        goto LABEL_179;
      }
      *v103 = *((_QWORD *)*Elements + 5);
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v113, a7);
      v27 = 1LL;
      v80 = 1;
      if ( v91 > 1 )
      {
        v28 = (unsigned int *)(v103 + 1);
        v92 = (const unsigned int *)(v103 + 1);
        v29 = a5 + 1;
        v93 = a5 + 1;
        v95 = (char *)((char *)Elements - (char *)v103);
        while ( 1 )
        {
          v30 = (*v29 >> 6) & 0xFFFFFF;
          v31 = *v29 >> 30;
          if ( v30 >= *((_DWORD *)a7 + 74) )
            goto LABEL_49;
          v32 = *((_QWORD *)a7 + 35);
          v33 = *(_DWORD *)(v32 + 16LL * v30 + 8);
          if ( v31 != ((v33 >> 5) & 3) )
            goto LABEL_49;
          if ( (v33 & 0x2000) != 0 )
            goto LABEL_49;
          v34 = v33 & 0x1F;
          if ( !v34 )
            goto LABEL_49;
          if ( v34 != 15 )
            break;
          v35 = *(_QWORD *)(v32 + 16LL * v30);
LABEL_50:
          *(_QWORD *)((char *)v28 + (_QWORD)v95) = v35;
          if ( !v35 || *(_QWORD *)(*(_QWORD *)(v35 + 16) + 16LL) != *(_QWORD *)(*((_QWORD *)*v94 + 2) + 16LL) )
          {
            v36 = (unsigned int)v27;
            v14 = -1073741811;
            WdLogSingleEntry4(2LL, *a5, a5[v27], v27, -1073741811LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"hHwQueue 0x%I64x failed to signal with invalid broadcast queue 0x%I64x at index %I64d returning 0x%I64x",
              *a5,
              a5[v36],
              v36,
              -1073741811LL,
              0LL);
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v113);
            if ( v84 )
              DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v83);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v117);
            if ( v20 )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v85);
            v37 = P;
            if ( P != v106 && P )
              goto LABEL_61;
            goto LABEL_62;
          }
          *(_QWORD *)v28 = *(_QWORD *)(v35 + 40);
          v27 = (unsigned int)(v27 + 1);
          v80 = v27;
          v29 = ++v93;
          v28 += 2;
          v92 = v28;
          if ( (unsigned int)v27 >= v91 )
            goto LABEL_63;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        v27 = v80;
        v28 = (unsigned int *)v92;
LABEL_49:
        v35 = 0LL;
        goto LABEL_50;
      }
LABEL_63:
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v113);
      v38 = v87;
      if ( !v87 )
      {
        v25 = 1896LL;
        WdLogSingleEntry1(2LL, 1896LL);
        v26 = L"Can't signal zero sync objects.";
        goto LABEL_40;
      }
      v88 = 0LL;
      v90 = 0;
      v93 = (const unsigned int *)PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::AllocateElements((__int64 *)&v88, v87);
      if ( v93 )
      {
        v81 = 0;
        if ( v38 )
        {
          v95 = 0LL;
          v39 = v98;
          v92 = v98;
          while ( 1 )
          {
            v40 = *v39;
            DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a7 + 248));
            v41 = (v40 >> 6) & 0xFFFFFF;
            v42 = v40 >> 30;
            if ( v41 < *((_DWORD *)a7 + 74)
              && (v43 = *((_QWORD *)a7 + 35), v44 = *(_DWORD *)(v43 + 16LL * v41 + 8), v42 == ((v44 >> 5) & 3))
              && (v44 & 0x2000) == 0
              && (v44 & 0x1F) == 0xB )
            {
              v45 = *(_QWORD *)(v43 + 16LL * v41);
            }
            else
            {
              v45 = 0LL;
            }
            _InterlockedDecrement((volatile signed __int32 *)a7 + 66);
            ExReleasePushLockSharedEx((char *)a7 + 248, 0LL);
            KeLeaveCriticalRegion();
            if ( v45 )
            {
              if ( (*(_DWORD *)(v45 + 72) & 0x10) != 0 )
              {
                v59 = v98;
                WdLogSingleEntry1(2LL, v98[v81]);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"0x%I64x object is opened with NoSignal flag and thus cannot be signaled.",
                  v59[v81],
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                if ( v88 != v89 && v88 )
                  ExFreePoolWithTag(v88, 0);
                v88 = 0LL;
                v90 = 0;
                if ( v84 )
                  DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v83);
                COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v117);
                if ( v85 )
                  DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v85);
                if ( P != v106 && P )
                  ExFreePoolWithTag(P, 0);
                P = 0LL;
                v107 = 0;
                DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v97);
                v14 = -1073741790;
                goto LABEL_108;
              }
              v46 = (__int64)v94;
              v47 = *(_QWORD *)(*((_QWORD *)*v94 + 2) + 16LL);
              v48 = *(_QWORD *)(v45 + 16);
              if ( v48 != v47 )
              {
                WdLogSingleEntry2(2LL, v47, v48);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"SignalSynchronizationObjectFromGpu on device 0x%p attempts to use a sync object opened on a d"
                            "ifferent device 0x%p.",
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v46 + 16LL) + 16LL),
                  *(_QWORD *)(v45 + 16),
                  0LL,
                  0LL,
                  0LL);
                if ( v88 != v89 && v88 )
                  ExFreePoolWithTag(v88, 0);
                v88 = 0LL;
                v90 = 0;
                if ( v84 )
                  DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v83);
                COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v117);
                v58 = v85 == 0;
                goto LABEL_182;
              }
              v49 = *(_QWORD *)(v45 + 32);
              v38 = v87;
              goto LABEL_86;
            }
            v50 = *v92;
            DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a7 + 248));
            v51 = (v50 >> 6) & 0xFFFFFF;
            v52 = v50 >> 30;
            if ( v51 >= *((_DWORD *)a7 + 74) )
              goto LABEL_84;
            v53 = *((_QWORD *)a7 + 35);
            v54 = *(_DWORD *)(v53 + 16LL * v51 + 8);
            if ( v52 != ((v54 >> 5) & 3) )
              goto LABEL_84;
            if ( (v54 & 0x2000) != 0 )
              goto LABEL_84;
            v55 = v54 & 0x1F;
            if ( !v55 )
              goto LABEL_84;
            if ( v55 != 8 )
              break;
            v49 = *(_QWORD *)(v53 + 16LL * v51);
LABEL_85:
            _InterlockedDecrement((volatile signed __int32 *)a7 + 66);
            ExReleasePushLockSharedEx((char *)a7 + 248, 0LL);
            KeLeaveCriticalRegion();
            if ( !v49 )
            {
              v61 = v98;
              v14 = -1073741811;
              v62 = v96;
              WdLogSingleEntry4(2LL, v96, v98[v81], v81, -1073741811LL);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"0x%I64x failed to signal with invalid hSyncObject 0x%I64x at index %I64d returning 0x%I64x",
                (__int64)v62,
                v61[v81],
                v81,
                -1073741811LL,
                0LL);
              if ( v88 != v89 && v88 )
                ExFreePoolWithTag(v88, 0);
              v88 = 0LL;
              v90 = 0;
              if ( v84 )
                DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v83);
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v117);
              v24 = v85 == 0;
LABEL_115:
              if ( !v24 )
                DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v85);
              v37 = P;
              if ( P != v106 && P )
LABEL_61:
                ExFreePoolWithTag(v37, 0);
LABEL_62:
              P = 0LL;
              v107 = 0;
LABEL_5:
              DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v97);
              goto LABEL_108;
            }
LABEL_86:
            v56 = v95;
            *(_QWORD *)&v95[(_QWORD)v93] = v49;
            ++v81;
            v39 = ++v92;
            v95 = v56 + 8;
            if ( v81 >= v38 )
            {
              v20 = v85;
              goto LABEL_88;
            }
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_84:
          v49 = 0LL;
          goto LABEL_85;
        }
LABEL_88:
        v114 = 0LL;
        v116 = 0;
        NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements((__int64 *)&v114, v38);
        v57 = v114;
        if ( v114 )
        {
          if ( a8 )
          {
            v63 = (struct DXGPROCESS *)(8LL * v116);
            v96 = v63;
            v112 = v114;
            v64 = Src;
            if ( (char *)v63 + (unsigned __int64)Src < Src
              || (struct DXGPROCESS *)((char *)v63 + (_QWORD)Src) > (struct DXGPROCESS *)MmUserProbeAddress )
            {
              *(_BYTE *)MmUserProbeAddress = 0;
            }
            memmove(v57, v64, (size_t)v63);
          }
          else
          {
            memmove(v114, Src, 8LL * v116);
          }
          v95 = (char *)v114;
          DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
            (__int64)v108,
            v93,
            v38);
          if ( !v109 )
          {
            v100 = 0LL;
            v102 = 0;
            v65 = (struct DXGPROCESS *)NonPagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,2,1265072196>::AllocateElements(
                                         (__int64 *)&v100,
                                         v38);
            v66 = (__int64)v65;
            v104 = v65;
            v82 = 0;
            if ( v87 )
            {
              v67 = v65;
              v96 = v65;
              v68 = (const unsigned int *)((char *)v93 - (char *)v65);
              v93 = v68;
              while ( 1 )
              {
                v69 = *(DXGSYNCOBJECT **)((char *)v67 + (_QWORD)v68);
                DxgAdapterSyncObject = (int)DXGSYNCOBJECT::GetDxgAdapterSyncObject(
                                              v69,
                                              *(struct ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)*v94 + 2) + 16LL)
                                                                        + 16LL),
                                              (struct DXGADAPTERSYNCOBJECT **)&Src);
                v71 = *((_QWORD *)*v94 + 2);
                if ( (int)DxgAdapterSyncObject < 0 )
                  break;
                VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                                     v69,
                                     *(struct ADAPTER_RENDER **)(*(_QWORD *)(v71 + 16) + 16LL));
                v73 = v96;
                *(_QWORD *)v96 = VidSchSyncObject;
                if ( !VidSchSyncObject )
                {
                  WdLogSingleEntry1(2LL, v69);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"0x%p sync object adapter state is destroyed, thus it cannot be signaled.",
                    (__int64)v69,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  if ( v100 != v101 && v100 )
                    ExFreePoolWithTag(v100, 0);
                  v100 = 0LL;
                  v102 = 0;
                  goto LABEL_172;
                }
                ++v82;
                v67 = (struct DXGPROCESS *)((char *)v73 + 8);
                v96 = v67;
                v68 = v93;
                if ( v82 >= v87 )
                {
                  v66 = (__int64)v104;
                  goto LABEL_150;
                }
              }
              v79 = DxgAdapterSyncObject;
              WdLogSingleEntry3(
                2LL,
                a7,
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v71 + 16) + 16LL) + 16LL),
                DxgAdapterSyncObject);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"0x%I64x failed, failed to create a sync object on logical adapter 0x%I64x returning 0x%I64x",
                (__int64)a7,
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v94 + 2) + 16LL) + 16LL) + 16LL),
                v79,
                0LL,
                0LL);
              if ( v100 != v101 && v100 )
                ExFreePoolWithTag(v100, 0);
              v100 = 0LL;
              v102 = 0;
              DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v108);
              if ( v114 != v115 && v114 )
                ExFreePoolWithTag(v114, 0);
              v114 = 0LL;
              v116 = 0;
              if ( v88 != v89 && v88 )
                ExFreePoolWithTag(v88, 0);
              v88 = 0LL;
              v90 = 0;
              if ( v84 )
                DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v83);
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v117);
              if ( v20 )
                DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v85);
              if ( P != v106 && P )
                ExFreePoolWithTag(P, 0);
              v14 = v79;
              goto LABEL_62;
            }
LABEL_150:
            v74 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, _QWORD, __int64, _DWORD, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v94 + 2) + 16LL) + 16LL) + 736LL) + 8LL)
                                                                                               + 648LL))(
                    v91,
                    v103,
                    v87,
                    v66,
                    Value,
                    v95);
            LODWORD(v92) = v74;
            if ( v74 < 0 )
            {
              v77 = v74;
              v78 = v98;
              WdLogSingleEntry4(2LL, a7, *v98, 0LL, v74);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"0x%I64x failed to signal SyncObject 0x%I64x at index %I64d returning 0x%I64x",
                (__int64)a7,
                *v78,
                0LL,
                v77,
                0LL);
              if ( v100 != v101 && v100 )
                ExFreePoolWithTag(v100, 0);
              v100 = 0LL;
              v102 = 0;
              DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v108);
              if ( v114 != v115 && v114 )
                ExFreePoolWithTag(v114, 0);
              v114 = 0LL;
              v116 = 0;
              if ( v88 != v89 && v88 )
                ExFreePoolWithTag(v88, 0);
              v88 = 0LL;
              v90 = 0;
              if ( v84 )
                DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v83);
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v117);
              if ( v20 )
                DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v85);
              if ( P != v106 && P )
                ExFreePoolWithTag(P, 0);
              v14 = (unsigned int)v92;
              goto LABEL_62;
            }
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0qPR0qqPR3XR3d_EtwWriteTransfer(
                a8 | (2 * (unsigned int)a9),
                v75,
                v76,
                v91,
                (__int64)v94,
                Value,
                v87,
                v66,
                (__int64)v95,
                a8 | (2 * a9));
            if ( v100 != v101 && v100 )
              ExFreePoolWithTag(v100, 0);
            v100 = 0LL;
            v102 = 0;
            DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v108);
            if ( v114 != v115 && v114 )
              ExFreePoolWithTag(v114, 0);
            v114 = 0LL;
            v116 = 0;
            if ( v88 != v89 && v88 )
              ExFreePoolWithTag(v88, 0);
            v88 = 0LL;
            v90 = 0;
            if ( v84 )
              DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v83);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v117);
            if ( v20 )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v85);
            if ( P != v106 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v107 = 0;
            DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v97);
            PagedPoolZeroedArray<DXGHWQUEUE *,2>::DeallocateElements((__int64)v110);
            return 0LL;
          }
          if ( v108[0] )
          {
            WdLogSingleEntry1(2LL, 2018LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"The same sync object handle is passed twice",
              2018LL,
              0LL,
              0LL,
              0LL,
              0LL);
LABEL_172:
            DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v108);
            if ( v114 != v115 && v114 )
              ExFreePoolWithTag(v114, 0);
            v116 = 0;
            v114 = 0LL;
            if ( v88 != v89 && v88 )
              ExFreePoolWithTag(v88, 0);
            v90 = 0;
            v88 = 0LL;
LABEL_179:
            if ( v84 )
              DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v83);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v117);
            v58 = v20 == 0;
LABEL_182:
            if ( !v58 )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v85);
            if ( P != v106 && P )
              ExFreePoolWithTag(P, 0);
            v14 = -1073741811;
            goto LABEL_62;
          }
          DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v108);
          if ( v114 != v115 && v114 )
            ExFreePoolWithTag(v114, 0);
        }
        v116 = 0;
        v114 = 0LL;
      }
      if ( v88 != v89 && v88 )
        ExFreePoolWithTag(v88, 0);
      v88 = 0LL;
      v90 = 0;
      if ( v84 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v83);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v117);
      if ( v20 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v85);
    }
    if ( P != v106 && P )
      ExFreePoolWithTag(P, 0);
    v14 = -1073741801;
    goto LABEL_62;
  }
  v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL) + 16LL);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v118, (struct DXGADAPTER *const)v16, 0LL);
  if ( a9 != (_BYTE)v17 || (v18 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v118, 0LL), v17 = 0LL, v18 >= 0) )
  {
    v14 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(v16 + 4472),
            a7,
            a1,
            a2,
            (struct _D3DDDICB_SIGNALFLAGS)Value,
            v91,
            a5,
            (const unsigned __int64 *)Src,
            (unsigned __int64)v17,
            v17,
            a8,
            (bool)v17,
            (struct DXGDEVICE *)v17);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v118);
    goto LABEL_5;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v118);
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v97);
  v14 = -1073741130;
LABEL_108:
  PagedPoolZeroedArray<DXGHWQUEUE *,2>::DeallocateElements((__int64)v110);
  return v14;
}
