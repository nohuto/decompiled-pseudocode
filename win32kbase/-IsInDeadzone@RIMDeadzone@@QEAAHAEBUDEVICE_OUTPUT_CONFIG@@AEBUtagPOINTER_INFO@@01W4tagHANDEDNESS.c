/*
 * XREFs of ?IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS@@@Z @ 0x1C01C9370
 * Callers:
 *     rimAbIsPointInGlobalPenDeadzone @ 0x1C01A8710 (rimAbIsPointInGlobalPenDeadzone.c)
 *     rimAbIsPointInPenDeadzone @ 0x1C01A888C (rimAbIsPointInPenDeadzone.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _lambda_0204d79c2644d1b9cd88bde7d32e7162_::operator() @ 0x1C01C8BF8 (_lambda_0204d79c2644d1b9cd88bde7d32e7162_--operator().c)
 *     ?_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ @ 0x1C01C9B3C (-_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ.c)
 *     ?_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z @ 0x1C01C9BC8 (-_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z.c)
 *     ?_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1C01C9CAC (-_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     ?_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1C01CA0B8 (-_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     ?_IsAngleWithinRange@RIMDeadzone@@CAHKKUtagRIMDEADZONE_RANGE@@@Z @ 0x1C01CA4C8 (-_IsAngleWithinRange@RIMDeadzone@@CAHKKUtagRIMDEADZONE_RANGE@@@Z.c)
 *     ConvertPointCoordinates @ 0x1C0223374 (ConvertPointCoordinates.c)
 */

__int64 __fastcall RIMDeadzone::IsInDeadzone(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v9; // ebx
  unsigned int v10; // r13d
  int v11; // eax
  unsigned int v12; // r12d
  unsigned int v13; // esi
  unsigned int v14; // edi
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // r12d
  __int64 v21; // rdi
  unsigned int v22; // r12d
  __int64 v23; // rbx
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned int v27; // esi
  __int64 v28; // rbx
  __int64 v29; // r9
  int v30; // r8d
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  LONG v33; // ecx
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  int v41; // ebx
  int v42; // edi
  int v43; // esi
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  struct tagPOINT v60; // [rsp+38h] [rbp-59h] BYREF
  int v61[2]; // [rsp+40h] [rbp-51h] BYREF
  __int128 v62; // [rsp+48h] [rbp-49h]
  __int64 v63; // [rsp+58h] [rbp-39h]
  __int128 v64; // [rsp+68h] [rbp-29h]
  int *v65; // [rsp+78h] [rbp-19h]
  int *v66; // [rsp+80h] [rbp-11h]
  __int128 v67; // [rsp+88h] [rbp-9h]
  __int128 v68; // [rsp+98h] [rbp+7h]
  struct tagPOINT v69; // [rsp+F0h] [rbp+5Fh] BYREF
  __int64 v70; // [rsp+F8h] [rbp+67h]
  __int64 v71; // [rsp+100h] [rbp+6Fh]

  v71 = a4;
  v70 = a3;
  if ( *(_DWORD *)(a2 + 72) == *(_DWORD *)(a4 + 72) && *(_DWORD *)(a2 + 76) == *(_DWORD *)(a4 + 76) )
  {
    v9 = a6;
    v10 = 0;
    if ( *(_DWORD *)(a1 + 16) )
    {
      if ( a6 == *(_DWORD *)a1 )
        goto LABEL_11;
    }
    if ( *(_QWORD *)(a1 + 24) )
      RIMDeadzone::_ClearDeadzoneAreas((RIMDeadzone *)a1);
    v11 = v9
        ? RIMDeadzone::_InitializeRightHandedDeadzone((RIMDeadzone *)a1)
        : RIMDeadzone::_InitializeLeftHandedDeadzone((RIMDeadzone *)a1);
    if ( v11 >= 0 )
    {
LABEL_11:
      v12 = *(_DWORD *)(a3 + 36);
      v13 = *(_DWORD *)(a3 + 32);
      v65 = (int *)(a3 + 32);
      v60 = (struct tagPOINT)__PAIR64__(v12, v13);
      v14 = *(_DWORD *)(a5 + 36);
      v15 = *(_DWORD *)(a5 + 32);
      v66 = (int *)(a5 + 32);
      v69 = (struct tagPOINT)__PAIR64__(v14, v15);
      v69.x = RIMDeadzone::_GetAngle((struct tagPOINT)__PAIR64__(v12, v13), (struct tagPOINT)__PAIR64__(v14, v15));
      v20 = (v12 - v14) * (v12 - v14);
      v21 = 0LL;
      v22 = (v13 - v15) * (v13 - v15) + v20;
      if ( *(_DWORD *)(a1 + 32) )
      {
        while ( 1 )
        {
          v23 = *(_QWORD *)(a1 + 24);
          *(_QWORD *)&v62 = 3 * v21;
          v24 = *(_QWORD *)(v23 + 24 * v21);
          v25 = SGDGetUserSessionState(v17, v16, v18, v19);
          if ( (unsigned int)RIMDeadzone::_IsAngleWithinRange((unsigned int)v69.x, *(unsigned int *)(v25 + 464), v24) )
          {
            v26 = *(_QWORD *)(a1 + 24);
            v27 = 0;
            v17 = v62;
            if ( *(_DWORD *)(v26 + 8 * v62 + 16) )
              break;
          }
LABEL_18:
          v21 = (unsigned int)(v21 + 1);
          if ( (unsigned int)v21 >= *(_DWORD *)(a1 + 32) )
            goto LABEL_21;
        }
        v28 = v71;
        while ( 1 )
        {
          v29 = *(_QWORD *)(v26 + 8 * v17 + 8);
          v30 = *(_DWORD *)(v28 + 20);
          v31 = *(_OWORD *)(v28 + 4);
          v32 = *(_OWORD *)(v28 + 20);
          v60.y = *(_DWORD *)(v28 + 24);
          v61[1] = v60.y;
          v33 = v30 + *(_DWORD *)(v29 + 8LL * v27);
          v63 = 0LL;
          v60.x = v33;
          v61[0] = v30 + *(_DWORD *)(v29 + 8LL * v27 + 4);
          v64 = v31;
          v67 = v32;
          ConvertPointCoordinates(v33);
          v34 = *(_OWORD *)(v28 + 4);
          v35 = *(_OWORD *)(v28 + 20);
          *(_QWORD *)&v64 = 0LL;
          v67 = v34;
          v68 = v35;
          ConvertPointCoordinates(v61[0]);
          v36 = *(_DWORD *)(v28 + 4);
          v17 = (unsigned int)(-v36 * -v36);
          v16 = (unsigned int)-v36;
          if ( v22 >= (unsigned int)v17 )
          {
            v16 = (unsigned int)(v16 * v16);
            if ( v22 < (unsigned int)v16 )
              break;
          }
          v26 = *(_QWORD *)(a1 + 24);
          ++v27;
          v17 = v62;
          if ( v27 >= *(_DWORD *)(v26 + 8 * v62 + 16) )
            goto LABEL_18;
        }
        v10 = 1;
      }
LABEL_21:
      v62 = *(_OWORD *)(a2 + 20);
      if ( *(_DWORD *)(SGDGetUserSessionState(v17, v16, v18, v19) + 464) == 90
        || *(_DWORD *)(SGDGetUserSessionState(v38, v37, v39, v40) + 464) == 270 )
      {
        v43 = *(_DWORD *)(a2 + 24);
        v42 = *(_DWORD *)(a2 + 32);
        v41 = *(_DWORD *)(a2 + 28);
      }
      else
      {
        v41 = HIDWORD(v62);
        v42 = DWORD2(v62);
        v43 = v62;
      }
      v44 = SGDGetUserSessionState(v38, v37, v39, v40);
      lambda_0204d79c2644d1b9cd88bde7d32e7162_::operator()(
        *(unsigned int *)(v44 + 464),
        &v69,
        (int *)(v70 + 40),
        a2 + 20,
        *(_DWORD *)(v44 + 464));
      v49 = SGDGetUserSessionState(v46, v45, v47, v48);
      lambda_0204d79c2644d1b9cd88bde7d32e7162_::operator()(
        *(unsigned int *)(v49 + 464),
        &v60,
        v65,
        a2 + 4,
        *(_DWORD *)(v49 + 464));
      v54 = SGDGetUserSessionState(v51, v50, v52, v53);
      lambda_0204d79c2644d1b9cd88bde7d32e7162_::operator()(
        *(unsigned int *)(v54 + 464),
        v61,
        v66,
        v71 + 4,
        *(_DWORD *)(v54 + 464));
      if ( v10 || *(_DWORD *)(SGDGetUserSessionState(v56, v55, v57, v58) + 28) == 6 )
        return v10;
      if ( a6 == 1 )
      {
        if ( v69.y > v41 - 1000 && v60.x >= v61[0] )
          return 1;
        if ( v69.x <= v42 - 530 )
          return v10;
      }
      else
      {
        if ( a6 )
        {
          LODWORD(v71) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 840);
        }
        if ( v69.y > v41 - 1000 && v60.x <= v61[0] )
          return 1;
        if ( v69.x >= v43 + 530 )
          return v10;
      }
      if ( v60.y >= v61[1] )
        return 1;
      return v10;
    }
  }
  return 0LL;
}
