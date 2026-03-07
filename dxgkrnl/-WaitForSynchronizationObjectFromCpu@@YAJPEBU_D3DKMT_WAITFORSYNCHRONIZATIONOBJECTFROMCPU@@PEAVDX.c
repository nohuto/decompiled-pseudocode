__int64 __fastcall WaitForSynchronizationObjectFromCpu(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *a1,
        struct DXGPROCESS *a2,
        PERESOURCE *a3,
        void *a4)
{
  _BYTE *v4; // rdi
  struct _KEVENT **v5; // r12
  struct _KEVENT *v9; // rbx
  volatile signed __int64 *Blink; // rcx
  volatile signed __int64 *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct DXGGLOBAL *Global; // rax
  _BYTE *v15; // r8
  int v16; // eax
  HANDLE hAsyncEvent; // rcx
  int v18; // eax
  NTSTATUS v19; // ebx
  unsigned __int64 ObjectCount; // rbx
  _BYTE *v21; // rbx
  unsigned __int64 v22; // rbx
  UINT v23; // ebx
  __int64 v24; // r12
  volatile signed __int32 *v25; // r15
  const D3DKMT_HANDLE *ObjectHandleArray; // rax
  D3DKMT_HANDLE v27; // ebx
  unsigned int v28; // eax
  __int64 v29; // rdx
  int v30; // ecx
  __int64 v31; // rbx
  struct DXGDEVICE *v32; // r8
  _BYTE *v33; // rcx
  __int64 v34; // r8
  int v35; // r10d
  unsigned __int64 i; // rbx
  unsigned int v37; // r9d
  struct ADAPTER_RENDER **v38; // r11
  _BYTE *v39; // r15
  __int64 v40; // rbx
  __int64 v41; // rcx
  __int64 v42; // rax
  _QWORD *v43; // rcx
  unsigned __int64 v44; // rbx
  struct _KEVENT *v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  struct DXGADAPTER *v49; // rcx
  struct DXGADAPTER *v50; // rcx
  PRKEVENT v51; // rcx
  __int64 v53; // rcx
  __int64 v54; // r8
  PVOID v55; // rcx
  NTSTATUS v56; // eax
  struct _KEVENT *v57; // rax
  unsigned __int64 v58; // r15
  PVOID v59; // rcx
  unsigned __int64 v60; // r15
  PVOID v61; // rcx
  unsigned __int64 v62; // r15
  __int64 v63; // rdi
  __int64 v64; // r14
  int Timeout; // [rsp+20h] [rbp-E0h]
  PLARGE_INTEGER Timeouta; // [rsp+20h] [rbp-E0h]
  int HandleInformation; // [rsp+28h] [rbp-D8h]
  __int64 v68; // [rsp+40h] [rbp-C0h]
  struct DXGGLOBAL *v69; // [rsp+50h] [rbp-B0h] BYREF
  char v70; // [rsp+58h] [rbp-A8h]
  PVOID Object; // [rsp+60h] [rbp-A0h]
  PVOID v72; // [rsp+68h] [rbp-98h]
  _BYTE v73[32]; // [rsp+70h] [rbp-90h] BYREF
  int v74; // [rsp+90h] [rbp-70h]
  PVOID P; // [rsp+98h] [rbp-68h]
  _BYTE Src[32]; // [rsp+A0h] [rbp-60h] BYREF
  int v77; // [rsp+C0h] [rbp-40h]
  PRKEVENT Event; // [rsp+C8h] [rbp-38h] BYREF
  struct DXGDEVICE *v79; // [rsp+D0h] [rbp-30h] BYREF
  char v80; // [rsp+D8h] [rbp-28h]
  __int64 v81; // [rsp+E0h] [rbp-20h]
  _BYTE *v82; // [rsp+E8h] [rbp-18h]
  struct DXGPROCESS *v83; // [rsp+F0h] [rbp-10h] BYREF
  void *Base; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v85[16]; // [rsp+100h] [rbp+0h] BYREF
  size_t NumOfElements; // [rsp+110h] [rbp+10h]
  __int16 v87; // [rsp+118h] [rbp+18h]
  unsigned __int64 v88; // [rsp+120h] [rbp+20h]
  void *v89; // [rsp+128h] [rbp+28h]
  __int64 v90; // [rsp+130h] [rbp+30h]
  PVOID v91; // [rsp+138h] [rbp+38h] BYREF
  PVOID Pool2; // [rsp+140h] [rbp+40h]
  _QWORD v93[4]; // [rsp+148h] [rbp+48h] BYREF
  __int128 v94; // [rsp+168h] [rbp+68h]
  char v95[8]; // [rsp+188h] [rbp+88h] BYREF
  __int64 v96; // [rsp+190h] [rbp+90h]
  struct DXGADAPTER *v97; // [rsp+198h] [rbp+98h]
  char v98; // [rsp+1A0h] [rbp+A0h]
  char *v99; // [rsp+1A8h] [rbp+A8h]
  char v100[8]; // [rsp+1C8h] [rbp+C8h] BYREF
  __int64 v101; // [rsp+1D0h] [rbp+D0h]
  struct DXGADAPTER *v102; // [rsp+1D8h] [rbp+D8h]
  char v103; // [rsp+1E0h] [rbp+E0h]
  __int64 v104; // [rsp+1E8h] [rbp+E8h]
  struct DXGDEVICE *v105; // [rsp+208h] [rbp+108h]
  char v106; // [rsp+210h] [rbp+110h]

  v4 = 0LL;
  v89 = a4;
  v83 = a2;
  v5 = (struct _KEVENT **)(a3 + 2);
  Event = 0LL;
  Object = 0LL;
  Pool2 = 0LL;
  v79 = (struct DXGDEVICE *)a3;
  v80 = 0;
  v81 = (__int64)(a3 + 2);
  if ( a3 )
  {
    v9 = *v5;
    if ( !KeReadStateEvent(*v5 + 4) )
      KeWaitForSingleObject(&v9[4], Executive, 0, 0, 0LL);
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceSharedLite(a3[17], 0) )
    {
      DXGADAPTER::TryWakeUpFromD3State((DXGADAPTER *)(*v5)->Header.WaitListHead.Blink);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v53, (const EVENT_DESCRIPTOR *)"g", v54, 40);
      ExAcquireResourceSharedLite(a3[17], 1u);
      DXGADAPTER::EnableD3Requests((DXGADAPTER *)(*v5)->Header.WaitListHead.Blink);
    }
    v80 = 1;
  }
  else
  {
    v81 = 16LL;
  }
  Blink = (volatile signed __int64 *)(*v5)->Header.WaitListHead.Blink;
  v97 = (struct DXGADAPTER *)Blink;
  v98 = 0;
  v99 = 0LL;
  if ( Blink )
  {
    _InterlockedIncrement64(Blink + 3);
    v96 = -1LL;
  }
  v11 = (volatile signed __int64 *)(*v5)->Header.WaitListHead.Blink;
  v102 = (struct DXGADAPTER *)v11;
  v103 = 0;
  v104 = 0LL;
  if ( v11 )
  {
    _InterlockedIncrement64(v11 + 3);
    v101 = -1LL;
  }
  v105 = (struct DXGDEVICE *)a3;
  v106 = 0;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v97 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v97 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v12, (const EVENT_DESCRIPTOR *)"g", v13, 72);
      KeWaitForSingleObject((char *)v97 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v97, 0LL);
  }
  v99 = 0LL;
  v98 = 1;
  if ( *((_DWORD *)v105 + 152) != 1 )
  {
    COREACCESS::Release((COREACCESS *)v95);
    if ( v106 )
      COREACCESS::Release((COREACCESS *)v100);
    v19 = -1073741130;
    COREACCESS::~COREACCESS((COREACCESS *)v100);
    COREACCESS::~COREACCESS((COREACCESS *)v95);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v79);
    return (unsigned int)v19;
  }
  Global = DXGGLOBAL::GetGlobal();
  v69 = Global;
  v70 = 0;
  if ( !Global )
  {
    WdLogSingleEntry1(1LL, 2758LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pGlobal != NULL", 2758LL, 0LL, 0LL, 0LL, 0LL);
    Global = 0LL;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 75)) )
  {
    WdLogSingleEntry1(1LL, 2763LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!m_pGlobal->IsSyncObjectLockSharedOwner() || bAllowRecursive",
      2763LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(*((PERESOURCE *)v69 + 75), 1u);
  v70 = 1;
  v15 = 0LL;
  v72 = 0LL;
  v74 = 0;
  P = 0LL;
  v77 = 0;
  if ( !v89 )
  {
    v16 = *((_DWORD *)a2 + 106);
    if ( (v16 & 0x10) != 0 && (v16 & 0x100) == 0 && a1->hAsyncEvent )
    {
      Pool2 = (PVOID)ExAllocatePool2(64LL, 40LL, 1265072196LL);
      v55 = Pool2;
      if ( !Pool2 )
      {
        WdLogSingleEntry1(6LL, 4833LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate memory for DXG_SIGNAL_GUEST_CPU_EVENT",
          4833LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v19 = -1073741801;
        P = 0LL;
        v77 = 0;
        v72 = 0LL;
        v74 = 0;
LABEL_116:
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v69);
        COREACCESS::~COREACCESS((COREACCESS *)v100);
        COREACCESS::~COREACCESS((COREACCESS *)v95);
        DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v79);
        return (unsigned int)v19;
      }
      *((_QWORD *)Pool2 + 1) = a1->hAsyncEvent;
      v89 = v55;
      *((_BYTE *)v55 + 16) = 1;
      *((_BYTE *)v55 + 19) = 1;
      DXG_SIGNAL_GUEST_CPU_EVENT::AcquireReference((struct DXG_SIGNAL_GUEST_CPU_EVENT *)v55);
    }
    else
    {
      hAsyncEvent = a1->hAsyncEvent;
      if ( hAsyncEvent )
      {
        v91 = 0LL;
        v56 = ObReferenceObjectByHandle(hAsyncEvent, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &v91, 0LL);
        v45 = (struct _KEVENT *)v91;
        v19 = v56;
        Object = v91;
        if ( v56 < 0 )
        {
          WdLogSingleEntry2(3LL, a1->hAsyncEvent, v56);
          P = 0LL;
          v77 = 0;
          v72 = 0LL;
          v74 = 0;
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v69);
          COREACCESS::~COREACCESS((COREACCESS *)v100);
          COREACCESS::~COREACCESS((COREACCESS *)v95);
          DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v79);
          goto LABEL_189;
        }
      }
      else
      {
        v93[0] = 48LL;
        v93[3] = 512LL;
        v93[1] = 0LL;
        v93[2] = 0LL;
        v94 = 0LL;
        v18 = ObCreateObject(0LL, ExEventObjectType, v93, 0LL, 0LL, 24, 0, 0, &Event);
        v19 = v18;
        if ( v18 < 0 )
        {
          WdLogSingleEntry1(3LL, v18);
          P = 0LL;
          v77 = 0;
          v72 = 0LL;
          v74 = 0;
          goto LABEL_116;
        }
        KeInitializeEvent(Event, SynchronizationEvent, 0);
        Object = Event;
      }
    }
    v15 = v72;
    v4 = P;
  }
  ObjectCount = a1->ObjectCount;
  if ( (unsigned int)ObjectCount > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / ObjectCount < 8 )
      goto LABEL_123;
    v15 = (_BYTE *)ExAllocatePool2(64LL, 8 * ObjectCount, 1265072196LL);
    v72 = v15;
  }
  else
  {
    v15 = v73;
    v72 = v73;
    if ( !(_DWORD)ObjectCount )
      goto LABEL_28;
    memset(v73, 0, 8LL * (unsigned int)ObjectCount);
    v15 = v72;
  }
  v4 = P;
LABEL_28:
  v74 = ObjectCount;
  v21 = v15;
  v82 = v15;
  if ( !v15 )
  {
LABEL_123:
    v19 = -1073741801;
    if ( v4 != Src && v4 )
    {
      ExFreePoolWithTag(v4, 0);
      v15 = v72;
    }
    P = 0LL;
    v77 = 0;
    if ( v15 == v73 || !v15 )
      goto LABEL_129;
LABEL_128:
    ExFreePoolWithTag(v15, 0);
LABEL_129:
    v72 = 0LL;
    v74 = 0;
LABEL_131:
    if ( !v70 )
      goto LABEL_188;
    goto LABEL_187;
  }
  if ( (*((_DWORD *)a2 + 106) & 0x180) != 0 && a1->ObjectCount == 1 && !*a1->ObjectHandleArray )
  {
    v57 = *v5;
    v83 = 0LL;
    ((void (__fastcall *)(PERESOURCE, _QWORD, struct DXGPROCESS **, _BYTE *))v57[31].Header.WaitListHead.Blink->Blink[61].Flink)(
      a3[99],
      0LL,
      &v83,
      v15);
    goto LABEL_66;
  }
  v22 = a1->ObjectCount;
  if ( (unsigned int)v22 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v22 < 8 )
      goto LABEL_138;
    v4 = (_BYTE *)ExAllocatePool2(256LL, 8 * v22, 1265072196LL);
    P = v4;
  }
  else
  {
    v4 = Src;
    P = Src;
    if ( !(_DWORD)v22 )
      goto LABEL_34;
    memset(Src, 0, 8LL * (unsigned int)v22);
    v4 = P;
  }
  v15 = v72;
LABEL_34:
  v77 = v22;
  if ( !v4 )
  {
LABEL_138:
    v19 = -1073741801;
    if ( v4 != Src && v4 )
    {
      ExFreePoolWithTag(v4, 0);
      v15 = v72;
    }
    P = 0LL;
    v77 = 0;
    if ( v15 == v73 || !v15 )
      goto LABEL_129;
    goto LABEL_128;
  }
  v23 = a1->ObjectCount;
  v24 = 0LL;
  if ( v23 )
  {
    v25 = (volatile signed __int32 *)((char *)a2 + 248);
    while ( 1 )
    {
      v90 = (unsigned int)v24;
      ObjectHandleArray = a1->ObjectHandleArray;
      v88 = 4 * v24;
      v27 = ObjectHandleArray[v24];
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)v25);
      v28 = (v27 >> 6) & 0xFFFFFF;
      if ( v28 >= *((_DWORD *)v83 + 74) )
        break;
      v29 = 16LL * v28 + *((_QWORD *)v83 + 35);
      if ( ((v27 >> 25) & 0x60) != (*(_BYTE *)(v29 + 8) & 0x60) )
        break;
      if ( (*(_DWORD *)(v29 + 8) & 0x2000) != 0 )
        break;
      v30 = *(_DWORD *)(v29 + 8) & 0x1F;
      if ( !v30 )
        break;
      if ( v30 != 11 )
      {
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        _InterlockedDecrement(v25 + 4);
        ExReleasePushLockSharedEx(v25, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_158;
      }
      v31 = *(_QWORD *)v29;
      _InterlockedDecrement(v25 + 4);
      ExReleasePushLockSharedEx(v25, 0LL);
      KeLeaveCriticalRegion();
      if ( !v31 )
        goto LABEL_158;
      if ( (*(_DWORD *)(v31 + 72) & 0x20) != 0 )
      {
        v60 = v88;
        WdLogSingleEntry1(2LL, a1->ObjectHandleArray[v88 / 4]);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%I64x object is opened as signal only and thus cannot be waited on.",
          *(unsigned int *)((char *)a1->ObjectHandleArray + v60),
          0LL,
          0LL,
          0LL,
          0LL);
        v61 = P;
        v19 = -1073741790;
        if ( P == Src || !P )
          goto LABEL_155;
LABEL_154:
        ExFreePoolWithTag(v61, 0);
LABEL_155:
        v59 = v72;
        P = 0LL;
        v77 = 0;
        if ( v72 != v73 && v72 )
LABEL_149:
          ExFreePoolWithTag(v59, 0);
LABEL_150:
        v72 = 0LL;
        v74 = 0;
        if ( !v70 )
        {
LABEL_188:
          COREACCESS::~COREACCESS((COREACCESS *)v100);
          COREACCESS::~COREACCESS((COREACCESS *)v95);
          DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v79);
          v45 = (struct _KEVENT *)Object;
          goto LABEL_189;
        }
LABEL_187:
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v69);
        goto LABEL_188;
      }
      v32 = *(struct DXGDEVICE **)(v31 + 16);
      if ( v32 != (struct DXGDEVICE *)a3 )
      {
        v58 = v88;
        WdLogSingleEntry3(2LL, a1->ObjectHandleArray[v88 / 4], v32, a3);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%x object belongs to a different device 0x%p that 0x%p passed to the wait from CPU call.",
          *(unsigned int *)((char *)a1->ObjectHandleArray + v58),
          *(_QWORD *)(v31 + 16),
          (__int64)a3,
          0LL,
          0LL);
        v19 = -1073741811;
        if ( P != Src && P )
          ExFreePoolWithTag(P, 0);
        v59 = v72;
        P = 0LL;
        v77 = 0;
        if ( v72 == v73 || !v72 )
          goto LABEL_150;
        goto LABEL_149;
      }
      *(_QWORD *)&v4[8 * v24] = *(_QWORD *)(v31 + 32);
      v24 = (unsigned int)(v24 + 1);
      v23 = a1->ObjectCount;
      if ( (unsigned int)v24 >= v23 )
        goto LABEL_48;
    }
    _InterlockedDecrement(v25 + 4);
    ExReleasePushLockSharedEx(v25, 0LL);
    KeLeaveCriticalRegion();
LABEL_158:
    v19 = -1073741811;
    v62 = v88;
    v63 = v90;
    v64 = (__int64)v83;
    WdLogSingleEntry4(2LL, v83, a1->ObjectHandleArray[v88 / 4], v90, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x passed an invalid wait for hSyncObject 0x%I64x at index %I64d returning 0x%I64x",
      v64,
      *(unsigned int *)((char *)a1->ObjectHandleArray + v62),
      v63,
      -1073741811LL,
      0LL);
    if ( P != Src && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v77 = 0;
    if ( v72 != v73 && v72 )
      ExFreePoolWithTag(v72, 0);
    v72 = 0LL;
    v74 = 0;
    goto LABEL_131;
  }
LABEL_48:
  LODWORD(NumOfElements) = 0;
  v33 = 0LL;
  Base = 0LL;
  if ( v23 > 2 )
  {
    v34 = 0LL;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v23 < 8 )
      goto LABEL_52;
    v33 = (_BYTE *)ExAllocatePool2(256LL, 8LL * v23, 1265072196LL);
    Base = v33;
  }
  else
  {
    v33 = v85;
    Base = v85;
    if ( v23 )
    {
      memset(v85, 0, 8LL * v23);
      v33 = Base;
    }
  }
  LODWORD(NumOfElements) = v23;
  v34 = v23;
LABEL_52:
  v87 = 1;
  if ( !v33 )
  {
    v19 = -1073741801;
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)&Base);
    if ( P != Src && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v77 = 0;
    if ( v72 != v73 && v72 )
      ExFreePoolWithTag(v72, 0);
    v72 = 0LL;
    v74 = 0;
    if ( !v70 )
      goto LABEL_188;
    goto LABEL_187;
  }
  memmove(v33, v4, 8 * v34);
  qsort(Base, (unsigned int)NumOfElements, 8uLL, (int (__cdecl *)(const void *, const void *))DxgkComparePointers);
  v35 = NumOfElements;
  for ( i = 0LL; i < (unsigned int)NumOfElements; ++i )
  {
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(*((_QWORD *)Base + i) + 32LL));
    v35 = NumOfElements;
  }
  v37 = 0;
  v87 = 256;
  if ( a1->ObjectCount )
  {
    v38 = (struct ADAPTER_RENDER **)v81;
    v39 = v82;
    while ( 1 )
    {
      v40 = v37;
      v41 = *(_QWORD *)&v4[8 * v37];
      v42 = (*(_DWORD *)(v41 + 204) & 4) != 0
          ? *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject((DXGSYNCOBJECTCA *)v41, *v38) + 4)
          : *(_QWORD *)(v41 + 328);
      *(_QWORD *)&v39[8 * v40] = v42;
      if ( !v42 )
        break;
      if ( ++v37 >= a1->ObjectCount )
        goto LABEL_61;
    }
    WdLogSingleEntry1(2LL, a1->ObjectHandleArray[v40]);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%x object adapter state has been destroyed, so it cannot be waited on.",
      a1->ObjectHandleArray[v40],
      0LL,
      0LL,
      0LL,
      0LL);
    v19 = -1073741811;
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)&Base);
    v61 = P;
    if ( P != Src && P )
      goto LABEL_154;
    goto LABEL_155;
  }
LABEL_61:
  v43 = Base;
  if ( Base )
  {
    v44 = 0LL;
    if ( v35 )
    {
      do
      {
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v43[v44++] + 32LL));
        v43 = Base;
      }
      while ( v44 < (unsigned int)NumOfElements );
    }
  }
  if ( v43 != (_QWORD *)v85 && v43 )
    ExFreePoolWithTag(v43, 0);
  v5 = (struct _KEVENT **)v81;
  v21 = v82;
LABEL_66:
  if ( Event )
    ObfReferenceObject(Event);
  v45 = (struct _KEVENT *)Object;
  LOBYTE(HandleInformation) = v89 == 0LL;
  LOBYTE(Timeout) = (a1->Flags.Value & 1) != 0;
  v19 = ((__int64 (__fastcall *)(_QWORD, _BYTE *, const UINT64 *, PVOID, int, int, PERESOURCE, void *))(*v5)[30].Header.WaitListHead.Blink->Blink[41].Blink)(
          a1->ObjectCount,
          v21,
          a1->FenceValueArray,
          Object,
          Timeout,
          HandleInformation,
          a3[100],
          v89);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v68) = a1->Flags.0;
    LODWORD(Timeouta) = a1->ObjectCount;
    McTemplateK0pqPR1XR1pq_EtwWriteTransfer(v47, v46, v48, a3, Timeouta, v82, a1->FenceValueArray, a1->hAsyncEvent, v68);
  }
  if ( P != Src && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v77 = 0;
  if ( v72 != v73 && v72 )
    ExFreePoolWithTag(v72, 0);
  v72 = 0LL;
  v74 = 0;
  if ( v70 )
  {
    v70 = 0;
    ExReleaseResourceLite(*((PERESOURCE *)v69 + 75));
    KeLeaveCriticalRegion();
  }
  v49 = v102;
  if ( v102 )
  {
    if ( v103 )
    {
      COREACCESS::Release((COREACCESS *)v100);
      v49 = v102;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v49 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v102 + 2), v102);
  }
  v50 = v97;
  if ( v97 )
  {
    if ( v98 )
    {
      v98 = 0;
      v50 = v97;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v97 + 23) )
      {
        DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v97, v99);
        v50 = v97;
      }
      v99 = 0LL;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v97 + 2), v97);
  }
  if ( v80 )
  {
    ExReleaseResourceLite(a3[17]);
    KeLeaveCriticalRegion();
  }
  if ( v19 < 0 )
  {
    if ( Event )
      ObfDereferenceObject(Event);
LABEL_189:
    if ( !v45 )
      goto LABEL_191;
    goto LABEL_190;
  }
  if ( Object )
  {
    v51 = Event;
    if ( Object == Event )
    {
      do
      {
        v19 = KeWaitForSingleObject(Object, Executive, 0, 1u, 0LL);
        if ( PsIsThreadTerminating(KeGetCurrentThread()) )
        {
          WdLogSingleEntry1(3LL, 5051LL);
          v19 = -1073741130;
          goto LABEL_190;
        }
      }
      while ( v19 == 257 );
      if ( v19 >= 0 )
        goto LABEL_95;
      WdLogSingleEntry1(1LL, 5060LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Failed to wait for event!", 5060LL, 0LL, 0LL, 0LL, 0LL);
LABEL_190:
      KeSetEvent(v45, 0, 0);
      ObfDereferenceObject(v45);
LABEL_191:
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0x4B677844u);
      return (unsigned int)v19;
    }
  }
  else
  {
LABEL_95:
    v51 = Event;
  }
  if ( v51 )
    ObfDereferenceObject(v51);
  return 0LL;
}
