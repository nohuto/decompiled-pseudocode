/*
 * XREFs of RootHub_UcxEvtSetPortFeature @ 0x1C0016F50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0005BBC (WPP_RECORDER_SF_.c)
 *     Controller_IsControllerAccessible @ 0x1C000A8E4 (Controller_IsControllerAccessible.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x1C00105D0 (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0017FB0 (WPP_RECORDER_SF_ddd.c)
 *     XilRegister_ReadUlong @ 0x1C00180A0 (XilRegister_ReadUlong.c)
 *     WPP_RECORDER_SF_D @ 0x1C00180C4 (WPP_RECORDER_SF_D.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x1C00182B0 (RootHub_ReleaseReadModifyWriteLock.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x1C00182F4 (RootHub_AcquireReadModifyWriteLock.c)
 *     XilRegister_WriteUlong @ 0x1C0018428 (XilRegister_WriteUlong.c)
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     Controller_SetControllerGone @ 0x1C00347AC (Controller_SetControllerGone.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0037A20 (WPP_RECORDER_SF_sds.c)
 *     RootHub_ForceU0AndWait @ 0x1C003F5BC (RootHub_ForceU0AndWait.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C0040A98 (WPP_RECORDER_SF_DDDDDDDD.c)
 */

__int64 __fastcall RootHub_UcxEvtSetPortFeature(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rcx
  __int64 v5; // r13
  __int64 v6; // rbp
  int Ulong; // eax
  __int64 v8; // rdx
  unsigned int v9; // r11d
  int v10; // edi
  unsigned int v11; // ebx
  unsigned int v12; // r8d
  int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // rcx
  char v16; // r9
  int v17; // edi
  int v18; // edi
  int v19; // edi
  int v20; // eax
  int v21; // edx
  int v22; // ebx
  unsigned int v23; // ebx
  char v24; // al
  int v25; // edx
  int v26; // r9d
  __int64 v27; // r8
  __int16 v29; // ax
  __int16 v30; // di
  _UNKNOWN **v31; // rdx
  int v32; // edi
  unsigned int v33; // ebx
  int v34; // eax
  int v35; // edx
  int v36; // ebx
  unsigned int v37; // ebx
  int v38; // eax
  int v39; // edx
  int v40; // ebx
  unsigned int v41; // ebx
  int v42; // edi
  int v43; // edi
  int v44; // edi
  int v45; // edi
  int v46; // edi
  int v47; // edi
  int v48; // edx
  int v49; // r8d
  int v50; // r9d
  int v51; // r9d
  int v52; // edx
  int v53; // r8d
  int v54; // edi
  int v55; // edx
  int v56; // ebx
  unsigned int v57; // ebx
  int v58; // edx
  int v59; // ebx
  unsigned int v60; // ebx
  int v61; // eax
  char v62; // di
  int v63; // edx
  int v64; // ebx
  unsigned int v65; // edi
  int v66; // eax
  int v67; // edx
  int v68; // edi
  unsigned int v69; // edi
  int v70; // edi
  int v71; // eax
  int v72; // edx
  int v73; // ebx
  unsigned int v74; // ebx
  int v75; // eax
  int v76; // edx
  int v77; // ebx
  unsigned int v78; // ebx
  int v79; // eax
  int v80; // edx
  int v81; // ebx
  unsigned int v82; // ebx
  int v83; // eax
  int v84; // edx
  int v85; // ebx
  unsigned int v86; // ebx
  int v87; // eax
  int v88; // edx
  int v89; // edi
  int v90; // edi
  unsigned int v91; // edi
  char v92; // al
  int v93; // edx
  int v94; // eax
  int v95; // edx
  int v96; // esi
  char v97; // al
  int v98; // edx
  int v99; // eax
  int v100; // edx
  int v101; // edi
  unsigned int v102; // edi
  char v103; // al
  int v104; // edx
  unsigned int v105; // [rsp+70h] [rbp-A8h]
  __int64 v106; // [rsp+78h] [rbp-A0h]
  int v107; // [rsp+80h] [rbp-98h]
  __int64 v108; // [rsp+88h] [rbp-90h]
  __int64 v109; // [rsp+90h] [rbp-88h]
  __int64 v110; // [rsp+98h] [rbp-80h]
  _OWORD v112[2]; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v113; // [rsp+C8h] [rbp-50h]

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0063248);
  v4 = *(_QWORD *)(v3 + 8);
  v5 = *(_QWORD *)(v4 + 88);
  if ( *(_BYTE *)(v4 + 601) && KeGetCurrentIrql() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v48, v49, v50);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  v113 = 0LL;
  memset(v112, 0, sizeof(v112));
  LOWORD(v112[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v112);
  v6 = *((_QWORD *)&v112[0] + 1);
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v3 + 8)) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        2,
        11,
        123,
        (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids);
    goto LABEL_71;
  }
  Ulong = XilRegister_ReadUlong(v5, *(_QWORD *)(v3 + 32) + 4LL);
  if ( Ulong == -1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        2,
        11,
        124,
        (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids);
    LOBYTE(v8) = 1;
    Controller_SetControllerGone(*(_QWORD *)(v3 + 8), v8);
LABEL_71:
    *(_DWORD *)(v6 + 4) = -1073713152;
    v27 = 3221225486LL;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             a2,
             v27);
  }
  if ( (Ulong & 1) == 0 )
  {
    v9 = *(unsigned __int8 *)(v6 + 132);
    v10 = *(unsigned __int16 *)(v6 + 130);
    v11 = *(unsigned __int8 *)(v6 + 133);
    v107 = v9;
    if ( *(_WORD *)(v6 + 128) != 803 || !*(_BYTE *)(v6 + 132) || v9 > *(_DWORD *)(v3 + 16) || *(_WORD *)(v6 + 134) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v52 = *(unsigned __int8 *)(v6 + 134);
        v51 = 126;
        v53 = *(unsigned __int8 *)(v6 + 131);
        goto LABEL_196;
      }
      goto LABEL_197;
    }
    v12 = v9 - 1;
    v13 = 2;
    v14 = 120LL * (v9 - 1);
    v105 = v9 - 1;
    v106 = 16LL * (v9 - 1) + *(_QWORD *)(v3 + 40);
    v109 = v14;
    v15 = v106 + 4;
    v110 = v106 + 12;
    v108 = v106 + 4;
    v16 = *(_BYTE *)(v14 + *(_QWORD *)(v3 + 48) + 13);
    if ( v16 == 2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 4;
        WPP_RECORDER_SF_ddd(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v14,
          11,
          127,
          (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
          v9,
          v10,
          v11);
        v15 = v106 + 4;
        v12 = v105;
        v9 = v107;
      }
      if ( v10 == 21 )
      {
        if ( v11 > 5 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v51 = 143;
            goto LABEL_79;
          }
          goto LABEL_197;
        }
        goto LABEL_111;
      }
      if ( v10 == 22 )
      {
        if ( v11 > 3 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v51 = 147;
            goto LABEL_79;
          }
          goto LABEL_197;
        }
        goto LABEL_100;
      }
      if ( v11 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v51 = 128;
LABEL_79:
          v52 = *(unsigned __int8 *)(v6 + 134);
          v53 = *(unsigned __int8 *)(v6 + 133);
LABEL_196:
          WPP_RECORDER_SF_DDDDDDDD(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL), v52, v53, v51);
        }
LABEL_197:
        v27 = 3221225473LL;
        goto LABEL_198;
      }
      v17 = v10 - 2;
      if ( v17 )
      {
        v18 = v17 - 2;
        if ( !v18 )
        {
          RootHub_AcquireReadModifyWriteLock(v3, v12);
          if ( *(_BYTE *)(v109 + *(_QWORD *)(v3 + 48) + 20) )
          {
            v56 = XilRegister_ReadUlong(v5, v108);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v55) = 4;
              WPP_RECORDER_SF_D(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v55,
                11,
                129,
                (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
                v56);
            }
            v57 = v56 & 0xFFFE0007;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v55) = 4;
              WPP_RECORDER_SF_D(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v55,
                11,
                130,
                (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
                v57);
            }
            XilRegister_WriteUlong(v5, v108, v57);
            v59 = XilRegister_ReadUlong(v5, v110);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v58) = 4;
              WPP_RECORDER_SF_D(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v58,
                11,
                131,
                (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
                v59);
            }
            v60 = v59 & 0xFFFFC000;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v58) = 4;
              WPP_RECORDER_SF_D(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v58,
                11,
                132,
                (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
                v60);
            }
            XilRegister_WriteUlong(v5, v110, v60);
            *(_BYTE *)(v109 + *(_QWORD *)(v3 + 48) + 20) = 0;
          }
          v34 = XilRegister_ReadUlong(v5, v106);
          v36 = v34;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v35) = 4;
            WPP_RECORDER_SF_D(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v35,
              11,
              133,
              (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
              v34);
          }
          v37 = v36 & 0xE00C200 | 0x10;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v35) = 4;
            WPP_RECORDER_SF_D(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v35,
              11,
              134,
              (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
              v37);
          }
          XilRegister_WriteUlong(v5, v106, v37);
          RootHub_ReleaseReadModifyWriteLock(v3, v105);
          v24 = XilRegister_ReadUlong(v5, v106);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_25;
          v26 = 135;
          goto LABEL_24;
        }
        v19 = v18 - 4;
        if ( !v19 )
        {
          RootHub_AcquireReadModifyWriteLock(v3, v12);
          v20 = XilRegister_ReadUlong(v5, v106);
          v22 = v20;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v21) = 4;
            WPP_RECORDER_SF_D(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v21,
              11,
              140,
              (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
              v20);
          }
          v23 = v22 & 0xE00C000 | 0x200;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v21) = 4;
            WPP_RECORDER_SF_D(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v21,
              11,
              141,
              (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
              v23);
          }
          XilRegister_WriteUlong(v5, v106, v23);
          RootHub_ReleaseReadModifyWriteLock(v3, v105);
          v24 = XilRegister_ReadUlong(v5, v106);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_25;
          v26 = 142;
LABEL_24:
          LOBYTE(v25) = 4;
          WPP_RECORDER_SF_D(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v25,
            11,
            v26,
            (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
            v24);
LABEL_25:
          *(_DWORD *)(v6 + 4) = 0;
          v27 = 0LL;
          return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
                   WdfDriverGlobals,
                   a2,
                   v27);
        }
        v54 = v19 - 13;
        if ( v54 )
        {
          if ( v54 != 1 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v51 = 151;
              goto LABEL_79;
            }
            goto LABEL_197;
          }
LABEL_100:
          v62 = 0;
          if ( v11 != 3 )
            v62 = v11;
          RootHub_AcquireReadModifyWriteLock(v3, v12);
          v64 = XilRegister_ReadUlong(v5, v106);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v63) = 4;
            WPP_RECORDER_SF_D(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v63,
              11,
              148,
              (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
              v64);
          }
          v65 = v64 & 0xE000200 | ((v62 & 3) << 14);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v63) = 4;
            WPP_RECORDER_SF_D(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v63,
              11,
              149,
              (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
              v65);
          }
          XilRegister_WriteUlong(v5, v106, v65);
          RootHub_ReleaseReadModifyWriteLock(v3, v105);
          v24 = XilRegister_ReadUlong(v5, v106);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_25;
          v26 = 150;
          goto LABEL_24;
        }
LABEL_111:
        v66 = XilRegister_ReadUlong(v5, v15);
        v68 = v66;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v67) = 4;
          WPP_RECORDER_SF_D(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v67,
            11,
            144,
            (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
            v66);
        }
        v69 = (v11 << 28) | v68 & 0xFFFFFFF;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v67) = 4;
          WPP_RECORDER_SF_D(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v67,
            11,
            145,
            (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
            v69);
        }
        XilRegister_WriteUlong(v5, v108, v69);
        v24 = XilRegister_ReadUlong(v5, v108);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_25;
        v26 = 146;
        goto LABEL_24;
      }
      if ( (*(_QWORD *)(*(_QWORD *)(v3 + 8) + 336LL) & 0x8000000LL) == 0
        || (v61 = RootHub_ForceU0AndWait(v3, v9), v27 = (unsigned int)v61, v61 >= 0) )
      {
        RootHub_AcquireReadModifyWriteLock(v3, v105);
        *(_BYTE *)(v109 + *(_QWORD *)(v3 + 48) + 18) = 0;
        v38 = XilRegister_ReadUlong(v5, v106);
        v40 = v38;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v39) = 4;
          WPP_RECORDER_SF_D(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v39,
            11,
            136,
            (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
            v38);
        }
        if ( ((v40 & 2) == 0 || (v40 & 0x1E0u) >= 0x60)
          && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v39) = 3;
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v39,
            11,
            137,
            (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids);
        }
        v41 = v40 & 0xE00C200 | 0x10060;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v39) = 4;
          WPP_RECORDER_SF_D(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v39,
            11,
            138,
            (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
            v41);
        }
        XilRegister_WriteUlong(v5, v106, v41);
        RootHub_ReleaseReadModifyWriteLock(v3, v105);
        v24 = XilRegister_ReadUlong(v5, v106);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_25;
        v26 = 139;
        goto LABEL_24;
      }
LABEL_198:
      *(_DWORD *)(v6 + 4) = -1073741820;
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
               WdfDriverGlobals,
               a2,
               v27);
    }
    if ( v16 != 3 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v51 = 182;
        v52 = *(unsigned __int8 *)(v6 + 134);
        v53 = *(unsigned __int8 *)(v6 + 131);
        goto LABEL_196;
      }
      goto LABEL_197;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 4;
      WPP_RECORDER_SF_ddd(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v14,
        11,
        152,
        (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
        v9,
        v10,
        v11);
      v15 = v106 + 4;
      v12 = v105;
      v9 = v107;
    }
    switch ( v10 )
    {
      case 27:
LABEL_31:
        if ( (unsigned __int8)v11 < 8u )
        {
          RootHub_AcquireReadModifyWriteLock(v3, v12);
          v29 = XilRegister_ReadUlong(v5, v106);
          v30 = v29;
          v31 = &WPP_RECORDER_INITIALIZED;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v31) = 4;
            WPP_RECORDER_SF_D(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              (_DWORD)v31,
              11,
              175,
              (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
              v29);
            v31 = &WPP_RECORDER_INITIALIZED;
          }
          v32 = v30 & 0xC200;
          if ( (*(_DWORD *)(v109 + *(_QWORD *)(v3 + 48) + 64) & 2) != 0 )
            v33 = v32;
          else
            v33 = v32 | ((v11 & 7) << 25);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v31) = 4;
            WPP_RECORDER_SF_D(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              (_DWORD)v31,
              11,
              176,
              (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
              v33);
          }
          XilRegister_WriteUlong(v5, v106, v33);
          RootHub_ReleaseReadModifyWriteLock(v3, v105);
          v24 = XilRegister_ReadUlong(v5, v106);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_25;
          v26 = 177;
          goto LABEL_24;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_197;
        v51 = 174;
        goto LABEL_79;
      case 23:
        goto LABEL_185;
      case 24:
        goto LABEL_178;
      case 5:
        if ( v11 > 5 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v51 = 170;
            goto LABEL_79;
          }
          goto LABEL_197;
        }
        break;
      default:
        if ( v11 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v51 = 153;
            goto LABEL_79;
          }
          goto LABEL_197;
        }
        v42 = v10 - 4;
        if ( !v42 )
        {
          RootHub_AcquireReadModifyWriteLock(v3, v12);
          v83 = XilRegister_ReadUlong(v5, v106);
          v85 = v83;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v84) = 4;
            WPP_RECORDER_SF_D(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v84,
              11,
              154,
              (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
              v83);
          }
          v86 = v85 & 0xE00C200 | 0x10;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v84) = 4;
            WPP_RECORDER_SF_D(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v84,
              11,
              155,
              (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
              v86);
          }
          XilRegister_WriteUlong(v5, v106, v86);
          RootHub_ReleaseReadModifyWriteLock(v3, v105);
          v24 = XilRegister_ReadUlong(v5, v106);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_25;
          v26 = 156;
          goto LABEL_24;
        }
        v43 = v42 - 1;
        if ( v43 )
        {
          v44 = v43 - 3;
          if ( !v44 )
          {
            RootHub_AcquireReadModifyWriteLock(v3, v12);
            v79 = XilRegister_ReadUlong(v5, v106);
            v81 = v79;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v80) = 4;
              WPP_RECORDER_SF_D(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v80,
                11,
                160,
                (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
                v79);
            }
            v82 = v81 & 0xE00C000 | 0x200;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v80) = 4;
              WPP_RECORDER_SF_D(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v80,
                11,
                161,
                (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
                v82);
            }
            XilRegister_WriteUlong(v5, v106, v82);
            RootHub_ReleaseReadModifyWriteLock(v3, v105);
            v24 = XilRegister_ReadUlong(v5, v106);
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_25;
            v26 = 162;
            goto LABEL_24;
          }
          v45 = v44 - 15;
          if ( v45 )
          {
            v46 = v45 - 1;
            if ( v46 )
            {
              v47 = v46 - 3;
              if ( v47 )
              {
                v70 = v47 - 1;
                if ( !v70 )
                {
                  RootHub_AcquireReadModifyWriteLock(v3, v12);
                  v75 = XilRegister_ReadUlong(v5, v106);
                  v77 = v75;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v76) = 4;
                    WPP_RECORDER_SF_D(
                      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                      v76,
                      11,
                      157,
                      (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
                      v75);
                  }
                  v78 = v77 & 0xE00C200 | 0x80000000;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v76) = 4;
                    WPP_RECORDER_SF_D(
                      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                      v76,
                      11,
                      158,
                      (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
                      v78);
                  }
                  XilRegister_WriteUlong(v5, v106, v78);
                  RootHub_ReleaseReadModifyWriteLock(v3, v105);
                  v24 = XilRegister_ReadUlong(v5, v106);
                  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    goto LABEL_25;
                  v26 = 159;
                  goto LABEL_24;
                }
                if ( v70 == 2 )
                {
                  v71 = XilRegister_ReadUlong(v5, v15);
                  v73 = v71;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v72) = 4;
                    WPP_RECORDER_SF_D(
                      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                      v72,
                      11,
                      178,
                      (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
                      v71);
                  }
                  v74 = v73 | 0x10000;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v72) = 4;
                    WPP_RECORDER_SF_D(
                      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                      v72,
                      11,
                      179,
                      (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
                      v74);
                  }
                  XilRegister_WriteUlong(v5, v108, v74);
                  v24 = XilRegister_ReadUlong(v5, v108);
                  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    goto LABEL_25;
                  v26 = 180;
                  goto LABEL_24;
                }
                if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  goto LABEL_197;
                v51 = 181;
                goto LABEL_79;
              }
              goto LABEL_31;
            }
LABEL_178:
            v96 = XilRegister_ReadUlong(v5, v15);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v95) = 4;
              WPP_RECORDER_SF_D(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v95,
                11,
                167,
                (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
                v96);
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v95) = 4;
              WPP_RECORDER_SF_D(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v95,
                11,
                168,
                (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
                v96);
            }
            XilRegister_WriteUlong(v5, v108, v96 & 0xFFFF00FF | (v11 << 8));
            v97 = XilRegister_ReadUlong(v5, v108);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v98) = 4;
              WPP_RECORDER_SF_D(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v98,
                11,
                169,
                (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
                v97);
            }
            *(_BYTE *)(v109 + *(_QWORD *)(v3 + 48) + 22) = v11;
            goto LABEL_25;
          }
LABEL_185:
          v99 = XilRegister_ReadUlong(v5, v15);
          v101 = v99;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v100) = 4;
            WPP_RECORDER_SF_D(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v100,
              11,
              164,
              (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
              v99);
          }
          v102 = v11 | v101 & 0xFFFFFF00;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v100) = 4;
            WPP_RECORDER_SF_D(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v100,
              11,
              165,
              (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
              v102);
          }
          XilRegister_WriteUlong(v5, v108, v102);
          v103 = XilRegister_ReadUlong(v5, v108);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v104) = 4;
            WPP_RECORDER_SF_D(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v104,
              11,
              166,
              (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
              v103);
          }
          *(_BYTE *)(v109 + *(_QWORD *)(v3 + 48) + 21) = v11;
          goto LABEL_25;
        }
        break;
    }
    if ( (*(_QWORD *)(*(_QWORD *)(v3 + 8) + 336LL) & 0x80000LL) != 0 )
    {
      if ( v11 )
      {
        v87 = RootHub_ForceU0AndWait(v3, v9);
        goto LABEL_161;
      }
    }
    else if ( v11 )
    {
LABEL_164:
      RootHub_AcquireReadModifyWriteLock(v3, v105);
      if ( v11 == 3 )
        *(_BYTE *)(v109 + *(_QWORD *)(v3 + 48) + 18) = 0;
      v89 = XilRegister_ReadUlong(v5, v106);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v88) = 4;
        WPP_RECORDER_SF_D(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v88,
          11,
          171,
          (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
          v89);
      }
      v90 = v89 & 0xE00C200;
      if ( v11 != 4 )
        v13 = 32 * (v11 & 0xF | 0x800);
      v91 = v13 | v90;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v88) = 4;
        WPP_RECORDER_SF_D(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v88,
          11,
          172,
          (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
          v91);
      }
      XilRegister_WriteUlong(v5, v106, v91);
      RootHub_ReleaseReadModifyWriteLock(v3, v105);
      v92 = XilRegister_ReadUlong(v5, v106);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v93) = 4;
        WPP_RECORDER_SF_D(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v93,
          11,
          173,
          (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
          v92);
      }
      if ( v11 != 3 )
        goto LABEL_25;
      if ( (*(_QWORD *)(*(_QWORD *)(v3 + 8) + 336LL) & 0x4000000LL) == 0 )
        goto LABEL_25;
      v94 = RootHub_WaitForPendingU3TransitionCompletion((_QWORD *)v3, v107, 1);
      v27 = (unsigned int)v94;
      if ( v94 >= 0 )
        goto LABEL_25;
      goto LABEL_198;
    }
    v87 = RootHub_WaitForPendingU3TransitionCompletion((_QWORD *)v3, v9, 0);
LABEL_161:
    v27 = (unsigned int)v87;
    if ( v87 < 0 )
      goto LABEL_198;
    goto LABEL_164;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      2,
      11,
      125,
      (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids);
  *(_DWORD *)(v6 + 4) = -1073741807;
  v27 = 3221225666LL;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           a2,
           v27);
}
