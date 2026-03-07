__int64 __fastcall HUBACPI_GetAcpiPortAttributes(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned __int64 v2; // rax
  char v4; // r14
  __int64 (__fastcall *v5)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64 *, _QWORD *); // rax
  int v6; // eax
  int v7; // edi
  int v9; // eax
  __int64 v10; // rcx
  unsigned __int16 v11; // r9
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int16 v16; // dx
  _QWORD *i; // rax
  _QWORD *v18; // r14
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int16 v21; // r9
  unsigned __int8 v22; // dl
  unsigned int v23; // r8d
  unsigned __int16 v24; // di
  int v25; // ecx
  __int64 v26; // rdx
  unsigned __int16 v27; // r9
  unsigned __int8 v28; // dl
  unsigned int v29; // r8d
  int v30; // ecx
  __int64 v31; // rcx
  int v32; // r14d
  const EVENT_DESCRIPTOR *v33; // rdx
  unsigned __int16 v34; // r9
  unsigned __int64 v35; // rdx
  unsigned int v36; // r8d
  unsigned int v37; // r9d
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // [rsp+20h] [rbp-89h]
  __int64 v42; // [rsp+28h] [rbp-81h]
  __int64 v43; // [rsp+28h] [rbp-81h]
  __int64 v44; // [rsp+28h] [rbp-81h]
  __int64 v45; // [rsp+28h] [rbp-81h]
  __int64 v46; // [rsp+30h] [rbp-79h]
  __int64 v47; // [rsp+30h] [rbp-79h]
  __int64 v48; // [rsp+40h] [rbp-69h] BYREF
  __int64 v49; // [rsp+48h] [rbp-61h] BYREF
  __int64 v50; // [rsp+50h] [rbp-59h] BYREF
  __int128 v51; // [rsp+58h] [rbp-51h] BYREF
  __int64 v52; // [rsp+68h] [rbp-41h] BYREF
  __int64 v53; // [rsp+70h] [rbp-39h] BYREF
  __int64 v54; // [rsp+78h] [rbp-31h] BYREF
  __int128 v55; // [rsp+80h] [rbp-29h] BYREF
  __int64 v56; // [rsp+90h] [rbp-19h]
  __int64 v57; // [rsp+98h] [rbp-11h]
  __int128 v58; // [rsp+A0h] [rbp-9h]
  __int64 v59; // [rsp+B0h] [rbp+7h]
  _QWORD v60[9]; // [rsp+B8h] [rbp+Fh] BYREF
  unsigned __int16 v61; // [rsp+118h] [rbp+6Fh]
  int v62; // [rsp+120h] [rbp+77h]
  __int64 v63; // [rsp+128h] [rbp+7Fh]

  v1 = 0;
  v59 = 0LL;
  v2 = *(_QWORD *)(a1 + 16);
  v56 = 0LL;
  v60[0] = 0LL;
  v58 = v2;
  v55 = 0LL;
  v4 = 0;
  v52 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v53 = 0LL;
  v48 = 0LL;
  v54 = 0LL;
  LODWORD(v55) = 56;
  v57 = 0x100000001LL;
  v5 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64 *, _QWORD *))(WdfFunctions_01015 + 1536);
  v51 = 0LL;
  v6 = v5(WdfDriverGlobals, &v55, (unsigned int)ExDefaultNonPagedPoolType, 1748191317LL, 20LL, &v54, v60);
  v7 = v6;
  if ( v6 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v42) = v6;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        3u,
        0x29u,
        (__int64)&WPP_d57d3d1a25143926e0647cae0fc03ffc_Traceguids,
        v42);
    }
    goto LABEL_4;
  }
  v9 = HUBACPI_EnumChildren(a1, v54);
  v7 = v9;
  if ( v9 == -1073741637 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 4u, 3u, 0x2Au, (__int64)&WPP_d57d3d1a25143926e0647cae0fc03ffc_Traceguids);
    goto LABEL_4;
  }
  if ( v9 != -2147483643 )
    goto LABEL_4;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 4u, 3u, 0x2Bu, (__int64)&WPP_d57d3d1a25143926e0647cae0fc03ffc_Traceguids);
  v10 = *(unsigned int *)(v60[0] + 4LL);
  v59 = 0LL;
  v56 = 0LL;
  v57 = 0x100000001LL;
  v58 = *(unsigned __int64 *)(a1 + 16);
  v55 = 0LL;
  LODWORD(v55) = 56;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64 *, __int64 *))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         &v55,
         (unsigned int)ExDefaultNonPagedPoolType,
         1748191317LL,
         v10,
         &v53,
         &v52);
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_23:
      v4 = 0;
      goto LABEL_4;
    }
    v11 = 44;
LABEL_22:
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, 3u, v11, (__int64)&WPP_d57d3d1a25143926e0647cae0fc03ffc_Traceguids);
    goto LABEL_23;
  }
  v12 = HUBACPI_EnumChildren(a1, v53);
  v7 = v12;
  if ( v12 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v43) = v12;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        3u,
        0x2Du,
        (__int64)&WPP_d57d3d1a25143926e0647cae0fc03ffc_Traceguids,
        v43);
    }
    goto LABEL_23;
  }
  v59 = 0LL;
  v56 = 0LL;
  v57 = 0x100000001LL;
  v58 = *(unsigned __int64 *)(a1 + 16);
  v55 = 0LL;
  LODWORD(v55) = 56;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64 *, __int64 *))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         &v55,
         (unsigned int)ExDefaultNonPagedPoolType,
         1748191317LL,
         1044LL,
         &v48,
         &v49);
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_23;
    v11 = 46;
    goto LABEL_22;
  }
  v62 = 1;
  v13 = v52 + 8;
  if ( *(_DWORD *)(v52 + 4) <= 1u )
  {
    v4 = 0;
    goto LABEL_4;
  }
  while ( 1 )
  {
    v13 += *(unsigned int *)(v13 + 4) + 8LL;
    v63 = v13;
    if ( (*(_BYTE *)v13 & 1) == 0 || !*(_DWORD *)(v13 + 4) )
      goto LABEL_130;
    *((_QWORD *)&v51 + 1) = v13 + 8;
    WORD1(v51) = *(_WORD *)(v13 + 4);
    LOWORD(v51) = WORD1(v51) - 1;
    v7 = HUBACPI_EvalAcpiMethodEx(a1, (unsigned __int16 *)&v51, 1380204895, v48);
    if ( v7 < 0 )
    {
      v7 = 0;
      goto LABEL_129;
    }
    if ( !*(_DWORD *)(v49 + 8) || *(_WORD *)(v49 + 12) )
      goto LABEL_129;
    v16 = *(_WORD *)(v49 + 16);
    v61 = v16;
    if ( v16 )
    {
      if ( v16 <= *(_WORD *)(a1 + 48) )
        break;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v34 = 47;
      LODWORD(v44) = *(unsigned __int16 *)(v49 + 16);
      goto LABEL_128;
    }
LABEL_129:
    v13 = v63;
LABEL_130:
    if ( (unsigned int)++v62 >= *(_DWORD *)(v52 + 4) )
      goto LABEL_23;
  }
  for ( i = *(_QWORD **)(a1 + 2360); ; i = (_QWORD *)*i )
  {
    v18 = i - 31;
    if ( (_QWORD *)(a1 + 2360) == i )
      goto LABEL_129;
    if ( *((_WORD *)v18 + 100) == v16 )
      break;
  }
  if ( (int)HUBACPI_EvaluateDsmMethod(a1, (unsigned __int16 *)&v51, v14, v15, 2, v16, v48) < 0 )
    goto LABEL_54;
  if ( *(_WORD *)(v49 + 12) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = 48;
      v22 = 2;
      v23 = 6;
LABEL_48:
      v24 = v61;
      LODWORD(v45) = v61;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        v22,
        v23,
        v21,
        (__int64)&WPP_d57d3d1a25143926e0647cae0fc03ffc_Traceguids,
        v45);
      goto LABEL_55;
    }
    goto LABEL_54;
  }
  v25 = *(unsigned __int16 *)(v49 + 16);
  *((_DWORD *)v18 + 54) = v25;
  if ( !v25 )
    goto LABEL_54;
  if ( v25 == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_54;
    v21 = 49;
LABEL_60:
    v23 = 3;
    v22 = 4;
    goto LABEL_48;
  }
  if ( v25 != 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v45) = v25;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        6u,
        0x33u,
        (__int64)&WPP_d57d3d1a25143926e0647cae0fc03ffc_Traceguids,
        v45);
    }
    goto LABEL_54;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v21 = 50;
    goto LABEL_60;
  }
LABEL_54:
  v24 = v61;
LABEL_55:
  v50 = 0LL;
  if ( *((_DWORD *)v18 + 52) != 768 )
    goto LABEL_66;
  v26 = *(_QWORD *)(a1 + 2760);
  if ( v26 )
  {
    v50 = *(_QWORD *)(a1 + 2760);
  }
  else
  {
    if ( (int)HUBACPI_EvaluateDSD(a1, (unsigned __int16 *)&v51, v19, v20, v48, v24, (__int64)&v50) < 0 )
      goto LABEL_66;
    v26 = v50;
  }
  v7 = TUNNEL_RegisterUsb4HostForPort(a1, v26, v18);
  if ( v7 >= 0 )
  {
LABEL_66:
    if ( (int)HUBACPI_EvaluateDsmMethod(a1, (unsigned __int16 *)&v51, v19, v20, 5, v61, v48) < 0 )
      goto LABEL_78;
    if ( *(_WORD *)(v49 + 12) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_78;
      v27 = 53;
      v28 = 2;
      v29 = 6;
    }
    else
    {
      v30 = *(_DWORD *)(v49 + 16);
      if ( !v30 )
        goto LABEL_78;
      if ( v30 != 1 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_78;
        v27 = 55;
        LODWORD(v44) = *(_DWORD *)(v49 + 16);
        v28 = 2;
        v29 = 6;
        goto LABEL_77;
      }
      *((_DWORD *)v18 + 51) |= 0x400u;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_78;
      v27 = 54;
      v28 = 4;
      v29 = 3;
    }
    LODWORD(v44) = v61;
LABEL_77:
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2520),
      v28,
      v29,
      v27,
      (__int64)&WPP_d57d3d1a25143926e0647cae0fc03ffc_Traceguids,
      v44);
LABEL_78:
    v7 = HUBACPI_EvalAcpiMethodEx(a1, (unsigned __int16 *)&v51, 1129338207, v48);
    if ( v7 < 0 )
    {
      v32 = v61;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v44) = v61;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1 + 2520),
          4u,
          3u,
          0x38u,
          (__int64)&WPP_d57d3d1a25143926e0647cae0fc03ffc_Traceguids,
          v44);
      }
LABEL_81:
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
      {
        v33 = &USBHUB3_ETW_EVENT_HUB_PORT_ACPI_UPC_FAILURE;
        goto LABEL_83;
      }
      goto LABEL_84;
    }
    v31 = v49;
    if ( *(_DWORD *)(v49 + 8) )
    {
      v35 = v49 + 12;
      v36 = 0;
      if ( v49 + 12 < v49 + (unsigned __int64)*(unsigned int *)(v49 + 4) )
      {
        while ( 1 )
        {
          if ( v36 >= *(_DWORD *)(v31 + 8) )
            goto LABEL_101;
          if ( v36 >= 4 )
            break;
          if ( *(_WORD *)v35 )
          {
            v7 = -1072431096;
            goto LABEL_106;
          }
          v31 = acpiUpcPackageFields[2 * v36];
          v37 = acpiUpcPackageFields[2 * v36 + 1];
          if ( v37 == 1 )
          {
            *((_BYTE *)v18 + v31 + 1340) = *(_BYTE *)(v35 + 4);
          }
          else
          {
            if ( v37 != 4 )
            {
              v7 = -1072431089;
              goto LABEL_106;
            }
            *(_DWORD *)((char *)v18 + v31 + 1340) = *(_DWORD *)(v35 + 4);
          }
          v38 = *(unsigned __int16 *)(v35 + 2);
          if ( (unsigned __int16)v38 < 4u )
            v38 = 4LL;
          v31 = v49;
          v35 += v38 + 4;
          ++v36;
          if ( v35 >= v49 + (unsigned __int64)*(unsigned int *)(v49 + 4) )
            goto LABEL_101;
        }
        v7 = -1072431093;
LABEL_106:
        v32 = v61;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v47) = v7;
          LODWORD(v44) = v61;
          WPP_RECORDER_SF_DD(
            *(_QWORD *)(a1 + 2520),
            2u,
            6u,
            0x3Au,
            (__int64)&WPP_d57d3d1a25143926e0647cae0fc03ffc_Traceguids,
            v44,
            v47);
        }
        goto LABEL_81;
      }
LABEL_101:
      _InterlockedOr((volatile signed __int32 *)v18 + 51, 2u);
      if ( *((_BYTE *)v18 + 1340) )
        _InterlockedOr((volatile signed __int32 *)v18 + 51, 1u);
      else
        _InterlockedAnd((volatile signed __int32 *)v18 + 51, 0xFFFFFFFE);
      if ( *((_BYTE *)v18 + 1341) == 10 )
        _InterlockedOr((volatile signed __int32 *)v18 + 51, 0x200u);
      v39 = HUBACPI_EvalAcpiMethodEx(a1, (unsigned __int16 *)&v51, 1145851999, v48);
      v7 = v39;
      if ( v39 < 0 )
      {
        v32 = v61;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v47) = v39;
          LODWORD(v44) = v61;
          WPP_RECORDER_SF_DD(
            *(_QWORD *)(a1 + 2520),
            4u,
            3u,
            0x3Bu,
            (__int64)&WPP_d57d3d1a25143926e0647cae0fc03ffc_Traceguids,
            v44,
            v47);
        }
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
        {
          v33 = &USBHUB3_ETW_EVENT_HUB_PORT_ACPI_PLD_FAILURE;
LABEL_83:
          LODWORD(v44) = v7;
          LODWORD(v41) = v32;
          McTemplateK0pqq_EtwWriteTransfer(v31, v33, 0LL, *(_QWORD *)(a1 + 16), v41, v44);
        }
LABEL_84:
        v7 = 0;
        goto LABEL_129;
      }
      v40 = v49;
      if ( *(_DWORD *)(v49 + 8) && *(_WORD *)(v49 + 12) == 2 && *(_WORD *)(v49 + 14) >= 0x10u )
      {
        *(_OWORD *)(v18 + 169) = *(_OWORD *)(v49 + 16);
        _InterlockedOr((volatile signed __int32 *)v18 + 51, 4u);
        if ( (*(_BYTE *)(v40 + 24) & 1) == 0 )
          _InterlockedAnd((volatile signed __int32 *)v18 + 51, 0xFFFFFFFE);
        _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x40000u);
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v44) = v61;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a1 + 2520),
            2u,
            6u,
            0x3Cu,
            (__int64)&WPP_d57d3d1a25143926e0647cae0fc03ffc_Traceguids,
            v44);
        }
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
        {
          LODWORD(v44) = v7;
          LODWORD(v41) = v61;
          McTemplateK0pqq_EtwWriteTransfer(
            v31,
            &USBHUB3_ETW_EVENT_HUB_PORT_ACPI_PLD_FAILURE,
            0LL,
            *(_QWORD *)(a1 + 16),
            v41,
            v44);
        }
      }
      goto LABEL_129;
    }
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
    {
      LODWORD(v44) = -1072431093;
      LODWORD(v41) = v61;
      McTemplateK0pqq_EtwWriteTransfer(
        v49,
        &USBHUB3_ETW_EVENT_HUB_PORT_ACPI_UPC_FAILURE,
        0LL,
        *(_QWORD *)(a1 + 16),
        v41,
        v44);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v34 = 57;
      LODWORD(v44) = v61;
LABEL_128:
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        6u,
        v34,
        (__int64)&WPP_d57d3d1a25143926e0647cae0fc03ffc_Traceguids,
        v44);
      goto LABEL_129;
    }
    goto LABEL_129;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v46) = v7;
    LODWORD(v45) = *((unsigned __int16 *)v18 + 100);
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(a1 + 2520),
      2u,
      3u,
      0x34u,
      (__int64)&WPP_d57d3d1a25143926e0647cae0fc03ffc_Traceguids,
      v45,
      v46);
  }
  v4 = 1;
LABEL_4:
  if ( v53 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v48 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v54 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v4 == 1 )
    return (unsigned int)v7;
  return v1;
}
