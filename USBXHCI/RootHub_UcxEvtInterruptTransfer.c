__int64 __fastcall RootHub_UcxEvtInterruptTransfer(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 v5; // rax
  unsigned int v6; // ebx
  _BYTE *v7; // rbp
  size_t v8; // rsi
  int v9; // edx
  unsigned int v10; // esi
  unsigned int v11; // r15d
  unsigned int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // r12
  char v15; // cl
  __int64 v16; // rdx
  unsigned int v17; // ecx
  unsigned int v18; // r8d
  unsigned __int64 v19; // rdx
  unsigned int Ulong; // eax
  __int64 v21; // rcx
  int v22; // eax
  int v24; // edx
  int v25; // r8d
  int v26; // r9d
  int v27; // r9d
  int v28; // edx
  char v29; // [rsp+30h] [rbp-98h]
  unsigned int v30; // [rsp+40h] [rbp-88h] BYREF
  int v31[2]; // [rsp+48h] [rbp-80h]
  _BYTE *v32; // [rsp+50h] [rbp-78h]
  __int64 v33; // [rsp+58h] [rbp-70h]
  _OWORD v34[2]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v35; // [rsp+80h] [rbp-48h]

  v33 = a2;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0063248);
  *(_QWORD *)v31 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 88LL);
  v35 = 0LL;
  memset(v34, 0, sizeof(v34));
  LOWORD(v34[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v34);
  v4 = *((_QWORD *)&v34[0] + 1);
  v5 = *(_QWORD *)(v3 + 8);
  v6 = 0;
  v7 = *(_BYTE **)(*((_QWORD *)&v34[0] + 1) + 40LL);
  v8 = *(unsigned int *)(*((_QWORD *)&v34[0] + 1) + 36LL);
  v32 = v7;
  if ( *(_BYTE *)(v5 + 601) && KeGetCurrentIrql() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v24, v25, v26);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v3 + 8)) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v9,
        11,
        188,
        (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids);
    }
    goto LABEL_37;
  }
  if ( *(_BYTE *)(v3 + 57) )
  {
    Controller_UpdateIdleTimeoutOnRootHubPDOD0Entry(*(__m128i **)(v3 + 8));
    *(_BYTE *)(v3 + 57) = 0;
  }
  if ( !(_DWORD)v8 )
    goto LABEL_26;
  memset(v7, 0, v8);
  if ( (unsigned int)v8 > 0x20 )
    v10 = 255;
  else
    v10 = 8 * v8 - 1;
  v11 = *(_DWORD *)(v3 + 16);
  if ( v10 <= v11 )
    v11 = v10;
  v12 = 1;
  if ( !v11 )
  {
LABEL_26:
    *(_DWORD *)(v4 + 4) = 0;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             v33,
             v6);
  }
  while ( 1 )
  {
    v13 = v12 - 1;
    v14 = 120 * v13;
    v15 = *(_BYTE *)(120 * v13 + *(_QWORD *)(v3 + 48) + 13);
    if ( v15 != 2 )
      break;
    v16 = *(_QWORD *)(v3 + 40) + 16 * v13;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v31 + 8LL) + 601LL) )
    {
      v30 = 0;
      Register_ReadSecureMmio(v31[0], v16, 2, 1, &v30);
      v17 = v30;
    }
    else
    {
      v17 = *(_DWORD *)v16;
    }
    if ( v17 == -1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v27 = 189;
LABEL_35:
        LOBYTE(v16) = 2;
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v16,
          11,
          v27,
          (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids);
        goto LABEL_36;
      }
      goto LABEL_36;
    }
    v18 = v17 & 0xFFBFFFFF;
    if ( (v17 & 0x1E0) != 0x1E0 )
      v18 = v17;
    if ( (v18 & 0x760000) != 0 )
    {
      v19 = (unsigned __int64)v12 >> 3;
      v32[v19] |= 1 << (v12 & 7);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v19) = 4;
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v19,
          11,
          190,
          (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
          v12,
          v18);
      }
    }
LABEL_25:
    if ( ++v12 > v11 )
      goto LABEL_26;
  }
  if ( v15 != 3 )
    goto LABEL_25;
  Ulong = XilRegister_ReadUlong(*(_QWORD *)v31, *(_QWORD *)(v3 + 40) + 16 * v13);
  v16 = Ulong;
  if ( Ulong != -1 )
  {
    if ( (Ulong & 0xFA0000) != 0
      || ((v21 = *(_QWORD *)(v3 + 48), v22 = Ulong & 0x1E0, v22 == 320) || v22 == 192 && *(_DWORD *)(v14 + v21 + 108))
      && _InterlockedCompareExchange((volatile signed __int32 *)(v14 + v21 + 100), 0, 1) == 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v29 = v16;
        LOBYTE(v16) = 4;
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v16,
          11,
          192,
          (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
          v12,
          v29);
      }
      if ( (unsigned __int8)RootHub_HideInvalidDebugPortStatusAndChange(v3, v12) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v28) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v28,
            11,
            193,
            (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
            v12);
        }
      }
      else
      {
        v32[(unsigned __int64)v12 >> 3] |= 1 << (v12 & 7);
      }
    }
    goto LABEL_25;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v27 = 191;
    goto LABEL_35;
  }
LABEL_36:
  LOBYTE(v16) = 1;
  Controller_SetControllerGone(*(_QWORD *)(v3 + 8), v16);
LABEL_37:
  *(_DWORD *)(v4 + 4) = -1073713152;
  v6 = -1073741810;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           v33,
           v6);
}
