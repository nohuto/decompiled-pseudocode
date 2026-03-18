/*
 * XREFs of ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1C0373C78
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0307E5C (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C00150D4 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00151DC (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0023F34 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0025738 (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     memmove @ 0x1C0028340 (memmove.c)
 *     ?ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z @ 0x1C0048768 (-ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x1C0054BF8 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     McTemplateK0pxq_EtwWriteTransfer @ 0x1C00583B8 (McTemplateK0pxq_EtwWriteTransfer.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005BE64 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?VailSendCompositionObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z @ 0x1C0362D00 (-VailSendCompositionObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z.c)
 *     ?VailSendRemoteObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z @ 0x1C0363D78 (-VailSendRemoteObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C0375CA8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?SendVmBusMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI0PEAI@Z @ 0x1C037641C (-SendVmBusMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI0PEAI@Z.c)
 *     ?SendVmBusMessageAsync@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI@Z @ 0x1C0376500 (-SendVmBusMessageAsync@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall DxgkpSendTestVmBusCommand(struct DXGADAPTER *a1, struct _D3DKMT_DRT_VMBUS_COMMAND *a2, __int64 a3)
{
  __int64 v5; // rsi
  _BYTE *Pool2; // r12
  struct DXG_VMBUS_CHANNEL_BASE *v7; // r13
  __int64 v8; // rbx
  const wchar_t *v9; // r9
  int v10; // ecx
  int v11; // ecx
  unsigned __int64 v12; // rdx
  __int64 v13; // rbx
  const wchar_t *v14; // r9
  size_t v15; // r8
  char *v16; // rdx
  unsigned int v17; // eax
  _BYTE *v18; // rbx
  unsigned int v19; // edx
  __int64 v20; // rcx
  DXGSESSIONMGR *v21; // rbx
  unsigned int v22; // eax
  DXGSESSIONDATA *v23; // rbx
  unsigned int v24; // eax
  __int64 v25; // rcx
  unsigned int v26; // eax
  int v27; // eax
  __int64 v28; // rcx
  unsigned int v29; // eax
  __int64 v30; // rcx
  unsigned int v31; // eax
  struct _KPROCESS *v32; // rbx
  struct DXGPROCESS *v33; // rax
  struct DXGPROCESS *v34; // r13
  __int64 v35; // rcx
  DXGSESSIONMGR *v36; // rbx
  unsigned int v37; // eax
  DXGSESSIONDATA *v38; // rbx
  unsigned int v39; // eax
  __int64 v40; // rcx
  unsigned int v41; // eax
  size_t v42; // rcx
  __int64 v43; // rcx
  DXGSESSIONMGR *v44; // rbx
  unsigned int v45; // eax
  DXGSESSIONDATA *v46; // rbx
  unsigned int v47; // eax
  __int64 v48; // rcx
  unsigned int v49; // eax
  int v50; // eax
  __int64 v51; // rcx
  unsigned int v52; // eax
  __int64 v53; // rcx
  unsigned int v54; // eax
  struct _KPROCESS *v55; // rbx
  struct DXGPROCESS *v56; // rax
  struct DXGPROCESS *v57; // r13
  __int64 v58; // rcx
  DXGSESSIONMGR *v59; // rbx
  unsigned int v60; // eax
  DXGSESSIONDATA *v61; // rbx
  unsigned int v62; // eax
  __int64 v63; // rcx
  unsigned int v64; // eax
  const EVENT_DESCRIPTOR *v65; // rdx
  __int64 v66; // rbx
  int v67; // eax
  __int64 v68; // rcx
  __int64 v69; // r8
  const EVENT_DESCRIPTOR *v70; // rdx
  PVOID v71; // rbx
  int v72; // ecx
  int v73; // ecx
  int v74; // ecx
  __int64 v75; // rcx
  DXGSESSIONMGR *v76; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  unsigned int v79; // eax
  __int64 v80; // rcx
  unsigned int v81; // eax
  int v82; // eax
  __int64 v83; // rcx
  unsigned int v84; // eax
  __int64 v85; // rcx
  unsigned int v86; // eax
  struct _KPROCESS *v87; // rbx
  struct DXGPROCESS *ProcessDxgProcess; // rax
  struct DXGPROCESS *v89; // r13
  __int64 v90; // rcx
  DXGSESSIONMGR *v91; // rbx
  unsigned int v92; // eax
  DXGSESSIONDATA *v93; // rbx
  unsigned int v94; // eax
  __int64 v95; // rcx
  unsigned int v96; // eax
  __int64 v97; // rcx
  DXGSESSIONMGR *v98; // rbx
  unsigned int v99; // eax
  DXGSESSIONDATA *v100; // rbx
  unsigned int v101; // eax
  __int64 v102; // rcx
  unsigned int v103; // eax
  int v104; // eax
  __int64 v105; // rcx
  unsigned int v106; // eax
  __int64 v107; // rcx
  unsigned int v108; // eax
  struct _KPROCESS *v109; // rbx
  struct DXGPROCESS *v110; // rax
  struct DXGPROCESS *v111; // r13
  __int64 v112; // rcx
  DXGSESSIONMGR *v113; // rbx
  unsigned int v114; // eax
  DXGSESSIONDATA *v115; // rbx
  unsigned int v116; // eax
  __int64 v117; // rcx
  unsigned int v118; // eax
  void *v119; // rcx
  NTSTATUS v120; // eax
  const EVENT_DESCRIPTOR *v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r8
  const EVENT_DESCRIPTOR *v124; // rdx
  char *v125; // r9
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-420h]
  char v128; // [rsp+50h] [rbp-3F8h]
  unsigned int v129; // [rsp+54h] [rbp-3F4h] BYREF
  void *Src; // [rsp+58h] [rbp-3F0h]
  _BYTE *v131; // [rsp+60h] [rbp-3E8h]
  PVOID Object; // [rsp+68h] [rbp-3E0h] BYREF
  PVOID v133; // [rsp+70h] [rbp-3D8h] BYREF
  PVOID v134; // [rsp+78h] [rbp-3D0h] BYREF
  PVOID v135; // [rsp+80h] [rbp-3C8h] BYREF
  PVOID v136; // [rsp+88h] [rbp-3C0h] BYREF
  _BYTE v137[16]; // [rsp+90h] [rbp-3B8h] BYREF
  _BYTE v138[16]; // [rsp+A0h] [rbp-3A8h] BYREF
  _BYTE v139[16]; // [rsp+B0h] [rbp-398h] BYREF
  _BYTE v140[16]; // [rsp+C0h] [rbp-388h] BYREF
  _BYTE v141[16]; // [rsp+D0h] [rbp-378h] BYREF
  _BYTE v142[16]; // [rsp+E0h] [rbp-368h] BYREF
  _BYTE v143[16]; // [rsp+F0h] [rbp-358h] BYREF
  _BYTE v144[16]; // [rsp+100h] [rbp-348h] BYREF
  void *v145[2]; // [rsp+110h] [rbp-338h] BYREF
  unsigned int v146; // [rsp+120h] [rbp-328h]
  struct _KAPC_STATE ApcState; // [rsp+230h] [rbp-218h] BYREF
  char v148; // [rsp+260h] [rbp-1E8h]
  struct _KAPC_STATE v149; // [rsp+268h] [rbp-1E0h] BYREF
  char v150; // [rsp+298h] [rbp-1B0h]
  struct _KAPC_STATE v151; // [rsp+2A0h] [rbp-1A8h] BYREF
  char v152; // [rsp+2D0h] [rbp-178h]
  struct _KAPC_STATE v153; // [rsp+2D8h] [rbp-170h] BYREF
  char v154; // [rsp+308h] [rbp-140h]
  _BYTE v155[128]; // [rsp+310h] [rbp-138h] BYREF
  _BYTE v156[128]; // [rsp+390h] [rbp-B8h] BYREF

  LODWORD(v5) = 0;
  Pool2 = 0LL;
  v131 = 0LL;
  Src = 0LL;
  v129 = 0;
  v7 = 0LL;
  LOBYTE(a3) = 0;
  v128 = 0;
  *(_OWORD *)v145 = 0LL;
  v146 = 0;
  if ( !a2 )
  {
    v8 = 15918LL;
    WdLogSingleEntry1(2LL, 15918LL);
    v9 = L"NULL vmbus command";
LABEL_3:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v9, v8, 0LL, 0LL, 0LL, 0LL);
    LODWORD(v5) = -1073741811;
LABEL_214:
    WdLogSingleEntry1(4LL, (int)v5);
    goto LABEL_215;
  }
  v10 = *((_DWORD *)a2 + 3);
  if ( !v10 )
  {
    v7 = (struct DXG_VMBUS_CHANNEL_BASE *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 214);
    if ( !v7 )
    {
      v8 = 15930LL;
      WdLogSingleEntry1(2LL, 15930LL);
      goto LABEL_15;
    }
LABEL_16:
    v128 = 1;
    LOBYTE(a3) = 1;
    goto LABEL_17;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( !a1 )
    {
      v8 = 15940LL;
      WdLogSingleEntry1(2LL, 15940LL);
      v9 = L"Adapter is expected";
      goto LABEL_3;
    }
    v7 = (struct DXGADAPTER *)((char *)a1 + 4472);
    if ( a1 == (struct DXGADAPTER *)-4472LL )
    {
      v8 = 15948LL;
      WdLogSingleEntry1((unsigned int)((_DWORD)v7 + 2), 15948LL);
LABEL_15:
      v9 = L"Invalid VM bus channel";
      goto LABEL_3;
    }
    goto LABEL_16;
  }
  if ( (unsigned int)(v11 - 1) >= 2 )
  {
    v8 = 15960LL;
    WdLogSingleEntry1(2LL, 15960LL);
    v9 = L"Invalid channel type";
    goto LABEL_3;
  }
LABEL_17:
  v12 = *((_QWORD *)a2 + 3);
  if ( !v12 )
    goto LABEL_35;
  if ( !*((_QWORD *)a2 + 2) )
  {
    v8 = 15974LL;
    WdLogSingleEntry1(2LL, 15974LL);
    v9 = L"Invalid input buffer";
    goto LABEL_3;
  }
  if ( (_BYTE)a3 )
  {
    DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v145, v7, v12, 0LL, 0LL, 0LL);
    if ( !v145[0] )
      goto LABEL_215;
    if ( a1 )
      *((_QWORD *)v145[1] + 1) = *(_QWORD *)((char *)a1 + 4580);
    Pool2 = v145[0];
  }
  else
  {
    if ( v12 > 0x80 )
    {
      Pool2 = (_BYTE *)ExAllocatePool2(64LL, v12, 1265072196LL);
      v131 = Pool2;
      if ( !Pool2 )
      {
        v13 = 16002LL;
        WdLogSingleEntry1(6LL, 16002LL);
        v14 = L"Failed to allocate pInputBuffer";
        goto LABEL_30;
      }
      goto LABEL_31;
    }
    Pool2 = v155;
  }
  v131 = Pool2;
LABEL_31:
  v15 = *((_QWORD *)a2 + 3);
  v16 = (char *)*((_QWORD *)a2 + 2);
  if ( &v16[v15] < v16 || (unsigned __int64)&v16[v15] > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(Pool2, v16, v15);
LABEL_35:
  if ( !*((_QWORD *)a2 + 5) || !*((_QWORD *)a2 + 4) )
  {
    v18 = Src;
    goto LABEL_42;
  }
  v17 = (*((_DWORD *)a2 + 10) + 7) & 0xFFFFFFF8;
  v129 = v17;
  if ( v17 > 0x80 )
  {
    v18 = (_BYTE *)ExAllocatePool2(64LL, v17, 1265072196LL);
    Src = v18;
    if ( v18 )
      goto LABEL_42;
    v13 = 16035LL;
    WdLogSingleEntry1(6LL, 16035LL);
    v14 = L"Failed to allocate pOutputBuffer";
LABEL_30:
    DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)v14, v13, 0LL, 0LL, 0LL, 0LL);
    LODWORD(v5) = -1073741801;
    goto LABEL_214;
  }
  v18 = v156;
  Src = v156;
LABEL_42:
  if ( v18 || *((_QWORD *)a2 + 5) )
  {
    v71 = 0LL;
    v72 = *((_DWORD *)a2 + 3);
    if ( v72 )
    {
      v73 = v72 - 1;
      if ( v73 )
      {
        v74 = v73 - 1;
        if ( v74 )
        {
          if ( v74 != 1 )
          {
            v8 = 16238LL;
            WdLogSingleEntry1(2LL, 16238LL);
            goto LABEL_48;
          }
          v134 = 0LL;
          v76 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
          if ( v76 )
          {
            CurrentProcessSessionId = PsGetCurrentProcessSessionId(v75);
            SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                               v76,
                                               CurrentProcessSessionId);
          }
          else
          {
            SessionDataForSpecifiedSession = 0LL;
          }
          if ( !SessionDataForSpecifiedSession )
          {
            v79 = PsGetCurrentProcessSessionId(v75);
            LODWORD(v5) = -1073741790;
            WdLogSingleEntry2(2LL, v79, -1073741790LL);
            v81 = PsGetCurrentProcessSessionId(v80);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
              v81,
              -1073741790LL,
              0LL,
              0LL,
              0LL);
          }
          if ( (int)v5 >= 0 )
          {
            v82 = DXGSESSIONDATA::ReferenceDwmProcess(SessionDataForSpecifiedSession, (struct _EPROCESS **)&v134);
            v5 = v82;
            if ( v82 < 0 )
            {
              v84 = PsGetCurrentProcessSessionId(v83);
              WdLogSingleEntry2(2LL, v84, v5);
              v86 = PsGetCurrentProcessSessionId(v85);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed ReferenceDwmProcess for session 0x%I64x, returning 0x%I64x.",
                v86,
                v5,
                0LL,
                0LL,
                0LL);
            }
            if ( (int)v5 >= 0 )
            {
              DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v139);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v139);
              v87 = (struct _KPROCESS *)v134;
              ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(v134);
              v89 = ProcessDxgProcess;
              if ( ProcessDxgProcess && (*((_DWORD *)ProcessDxgProcess + 106) & 0x800) == 0 )
              {
                DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v143, ProcessDxgProcess);
                DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v143);
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v139);
                v152 = 0;
                CPROCESSATTACHHELPER::Attach(&v151, v87);
                KeEnterCriticalRegion();
                if ( *((_DWORD *)v89 + 126) && (*((_DWORD *)v89 + 106) & 4) != 0 )
                {
                  v91 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
                  if ( v91 )
                  {
                    v92 = PsGetCurrentProcessSessionId(v90);
                    v93 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v91, v92);
                  }
                  else
                  {
                    v93 = 0LL;
                  }
                  if ( !v93 )
                  {
                    LODWORD(v5) = -1073741811;
                    v94 = PsGetCurrentProcessSessionId(v90);
                    WdLogSingleEntry2(2LL, v94, -1073741811LL);
                    v96 = PsGetCurrentProcessSessionId(v95);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      -1,
                      (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
                      v96,
                      -1073741811LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  if ( (int)v5 >= 0 )
                    LODWORD(v5) = DXGSESSIONDATA::VailSendRemoteObjectTestCommand(
                                    v93,
                                    Pool2,
                                    *((unsigned int *)a2 + 6),
                                    Src,
                                    &v129,
                                    1);
                }
                KeLeaveCriticalRegion();
                if ( v152 )
                {
                  KeUnstackDetachProcess(&v151);
                  v152 = 0;
                }
                DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v143);
              }
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v139);
            }
          }
          if ( v134 )
          {
            ObfDereferenceObject(v134);
            v134 = 0LL;
          }
        }
        else
        {
          v135 = 0LL;
          v98 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
          if ( v98 )
          {
            v99 = PsGetCurrentProcessSessionId(v97);
            v100 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v98, v99);
          }
          else
          {
            v100 = 0LL;
          }
          if ( !v100 )
          {
            v101 = PsGetCurrentProcessSessionId(v97);
            LODWORD(v5) = -1073741790;
            WdLogSingleEntry2(2LL, v101, -1073741790LL);
            v103 = PsGetCurrentProcessSessionId(v102);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
              v103,
              -1073741790LL,
              0LL,
              0LL,
              0LL);
          }
          if ( (int)v5 >= 0 )
          {
            v104 = DXGSESSIONDATA::ReferenceDwmProcess(v100, (struct _EPROCESS **)&v135);
            v5 = v104;
            if ( v104 < 0 )
            {
              v106 = PsGetCurrentProcessSessionId(v105);
              WdLogSingleEntry2(2LL, v106, v5);
              v108 = PsGetCurrentProcessSessionId(v107);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed ReferenceDwmProcess for session 0x%I64x, returning 0x%I64x.",
                v108,
                v5,
                0LL,
                0LL,
                0LL);
            }
            if ( (int)v5 >= 0 )
            {
              DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v140);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v140);
              v109 = (struct _KPROCESS *)v135;
              v110 = (struct DXGPROCESS *)PsGetProcessDxgProcess(v135);
              v111 = v110;
              if ( v110 && (*((_DWORD *)v110 + 106) & 0x800) == 0 )
              {
                DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v144, v110);
                DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v144);
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v140);
                v154 = 0;
                CPROCESSATTACHHELPER::Attach(&v153, v109);
                KeEnterCriticalRegion();
                if ( *((_DWORD *)v111 + 126) && (*((_DWORD *)v111 + 106) & 4) != 0 )
                {
                  v113 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
                  if ( v113 )
                  {
                    v114 = PsGetCurrentProcessSessionId(v112);
                    v115 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v113, v114);
                  }
                  else
                  {
                    v115 = 0LL;
                  }
                  if ( !v115 )
                  {
                    LODWORD(v5) = -1073741811;
                    v116 = PsGetCurrentProcessSessionId(v112);
                    WdLogSingleEntry2(2LL, v116, -1073741811LL);
                    v118 = PsGetCurrentProcessSessionId(v117);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      -1,
                      (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
                      v118,
                      -1073741811LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  if ( (int)v5 >= 0 )
                    LODWORD(v5) = DXGSESSIONDATA::VailSendCompositionObjectTestCommand(
                                    v115,
                                    Pool2,
                                    *((unsigned int *)a2 + 6),
                                    Src,
                                    &v129,
                                    1);
                }
                KeLeaveCriticalRegion();
                if ( v154 )
                {
                  KeUnstackDetachProcess(&v153);
                  v154 = 0;
                }
                DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v144);
              }
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v140);
            }
          }
          if ( v135 )
          {
            ObfDereferenceObject(v135);
            v135 = 0LL;
          }
        }
        goto LABEL_203;
      }
    }
    if ( !v128 )
    {
      v66 = 16137LL;
      WdLogSingleEntry1(1LL, 16137LL);
      goto LABEL_114;
    }
    if ( *((_QWORD *)a2 + 3) == 56LL && *((_DWORD *)Pool2 + 4) == 1016 )
    {
      v119 = (void *)*((_QWORD *)Pool2 + 5);
      if ( v119 )
      {
        v136 = 0LL;
        v120 = ObReferenceObjectByHandle(v119, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &v136, 0LL);
        v71 = v136;
        LODWORD(v5) = v120;
        if ( v120 < 0 )
          goto LABEL_203;
        *((_QWORD *)Pool2 + 5) = v136;
      }
    }
    if ( bTracingEnabled )
    {
      if ( *((_DWORD *)a2 + 3) )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
        {
          v121 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandBegin;
          goto LABEL_192;
        }
      }
      else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
      {
        v121 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandGlobalBegin;
LABEL_192:
        LODWORD(HandleInformation) = 0;
        McTemplateK0pxq_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, v121, a3, 0LL, 0LL, HandleInformation);
      }
    }
    LODWORD(v5) = DXG_VMBUS_CHANNEL_BASE::SendVmBusMessage(v7, v145[1], v146, Src, &v129);
    if ( (int)v5 < 0 && v71 )
      ObfDereferenceObject(v71);
    if ( !bTracingEnabled )
      goto LABEL_203;
    if ( *((_DWORD *)a2 + 3) )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
      {
        v124 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandEnd;
        goto LABEL_202;
      }
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
    {
      v124 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandGlobalEnd;
LABEL_202:
      LODWORD(HandleInformation) = 0;
      McTemplateK0pxqt_EtwWriteTransfer(v122, v124, v123, 0LL, 0LL, HandleInformation, v5);
    }
LABEL_203:
    v18 = Src;
    if ( !Src && v129 )
      WdLogSingleEntry1((unsigned int)((_DWORD)Src + 3), v129);
    goto LABEL_76;
  }
  v19 = *((_DWORD *)a2 + 3);
  if ( v19 >= 2 )
  {
    if ( v19 == 2 )
    {
      v133 = 0LL;
      v44 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
      if ( v44 )
      {
        v45 = PsGetCurrentProcessSessionId(v43);
        v46 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v44, v45);
      }
      else
      {
        v46 = 0LL;
      }
      if ( !v46 )
      {
        v47 = PsGetCurrentProcessSessionId(v43);
        LODWORD(v5) = -1073741790;
        WdLogSingleEntry2(2LL, v47, -1073741790LL);
        v49 = PsGetCurrentProcessSessionId(v48);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
          v49,
          -1073741790LL,
          0LL,
          0LL,
          0LL);
      }
      if ( (int)v5 >= 0 )
      {
        v50 = DXGSESSIONDATA::ReferenceDwmProcess(v46, (struct _EPROCESS **)&v133);
        v5 = v50;
        if ( v50 < 0 )
        {
          v52 = PsGetCurrentProcessSessionId(v51);
          WdLogSingleEntry2(2LL, v52, v5);
          v54 = PsGetCurrentProcessSessionId(v53);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed ReferenceDwmProcess for session 0x%I64x, returning 0x%I64x.",
            v54,
            v5,
            0LL,
            0LL,
            0LL);
        }
        if ( (int)v5 >= 0 )
        {
          DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v138);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v138);
          v55 = (struct _KPROCESS *)v133;
          v56 = (struct DXGPROCESS *)PsGetProcessDxgProcess(v133);
          v57 = v56;
          if ( v56 && (*((_DWORD *)v56 + 106) & 0x800) == 0 )
          {
            DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v142, v56);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v142);
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v138);
            v150 = 0;
            CPROCESSATTACHHELPER::Attach(&v149, v55);
            KeEnterCriticalRegion();
            if ( *((_DWORD *)v57 + 126) && (*((_DWORD *)v57 + 106) & 4) != 0 )
            {
              v59 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
              if ( v59 )
              {
                v60 = PsGetCurrentProcessSessionId(v58);
                v61 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v59, v60);
              }
              else
              {
                v61 = 0LL;
              }
              if ( !v61 )
              {
                LODWORD(v5) = -1073741811;
                v62 = PsGetCurrentProcessSessionId(v58);
                WdLogSingleEntry2(2LL, v62, -1073741811LL);
                v64 = PsGetCurrentProcessSessionId(v63);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
                  v64,
                  -1073741811LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( (int)v5 >= 0 )
                LODWORD(v5) = DXGSESSIONDATA::VailSendCompositionObjectTestCommand(
                                v61,
                                Pool2,
                                *((unsigned int *)a2 + 6),
                                0LL,
                                0LL,
                                0);
            }
            KeLeaveCriticalRegion();
            if ( v150 )
            {
              KeUnstackDetachProcess(&v149);
              v150 = 0;
            }
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v142);
          }
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v138);
        }
      }
      if ( v133 )
      {
        ObfDereferenceObject(v133);
        v133 = 0LL;
      }
    }
    else
    {
      if ( v19 != 3 )
      {
        v8 = 16116LL;
        WdLogSingleEntry1(2LL, 16116LL);
LABEL_48:
        v9 = L"Invalid channel type for transmit.";
        goto LABEL_3;
      }
      Object = 0LL;
      v21 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
      if ( v21 )
      {
        v22 = PsGetCurrentProcessSessionId(v20);
        v23 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v21, v22);
      }
      else
      {
        v23 = 0LL;
      }
      if ( !v23 )
      {
        v24 = PsGetCurrentProcessSessionId(v20);
        LODWORD(v5) = -1073741790;
        WdLogSingleEntry2(2LL, v24, -1073741790LL);
        v26 = PsGetCurrentProcessSessionId(v25);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
          v26,
          -1073741790LL,
          0LL,
          0LL,
          0LL);
      }
      if ( (int)v5 >= 0 )
      {
        v27 = DXGSESSIONDATA::ReferenceDwmProcess(v23, (struct _EPROCESS **)&Object);
        v5 = v27;
        if ( v27 < 0 )
        {
          v29 = PsGetCurrentProcessSessionId(v28);
          WdLogSingleEntry2(2LL, v29, v5);
          v31 = PsGetCurrentProcessSessionId(v30);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed ReferenceDwmProcess for session 0x%I64x, returning 0x%I64x.",
            v31,
            v5,
            0LL,
            0LL,
            0LL);
        }
        if ( (int)v5 >= 0 )
        {
          DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v137);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v137);
          v32 = (struct _KPROCESS *)Object;
          v33 = (struct DXGPROCESS *)PsGetProcessDxgProcess(Object);
          v34 = v33;
          if ( v33 && (*((_DWORD *)v33 + 106) & 0x800) == 0 )
          {
            DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v141, v33);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v141);
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v137);
            v148 = 0;
            CPROCESSATTACHHELPER::Attach(&ApcState, v32);
            KeEnterCriticalRegion();
            if ( *((_DWORD *)v34 + 126) && (*((_DWORD *)v34 + 106) & 4) != 0 )
            {
              v36 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
              if ( v36 )
              {
                v37 = PsGetCurrentProcessSessionId(v35);
                v38 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v36, v37);
              }
              else
              {
                v38 = 0LL;
              }
              if ( !v38 )
              {
                LODWORD(v5) = -1073741811;
                v39 = PsGetCurrentProcessSessionId(v35);
                WdLogSingleEntry2(2LL, v39, -1073741811LL);
                v41 = PsGetCurrentProcessSessionId(v40);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
                  v41,
                  -1073741811LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( (int)v5 >= 0 )
                LODWORD(v5) = DXGSESSIONDATA::VailSendRemoteObjectTestCommand(
                                v38,
                                Pool2,
                                *((unsigned int *)a2 + 6),
                                0LL,
                                0LL,
                                0);
            }
            KeLeaveCriticalRegion();
            if ( v148 )
            {
              KeUnstackDetachProcess(&ApcState);
              v148 = 0;
            }
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v141);
          }
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v137);
        }
      }
      if ( Object )
      {
        ObfDereferenceObject(Object);
        Object = 0LL;
      }
    }
    v18 = Src;
    goto LABEL_76;
  }
  if ( bTracingEnabled )
  {
    if ( v19 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) == 0 )
        goto LABEL_112;
      v65 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandHostToVmAsync;
    }
    else
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) == 0 )
        goto LABEL_112;
      v65 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandGlobalAsync;
    }
    LODWORD(HandleInformation) = 0;
    McTemplateK0pxq_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, v65, a3, 0LL, 0LL, HandleInformation);
  }
LABEL_112:
  if ( !v128 )
  {
    v66 = 16066LL;
    WdLogSingleEntry1(1LL, 16066LL);
LABEL_114:
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"FALSE", v66, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_215;
  }
  v67 = DXG_VMBUS_CHANNEL_BASE::SendVmBusMessageAsync(v7, v145[1], v146);
  LODWORD(v5) = v67;
  if ( bTracingEnabled )
  {
    if ( *((_DWORD *)a2 + 3) )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
      {
        v70 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandEnd;
        goto LABEL_121;
      }
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
    {
      v70 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandGlobalEnd;
LABEL_121:
      LODWORD(HandleInformation) = 0;
      McTemplateK0pxqt_EtwWriteTransfer(v68, v70, v69, 0LL, 0LL, HandleInformation, v67);
    }
  }
LABEL_76:
  if ( (int)v5 < 0 )
    goto LABEL_214;
  v42 = *((_QWORD *)a2 + 5);
  if ( v129 < v42 )
  {
    WdLogSingleEntry2(4LL, *((_QWORD *)a2 + 5), v129);
    LODWORD(v5) = -1073741823;
    goto LABEL_214;
  }
  if ( v18 )
  {
    v125 = (char *)*((_QWORD *)a2 + 4);
    if ( v125 )
    {
      if ( v42 )
      {
        if ( (unsigned __int64)&v125[v42] > MmUserProbeAddress || &v125[v42] <= v125 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v125, v18, v42);
      }
    }
  }
LABEL_215:
  if ( Pool2 && Pool2 != v155 && Pool2 != v145[0] )
    ExFreePoolWithTag(Pool2, 0);
  if ( Src && Src != v156 )
    ExFreePoolWithTag(Src, 0);
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v145);
  return (unsigned int)v5;
}
