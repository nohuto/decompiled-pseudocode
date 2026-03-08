/*
 * XREFs of UserPowerStateCallout @ 0x1C00B7A1C
 * Callers:
 *     W32CalloutDispatch @ 0x1C00ED390 (W32CalloutDispatch.c)
 * Callees:
 *     ?AddPowerStateLogEntry@@YAXW4_POWER_STATE_LOG_ENTRY_TYPE@@K@Z @ 0x1C00B7E1C (-AddPowerStateLogEntry@@YAXW4_POWER_STATE_LOG_ENTRY_TYPE@@K@Z.c)
 *     QueuePowerRequest @ 0x1C00B7EA0 (QueuePowerRequest.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C00B809C (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C00B817C (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall UserPowerStateCallout(char *a1)
{
  unsigned int v1; // esi
  char v3; // bp
  int v4; // r12d
  int v5; // r14d
  unsigned int v6; // r15d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rdx
  _QWORD *v31; // rcx
  unsigned int v32; // eax
  unsigned int v33; // ebx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  int v46; // eax
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  int v92; // ebx
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // rcx
  __int64 v102; // rdx
  __int64 v103; // r8
  __int64 v104; // r9
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  _QWORD v109[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = *((_DWORD *)a1 + 4);
  v3 = *a1;
  v4 = *((_DWORD *)a1 + 1);
  v5 = *((_DWORD *)a1 + 2);
  v6 = *((_DWORD *)a1 + 3);
  AddPowerStateLogEntry(1LL, v1);
  if ( !v1 )
  {
    v32 = UserSessionSwitchBlock_Start();
    goto LABEL_15;
  }
  if ( v1 == 7 )
  {
    UserSessionSwitchBlock_End();
    if ( *(_DWORD *)(SGDGetUserSessionState(v36, v35, v37, v38) + 2884) )
    {
      if ( *(_BYTE *)SGDGetUserGdiSessionState(v39) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2994LL);
      v109[0] = 4LL;
      *(_DWORD *)(SGDGetUserSessionState(v94, v93, v95, v96) + 2884) = 0;
      v101 = *(int *)(SGDGetUserSessionState(v98, v97, v99, v100) + 2888);
      v109[1] = v101;
      v105 = SGDGetUserSessionState(v101, v102, v103, v104);
      v30 = 0LL;
      v31 = v109;
      *(_DWORD *)(v105 + 2888) = 0;
      goto LABEL_14;
    }
    goto LABEL_21;
  }
  if ( !gbVideoInitialized || !*(_DWORD *)(SGDGetUserSessionState(v8, v7, v9, v10) + 2936) || !gWinLogonRpcHandle )
  {
    AddPowerStateLogEntry(2LL, 2151546887LL);
    return 2151546887LL;
  }
  v15 = SGDGetUserSessionState(v12, v11, v13, v14);
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(*(_QWORD *)(v15 + 696));
  v20 = SGDGetUserSessionState(v17, v16, v18, v19);
  if ( v1 == 1 )
  {
    v46 = *(_DWORD *)(v20 + 3152);
    if ( v3 )
    {
      if ( (v46 & 1) != 0 )
        goto LABEL_24;
    }
    else if ( (v46 & 1) == 0 )
    {
LABEL_24:
      v47 = SGDGetUserSessionState(v22, v21, v23, v24);
      v48 = *(_DWORD *)(v47 + 3152) | 1u;
      *(_DWORD *)(v47 + 3152) = v48;
      v52 = SGDGetUserSessionState(v48, v49, v50, v51);
      v53 = v6 & 4;
      v54 = (unsigned int)v53 | *(_DWORD *)(v52 + 3152) & 0xFFFFFFFB;
      *(_DWORD *)(v52 + 3152) = v54;
      v57 = SGDGetUserSessionState(v53, v54, v55, v56);
      v58 = (v6 >> 30) & 2;
      v59 = (unsigned int)v58 | *(_DWORD *)(v57 + 3152) & 0xFFFFFFFD;
      *(_DWORD *)(v57 + 3152) = v59;
      v62 = SGDGetUserSessionState(v58, v59, v60, v61);
      v63 = *(_DWORD *)(v62 + 3152) & 0xFFFFFFF7;
      v64 = (unsigned int)v63 | (8 * (v6 & 1));
      *(_DWORD *)(v62 + 3152) = v64;
      v67 = SGDGetUserSessionState(v63, v64, v65, v66);
      v68 = 8 * (v6 & 2);
      v69 = (unsigned int)v68 | *(_DWORD *)(v67 + 3152) & 0xFFFFFFEF;
      *(_DWORD *)(v67 + 3152) = v69;
      *(_DWORD *)(SGDGetUserSessionState(v68, v69, v70, v71) + 3208) = v4;
      *(_DWORD *)(SGDGetUserSessionState(v73, v72, v74, v75) + 3212) = v5;
      *(_DWORD *)(SGDGetUserSessionState(v77, v76, v78, v79) + 3216) = v6;
      if ( (*(_DWORD *)(SGDGetUserSessionState(v81, v80, v82, v83) + 3152) & 4) != 0 )
        *(_DWORD *)(SGDGetUserSessionState(v85, v84, v86, v87) + 3172) = 40;
      if ( (*(_DWORD *)(SGDGetUserSessionState(v85, v84, v86, v87) + 3152) & 2) != 0 )
        *(_DWORD *)(SGDGetUserSessionState(v89, v88, v90, v91) + 3172) = 9;
      if ( *(_QWORD *)(SGDGetUserSessionState(v89, v88, v90, v91) + 3160) )
      {
        v107 = SGDGetUserSessionState(v22, v21, v23, v24);
        KeSetEvent(*(PRKEVENT *)(v107 + 3160), 1, 0);
      }
LABEL_30:
      if ( !v3 )
      {
LABEL_11:
        if ( v1 == 2 || v1 == 13 )
        {
          v92 = *((_DWORD *)a1 + 5);
          *(_DWORD *)(SGDGetUserSessionState(v22, v21, v23, v24) + 3228) = v92;
        }
        *(_DWORD *)(SGDGetUserSessionState(v22, v21, v23, v24) + 3224) = v1;
        v29 = SGDGetUserSessionState(v26, v25, v27, v28);
        ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)(v29 + 696));
        LOBYTE(v30) = 1;
        v31 = 0LL;
LABEL_14:
        v32 = QueuePowerRequest(v31, v30);
LABEL_15:
        v33 = v32;
        AddPowerStateLogEntry(2LL, v32);
        return v33;
      }
      goto LABEL_20;
    }
    v106 = SGDGetUserSessionState(v22, v21, v23, v24);
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)(v106 + 696));
    AddPowerStateLogEntry(2LL, 2151546888LL);
    return 2151546888LL;
  }
  if ( v1 == 14 )
  {
    *(_DWORD *)(v20 + 3212) = v5;
    goto LABEL_30;
  }
  if ( (*(_DWORD *)(v20 + 3152) & 1) != 0 )
  {
    if ( !v3 )
    {
      if ( v1 != 8 )
        goto LABEL_11;
      v40 = SGDGetUserSessionState(v22, v21, v23, v24);
      v41 = *(_DWORD *)(v40 + 3152) & 0xFFFFFFFE;
      *(_DWORD *)(v40 + 3152) = v41;
      *(_QWORD *)(SGDGetUserSessionState(v41, v42, v43, v44) + 3160) = 0LL;
    }
LABEL_20:
    v45 = SGDGetUserSessionState(v22, v21, v23, v24);
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)(v45 + 696));
LABEL_21:
    AddPowerStateLogEntry(2LL, 0LL);
    return 0LL;
  }
  v108 = SGDGetUserSessionState(v22, v21, v23, v24);
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)(v108 + 696));
  AddPowerStateLogEntry(2LL, 2151546889LL);
  return 2151546889LL;
}
