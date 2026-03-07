__int64 __fastcall RootHub_UcxEvtClearPortFeature(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rcx
  __int64 v5; // r15
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // r14
  int v10; // edx
  __int64 v11; // r8
  int Ulong; // eax
  __int64 v13; // rdx
  unsigned int v14; // r11d
  unsigned int v15; // r8d
  int v16; // ebx
  unsigned int v17; // r12d
  __int64 v18; // r13
  unsigned int v19; // edx
  __int64 v20; // r9
  int v21; // r9d
  int v22; // edx
  int v23; // r8d
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  int v27; // ebx
  int v28; // ebx
  int v29; // ebx
  int v30; // ebx
  int v31; // ebx
  int v32; // edx
  int v33; // ebx
  unsigned int v34; // ebx
  char v35; // al
  int v36; // edx
  int v37; // r9d
  int v38; // edx
  int v39; // ebx
  unsigned int v40; // ebx
  int v41; // edx
  int v42; // ebx
  unsigned int v43; // ebx
  int v44; // edx
  int v45; // ebx
  unsigned int v46; // ebx
  int v47; // edx
  int v48; // ebx
  unsigned int v49; // ebx
  int v50; // edx
  int v51; // ebx
  unsigned int v52; // ebx
  int v53; // eax
  int v54; // eax
  int v55; // ebx
  _UNKNOWN **v56; // rdx
  unsigned int v57; // ebx
  char v58; // al
  int v59; // edx
  __int64 v60; // rdx
  unsigned __int16 v61; // ax
  int v62; // eax
  int v63; // ebx
  _UNKNOWN **v64; // rdx
  __int64 v65; // r10
  unsigned int v66; // ebx
  int v67; // r9d
  __int64 v68; // rcx
  int v69; // edx
  int v70; // ebx
  unsigned int v71; // ebx
  int v72; // ebx
  int v73; // ebx
  int v74; // ebx
  int v75; // ebx
  int v76; // ebx
  int v77; // ebx
  int v78; // ebx
  int v79; // eax
  int v80; // edx
  int v81; // ebx
  unsigned int v82; // ebx
  int v83; // edx
  int v84; // ebx
  unsigned int v85; // ebx
  int v86; // edx
  int v87; // ebx
  unsigned int v88; // ebx
  int v89; // edx
  int v90; // ebx
  unsigned int v91; // ebx
  int v92; // eax
  int v93; // edx
  int v94; // ebx
  bool v95; // zf
  __int64 v96; // rbx
  __int64 v97; // rax
  int v98; // r9d
  int v99; // edx
  int v100; // ebx
  unsigned int v101; // ebx
  int v102; // edx
  int v103; // ebx
  unsigned int v104; // ebx
  int v105; // edx
  int v106; // ebx
  unsigned int v107; // ebx
  int v108; // eax
  int v109; // ebx
  int v110; // edx
  int v111; // ebx
  unsigned int v112; // ebx
  unsigned int v114; // [rsp+70h] [rbp-88h]
  int v115; // [rsp+70h] [rbp-88h]
  int v116; // [rsp+70h] [rbp-88h]
  unsigned int v117; // [rsp+74h] [rbp-84h]
  __int64 v118; // [rsp+78h] [rbp-80h]
  __int64 v119; // [rsp+80h] [rbp-78h]
  _OWORD v121[2]; // [rsp+90h] [rbp-68h] BYREF
  __int64 v122; // [rsp+B0h] [rbp-48h]

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0063248);
  v4 = *(_QWORD *)(v3 + 8);
  v5 = *(_QWORD *)(v4 + 88);
  if ( *(_BYTE *)(v4 + 601) && KeGetCurrentIrql() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v6, v7, v8);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  v122 = 0LL;
  memset(v121, 0, sizeof(v121));
  LOWORD(v121[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v121);
  v9 = *((_QWORD *)&v121[0] + 1);
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v3 + 8)) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v10,
        11,
        38,
        (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids);
    }
LABEL_10:
    *(_DWORD *)(v9 + 4) = -1073713152;
    v11 = 3221225486LL;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             a2,
             v11);
  }
  Ulong = XilRegister_ReadUlong(v5, *(_QWORD *)(v3 + 32) + 4LL);
  if ( Ulong == -1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v13,
        11,
        39,
        (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids);
    }
    LOBYTE(v13) = 1;
    Controller_SetControllerGone(*(_QWORD *)(v3 + 8), v13);
    goto LABEL_10;
  }
  if ( (Ulong & 1) == 0 )
  {
    v14 = *(unsigned __int8 *)(v9 + 132);
    v15 = *(unsigned __int8 *)(v9 + 133);
    v16 = *(unsigned __int16 *)(v9 + 130);
    v114 = v14;
    v117 = v15;
    if ( *(_WORD *)(v9 + 128) != 291 || !*(_BYTE *)(v9 + 132) || v14 > *(_DWORD *)(v3 + 16) || *(_WORD *)(v9 + 134) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = *(unsigned __int8 *)(v9 + 134);
        v21 = 41;
        v23 = *(unsigned __int8 *)(v9 + 131);
        goto LABEL_199;
      }
      goto LABEL_200;
    }
    v17 = v14 - 1;
    v19 = v14 - 1;
    v18 = *(_QWORD *)(v3 + 40) + 16LL * (v14 - 1);
    v118 = 120LL * (v14 - 1);
    LOBYTE(v19) = *(_BYTE *)(v118 + *(_QWORD *)(v3 + 48) + 13);
    v20 = v18 + 4;
    v119 = v18 + 4;
    if ( (_BYTE)v19 == 2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v19) = 4;
        WPP_RECORDER_SF_ddd(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v19,
          11,
          42,
          (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
          v14,
          v16,
          v15);
        v14 = v114;
        v15 = v117;
      }
      if ( v16 == 22 )
      {
        if ( v15 > 3 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v21 = 56;
            goto LABEL_30;
          }
          goto LABEL_200;
        }
LABEL_111:
        RootHub_AcquireReadModifyWriteLock(v3, v17);
        v70 = XilRegister_ReadUlong(v5, v18);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v69) = 4;
          WPP_RECORDER_SF_D(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v69,
            11,
            57,
            (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
            v70);
        }
        v71 = v70 & 0xE000200;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v69) = 4;
          WPP_RECORDER_SF_D(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v69,
            11,
            58,
            (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
            v71);
        }
        XilRegister_WriteUlong(v5, v18, v71);
        RootHub_ReleaseReadModifyWriteLock(v3, v17);
        v35 = XilRegister_ReadUlong(v5, v18);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_194;
        v37 = 59;
        goto LABEL_193;
      }
      if ( v15 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v21 = 43;
LABEL_30:
          v22 = *(unsigned __int8 *)(v9 + 134);
          v23 = *(unsigned __int8 *)(v9 + 133);
LABEL_199:
          WPP_RECORDER_SF_DDDDDDDD(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL), v22, v23, v21);
          goto LABEL_200;
        }
        goto LABEL_200;
      }
      v24 = v16 - 1;
      if ( v24 )
      {
        v25 = v24 - 1;
        if ( v25 )
        {
          v26 = v25 - 6;
          if ( v26 )
          {
            v27 = v26 - 8;
            if ( v27 )
            {
              v28 = v27 - 1;
              if ( v28 )
              {
                v29 = v28 - 1;
                if ( v29 )
                {
                  v30 = v29 - 1;
                  if ( v30 )
                  {
                    v31 = v30 - 1;
                    if ( v31 )
                    {
                      if ( v31 != 2 )
                      {
                        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                        {
                          v21 = 75;
                          goto LABEL_30;
                        }
LABEL_200:
                        v11 = 3221225473LL;
                        goto LABEL_201;
                      }
                      goto LABEL_111;
                    }
                    RootHub_AcquireReadModifyWriteLock(v3, v17);
                    v33 = XilRegister_ReadUlong(v5, v18);
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      LOBYTE(v32) = 4;
                      WPP_RECORDER_SF_D(
                        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                        v32,
                        11,
                        63,
                        (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
                        v33);
                    }
                    v34 = v33 & 0xE00C200 | 0x200000;
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      LOBYTE(v32) = 4;
                      WPP_RECORDER_SF_D(
                        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                        v32,
                        11,
                        64,
                        (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
                        v34);
                    }
                    XilRegister_WriteUlong(v5, v18, v34);
                    RootHub_ReleaseReadModifyWriteLock(v3, v17);
                    v35 = XilRegister_ReadUlong(v5, v18);
                    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      goto LABEL_194;
                    v37 = 65;
                  }
                  else
                  {
                    RootHub_AcquireReadModifyWriteLock(v3, v17);
                    v39 = XilRegister_ReadUlong(v5, v18);
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      LOBYTE(v38) = 4;
                      WPP_RECORDER_SF_D(
                        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                        v38,
                        11,
                        72,
                        (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
                        v39);
                    }
                    v40 = v39 & 0xE00C200 | 0x100000;
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      LOBYTE(v38) = 4;
                      WPP_RECORDER_SF_D(
                        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                        v38,
                        11,
                        73,
                        (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
                        v40);
                    }
                    XilRegister_WriteUlong(v5, v18, v40);
                    RootHub_ReleaseReadModifyWriteLock(v3, v17);
                    v35 = XilRegister_ReadUlong(v5, v18);
                    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      goto LABEL_194;
                    v37 = 74;
                  }
                }
                else
                {
                  RootHub_AcquireReadModifyWriteLock(v3, v17);
                  v42 = XilRegister_ReadUlong(v5, v18);
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v41) = 4;
                    WPP_RECORDER_SF_D(
                      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                      v41,
                      11,
                      69,
                      (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
                      v42);
                  }
                  v43 = v42 & 0xE00C200 | 0x400000;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v41) = 4;
                    WPP_RECORDER_SF_D(
                      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                      v41,
                      11,
                      70,
                      (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
                      v43);
                  }
                  XilRegister_WriteUlong(v5, v18, v43);
                  RootHub_ReleaseReadModifyWriteLock(v3, v17);
                  v35 = XilRegister_ReadUlong(v5, v18);
                  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    goto LABEL_194;
                  v37 = 71;
                }
              }
              else
              {
                RootHub_AcquireReadModifyWriteLock(v3, v17);
                v45 = XilRegister_ReadUlong(v5, v18);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v44) = 4;
                  WPP_RECORDER_SF_D(
                    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                    v44,
                    11,
                    66,
                    (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
                    v45);
                }
                v46 = v45 & 0xE00C200 | 0x40000;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v44) = 4;
                  WPP_RECORDER_SF_D(
                    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                    v44,
                    11,
                    67,
                    (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
                    v46);
                }
                XilRegister_WriteUlong(v5, v18, v46);
                RootHub_ReleaseReadModifyWriteLock(v3, v17);
                v35 = XilRegister_ReadUlong(v5, v18);
                if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  goto LABEL_194;
                v37 = 68;
              }
            }
            else
            {
              RootHub_AcquireReadModifyWriteLock(v3, v17);
              v48 = XilRegister_ReadUlong(v5, v18);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v47) = 4;
                WPP_RECORDER_SF_D(
                  *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                  v47,
                  11,
                  60,
                  (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
                  v48);
              }
              v49 = v48 & 0xE00C200 | 0x20000;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v47) = 4;
                WPP_RECORDER_SF_D(
                  *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                  v47,
                  11,
                  61,
                  (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
                  v49);
              }
              XilRegister_WriteUlong(v5, v18, v49);
              RootHub_ReleaseReadModifyWriteLock(v3, v17);
              v35 = XilRegister_ReadUlong(v5, v18);
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_194;
              v37 = 62;
            }
          }
          else
          {
            RootHub_AcquireReadModifyWriteLock(v3, v17);
            v51 = XilRegister_ReadUlong(v5, v18);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v50) = 4;
              WPP_RECORDER_SF_D(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v50,
                11,
                53,
                (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
                v51);
            }
            v52 = v51 & 0xE00C000;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v50) = 4;
              WPP_RECORDER_SF_D(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v50,
                11,
                54,
                (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
                v52);
            }
            XilRegister_WriteUlong(v5, v18, v52);
            RootHub_ReleaseReadModifyWriteLock(v3, v17);
            v35 = XilRegister_ReadUlong(v5, v18);
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_194;
            v37 = 55;
          }
LABEL_193:
          LOBYTE(v36) = 4;
          WPP_RECORDER_SF_D(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v36,
            11,
            v37,
            (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
            v35);
          goto LABEL_194;
        }
        v53 = RootHub_WaitForPendingU3TransitionCompletion((_QWORD *)v3, v14, 0);
        v11 = (unsigned int)v53;
        if ( v53 < 0 )
        {
LABEL_201:
          *(_DWORD *)(v9 + 4) = -1073741820;
          return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
                   WdfDriverGlobals,
                   a2,
                   v11);
        }
        RootHub_AcquireReadModifyWriteLock(v3, v17);
        v54 = XilRegister_ReadUlong(v5, v18);
        v55 = v54;
        v56 = &WPP_RECORDER_INITIALIZED;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v56) = 4;
          WPP_RECORDER_SF_D(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            (_DWORD)v56,
            11,
            49,
            (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
            v54);
          v56 = &WPP_RECORDER_INITIALIZED;
        }
        if ( ((v55 & 2) == 0 || (v55 & 0x1E0) != 0x60 && (v55 & 0x1E0) != 0x1E0)
          && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v56) = 2;
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            (_DWORD)v56,
            11,
            50,
            (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids);
        }
        v57 = v55 & 0xE00C200 | 0x101E0;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v56) = 4;
          WPP_RECORDER_SF_D(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            (_DWORD)v56,
            11,
            51,
            (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
            v57);
        }
        XilRegister_WriteUlong(v5, v18, v57);
        RootHub_ReleaseReadModifyWriteLock(v3, v17);
        v58 = XilRegister_ReadUlong(v5, v18);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v59) = 4;
          WPP_RECORDER_SF_D(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v59,
            11,
            52,
            (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
            v58);
        }
        v60 = *(_QWORD *)(v3 + 48);
        if ( *(int *)(v60 + v118 + 48) <= 0 )
          v61 = 50;
        else
          v61 = *(_WORD *)(v60 + v118 + 52);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
          WdfDriverGlobals,
          *(_QWORD *)(v60 + v118 + 40),
          -10000LL * v61);
        goto LABEL_194;
      }
      RootHub_AcquireReadModifyWriteLock(v3, v17);
      v62 = XilRegister_ReadUlong(v5, v18);
      v63 = v62;
      v64 = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v64) = 4;
        WPP_RECORDER_SF_D(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          (_DWORD)v64,
          11,
          44,
          (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
          v62);
        v64 = &WPP_RECORDER_INITIALIZED;
      }
      v65 = *(_QWORD *)(v3 + 8);
      if ( (*(_QWORD *)(v65 + 336) & 0x2000000LL) != 0 )
      {
        if ( ((v63 & 2) == 0 || (v63 & 0x1E0u) >= 0x60)
          && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v64) = 3;
          WPP_RECORDER_SF_(
            *(_QWORD *)(v65 + 72),
            (_DWORD)v64,
            11,
            45,
            (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids);
        }
        v66 = v63 & 0xE00C200 | 0x10060;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_106:
          XilRegister_WriteUlong(v5, v18, v66);
          RootHub_ReleaseReadModifyWriteLock(v3, v17);
          v35 = XilRegister_ReadUlong(v5, v18);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v37 = 48;
            goto LABEL_193;
          }
LABEL_194:
          *(_DWORD *)(v9 + 4) = 0;
          v11 = 0LL;
          return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
                   WdfDriverGlobals,
                   a2,
                   v11);
        }
        v67 = 46;
        v68 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL);
      }
      else
      {
        v66 = v63 & 0xE00C200 | 2;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_106;
        v68 = *(_QWORD *)(v65 + 72);
        v67 = 47;
      }
      LOBYTE(v64) = 4;
      WPP_RECORDER_SF_D(v68, (_DWORD)v64, 11, v67, (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids, v66);
      goto LABEL_106;
    }
    if ( (_BYTE)v19 != 3 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v21 = 105;
        v22 = *(unsigned __int8 *)(v9 + 134);
        v23 = *(unsigned __int8 *)(v9 + 131);
        goto LABEL_199;
      }
      goto LABEL_200;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v19) = 4;
      WPP_RECORDER_SF_ddd(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v19,
        11,
        76,
        (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
        v14,
        v16,
        v15);
      v15 = v117;
      v20 = v18 + 4;
    }
    if ( v15 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v21 = 77;
        goto LABEL_30;
      }
      goto LABEL_200;
    }
    v72 = v16 - 8;
    if ( !v72 )
    {
      RootHub_AcquireReadModifyWriteLock(v3, v17);
      v111 = XilRegister_ReadUlong(v5, v18);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v110) = 4;
        WPP_RECORDER_SF_D(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v110,
          11,
          78,
          (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
          v111);
      }
      v112 = v111 & 0xE00C000;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v110) = 4;
        WPP_RECORDER_SF_D(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v110,
          11,
          79,
          (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
          v112);
      }
      XilRegister_WriteUlong(v5, v18, v112);
      RootHub_ReleaseReadModifyWriteLock(v3, v17);
      v35 = XilRegister_ReadUlong(v5, v18);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_194;
      v37 = 80;
      goto LABEL_193;
    }
    v73 = v72 - 8;
    if ( v73 )
    {
      v74 = v73 - 3;
      if ( !v74 )
      {
        RootHub_AcquireReadModifyWriteLock(v3, v17);
        v103 = XilRegister_ReadUlong(v5, v18);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v102) = 4;
          WPP_RECORDER_SF_D(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v102,
            11,
            88,
            (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
            v103);
        }
        v104 = v103 & 0xE00C200 | 0x100000;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v102) = 4;
          WPP_RECORDER_SF_D(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v102,
            11,
            89,
            (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
            v104);
        }
        XilRegister_WriteUlong(v5, v18, v104);
        RootHub_ReleaseReadModifyWriteLock(v3, v17);
        v35 = XilRegister_ReadUlong(v5, v18);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_194;
        v37 = 90;
        goto LABEL_193;
      }
      v75 = v74 - 1;
      if ( !v75 )
      {
        RootHub_AcquireReadModifyWriteLock(v3, v17);
        v100 = XilRegister_ReadUlong(v5, v18);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v99) = 4;
          WPP_RECORDER_SF_D(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v99,
            11,
            85,
            (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
            v100);
        }
        v101 = v100 & 0xE00C200 | 0x200000;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v99) = 4;
          WPP_RECORDER_SF_D(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v99,
            11,
            86,
            (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
            v101);
        }
        XilRegister_WriteUlong(v5, v18, v101);
        RootHub_ReleaseReadModifyWriteLock(v3, v17);
        v35 = XilRegister_ReadUlong(v5, v18);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_194;
        v37 = 87;
        goto LABEL_193;
      }
      v76 = v75 - 5;
      if ( v76 )
      {
        v77 = v76 - 1;
        if ( !v77 )
        {
          RootHub_AcquireReadModifyWriteLock(v3, v17);
          v87 = XilRegister_ReadUlong(v5, v18);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v86) = 4;
            WPP_RECORDER_SF_D(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v86,
              11,
              95,
              (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
              v87);
          }
          v88 = v87 & 0xE00C200 | 0x800000;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v86) = 4;
            WPP_RECORDER_SF_D(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v86,
              11,
              96,
              (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
              v88);
          }
          XilRegister_WriteUlong(v5, v18, v88);
          RootHub_ReleaseReadModifyWriteLock(v3, v17);
          v35 = XilRegister_ReadUlong(v5, v18);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_194;
          v37 = 97;
          goto LABEL_193;
        }
        v78 = v77 - 3;
        if ( !v78 )
        {
          RootHub_AcquireReadModifyWriteLock(v3, v17);
          v84 = XilRegister_ReadUlong(v5, v18);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v83) = 4;
            WPP_RECORDER_SF_D(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v83,
              11,
              98,
              (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
              v84);
          }
          v85 = v84 & 0xE00C200 | 0x80000;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v83) = 4;
            WPP_RECORDER_SF_D(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v83,
              11,
              99,
              (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
              v85);
          }
          XilRegister_WriteUlong(v5, v18, v85);
          RootHub_ReleaseReadModifyWriteLock(v3, v17);
          v35 = XilRegister_ReadUlong(v5, v18);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_194;
          v37 = 100;
          goto LABEL_193;
        }
        if ( v78 != 1 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v21 = 104;
            goto LABEL_30;
          }
          goto LABEL_200;
        }
        v79 = XilRegister_ReadUlong(v5, v20);
        v81 = v79;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v80) = 4;
          WPP_RECORDER_SF_D(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v80,
            11,
            101,
            (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
            v79);
        }
        v82 = v81 & 0xFFFEFFFF;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v80) = 4;
          WPP_RECORDER_SF_D(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v80,
            11,
            102,
            (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
            v82);
        }
        XilRegister_WriteUlong(v5, v119, v82);
        v35 = XilRegister_ReadUlong(v5, v119);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v37 = 103;
          goto LABEL_193;
        }
        goto LABEL_194;
      }
      RootHub_AcquireReadModifyWriteLock(v3, v17);
      v90 = XilRegister_ReadUlong(v5, v18);
      v115 = v90;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v89) = 4;
        WPP_RECORDER_SF_D(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v89,
          11,
          91,
          (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
          v90);
      }
      v91 = v90 & 0xE00C200 | 0x400000;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v89) = 4;
        WPP_RECORDER_SF_D(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v89,
          11,
          92,
          (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
          v91);
      }
      XilRegister_WriteUlong(v5, v18, v91);
      RootHub_ReleaseReadModifyWriteLock(v3, v17);
      v92 = XilRegister_ReadUlong(v5, v18);
      v94 = v92;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v93) = 4;
        WPP_RECORDER_SF_D(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v93,
          11,
          93,
          (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
          v92);
      }
      if ( (_mm_srli_si128(*(__m128i *)(*(_QWORD *)(v3 + 8) + 336LL), 8).m128i_u64[0] & 0x1000000) == 0 )
        goto LABEL_194;
      v95 = v115 == v94;
      v96 = 120LL * v17;
      v97 = *(_QWORD *)(v3 + 48);
      if ( v95 )
      {
        ++*(_DWORD *)(v97 + v118 + 112);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_185;
        v98 = 94;
LABEL_183:
        LOBYTE(v93) = 2;
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v93,
          11,
          v98,
          (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids);
        goto LABEL_185;
      }
    }
    else
    {
      RootHub_AcquireReadModifyWriteLock(v3, v17);
      v106 = XilRegister_ReadUlong(v5, v18);
      v116 = v106;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v105) = 4;
        WPP_RECORDER_SF_D(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v105,
          11,
          81,
          (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
          v106);
      }
      v107 = v106 & 0xE00C200 | 0x20000;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v105) = 4;
        WPP_RECORDER_SF_D(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v105,
          11,
          82,
          (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
          v107);
      }
      XilRegister_WriteUlong(v5, v18, v107);
      RootHub_ReleaseReadModifyWriteLock(v3, v17);
      v108 = XilRegister_ReadUlong(v5, v18);
      v109 = v108;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v93) = 4;
        WPP_RECORDER_SF_D(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v93,
          11,
          83,
          (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
          v108);
      }
      if ( (_mm_srli_si128(*(__m128i *)(*(_QWORD *)(v3 + 8) + 336LL), 8).m128i_u64[0] & 0x1000000) == 0 )
        goto LABEL_194;
      v95 = v116 == v109;
      v96 = 120LL * v17;
      v97 = *(_QWORD *)(v3 + 48);
      if ( v95 )
      {
        ++*(_DWORD *)(v97 + v118 + 112);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_185;
        v98 = 84;
        goto LABEL_183;
      }
    }
    *(_DWORD *)(v97 + v96 + 112) = 0;
LABEL_185:
    if ( *(_DWORD *)(*(_QWORD *)(v3 + 48) + v96 + 112) == 10 )
      Controller_ReportFatalError(*(_QWORD *)(v3 + 8), 64, 4144, 0, 0LL, 0LL, 0LL);
    goto LABEL_194;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = 2;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      v13,
      11,
      40,
      (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids);
  }
  *(_DWORD *)(v9 + 4) = -1073741807;
  v11 = 3221225666LL;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           a2,
           v11);
}
