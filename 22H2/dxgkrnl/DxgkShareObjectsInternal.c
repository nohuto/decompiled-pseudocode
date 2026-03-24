/*
 * XREFs of DxgkShareObjectsInternal @ 0x1C012AA60
 * Callers:
 *     ?AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z @ 0x1C0064890 (-AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z.c)
 *     DxgkShareObjects @ 0x1C012A9E0 (DxgkShareObjects.c)
 *     ?VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023EEA0 (-VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C02B6310 (-VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0005090 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0005218 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0008BB0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0008C04 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008F14 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0040C14 (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0040F30 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0124588 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C012A790 (-CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C012AE78 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C01686E4 (-CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C027762C (-CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAP.c)
 */

__int64 __fastcall DxgkShareObjectsInternal(
        __int64 a1,
        char a2,
        struct _KPROCESS *a3,
        unsigned int a4,
        char *Src,
        __int64 a6,
        ACCESS_MASK DesiredAccess,
        HANDLE *a8,
        PVOID *a9)
{
  __int64 v9; // r15
  KPROCESSOR_MODE v10; // r14
  char v11; // r12
  _QWORD *v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct DXGPROCESS *Current; // rsi
  char *v20; // rcx
  __int64 inserted; // rbx
  char *v22; // r12
  unsigned int v23; // edx
  unsigned int EntryType; // esi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  DXGKEYEDMUTEX *v28; // r14
  __int64 v29; // rsi
  PERESOURCE *Global; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  struct DXGPROCESS *v34; // r15
  char v35; // r12
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  struct _KPROCESS *v40; // rbx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rcx
  __int64 v44; // r8
  unsigned int v46; // r8d
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  PERESOURCE *v61; // rax
  _QWORD *v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // rax
  char v66; // [rsp+41h] [rbp-117h]
  char v67; // [rsp+42h] [rbp-116h]
  PVOID Object; // [rsp+50h] [rbp-108h] BYREF
  char v69[8]; // [rsp+58h] [rbp-100h] BYREF
  char v70; // [rsp+60h] [rbp-F8h]
  HANDLE Handle; // [rsp+68h] [rbp-F0h] BYREF
  __int64 v72; // [rsp+70h] [rbp-E8h]
  struct DXGPROCESS *v73; // [rsp+78h] [rbp-E0h]
  int v74; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v75; // [rsp+88h] [rbp-D0h]
  char v76; // [rsp+90h] [rbp-C8h]
  PRKPROCESS PROCESS; // [rsp+98h] [rbp-C0h]
  PVOID *v78; // [rsp+A0h] [rbp-B8h]
  _BYTE v79[24]; // [rsp+A8h] [rbp-B0h] BYREF
  _BYTE v80[24]; // [rsp+C0h] [rbp-98h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+D8h] [rbp-80h] BYREF
  __int64 v82; // [rsp+108h] [rbp-50h] BYREF
  unsigned int v83; // [rsp+110h] [rbp-48h]

  v9 = a4;
  PROCESS = a3;
  v10 = a2;
  v11 = a1;
  v66 = a1;
  v72 = a6;
  v12 = a8;
  v78 = a9;
  v74 = -1;
  v75 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v76 = 1;
    v74 = 2074;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 2074);
  }
  else
  {
    v76 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v74, 2074LL);
  Object = 0LL;
  Handle = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v67 = 0;
  Current = DXGPROCESS::GetCurrent(v14, v13, v15, v16);
  v73 = Current;
  if ( !Current )
    goto LABEL_45;
  if ( (unsigned int)(v9 - 1) > 2 )
  {
    v64 = WdLogNewEntry5_WdError(v18, v17);
    LODWORD(inserted) = -1073741811;
    *(_QWORD *)(v64 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v64);
    goto LABEL_30;
  }
  v82 = 0LL;
  v83 = 0;
  if ( v11 == 1 )
  {
    v20 = &Src[4 * v9];
    if ( v20 < Src || (unsigned __int64)v20 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(&v82, Src, 4 * v9);
  if ( !v72 || (inserted = (unsigned int)v82, !(_DWORD)v82) )
  {
LABEL_45:
    v47 = WdLogNewEntry5_WdError(v18, v17);
    LODWORD(inserted) = -1073741811;
    *(_QWORD *)(v47 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v47);
    goto LABEL_46;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v80, (struct _KTHREAD **)Current);
  v22 = (char *)Current + 240;
  v23 = ((unsigned int)inserted >> 6) & 0xFFFFFF;
  if ( v23 < *((_DWORD *)Current + 64)
    && (v46 = *(_DWORD *)(*(_QWORD *)v22 + 16LL * v23 + 8), (unsigned int)inserted >> 30 == ((v46 >> 5) & 3))
    && (v46 & 0x2000) == 0
    && (v46 & 0x1F) != 0 )
  {
    EntryType = HMGRTABLE::GetEntryType((char *)Current + 240);
  }
  else
  {
    EntryType = 0;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v80);
  if ( EntryType == 4 )
  {
    v28 = 0LL;
    v29 = 0LL;
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v26, v25);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v69, Global, 0);
    if ( (unsigned int)v9 <= 1 )
    {
      v34 = v73;
LABEL_16:
      v35 = v66;
      LOBYTE(v32) = v66;
      LODWORD(inserted) = CreateSharedResourceNtObject(v32, v31, (unsigned int)inserted, 0LL, v72, a2, &Object);
      if ( (int)inserted >= 0 )
      {
        if ( v28 || v29 )
        {
          v62 = Object;
          *((_QWORD *)Object + 3) = v28;
          v62[4] = v29;
        }
        if ( v70 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v69);
        v10 = a2;
        goto LABEL_22;
      }
      if ( Object )
      {
        v60 = WdLogNewEntry5_WdAssertion(v37, v36);
        *(_QWORD *)(v60 + 24) = 767LL;
        WdLogEvent5_WdAssertion(v60);
      }
      if ( v28 )
        DXGKEYEDMUTEX::ReleaseReference(v28, v36);
      if ( v29 )
      {
        v61 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v37, v36);
        DXGGLOBAL::DestroySyncObject(v61, (struct DXGSYNCOBJECT *)v29, 0);
      }
LABEL_64:
      if ( v70 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v69);
      v10 = a2;
LABEL_30:
      if ( (int)inserted >= 0 )
        goto LABEL_31;
      goto LABEL_46;
    }
    if ( (_DWORD)v9 != 3 )
    {
      v50 = WdLogNewEntry5_WdWarning(v32, v31, v33);
      *(_QWORD *)(v50 + 24) = inserted;
      LODWORD(inserted) = -1073741811;
      *(_QWORD *)(v50 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v50);
      goto LABEL_64;
    }
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v69, v31);
    v34 = v73;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v79, (struct _KTHREAD **)v73);
    inserted = HIDWORD(v82);
    v54 = (HIDWORD(v82) >> 6) & 0xFFFFFF;
    v55 = HIDWORD(v82) >> 30;
    if ( (unsigned int)v54 < *((_DWORD *)v22 + 4) )
    {
      v53 = *(_QWORD *)v22;
      v52 = *(unsigned int *)(*(_QWORD *)v22 + 16 * v54 + 8);
      if ( (_DWORD)v55 == ((*(_DWORD *)(*(_QWORD *)v22 + 16 * v54 + 8) >> 5) & 3)
        && (v52 & 0x2000) == 0
        && (v52 & 0x1F) != 0 )
      {
        v52 &= 0x1Fu;
        if ( (_BYTE)v52 == 9 )
        {
          v28 = *(DXGKEYEDMUTEX **)(v53 + 16LL * (unsigned int)v54);
LABEL_74:
          if ( !v28 )
            goto LABEL_62;
          if ( (*((_DWORD *)v28 + 41) & 1) == 0 )
          {
            _InterlockedIncrement(&dword_1C00B33D4);
            v57 = WdLogNewEntry5_WdError(v52, v55);
            *(_QWORD *)(v57 + 24) = v28;
LABEL_79:
            LODWORD(inserted) = -1073741811;
            *(_QWORD *)(v57 + 32) = -1073741811LL;
            WdLogEvent5_WdError(v57);
            goto LABEL_63;
          }
          inserted = v83;
          v58 = (v83 >> 6) & 0xFFFFFF;
          v55 = v83 >> 30;
          if ( (unsigned int)v58 < *((_DWORD *)v22 + 4) )
          {
            v53 = *(_QWORD *)v22;
            v52 = *(unsigned int *)(*(_QWORD *)v22 + 16 * v58 + 8);
            if ( (_DWORD)v55 == ((*(_DWORD *)(*(_QWORD *)v22 + 16 * v58 + 8) >> 5) & 3)
              && (v52 & 0x2000) == 0
              && (v52 & 0x1F) != 0 )
            {
              v52 &= 0x1Fu;
              if ( (_BYTE)v52 == 8 )
              {
                v29 = *(_QWORD *)(v53 + 16LL * (unsigned int)v58);
LABEL_87:
                if ( v29 )
                {
                  if ( (*(_DWORD *)(v29 + 196) & 2) != 0 )
                  {
                    DXGKEYEDMUTEX::AcquireReference(v28, v55);
                    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v79);
                    _InterlockedIncrement((volatile signed __int32 *)(v29 + 24));
                    LODWORD(inserted) = v82;
                    goto LABEL_16;
                  }
                  _InterlockedIncrement(&dword_1C00B33D4);
                  v57 = WdLogNewEntry5_WdError(v52, v55);
                  *(_QWORD *)(v57 + 24) = v29;
                  goto LABEL_79;
                }
LABEL_62:
                v51 = WdLogNewEntry5_WdWarning(v52, v55, v53);
                *(_QWORD *)(v51 + 24) = inserted;
                LODWORD(inserted) = -1073741811;
                *(_QWORD *)(v51 + 32) = -1073741811LL;
                WdLogEvent5_WdWarning(v51);
LABEL_63:
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v79);
                goto LABEL_64;
              }
              v59 = WdLogNewEntry5_WdError(v52, v55);
              *(_QWORD *)(v59 + 24) = 316LL;
              WdLogEvent5_WdError(v59);
            }
          }
          v29 = 0LL;
          goto LABEL_87;
        }
        v56 = WdLogNewEntry5_WdError(v52, v55);
        *(_QWORD *)(v56 + 24) = 316LL;
        WdLogEvent5_WdError(v56);
      }
    }
    v28 = 0LL;
    goto LABEL_74;
  }
  if ( EntryType == 11 || EntryType == 8 )
  {
    if ( (_DWORD)v9 == 1 )
    {
      v35 = v66;
      LOBYTE(v26) = v66;
      LODWORD(inserted) = CreateSharedSyncNtObject(v26, EntryType, (unsigned int)inserted, 0LL, v72, v10, &Object);
      if ( (int)inserted < 0 )
      {
        if ( !Object )
          goto LABEL_30;
        v49 = WdLogNewEntry5_WdAssertion(v37, v36);
        *(_QWORD *)(v49 + 24) = 807LL;
        goto LABEL_59;
      }
LABEL_40:
      v34 = v73;
LABEL_22:
      v40 = PROCESS;
      if ( PROCESS && v40 != (struct _KPROCESS *)PsGetCurrentProcess(v37, v36, v38, v39) )
      {
        KeStackAttachProcess(v40, &ApcState);
        v67 = 1;
      }
      inserted = ObInsertObject(Object, 0LL, DesiredAccess, 0, 0LL, &Handle);
      if ( v67 )
        KeUnstackDetachProcess(&ApcState);
      if ( (int)inserted < 0 )
      {
        v63 = (_QWORD *)WdLogNewEntry5_WdWarning(v41, v36, v42);
        v63[3] = Object;
        v63[4] = v34;
        v63[5] = inserted;
        WdLogEvent5_WdWarning(v63);
      }
      else if ( v35 == 1 )
      {
        if ( (unsigned __int64)a8 >= MmUserProbeAddress )
          v12 = (_QWORD *)MmUserProbeAddress;
        *v12 = Handle;
      }
      else
      {
        *a8 = Handle;
        if ( v78 )
          *v78 = Object;
      }
      goto LABEL_30;
    }
LABEL_51:
    v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27);
    v48[3] = inserted;
    LODWORD(inserted) = -1073741811;
    v48[4] = -1073741811LL;
    goto LABEL_52;
  }
  v25 = 14LL;
  if ( EntryType == 14 )
  {
    if ( (_DWORD)v9 == 1 )
    {
      v35 = v66;
      LOBYTE(v26) = v66;
      LODWORD(inserted) = CreateSharedProtectedSessionNtObject(v26, 14LL, (unsigned int)inserted);
      if ( (int)inserted < 0 )
      {
        if ( !Object )
          goto LABEL_30;
        v49 = WdLogNewEntry5_WdAssertion(v37, v36);
        *(_QWORD *)(v49 + 24) = 830LL;
LABEL_59:
        WdLogEvent5_WdAssertion(v49);
        goto LABEL_30;
      }
      goto LABEL_40;
    }
    goto LABEL_51;
  }
  v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, 14LL, v27);
  v48[3] = inserted;
  v48[4] = (int)EntryType;
  LODWORD(inserted) = -1073741811;
  v48[5] = -1073741811LL;
LABEL_52:
  WdLogEvent5_WdWarning(v48);
LABEL_46:
  if ( Handle )
    ObCloseHandle(Handle, v10);
LABEL_31:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v74, v36);
  if ( v76 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v43, &EventProfilerExit, v44, v74);
  return (unsigned int)inserted;
}
