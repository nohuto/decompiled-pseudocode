/*
 * XREFs of DxgkShareObjectsInternal @ 0x1C0186240
 * Callers:
 *     ?AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z @ 0x1C00781F0 (-AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z.c)
 *     DxgkShareObjects @ 0x1C01861C0 (DxgkShareObjects.c)
 *     ?VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C03767F0 (-VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusShareObjectWithHost@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C038E030 (-VmBusShareObjectWithHost@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0003A50 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000717C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0007344 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0018D48 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0024424 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0053210 (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0053394 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C01851D4 (-CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C0186640 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0186E18 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C01DE444 (-CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C0321BA4 (-CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAP.c)
 */

__int64 __fastcall DxgkShareObjectsInternal(
        __int64 a1,
        char a2,
        struct _KPROCESS *a3,
        unsigned int a4,
        char *Src,
        __int64 a6,
        ACCESS_MASK DesiredAccess,
        _QWORD *a8,
        PVOID *a9)
{
  __int64 v9; // r13
  _QWORD *v10; // r14
  struct DXGPROCESS *Current; // rsi
  char *v12; // rcx
  __int64 inserted; // rdi
  unsigned int v14; // edx
  unsigned int EntryType; // esi
  __int64 v16; // rcx
  DXGKEYEDMUTEX *v17; // r14
  __int64 v18; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v20; // rdx
  KPROCESSOR_MODE v21; // r13
  __int64 v22; // rcx
  struct _KPROCESS *v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned int v27; // r8d
  const wchar_t *v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rsi
  unsigned int v35; // eax
  char *v36; // r8
  unsigned int v37; // ecx
  int v38; // ecx
  __int64 v39; // r13
  unsigned int v40; // eax
  unsigned int v41; // ecx
  int v42; // ecx
  DXGGLOBAL *v43; // rax
  _QWORD *v44; // rax
  char v46; // [rsp+51h] [rbp-127h]
  char v47; // [rsp+52h] [rbp-126h]
  PVOID Object; // [rsp+60h] [rbp-118h] BYREF
  char v49[8]; // [rsp+68h] [rbp-110h] BYREF
  char v50; // [rsp+70h] [rbp-108h]
  HANDLE Handle; // [rsp+78h] [rbp-100h] BYREF
  __int64 v52; // [rsp+80h] [rbp-F8h]
  struct DXGPROCESS *v53; // [rsp+88h] [rbp-F0h]
  char *v54; // [rsp+90h] [rbp-E8h]
  __int64 v55; // [rsp+98h] [rbp-E0h]
  int v56; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 v57; // [rsp+A8h] [rbp-D0h]
  char v58; // [rsp+B0h] [rbp-C8h]
  PRKPROCESS PROCESS; // [rsp+B8h] [rbp-C0h]
  PVOID *v60; // [rsp+C0h] [rbp-B8h]
  _BYTE v61[24]; // [rsp+C8h] [rbp-B0h] BYREF
  _BYTE v62[24]; // [rsp+E0h] [rbp-98h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+F8h] [rbp-80h] BYREF
  __int64 v64; // [rsp+128h] [rbp-50h] BYREF
  unsigned int v65; // [rsp+130h] [rbp-48h]

  v9 = a4;
  PROCESS = a3;
  v46 = a1;
  v52 = a6;
  v10 = a8;
  v55 = (__int64)a8;
  v60 = a9;
  v56 = -1;
  v57 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v58 = 1;
    v56 = 2074;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 2074);
  }
  else
  {
    v58 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v56, 2074);
  Object = 0LL;
  Handle = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v47 = 0;
  Current = DXGPROCESS::GetCurrent();
  v53 = Current;
  if ( !Current )
  {
    LODWORD(inserted) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v28 = L"Invalid process context. Returning 0x%I64x";
LABEL_44:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v28, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_46;
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
LABEL_107:
    v21 = a2;
    goto LABEL_29;
  }
  v64 = 0LL;
  v65 = 0;
  if ( v46 == 1 )
  {
    v12 = &Src[4 * v9];
    if ( v12 < Src || (unsigned __int64)v12 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(&v64, Src, 4 * v9);
  if ( !a6 )
  {
    LODWORD(inserted) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v28 = L"Invalid object attributes. Returning 0x%I64x";
    goto LABEL_44;
  }
  inserted = (unsigned int)v64;
  if ( !(_DWORD)v64 )
  {
    LODWORD(inserted) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v28 = L"Input object handle is NULL. Returning 0x%I64x";
    goto LABEL_44;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v62, Current);
  v54 = (char *)Current + 280;
  v14 = ((unsigned int)inserted >> 6) & 0xFFFFFF;
  if ( v14 < *((_DWORD *)Current + 74)
    && (v27 = *(_DWORD *)(*((_QWORD *)Current + 35) + 16LL * v14 + 8), (unsigned int)inserted >> 30 == ((v27 >> 5) & 3))
    && (v27 & 0x2000) == 0
    && (v27 & 0x1F) != 0 )
  {
    EntryType = HMGRTABLE::GetEntryType((char *)Current + 280);
  }
  else
  {
    EntryType = 0;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v62);
  switch ( EntryType )
  {
    case 4u:
      v17 = 0LL;
      v18 = 0LL;
      Global = DXGGLOBAL::GetGlobal();
      DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v49, Global, 0);
      if ( (unsigned int)v9 <= 1 )
      {
LABEL_15:
        v21 = a2;
        LODWORD(inserted) = CreateSharedResourceNtObject(v46, v20, inserted, 0LL, v52, a2, &Object);
        if ( (int)inserted < 0 )
        {
          if ( Object )
          {
            WdLogSingleEntry1(1LL, 812LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pObject == NULL", 812LL, 0LL, 0LL, 0LL, 0LL);
          }
          if ( v17 )
            DXGKEYEDMUTEX::ReleaseReference(v17);
          if ( v18 )
          {
            v43 = DXGGLOBAL::GetGlobal();
            DXGGLOBAL::DestroySyncObject(v43, (struct DXGSYNCOBJECT *)v18, 0);
          }
          if ( v50 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v49);
LABEL_29:
          if ( (int)inserted >= 0 )
            goto LABEL_30;
          goto LABEL_47;
        }
        if ( v17 || v18 )
        {
          v44 = Object;
          *((_QWORD *)Object + 3) = v17;
          v44[4] = v18;
        }
        if ( v50 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v49);
        v10 = (_QWORD *)v55;
LABEL_21:
        v23 = PROCESS;
        if ( PROCESS && v23 != (struct _KPROCESS *)PsGetCurrentProcess(v22) )
        {
          KeStackAttachProcess(v23, &ApcState);
          v47 = 1;
        }
        inserted = ObInsertObject(Object, 0LL, DesiredAccess, 0, 0LL, &Handle);
        if ( v47 )
          KeUnstackDetachProcess(&ApcState);
        if ( (int)inserted < 0 )
        {
          WdLogSingleEntry3(3LL, Object, v53, inserted);
        }
        else if ( v46 == 1 )
        {
          if ( (unsigned __int64)v10 >= MmUserProbeAddress )
            v10 = (_QWORD *)MmUserProbeAddress;
          *v10 = Handle;
        }
        else
        {
          *v10 = Handle;
          if ( v60 )
            *v60 = Object;
        }
        goto LABEL_29;
      }
      if ( (_DWORD)v9 != 3 )
      {
        v32 = inserted;
        LODWORD(inserted) = -1073741811;
        WdLogSingleEntry2(3LL, v32, -1073741811LL);
        goto LABEL_66;
      }
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v49);
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v61, v53);
      v34 = HIDWORD(v64);
      v35 = (HIDWORD(v64) >> 6) & 0xFFFFFF;
      v36 = v54;
      if ( v35 < *((_DWORD *)v54 + 4) )
      {
        v37 = *(_DWORD *)(*(_QWORD *)v54 + 16LL * v35 + 8);
        if ( HIDWORD(v64) >> 30 == ((v37 >> 5) & 3) && (v37 & 0x2000) == 0 )
        {
          v38 = v37 & 0x1F;
          if ( v38 )
          {
            if ( v38 == 9 )
            {
              v17 = *(DXGKEYEDMUTEX **)(*(_QWORD *)v54 + 16LL * v35);
              goto LABEL_76;
            }
            WdLogSingleEntry1(2LL, 267LL);
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
            v36 = v54;
          }
        }
      }
      v17 = 0LL;
LABEL_76:
      if ( !v17 )
      {
        v33 = v34;
LABEL_64:
        LODWORD(inserted) = -1073741811;
        WdLogSingleEntry2(3LL, v33, -1073741811LL);
LABEL_65:
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v61);
LABEL_66:
        if ( v50 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v49);
        goto LABEL_107;
      }
      if ( (*((_DWORD *)v17 + 43) & 1) == 0 )
      {
        _InterlockedIncrement(&dword_1C013D254);
        LODWORD(inserted) = -1073741811;
        WdLogSingleEntry2(2LL, v17, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Cannot share object: Keyed mutex 0x%I64x does not use NT security sharing. Returning 0x%I64x.",
          (__int64)v17,
          -1073741811LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_65;
      }
      v39 = v65;
      v40 = (v65 >> 6) & 0xFFFFFF;
      if ( v40 < *((_DWORD *)v36 + 4) )
      {
        v41 = *(_DWORD *)(*(_QWORD *)v36 + 16LL * v40 + 8);
        if ( v65 >> 30 == ((v41 >> 5) & 3) && (v41 & 0x2000) == 0 )
        {
          v42 = v41 & 0x1F;
          if ( v42 )
          {
            if ( v42 == 8 )
            {
              v18 = *(_QWORD *)(*(_QWORD *)v36 + 16LL * v40);
              goto LABEL_87;
            }
            WdLogSingleEntry1(2LL, 267LL);
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
      }
      v18 = 0LL;
LABEL_87:
      if ( v18 )
      {
        if ( (*(_DWORD *)(v18 + 204) & 2) != 0 )
        {
          DXGKEYEDMUTEX::AcquireReference(v17);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v61);
          _InterlockedIncrement((volatile signed __int32 *)(v18 + 24));
          LODWORD(inserted) = v64;
          goto LABEL_15;
        }
        _InterlockedIncrement(&dword_1C013D254);
        LODWORD(inserted) = -1073741811;
        WdLogSingleEntry2(2LL, v18, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Cannot share object: Shared sync object 0x%I64x does not use NT security sharing. Returning 0x%I64x.",
          v18,
          -1073741811LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_65;
      }
      v33 = v39;
      goto LABEL_64;
    case 0xBu:
    case 8u:
      if ( (_DWORD)v9 == 1 )
      {
        v21 = a2;
        LOBYTE(v16) = v46;
        LODWORD(inserted) = CreateSharedSyncNtObject(v16, EntryType, (unsigned int)inserted, 0LL, v52, a2, &Object);
        if ( (int)inserted >= 0 )
          goto LABEL_21;
        if ( !Object )
          goto LABEL_29;
        v31 = 852LL;
        WdLogSingleEntry1(1LL, 852LL);
        goto LABEL_60;
      }
      break;
    case 0xEu:
      if ( (_DWORD)v9 == 1 )
      {
        v21 = a2;
        LOBYTE(v16) = v46;
        LODWORD(inserted) = CreateSharedProtectedSessionNtObject(v16, 14LL, (unsigned int)inserted);
        if ( (int)inserted >= 0 )
          goto LABEL_21;
        if ( !Object )
          goto LABEL_29;
        v31 = 875LL;
        WdLogSingleEntry1(1LL, 875LL);
LABEL_60:
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pObject == NULL", v31, 0LL, 0LL, 0LL, 0LL);
        goto LABEL_29;
      }
      break;
    default:
      v30 = inserted;
      LODWORD(inserted) = -1073741811;
      WdLogSingleEntry3(3LL, v30, (int)EntryType, -1073741811LL);
      goto LABEL_46;
  }
  v29 = inserted;
  LODWORD(inserted) = -1073741811;
  WdLogSingleEntry2(3LL, v29, -1073741811LL);
LABEL_46:
  v21 = a2;
LABEL_47:
  if ( Handle )
    ObCloseHandle(Handle, v21);
LABEL_30:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
  if ( v58 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v56);
  return (unsigned int)inserted;
}
