/*
 * XREFs of ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1C036F5C0
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C030302C (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000B044 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0014DD8 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0024440 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0025AB8 (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ?ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z @ 0x1C0047708 (-ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x1C0053D58 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     McTemplateK0pxq_EtwWriteTransfer @ 0x1C005778C (McTemplateK0pxq_EtwWriteTransfer.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005B244 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?VailSendCompositionObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z @ 0x1C035E270 (-VailSendCompositionObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z.c)
 *     ?VailSendRemoteObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z @ 0x1C035F2E8 (-VailSendRemoteObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C03715E8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?SendVmBusMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI0PEAI@Z @ 0x1C0371D5C (-SendVmBusMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI0PEAI@Z.c)
 *     ?SendVmBusMessageAsync@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI@Z @ 0x1C0371E40 (-SendVmBusMessageAsync@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI@Z.c)
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
  __int64 v20; // rdx
  __int64 v21; // rcx
  DXGSESSIONMGR *v22; // rbx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int v25; // eax
  DXGSESSIONDATA *v26; // rbx
  unsigned int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned int v32; // eax
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned int v43; // eax
  struct _KPROCESS *v44; // rbx
  struct DXGPROCESS *v45; // rax
  struct DXGPROCESS *v46; // r13
  __int64 v47; // rdx
  __int64 v48; // rcx
  DXGSESSIONMGR *v49; // rbx
  __int64 v50; // r8
  __int64 v51; // r9
  unsigned int v52; // eax
  DXGSESSIONDATA *v53; // rbx
  unsigned int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  unsigned int v59; // eax
  size_t v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rcx
  DXGSESSIONMGR *v63; // rbx
  __int64 v64; // r8
  __int64 v65; // r9
  unsigned int v66; // eax
  DXGSESSIONDATA *v67; // rbx
  unsigned int v68; // eax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  unsigned int v73; // eax
  int v74; // eax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  unsigned int v79; // eax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  unsigned int v84; // eax
  struct _KPROCESS *v85; // rbx
  struct DXGPROCESS *v86; // rax
  struct DXGPROCESS *v87; // r13
  __int64 v88; // rdx
  __int64 v89; // rcx
  DXGSESSIONMGR *v90; // rbx
  __int64 v91; // r8
  __int64 v92; // r9
  unsigned int v93; // eax
  DXGSESSIONDATA *v94; // rbx
  unsigned int v95; // eax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  unsigned int v100; // eax
  const EVENT_DESCRIPTOR *v101; // rdx
  __int64 v102; // rbx
  int v103; // eax
  __int64 v104; // rcx
  __int64 v105; // r8
  const EVENT_DESCRIPTOR *v106; // rdx
  PVOID v107; // rbx
  int v108; // ecx
  int v109; // ecx
  int v110; // ecx
  __int64 v111; // rdx
  __int64 v112; // rcx
  DXGSESSIONMGR *v113; // rbx
  __int64 v114; // r8
  __int64 v115; // r9
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  unsigned int v118; // eax
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // r9
  unsigned int v123; // eax
  int v124; // eax
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r8
  __int64 v128; // r9
  unsigned int v129; // eax
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r8
  __int64 v133; // r9
  unsigned int v134; // eax
  struct _KPROCESS *v135; // rbx
  struct DXGPROCESS *ProcessDxgProcess; // rax
  struct DXGPROCESS *v137; // r13
  __int64 v138; // rdx
  __int64 v139; // rcx
  DXGSESSIONMGR *v140; // rbx
  __int64 v141; // r8
  __int64 v142; // r9
  unsigned int v143; // eax
  DXGSESSIONDATA *v144; // rbx
  unsigned int v145; // eax
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // r8
  __int64 v149; // r9
  unsigned int v150; // eax
  __int64 v151; // rdx
  __int64 v152; // rcx
  DXGSESSIONMGR *v153; // rbx
  __int64 v154; // r8
  __int64 v155; // r9
  unsigned int v156; // eax
  DXGSESSIONDATA *v157; // rbx
  unsigned int v158; // eax
  __int64 v159; // rdx
  __int64 v160; // rcx
  __int64 v161; // r8
  __int64 v162; // r9
  unsigned int v163; // eax
  int v164; // eax
  __int64 v165; // rdx
  __int64 v166; // rcx
  __int64 v167; // r8
  __int64 v168; // r9
  unsigned int v169; // eax
  __int64 v170; // rdx
  __int64 v171; // rcx
  __int64 v172; // r8
  __int64 v173; // r9
  unsigned int v174; // eax
  struct _KPROCESS *v175; // rbx
  struct DXGPROCESS *v176; // rax
  struct DXGPROCESS *v177; // r13
  __int64 v178; // rdx
  __int64 v179; // rcx
  DXGSESSIONMGR *v180; // rbx
  __int64 v181; // r8
  __int64 v182; // r9
  unsigned int v183; // eax
  DXGSESSIONDATA *v184; // rbx
  unsigned int v185; // eax
  __int64 v186; // rdx
  __int64 v187; // rcx
  __int64 v188; // r8
  __int64 v189; // r9
  unsigned int v190; // eax
  void *v191; // rcx
  NTSTATUS v192; // eax
  const EVENT_DESCRIPTOR *v193; // rdx
  __int64 v194; // rcx
  __int64 v195; // r8
  const EVENT_DESCRIPTOR *v196; // rdx
  char *v197; // r9
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-420h]
  char v200; // [rsp+50h] [rbp-3F8h]
  unsigned int v201; // [rsp+54h] [rbp-3F4h] BYREF
  void *Src; // [rsp+58h] [rbp-3F0h]
  _BYTE *v203; // [rsp+60h] [rbp-3E8h]
  PVOID Object; // [rsp+68h] [rbp-3E0h] BYREF
  PVOID v205; // [rsp+70h] [rbp-3D8h] BYREF
  PVOID v206; // [rsp+78h] [rbp-3D0h] BYREF
  PVOID v207; // [rsp+80h] [rbp-3C8h] BYREF
  PVOID v208; // [rsp+88h] [rbp-3C0h] BYREF
  _BYTE v209[16]; // [rsp+90h] [rbp-3B8h] BYREF
  _BYTE v210[16]; // [rsp+A0h] [rbp-3A8h] BYREF
  _BYTE v211[16]; // [rsp+B0h] [rbp-398h] BYREF
  _BYTE v212[16]; // [rsp+C0h] [rbp-388h] BYREF
  _BYTE v213[16]; // [rsp+D0h] [rbp-378h] BYREF
  _BYTE v214[16]; // [rsp+E0h] [rbp-368h] BYREF
  _BYTE v215[16]; // [rsp+F0h] [rbp-358h] BYREF
  _BYTE v216[16]; // [rsp+100h] [rbp-348h] BYREF
  void *v217[2]; // [rsp+110h] [rbp-338h] BYREF
  unsigned int v218; // [rsp+120h] [rbp-328h]
  struct _KAPC_STATE ApcState; // [rsp+230h] [rbp-218h] BYREF
  char v220; // [rsp+260h] [rbp-1E8h]
  struct _KAPC_STATE v221; // [rsp+268h] [rbp-1E0h] BYREF
  char v222; // [rsp+298h] [rbp-1B0h]
  struct _KAPC_STATE v223; // [rsp+2A0h] [rbp-1A8h] BYREF
  char v224; // [rsp+2D0h] [rbp-178h]
  struct _KAPC_STATE v225; // [rsp+2D8h] [rbp-170h] BYREF
  char v226; // [rsp+308h] [rbp-140h]
  _BYTE v227[128]; // [rsp+310h] [rbp-138h] BYREF
  _BYTE v228[128]; // [rsp+390h] [rbp-B8h] BYREF

  LODWORD(v5) = 0;
  Pool2 = 0LL;
  v203 = 0LL;
  Src = 0LL;
  v201 = 0;
  v7 = 0LL;
  LOBYTE(a3) = 0;
  v200 = 0;
  *(_OWORD *)v217 = 0LL;
  v218 = 0;
  if ( !a2 )
  {
    v8 = 15807LL;
    WdLogSingleEntry1(2LL, 15807LL);
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
      v8 = 15819LL;
      WdLogSingleEntry1(2LL, 15819LL);
      goto LABEL_15;
    }
LABEL_16:
    v200 = 1;
    LOBYTE(a3) = 1;
    goto LABEL_17;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( !a1 )
    {
      v8 = 15829LL;
      WdLogSingleEntry1(2LL, 15829LL);
      v9 = L"Adapter is expected";
      goto LABEL_3;
    }
    v7 = (struct DXGADAPTER *)((char *)a1 + 4472);
    if ( a1 == (struct DXGADAPTER *)-4472LL )
    {
      v8 = 15837LL;
      WdLogSingleEntry1((unsigned int)((_DWORD)v7 + 2), 15837LL);
LABEL_15:
      v9 = L"Invalid VM bus channel";
      goto LABEL_3;
    }
    goto LABEL_16;
  }
  if ( (unsigned int)(v11 - 1) >= 2 )
  {
    v8 = 15849LL;
    WdLogSingleEntry1(2LL, 15849LL);
    v9 = L"Invalid channel type";
    goto LABEL_3;
  }
LABEL_17:
  v12 = *((_QWORD *)a2 + 3);
  if ( !v12 )
    goto LABEL_35;
  if ( !*((_QWORD *)a2 + 2) )
  {
    v8 = 15863LL;
    WdLogSingleEntry1(2LL, 15863LL);
    v9 = L"Invalid input buffer";
    goto LABEL_3;
  }
  if ( (_BYTE)a3 )
  {
    DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v217, v7, v12, 0LL, 0LL, 0LL);
    if ( !v217[0] )
      goto LABEL_215;
    if ( a1 )
      *((_QWORD *)v217[1] + 1) = *(_QWORD *)((char *)a1 + 4580);
    Pool2 = v217[0];
  }
  else
  {
    if ( v12 > 0x80 )
    {
      Pool2 = (_BYTE *)ExAllocatePool2(64LL, v12, 1265072196LL);
      v203 = Pool2;
      if ( !Pool2 )
      {
        v13 = 15891LL;
        WdLogSingleEntry1(6LL, 15891LL);
        v14 = L"Failed to allocate pInputBuffer";
        goto LABEL_30;
      }
      goto LABEL_31;
    }
    Pool2 = v227;
  }
  v203 = Pool2;
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
  v201 = v17;
  if ( v17 > 0x80 )
  {
    v18 = (_BYTE *)ExAllocatePool2(64LL, v17, 1265072196LL);
    Src = v18;
    if ( v18 )
      goto LABEL_42;
    v13 = 15924LL;
    WdLogSingleEntry1(6LL, 15924LL);
    v14 = L"Failed to allocate pOutputBuffer";
LABEL_30:
    DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)v14, v13, 0LL, 0LL, 0LL, 0LL);
    LODWORD(v5) = -1073741801;
    goto LABEL_214;
  }
  v18 = v228;
  Src = v228;
LABEL_42:
  if ( v18 || *((_QWORD *)a2 + 5) )
  {
    v107 = 0LL;
    v108 = *((_DWORD *)a2 + 3);
    if ( v108 )
    {
      v109 = v108 - 1;
      if ( v109 )
      {
        v110 = v109 - 1;
        if ( v110 )
        {
          if ( v110 != 1 )
          {
            v8 = 16127LL;
            WdLogSingleEntry1(2LL, 16127LL);
            goto LABEL_48;
          }
          v206 = 0LL;
          v113 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
          if ( v113 )
          {
            CurrentProcessSessionId = PsGetCurrentProcessSessionId(v112, v111, v114, v115);
            SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                               v113,
                                               CurrentProcessSessionId);
          }
          else
          {
            SessionDataForSpecifiedSession = 0LL;
          }
          if ( !SessionDataForSpecifiedSession )
          {
            v118 = PsGetCurrentProcessSessionId(v112, v111, v114, v115);
            LODWORD(v5) = -1073741790;
            WdLogSingleEntry2(2LL, v118, -1073741790LL);
            v123 = PsGetCurrentProcessSessionId(v120, v119, v121, v122);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
              v123,
              -1073741790LL,
              0LL,
              0LL,
              0LL);
          }
          if ( (int)v5 >= 0 )
          {
            v124 = DXGSESSIONDATA::ReferenceDwmProcess(SessionDataForSpecifiedSession, (struct _EPROCESS **)&v206);
            v5 = v124;
            if ( v124 < 0 )
            {
              v129 = PsGetCurrentProcessSessionId(v126, v125, v127, v128);
              WdLogSingleEntry2(2LL, v129, v5);
              v134 = PsGetCurrentProcessSessionId(v131, v130, v132, v133);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed ReferenceDwmProcess for session 0x%I64x, returning 0x%I64x.",
                v134,
                v5,
                0LL,
                0LL,
                0LL);
            }
            if ( (int)v5 >= 0 )
            {
              DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v211);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v211);
              v135 = (struct _KPROCESS *)v206;
              ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(v206);
              v137 = ProcessDxgProcess;
              if ( ProcessDxgProcess && (*((_DWORD *)ProcessDxgProcess + 106) & 0x800) == 0 )
              {
                DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v215, ProcessDxgProcess);
                DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v215);
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v211);
                v224 = 0;
                CPROCESSATTACHHELPER::Attach(&v223, v135);
                KeEnterCriticalRegion();
                if ( *((_DWORD *)v137 + 126) && (*((_DWORD *)v137 + 106) & 4) != 0 )
                {
                  v140 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
                  if ( v140 )
                  {
                    v143 = PsGetCurrentProcessSessionId(v139, v138, v141, v142);
                    v144 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v140, v143);
                  }
                  else
                  {
                    v144 = 0LL;
                  }
                  if ( !v144 )
                  {
                    LODWORD(v5) = -1073741811;
                    v145 = PsGetCurrentProcessSessionId(v139, v138, v141, v142);
                    WdLogSingleEntry2(2LL, v145, -1073741811LL);
                    v150 = PsGetCurrentProcessSessionId(v147, v146, v148, v149);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      -1,
                      (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
                      v150,
                      -1073741811LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  if ( (int)v5 >= 0 )
                    LODWORD(v5) = DXGSESSIONDATA::VailSendRemoteObjectTestCommand(
                                    v144,
                                    Pool2,
                                    *((unsigned int *)a2 + 6),
                                    Src,
                                    &v201,
                                    1);
                }
                KeLeaveCriticalRegion();
                if ( v224 )
                {
                  KeUnstackDetachProcess(&v223);
                  v224 = 0;
                }
                DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v215);
              }
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v211);
            }
          }
          if ( v206 )
          {
            ObfDereferenceObject(v206);
            v206 = 0LL;
          }
        }
        else
        {
          v207 = 0LL;
          v153 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
          if ( v153 )
          {
            v156 = PsGetCurrentProcessSessionId(v152, v151, v154, v155);
            v157 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v153, v156);
          }
          else
          {
            v157 = 0LL;
          }
          if ( !v157 )
          {
            v158 = PsGetCurrentProcessSessionId(v152, v151, v154, v155);
            LODWORD(v5) = -1073741790;
            WdLogSingleEntry2(2LL, v158, -1073741790LL);
            v163 = PsGetCurrentProcessSessionId(v160, v159, v161, v162);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
              v163,
              -1073741790LL,
              0LL,
              0LL,
              0LL);
          }
          if ( (int)v5 >= 0 )
          {
            v164 = DXGSESSIONDATA::ReferenceDwmProcess(v157, (struct _EPROCESS **)&v207);
            v5 = v164;
            if ( v164 < 0 )
            {
              v169 = PsGetCurrentProcessSessionId(v166, v165, v167, v168);
              WdLogSingleEntry2(2LL, v169, v5);
              v174 = PsGetCurrentProcessSessionId(v171, v170, v172, v173);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed ReferenceDwmProcess for session 0x%I64x, returning 0x%I64x.",
                v174,
                v5,
                0LL,
                0LL,
                0LL);
            }
            if ( (int)v5 >= 0 )
            {
              DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v212);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v212);
              v175 = (struct _KPROCESS *)v207;
              v176 = (struct DXGPROCESS *)PsGetProcessDxgProcess(v207);
              v177 = v176;
              if ( v176 && (*((_DWORD *)v176 + 106) & 0x800) == 0 )
              {
                DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v216, v176);
                DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v216);
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v212);
                v226 = 0;
                CPROCESSATTACHHELPER::Attach(&v225, v175);
                KeEnterCriticalRegion();
                if ( *((_DWORD *)v177 + 126) && (*((_DWORD *)v177 + 106) & 4) != 0 )
                {
                  v180 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
                  if ( v180 )
                  {
                    v183 = PsGetCurrentProcessSessionId(v179, v178, v181, v182);
                    v184 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v180, v183);
                  }
                  else
                  {
                    v184 = 0LL;
                  }
                  if ( !v184 )
                  {
                    LODWORD(v5) = -1073741811;
                    v185 = PsGetCurrentProcessSessionId(v179, v178, v181, v182);
                    WdLogSingleEntry2(2LL, v185, -1073741811LL);
                    v190 = PsGetCurrentProcessSessionId(v187, v186, v188, v189);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      -1,
                      (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
                      v190,
                      -1073741811LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  if ( (int)v5 >= 0 )
                    LODWORD(v5) = DXGSESSIONDATA::VailSendCompositionObjectTestCommand(
                                    v184,
                                    Pool2,
                                    *((unsigned int *)a2 + 6),
                                    Src,
                                    &v201,
                                    1);
                }
                KeLeaveCriticalRegion();
                if ( v226 )
                {
                  KeUnstackDetachProcess(&v225);
                  v226 = 0;
                }
                DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v216);
              }
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v212);
            }
          }
          if ( v207 )
          {
            ObfDereferenceObject(v207);
            v207 = 0LL;
          }
        }
        goto LABEL_203;
      }
    }
    if ( !v200 )
    {
      v102 = 16026LL;
      WdLogSingleEntry1(1LL, 16026LL);
      goto LABEL_114;
    }
    if ( *((_QWORD *)a2 + 3) == 56LL && *((_DWORD *)Pool2 + 4) == 1016 )
    {
      v191 = (void *)*((_QWORD *)Pool2 + 5);
      if ( v191 )
      {
        v208 = 0LL;
        v192 = ObReferenceObjectByHandle(v191, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &v208, 0LL);
        v107 = v208;
        LODWORD(v5) = v192;
        if ( v192 < 0 )
          goto LABEL_203;
        *((_QWORD *)Pool2 + 5) = v208;
      }
    }
    if ( bTracingEnabled )
    {
      if ( *((_DWORD *)a2 + 3) )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
        {
          v193 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandBegin;
          goto LABEL_192;
        }
      }
      else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
      {
        v193 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandGlobalBegin;
LABEL_192:
        LODWORD(HandleInformation) = 0;
        McTemplateK0pxq_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, v193, a3, 0LL, 0LL, HandleInformation);
      }
    }
    LODWORD(v5) = DXG_VMBUS_CHANNEL_BASE::SendVmBusMessage(v7, v217[1], v218, Src, &v201);
    if ( (int)v5 < 0 && v107 )
      ObfDereferenceObject(v107);
    if ( !bTracingEnabled )
      goto LABEL_203;
    if ( *((_DWORD *)a2 + 3) )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
      {
        v196 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandEnd;
        goto LABEL_202;
      }
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
    {
      v196 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandGlobalEnd;
LABEL_202:
      LODWORD(HandleInformation) = 0;
      McTemplateK0pxqt_EtwWriteTransfer(v194, v196, v195, 0LL, 0LL, HandleInformation, v5);
    }
LABEL_203:
    v18 = Src;
    if ( !Src && v201 )
      WdLogSingleEntry1((unsigned int)((_DWORD)Src + 3), v201);
    goto LABEL_76;
  }
  v19 = *((_DWORD *)a2 + 3);
  if ( v19 >= 2 )
  {
    if ( v19 == 2 )
    {
      v205 = 0LL;
      v63 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
      if ( v63 )
      {
        v66 = PsGetCurrentProcessSessionId(v62, v61, v64, v65);
        v67 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v63, v66);
      }
      else
      {
        v67 = 0LL;
      }
      if ( !v67 )
      {
        v68 = PsGetCurrentProcessSessionId(v62, v61, v64, v65);
        LODWORD(v5) = -1073741790;
        WdLogSingleEntry2(2LL, v68, -1073741790LL);
        v73 = PsGetCurrentProcessSessionId(v70, v69, v71, v72);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
          v73,
          -1073741790LL,
          0LL,
          0LL,
          0LL);
      }
      if ( (int)v5 >= 0 )
      {
        v74 = DXGSESSIONDATA::ReferenceDwmProcess(v67, (struct _EPROCESS **)&v205);
        v5 = v74;
        if ( v74 < 0 )
        {
          v79 = PsGetCurrentProcessSessionId(v76, v75, v77, v78);
          WdLogSingleEntry2(2LL, v79, v5);
          v84 = PsGetCurrentProcessSessionId(v81, v80, v82, v83);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed ReferenceDwmProcess for session 0x%I64x, returning 0x%I64x.",
            v84,
            v5,
            0LL,
            0LL,
            0LL);
        }
        if ( (int)v5 >= 0 )
        {
          DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v210);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v210);
          v85 = (struct _KPROCESS *)v205;
          v86 = (struct DXGPROCESS *)PsGetProcessDxgProcess(v205);
          v87 = v86;
          if ( v86 && (*((_DWORD *)v86 + 106) & 0x800) == 0 )
          {
            DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v214, v86);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v214);
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v210);
            v222 = 0;
            CPROCESSATTACHHELPER::Attach(&v221, v85);
            KeEnterCriticalRegion();
            if ( *((_DWORD *)v87 + 126) && (*((_DWORD *)v87 + 106) & 4) != 0 )
            {
              v90 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
              if ( v90 )
              {
                v93 = PsGetCurrentProcessSessionId(v89, v88, v91, v92);
                v94 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v90, v93);
              }
              else
              {
                v94 = 0LL;
              }
              if ( !v94 )
              {
                LODWORD(v5) = -1073741811;
                v95 = PsGetCurrentProcessSessionId(v89, v88, v91, v92);
                WdLogSingleEntry2(2LL, v95, -1073741811LL);
                v100 = PsGetCurrentProcessSessionId(v97, v96, v98, v99);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
                  v100,
                  -1073741811LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( (int)v5 >= 0 )
                LODWORD(v5) = DXGSESSIONDATA::VailSendCompositionObjectTestCommand(
                                v94,
                                Pool2,
                                *((unsigned int *)a2 + 6),
                                0LL,
                                0LL,
                                0);
            }
            KeLeaveCriticalRegion();
            if ( v222 )
            {
              KeUnstackDetachProcess(&v221);
              v222 = 0;
            }
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v214);
          }
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v210);
        }
      }
      if ( v205 )
      {
        ObfDereferenceObject(v205);
        v205 = 0LL;
      }
    }
    else
    {
      if ( v19 != 3 )
      {
        v8 = 16005LL;
        WdLogSingleEntry1(2LL, 16005LL);
LABEL_48:
        v9 = L"Invalid channel type for transmit.";
        goto LABEL_3;
      }
      Object = 0LL;
      v22 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
      if ( v22 )
      {
        v25 = PsGetCurrentProcessSessionId(v21, v20, v23, v24);
        v26 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v22, v25);
      }
      else
      {
        v26 = 0LL;
      }
      if ( !v26 )
      {
        v27 = PsGetCurrentProcessSessionId(v21, v20, v23, v24);
        LODWORD(v5) = -1073741790;
        WdLogSingleEntry2(2LL, v27, -1073741790LL);
        v32 = PsGetCurrentProcessSessionId(v29, v28, v30, v31);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
          v32,
          -1073741790LL,
          0LL,
          0LL,
          0LL);
      }
      if ( (int)v5 >= 0 )
      {
        v33 = DXGSESSIONDATA::ReferenceDwmProcess(v26, (struct _EPROCESS **)&Object);
        v5 = v33;
        if ( v33 < 0 )
        {
          v38 = PsGetCurrentProcessSessionId(v35, v34, v36, v37);
          WdLogSingleEntry2(2LL, v38, v5);
          v43 = PsGetCurrentProcessSessionId(v40, v39, v41, v42);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed ReferenceDwmProcess for session 0x%I64x, returning 0x%I64x.",
            v43,
            v5,
            0LL,
            0LL,
            0LL);
        }
        if ( (int)v5 >= 0 )
        {
          DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v209);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v209);
          v44 = (struct _KPROCESS *)Object;
          v45 = (struct DXGPROCESS *)PsGetProcessDxgProcess(Object);
          v46 = v45;
          if ( v45 && (*((_DWORD *)v45 + 106) & 0x800) == 0 )
          {
            DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v213, v45);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v213);
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v209);
            v220 = 0;
            CPROCESSATTACHHELPER::Attach(&ApcState, v44);
            KeEnterCriticalRegion();
            if ( *((_DWORD *)v46 + 126) && (*((_DWORD *)v46 + 106) & 4) != 0 )
            {
              v49 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
              if ( v49 )
              {
                v52 = PsGetCurrentProcessSessionId(v48, v47, v50, v51);
                v53 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v49, v52);
              }
              else
              {
                v53 = 0LL;
              }
              if ( !v53 )
              {
                LODWORD(v5) = -1073741811;
                v54 = PsGetCurrentProcessSessionId(v48, v47, v50, v51);
                WdLogSingleEntry2(2LL, v54, -1073741811LL);
                v59 = PsGetCurrentProcessSessionId(v56, v55, v57, v58);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
                  v59,
                  -1073741811LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( (int)v5 >= 0 )
                LODWORD(v5) = DXGSESSIONDATA::VailSendRemoteObjectTestCommand(
                                v53,
                                Pool2,
                                *((unsigned int *)a2 + 6),
                                0LL,
                                0LL,
                                0);
            }
            KeLeaveCriticalRegion();
            if ( v220 )
            {
              KeUnstackDetachProcess(&ApcState);
              v220 = 0;
            }
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v213);
          }
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v209);
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
      v101 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandHostToVmAsync;
    }
    else
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) == 0 )
        goto LABEL_112;
      v101 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandGlobalAsync;
    }
    LODWORD(HandleInformation) = 0;
    McTemplateK0pxq_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, v101, a3, 0LL, 0LL, HandleInformation);
  }
LABEL_112:
  if ( !v200 )
  {
    v102 = 15955LL;
    WdLogSingleEntry1(1LL, 15955LL);
LABEL_114:
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"FALSE", v102, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_215;
  }
  v103 = DXG_VMBUS_CHANNEL_BASE::SendVmBusMessageAsync(v7, v217[1], v218);
  LODWORD(v5) = v103;
  if ( bTracingEnabled )
  {
    if ( *((_DWORD *)a2 + 3) )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
      {
        v106 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandEnd;
        goto LABEL_121;
      }
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
    {
      v106 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandGlobalEnd;
LABEL_121:
      LODWORD(HandleInformation) = 0;
      McTemplateK0pxqt_EtwWriteTransfer(v104, v106, v105, 0LL, 0LL, HandleInformation, v103);
    }
  }
LABEL_76:
  if ( (int)v5 < 0 )
    goto LABEL_214;
  v60 = *((_QWORD *)a2 + 5);
  if ( v201 < v60 )
  {
    WdLogSingleEntry2(4LL, *((_QWORD *)a2 + 5), v201);
    LODWORD(v5) = -1073741823;
    goto LABEL_214;
  }
  if ( v18 )
  {
    v197 = (char *)*((_QWORD *)a2 + 4);
    if ( v197 )
    {
      if ( v60 )
      {
        if ( (unsigned __int64)&v197[v60] > MmUserProbeAddress || &v197[v60] <= v197 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v197, v18, v60);
      }
    }
  }
LABEL_215:
  if ( Pool2 && Pool2 != v227 && Pool2 != v217[0] )
    ExFreePoolWithTag(Pool2, 0);
  if ( Src && Src != v228 )
    ExFreePoolWithTag(Src, 0);
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v217);
  return (unsigned int)v5;
}
