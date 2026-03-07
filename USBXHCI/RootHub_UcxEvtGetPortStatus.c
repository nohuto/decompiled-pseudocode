__int64 __fastcall RootHub_UcxEvtGetPortStatus(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r14
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  unsigned int v10; // r15d
  __int64 v11; // r12
  __int64 v12; // rbp
  __int64 v13; // rdx
  unsigned int Ulong; // ebx
  char v15; // cl
  unsigned int v16; // esi
  int v17; // edx
  unsigned __int16 *v18; // rdx
  unsigned int v19; // r9d
  __int16 v20; // cx
  unsigned int v21; // r10d
  unsigned __int16 v22; // r8
  unsigned __int16 v23; // cx
  int v24; // edx
  unsigned int v25; // eax
  int v26; // edx
  unsigned int v27; // ecx
  int v28; // eax
  _WORD *v30; // r9
  int v31; // edx
  unsigned int v32; // ebp
  __int16 v33; // cx
  __int16 v34; // r8
  int v35; // edx
  int v36; // eax
  __int16 v37; // cx
  __int64 v38; // rdx
  int v39; // eax
  int v40; // edx
  int v41; // r8d
  int v42; // r9d
  int v43; // r9d
  int v44; // edx
  unsigned __int16 v45; // cx
  __int16 v46; // ax
  int v47; // edx
  int v48; // r9d
  int v49; // edx
  int v50; // r8d
  char v51; // [rsp+28h] [rbp-D0h]
  __int64 v52; // [rsp+70h] [rbp-88h]
  _WORD *v53; // [rsp+70h] [rbp-88h]
  __int64 v54; // [rsp+80h] [rbp-78h]
  __int64 v55; // [rsp+88h] [rbp-70h]
  _OWORD v56[2]; // [rsp+90h] [rbp-68h] BYREF
  __int64 v57; // [rsp+B0h] [rbp-48h]

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0063248);
  v4 = *(_QWORD *)(v3 + 8);
  v5 = *(_QWORD *)(v4 + 88);
  v55 = v5;
  if ( *(_BYTE *)(v4 + 601) && KeGetCurrentIrql() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v40, v41, v42);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  v57 = 0LL;
  memset(v56, 0, sizeof(v56));
  LOWORD(v56[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v56);
  v6 = *((_QWORD *)&v56[0] + 1);
  if ( Controller_IsControllerAccessible(*(_QWORD *)(v3 + 8)) )
  {
    v8 = *(unsigned __int16 *)(v6 + 130);
    v9 = 8;
    v10 = *(unsigned __int16 *)(v6 + 132);
    if ( v8 != 2 )
      v9 = 4;
    if ( *(_BYTE *)(v6 + 128) != 0xA3
      || *(_BYTE *)(v6 + 129)
      || (_WORD)v8 && v8 != 2
      || !*(_WORD *)(v6 + 132)
      || v10 > *(_DWORD *)(v3 + 16)
      || *(unsigned __int16 *)(v6 + 134) != v9 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v49 = BYTE1(v8);
        v48 = 108;
        v50 = (unsigned __int8)v8;
        goto LABEL_96;
      }
LABEL_97:
      v16 = -1073741823;
      *(_DWORD *)(v6 + 4) = -1073741820;
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
               WdfDriverGlobals,
               a2,
               v16);
    }
    v11 = 16LL * (v10 - 1);
    v12 = 120LL * (v10 - 1);
    Ulong = XilRegister_ReadUlong(v5, v11 + *(_QWORD *)(v3 + 40));
    v54 = v12;
    v15 = *(_BYTE *)(*(_QWORD *)(v3 + 48) + v12 + 13);
    if ( v15 != 2 )
    {
      if ( v15 == 3 )
      {
        if ( Ulong != -1 )
        {
          v16 = 0;
          v52 = *(_QWORD *)(v6 + 40);
          *(_DWORD *)v52 = 0;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v13) = 4;
            WPP_RECORDER_SF_dD(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v13,
              11,
              116,
              (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
              v10,
              Ulong);
          }
          if ( (unsigned __int8)RootHub_HideInvalidDebugPortStatusAndChange(v3, v10) )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v17) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v17,
                11,
                117,
                (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
                v10);
            }
            v45 = *(_WORD *)v52 & 0xFC04 | 0x2A0;
            *(_WORD *)(v52 + 2) &= 0xFF06u;
            v46 = *(_WORD *)(v52 + 2);
            *(_WORD *)v52 = v45;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v47 = v45;
              LOBYTE(v47) = 4;
              WPP_RECORDER_SF_DD(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v47,
                11,
                118,
                (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
                v45,
                v46);
            }
          }
          else
          {
            v18 = (unsigned __int16 *)v52;
            v19 = Ulong >> 5;
            v20 = Ulong & 1 | *(_WORD *)v52 & 0xFE04 | (2
                                                      * ((Ulong >> 1) & 1 | (4
                                                                           * ((Ulong >> 3) & 1 | (2
                                                                                                * ((2
                                                                                                  * ((Ulong >> 5) & 0xF)) | (Ulong >> 4) & 1))))));
            *(_WORD *)v52 = v20;
            if ( (v20 & 0x1E0) == 0x1E0 )
            {
              v20 = v20 & 0xFE1F | 0x100;
              *(_WORD *)v52 = v20;
            }
            if ( (Ulong & 0x1000000) != 0 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v18) = 4;
                WPP_RECORDER_SF_(
                  *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                  (_DWORD)v18,
                  11,
                  119,
                  (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids);
                v18 = (unsigned __int16 *)v52;
                LOBYTE(v19) = Ulong >> 5;
              }
              v20 = *v18 & 0xFE1F | 0x140;
            }
            v21 = Ulong >> 22;
            v22 = v20 ^ (v20 ^ Ulong & 0xFE00) & 0x200;
            *v18 = v22;
            v23 = v18[1] & 0xFF06 | (Ulong >> 17) & 1 | (8
                                                       * ((Ulong >> 20) & 1 | (2
                                                                             * ((Ulong >> 21) & 1 | (2 * ((Ulong >> 19) & 1 | (2 * (((Ulong & 0x400000) != 0) | (unsigned __int16)(2 * ((Ulong >> 23) & 1))))))))));
            v18[1] = v23;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v24 = v22;
              LOBYTE(v24) = 4;
              WPP_RECORDER_SF_DD(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v24,
                11,
                120,
                (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
                v22,
                v23);
              v18 = (unsigned __int16 *)v52;
              LOBYTE(v19) = Ulong >> 5;
              LOBYTE(v21) = Ulong >> 22;
            }
            if ( *(_DWORD *)(*(_QWORD *)(v3 + 48) + v12 + 108) && (v19 & 0xF) == 6 && (v21 & 1) != 0 )
              v18[1] |= 0x80u;
            if ( *(_WORD *)(v6 + 130) == 2 )
            {
              v25 = XilRegister_ReadUlong(v55, *(_QWORD *)(v3 + 40) + v11 + 8);
              v26 = v52;
              *(_DWORD *)(v52 + 4) = 0;
              if ( *(_WORD *)(*(_QWORD *)(v3 + 48) + v12 + 54) || (Ulong & 0x3C00) != 0x400 )
                v27 = (Ulong & 0x3C00 | (Ulong >> 4) & 0x3C0) >> 6;
              else
                v27 = 68;
              v28 = v27 | (v25 >> 8) & 0xFF00;
              *(_DWORD *)(v52 + 4) = v28;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v26) = 4;
                WPP_RECORDER_SF_D(
                  *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                  v26,
                  11,
                  121,
                  (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
                  v28);
              }
            }
          }
          *(_DWORD *)(v6 + 4) = 0;
          return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
                   WdfDriverGlobals,
                   a2,
                   v16);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v43 = 115;
          goto LABEL_78;
        }
        goto LABEL_79;
      }
LABEL_92:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v48 = 122;
        v49 = *(unsigned __int8 *)(v6 + 134);
        v50 = *(unsigned __int8 *)(v6 + 133);
LABEL_96:
        WPP_RECORDER_SF_DDDDDDDD(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL), v49, v50, v48);
        goto LABEL_97;
      }
      goto LABEL_97;
    }
    if ( *(_WORD *)(v6 + 130) )
      goto LABEL_92;
    if ( Ulong == -1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v43 = 109;
LABEL_78:
        LOBYTE(v13) = 2;
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v13,
          11,
          v43,
          (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids);
      }
LABEL_79:
      LOBYTE(v13) = 1;
      Controller_SetControllerGone(*(_QWORD *)(v3 + 8), v13);
      *(_DWORD *)(v6 + 4) = -1073713152;
      v16 = -1073741810;
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
               WdfDriverGlobals,
               a2,
               v16);
    }
    v30 = *(_WORD **)(v6 + 40);
    v16 = 0;
    v53 = v30;
    *(_DWORD *)v30 = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v13,
        11,
        110,
        (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
        v10,
        Ulong);
      v30 = v53;
    }
    v31 = 65532;
    v32 = (Ulong >> 5) & 0xF;
    v33 = *v30 & 0xFFFC | Ulong & 1 | (2 * ((Ulong >> 1) & 1));
    if ( v32 >= 4 )
    {
      v34 = *v30 & 0xFFFC | Ulong & 1 | (2 * ((Ulong >> 1) & 1));
      if ( v32 < 0xB )
      {
LABEL_37:
        LOWORD(v35) = v34 & 0xFEE7 | (8 * ((Ulong >> 3) & 1 | (2 * ((Ulong >> 4) & 1 | (16 * ((Ulong >> 9) & 1))))));
        v36 = Ulong & 0x3C00;
        *v30 = v35;
        if ( v36 == 2048 )
        {
          LOWORD(v35) = v35 | 0x200;
        }
        else
        {
          if ( v36 != 3072 )
          {
LABEL_39:
            if ( (Ulong & 0xC000) != 0 )
            {
              LOWORD(v35) = v35 | 0x1000;
              *v30 = v35;
            }
            v37 = v30[1] & 0xFFF8 | (Ulong >> 17) & 1 | (2 * ((Ulong >> 18) & 1));
            if ( v32 != 15 )
              v37 |= 4 * ((Ulong >> 22) & 1);
            v30[1] = v37 & 0xFFE7 | (8 * ((Ulong >> 20) & 1 | (2 * ((Ulong >> 21) & 1))));
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v35 = (unsigned __int16)v35;
              v51 = v35;
              LOBYTE(v35) = 4;
              WPP_RECORDER_SF_DD(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v35,
                11,
                112,
                (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
                v51,
                v37 & 0xE7 | (8 * (((Ulong & 0x100000) != 0) | (2 * ((Ulong & 0x200000) != 0)))));
            }
            v38 = *(_QWORD *)(v3 + 48);
            if ( v32 == 15 )
            {
              _InterlockedOr((volatile signed __int32 *)(v38 + v54 + 64), 1u);
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
                WdfDriverGlobals,
                *(_QWORD *)(*(_QWORD *)(v3 + 48) + v54 + 80),
                -100000000LL);
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
                WdfDriverGlobals,
                *(_QWORD *)(*(_QWORD *)(v3 + 48) + v54 + 72),
                -10000000LL);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v44) = 4;
                WPP_RECORDER_SF_dD(
                  *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                  v44,
                  11,
                  113,
                  (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
                  v10,
                  Ulong);
              }
              v39 = 1;
            }
            else
            {
              _m_prefetchw((const void *)(v38 + v54 + 64));
              if ( (_InterlockedAnd((volatile signed __int32 *)(v38 + v54 + 64), 0xFFFFFFFE) & 1) != 0 )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v38) = 4;
                  WPP_RECORDER_SF_dD(
                    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                    v38,
                    11,
                    114,
                    (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
                    v10,
                    Ulong);
                }
                (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
                  WdfDriverGlobals,
                  *(_QWORD *)(*(_QWORD *)(v3 + 48) + v54 + 80),
                  0LL);
                (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
                  WdfDriverGlobals,
                  *(_QWORD *)(*(_QWORD *)(v3 + 48) + v54 + 72),
                  0LL);
              }
              v39 = 0;
            }
            *(_DWORD *)(v6 + 4) = v39;
            return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
                     WdfDriverGlobals,
                     a2,
                     v16);
          }
          LOWORD(v35) = v35 | 0x400;
        }
        *v30 = v35;
        goto LABEL_39;
      }
    }
    v34 = *v30 & 0xFFFC | Ulong & 1 | (2 * ((Ulong >> 1) & 1));
    if ( v32 == 2 )
    {
      v34 = v33 | 0x20;
      goto LABEL_37;
    }
    if ( v32 != 3 )
    {
      if ( v32 == 11 )
      {
        v34 = v33 | 0x800;
        *v30 = v33 | 0x800;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v31) = 2;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v31,
            11,
            111,
            (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
            v10);
          v30 = v53;
          v34 = *v53;
        }
        goto LABEL_37;
      }
      if ( v32 != 15 )
        goto LABEL_37;
    }
    v34 = v33 | 4;
    goto LABEL_37;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      v7,
      11,
      107,
      (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids);
  }
  *(_DWORD *)(v6 + 4) = -1073713152;
  v16 = -1073741810;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           a2,
           v16);
}
