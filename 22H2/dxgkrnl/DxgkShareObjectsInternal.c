/*
 * XREFs of DxgkShareObjectsInternal @ 0x1C01A33C0
 * Callers:
 *     ?AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z @ 0x1C0078E90 (-AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z.c)
 *     DxgkShareObjects @ 0x1C01A3340 (DxgkShareObjects.c)
 *     ?VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037AF60 (-VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusShareObjectWithHost@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C03928A0 (-VmBusShareObjectWithHost@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0007894 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0008040 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C000A8D0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0019220 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     ??1DXGPROCESSDDILOCK@@QEAA@XZ @ 0x1C0023F50 (--1DXGPROCESSDDILOCK@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?AddReference@DXGSYNCOBJECT@@QEAAJXZ @ 0x1C002623C (-AddReference@DXGSYNCOBJECT@@QEAAJXZ.c)
 *     memmove @ 0x1C0028340 (memmove.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C00540B0 (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0054234 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C01A37D8 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C01A3C78 (-CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C01A5A90 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C01EE324 (-CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C03265E4 (-CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAP.c)
 */

__int64 __fastcall DxgkShareObjectsInternal(
        __int64 a1,
        KPROCESSOR_MODE a2,
        struct _KPROCESS *a3,
        unsigned int a4,
        char *Src,
        __int64 a6,
        ACCESS_MASK DesiredAccess,
        _QWORD *a8,
        PVOID *a9)
{
  __int64 v9; // rsi
  _QWORD *v10; // r14
  struct DXGPROCESS *Current; // r12
  char *v12; // rcx
  __int64 v13; // r13
  _QWORD *v14; // r10
  unsigned int v15; // edx
  unsigned int EntryType; // edi
  __int64 v17; // rcx
  DXGKEYEDMUTEX *v18; // r14
  struct DXGSYNCOBJECT *v19; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  char v24; // r13
  __int64 v25; // rcx
  __int64 inserted; // rdi
  struct _KPROCESS *v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned int v31; // r8d
  __int64 v32; // r8
  const wchar_t *v33; // r9
  __int64 v34; // r8
  __int64 v35; // r8
  __int64 v36; // rsi
  DXGGLOBAL *v37; // rax
  __int64 v38; // rsi
  unsigned int v39; // eax
  char *v40; // r8
  unsigned int v41; // ecx
  int v42; // ecx
  __int64 v43; // rdx
  unsigned int v44; // eax
  unsigned int v45; // ecx
  int v46; // ecx
  _QWORD *v47; // rax
  int Handle; // [rsp+28h] [rbp-160h]
  char v50; // [rsp+51h] [rbp-137h]
  char v51; // [rsp+52h] [rbp-136h]
  PVOID Object; // [rsp+60h] [rbp-128h] BYREF
  char v53[8]; // [rsp+68h] [rbp-120h] BYREF
  char v54; // [rsp+70h] [rbp-118h]
  HANDLE v55; // [rsp+78h] [rbp-110h] BYREF
  unsigned int v56; // [rsp+80h] [rbp-108h]
  __int64 v57; // [rsp+88h] [rbp-100h]
  struct DXGPROCESS *v58; // [rsp+90h] [rbp-F8h]
  char *v59; // [rsp+98h] [rbp-F0h]
  __int64 v60; // [rsp+A0h] [rbp-E8h]
  int v61; // [rsp+A8h] [rbp-E0h] BYREF
  __int64 v62; // [rsp+B0h] [rbp-D8h]
  char v63; // [rsp+B8h] [rbp-D0h]
  PRKPROCESS PROCESS; // [rsp+C0h] [rbp-C8h]
  PVOID *v65; // [rsp+C8h] [rbp-C0h]
  _BYTE v66[24]; // [rsp+D0h] [rbp-B8h] BYREF
  _BYTE v67[24]; // [rsp+E8h] [rbp-A0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+100h] [rbp-88h] BYREF
  __int64 v69; // [rsp+130h] [rbp-58h] BYREF
  unsigned int v70; // [rsp+138h] [rbp-50h]

  v9 = a4;
  v56 = a4;
  PROCESS = a3;
  v50 = a1;
  v57 = a6;
  v10 = a8;
  v60 = (__int64)a8;
  v65 = a9;
  v61 = -1;
  v62 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v63 = 1;
    v61 = 2074;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 2074);
  }
  else
  {
    v63 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v61, 2074);
  Object = 0LL;
  v55 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v51 = 0;
  Current = DXGPROCESS::GetCurrent();
  v58 = Current;
  if ( !Current )
  {
    LODWORD(inserted) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v33 = L"Invalid process context. Returning 0x%I64x";
LABEL_44:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v33, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_45;
  }
  if ( (unsigned int)(v9 - 1) > 2 )
  {
    LODWORD(inserted) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Input handle count is out of range. Returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_29;
  }
  v69 = 0LL;
  v70 = 0;
  if ( v50 == 1 )
  {
    v12 = &Src[4 * v9];
    if ( v12 < Src || (unsigned __int64)v12 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(&v69, Src, 4 * v9);
  if ( !a6 )
  {
    LODWORD(inserted) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v33 = L"Invalid object attributes. Returning 0x%I64x";
    goto LABEL_44;
  }
  v13 = (unsigned int)v69;
  if ( !(_DWORD)v69 )
  {
    LODWORD(inserted) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v33 = L"Input object handle is NULL. Returning 0x%I64x";
    goto LABEL_44;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v67, Current);
  v14 = (_QWORD *)((char *)Current + 280);
  v59 = (char *)Current + 280;
  v15 = ((unsigned int)v13 >> 6) & 0xFFFFFF;
  if ( v15 < *((_DWORD *)Current + 74)
    && (v31 = *(_DWORD *)(*v14 + 16LL * v15 + 8), (unsigned int)v13 >> 30 == ((v31 >> 5) & 3))
    && (v31 & 0x2000) == 0
    && (v31 & 0x1F) != 0 )
  {
    EntryType = HMGRTABLE::GetEntryType(v14);
  }
  else
  {
    EntryType = 0;
  }
  DXGPROCESSDDILOCK::~DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v67);
  switch ( EntryType )
  {
    case 4u:
      v18 = 0LL;
      v19 = 0LL;
      Global = DXGGLOBAL::GetGlobal();
      DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v53, Global, 0);
      if ( v56 <= 1 )
      {
LABEL_15:
        LOBYTE(Handle) = a2;
        v23 = (unsigned int)v13;
        v24 = v50;
        LOBYTE(v22) = v50;
        LODWORD(inserted) = CreateSharedResourceNtObject(v22, v21, v23, 0LL, v57, Handle, &Object);
        if ( (int)inserted >= 0 )
        {
          if ( v18 || v19 )
          {
            v47 = Object;
            *((_QWORD *)Object + 3) = v18;
            v47[4] = v19;
          }
          if ( v54 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v53);
          v10 = (_QWORD *)v60;
          goto LABEL_21;
        }
        if ( Object )
        {
          WdLogSingleEntry1(1LL, 813LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pObject == NULL", 813LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( v18 )
          DXGKEYEDMUTEX::ReleaseReference(v18);
        if ( v19 )
        {
          v37 = DXGGLOBAL::GetGlobal();
          DXGGLOBAL::DestroySyncObject(v37, v19, 0);
        }
LABEL_62:
        if ( v54 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v53);
LABEL_29:
        if ( (int)inserted >= 0 )
          goto LABEL_30;
        goto LABEL_45;
      }
      if ( v56 != 3 )
      {
        LODWORD(inserted) = -1073741811;
        WdLogSingleEntry2(3LL, v13, -1073741811LL);
        goto LABEL_62;
      }
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v53);
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v66, v58);
      v38 = HIDWORD(v69);
      v39 = (HIDWORD(v69) >> 6) & 0xFFFFFF;
      v40 = v59;
      if ( v39 < *((_DWORD *)v59 + 4) )
      {
        v41 = *(_DWORD *)(*(_QWORD *)v59 + 16LL * v39 + 8);
        if ( HIDWORD(v69) >> 30 == ((v41 >> 5) & 3) && (v41 & 0x2000) == 0 )
        {
          v42 = v41 & 0x1F;
          if ( v42 )
          {
            if ( v42 == 9 )
            {
              v18 = *(DXGKEYEDMUTEX **)(*(_QWORD *)v59 + 16LL * v39);
              goto LABEL_72;
            }
            WdLogSingleEntry1(2LL, 316LL);
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 316LL, 0LL, 0LL, 0LL, 0LL);
            v40 = v59;
          }
        }
      }
      v18 = 0LL;
LABEL_72:
      if ( !v18 )
      {
        v43 = v38;
        goto LABEL_75;
      }
      if ( (*((_DWORD *)v18 + 43) & 1) == 0 )
      {
        _InterlockedIncrement(&dword_1C01410B4);
        LODWORD(inserted) = -1073741811;
        WdLogSingleEntry2(2LL, v18, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Cannot share object: Keyed mutex 0x%I64x does not use NT security sharing. Returning 0x%I64x.",
          (__int64)v18,
          -1073741811LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_77;
      }
      v44 = (v70 >> 6) & 0xFFFFFF;
      if ( v44 < *((_DWORD *)v40 + 4) )
      {
        v45 = *(_DWORD *)(*(_QWORD *)v40 + 16LL * v44 + 8);
        if ( v70 >> 30 == ((v45 >> 5) & 3) && (v45 & 0x2000) == 0 )
        {
          v46 = v45 & 0x1F;
          if ( v46 )
          {
            if ( v46 == 8 )
            {
              v19 = *(struct DXGSYNCOBJECT **)(*(_QWORD *)v40 + 16LL * v44);
              goto LABEL_86;
            }
            WdLogSingleEntry1(2LL, 316LL);
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 316LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
      }
      v19 = 0LL;
LABEL_86:
      if ( v19 )
      {
        if ( (*((_DWORD *)v19 + 51) & 2) != 0 )
        {
          DXGKEYEDMUTEX::AcquireReference(v18);
          DXGPROCESSDDILOCK::~DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v66);
          DXGSYNCOBJECT::AddReference(v19);
          goto LABEL_15;
        }
        _InterlockedIncrement(&dword_1C01410B4);
        LODWORD(inserted) = -1073741811;
        WdLogSingleEntry2(2LL, v19, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Cannot share object: Shared sync object 0x%I64x does not use NT security sharing. Returning 0x%I64x.",
          (__int64)v19,
          -1073741811LL,
          0LL,
          0LL,
          0LL);
LABEL_77:
        DXGPROCESSDDILOCK::~DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v66);
        goto LABEL_62;
      }
      v43 = v70;
LABEL_75:
      LODWORD(inserted) = -1073741811;
      WdLogSingleEntry2(3LL, v43, -1073741811LL);
      goto LABEL_77;
    case 0xBu:
    case 8u:
      if ( (_DWORD)v9 == 1 )
      {
        v32 = (unsigned int)v13;
        v24 = v50;
        LOBYTE(v17) = v50;
        LODWORD(inserted) = CreateSharedSyncNtObject(v17, EntryType, v32, 0LL, v57, a2, &Object);
        if ( (int)inserted < 0 )
        {
          if ( !Object )
            goto LABEL_29;
          v36 = 853LL;
          WdLogSingleEntry1(1LL, 853LL);
LABEL_57:
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pObject == NULL", v36, 0LL, 0LL, 0LL, 0LL);
          goto LABEL_29;
        }
LABEL_21:
        v27 = PROCESS;
        if ( PROCESS && v27 != (struct _KPROCESS *)PsGetCurrentProcess(v25) )
        {
          KeStackAttachProcess(v27, &ApcState);
          v51 = 1;
        }
        inserted = ObInsertObject(Object, 0LL, DesiredAccess, 0, 0LL, &v55);
        if ( v51 )
          KeUnstackDetachProcess(&ApcState);
        if ( (int)inserted < 0 )
        {
          WdLogSingleEntry3(3LL, Object, v58, inserted);
        }
        else if ( v24 == 1 )
        {
          if ( (unsigned __int64)v10 >= MmUserProbeAddress )
            v10 = (_QWORD *)MmUserProbeAddress;
          *v10 = v55;
        }
        else
        {
          *v10 = v55;
          if ( v65 )
            *v65 = Object;
        }
        goto LABEL_29;
      }
      break;
    case 0xEu:
      if ( (_DWORD)v9 == 1 )
      {
        v35 = (unsigned int)v13;
        v24 = v50;
        LOBYTE(v17) = v50;
        LODWORD(inserted) = CreateSharedProtectedSessionNtObject(v17, 14LL, v35);
        if ( (int)inserted < 0 )
        {
          if ( !Object )
            goto LABEL_29;
          v36 = 876LL;
          WdLogSingleEntry1(1LL, 876LL);
          goto LABEL_57;
        }
        goto LABEL_21;
      }
      break;
    default:
      v34 = (int)EntryType;
      LODWORD(inserted) = -1073741811;
      WdLogSingleEntry3(3LL, v13, v34, -1073741811LL);
      goto LABEL_45;
  }
  LODWORD(inserted) = -1073741811;
  WdLogSingleEntry2(3LL, v13, -1073741811LL);
LABEL_45:
  if ( v55 )
    ObCloseHandle(v55, a2);
LABEL_30:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v61);
  if ( v63 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v61);
  return (unsigned int)inserted;
}
