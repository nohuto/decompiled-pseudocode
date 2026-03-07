PDEVICE_OBJECT __fastcall Controller_UcxEvtStartTrackingForTimeSync(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  char v8; // r13
  int v9; // edx
  __int64 v10; // rsi
  int v11; // r8d
  _BYTE *v12; // rdi
  int v13; // ebx
  unsigned __int64 v14; // r14
  int v15; // eax
  int v16; // ecx
  PDEVICE_OBJECT result; // rax
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned int *v22; // rbx
  int Ulong; // eax
  __int64 *v24; // rcx
  __int64 v25; // rdx
  int v26; // edx
  char v27; // [rsp+48h] [rbp-39h]
  __int64 v28; // [rsp+58h] [rbp-29h] BYREF
  __int64 *v29; // [rsp+60h] [rbp-21h] BYREF
  __int64 v30; // [rsp+68h] [rbp-19h] BYREF
  ULONG Seed[2]; // [rsp+70h] [rbp-11h] BYREF
  _OWORD v32[2]; // [rsp+78h] [rbp-9h] BYREF
  __int128 v33; // [rsp+98h] [rbp+17h]
  void *v34; // [rsp+A8h] [rbp+27h]
  char v35; // [rsp+100h] [rbp+7Fh] BYREF

  LODWORD(v34) = 0;
  v35 = 0;
  v30 = 0LL;
  v29 = 0LL;
  v8 = 1;
  v28 = 0LL;
  memset(v32, 0, sizeof(v32));
  v33 = 0LL;
  v27 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 2240))(WdfDriverGlobals);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
          WdfDriverGlobals,
          a1,
          off_1C0063428);
  v12 = (_BYTE *)(v10 + 664);
  if ( a4 < 9 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_II(*(_QWORD *)(v10 + 72), v9, v11, 285);
    v13 = -1073741811;
    goto LABEL_5;
  }
  v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, __int64 *, _QWORD))(WdfFunctions_01023 + 2152))(
          WdfDriverGlobals,
          a2,
          a4,
          &v30,
          0LL);
  v14 = 0LL;
  v13 = v15;
  if ( v15 >= 0 )
  {
    if ( *(_QWORD *)v30 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_(*(_QWORD *)(v10 + 72), v9, 4, 286, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids);
      }
LABEL_10:
      v13 = -1073741811;
      goto LABEL_11;
    }
    v8 = *(_BYTE *)(v30 + 8);
    if ( a3 < 9 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_II(*(_QWORD *)(v10 + 72), v9, v11, 287);
      goto LABEL_10;
    }
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, __int64 **, _QWORD))(WdfFunctions_01023 + 2160))(
            WdfDriverGlobals,
            a2,
            a3,
            &v29,
            0LL);
    if ( v13 >= 0 )
    {
      if ( v27 == 1 )
      {
        v28 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2216))(
                WdfDriverGlobals,
                a2);
        if ( !v28 )
        {
          v13 = -1073741811;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v9) = 2;
            WPP_RECORDER_SF_D(
              *(_QWORD *)(v10 + 72),
              v9,
              4,
              288,
              (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
              116);
          }
          goto LABEL_11;
        }
        v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                WdfDriverGlobals,
                v28,
                off_1C00633B0);
        v19 = v18;
        if ( *(_BYTE *)(v18 + 48) )
        {
          v13 = -1073741811;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v9) = 2;
            WPP_RECORDER_SF_q(
              *(_QWORD *)(v10 + 72),
              v9,
              4,
              289,
              (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
              v28);
          }
          goto LABEL_5;
        }
        v20 = *(_QWORD *)(v18 + 24);
        if ( !v20 )
        {
          *(_QWORD *)Seed = MEMORY[0xFFFFF78000000320];
          v20 = ((RtlRandomEx(Seed) >> 2) + 4096) & 0xFFFFFFF8;
          *(_QWORD *)(v19 + 24) = v20;
        }
LABEL_37:
        *v29 = v20;
        if ( *(_DWORD *)(v10 + 392) == 1 )
        {
          DynamicLock_Acquire(*(_QWORD *)(v10 + 672));
          if ( !(*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 112))(
                  WdfDriverGlobals,
                  *(_QWORD *)(v10 + 688)) )
          {
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(__int64, __int64), _BYTE *))(WdfFunctions_01023 + 1144))(
              WdfDriverGlobals,
              **(_QWORD **)(*(_QWORD *)(v10 + 128) + 40LL),
              Interrupter_ClearBusEdgeInformationRoutineWithIsrSync,
              v12);
            v21 = *(_QWORD *)(v10 + 88);
            v22 = *(unsigned int **)(v21 + 32);
            Ulong = XilRegister_ReadUlong(v21, v22);
            XilRegister_WriteUlong(*(_QWORD *)(v10 + 88), v22, Ulong | 0x400);
            *v12 = 1;
          }
          DynamicLock_Release(*(_QWORD *)(v10 + 672));
          Interrupter_QueryBusEdgeInformation(*(_QWORD *)(v10 + 128), (_DWORD)v12, (unsigned int)&v35, 0, 0LL, 0LL, 0LL);
          DynamicLock_Acquire(*(_QWORD *)(v10 + 672));
          if ( v35 )
            goto LABEL_51;
          if ( !v8 )
          {
            *(_QWORD *)(v19 + 32) = a2;
            v24 = *(__int64 **)(v10 + 704);
            if ( *v24 != v10 + 696 )
              __fastfail(3u);
            *(_QWORD *)v19 = v10 + 696;
            *(_QWORD *)(v19 + 8) = v24;
            *v24 = v19;
            *(_QWORD *)(v10 + 704) = v19;
          }
          if ( !*(_BYTE *)(v10 + 720) )
          {
            v25 = *(_QWORD *)(v10 + 712);
            *(_BYTE *)(v10 + 720) = 1;
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3040))(WdfDriverGlobals, v25);
          }
          if ( v8 )
          {
LABEL_51:
            DynamicLock_Release(*(_QWORD *)(v10 + 672));
            DynamicLock_Acquire(*(_QWORD *)(v10 + 672));
            v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 120))(
                    WdfDriverGlobals,
                    *(_QWORD *)(v10 + 688),
                    v28);
            if ( v13 >= 0 )
            {
              DynamicLock_Release(*(_QWORD *)(v10 + 672));
              *(_BYTE *)(v19 + 48) = 1;
              v13 = 0;
              v14 = a3;
              goto LABEL_11;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v26) = 2;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(v10 + 72),
                v26,
                4,
                291,
                (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
                v13);
            }
          }
          else
          {
            v13 = 259;
          }
          DynamicLock_Release(*(_QWORD *)(v10 + 672));
        }
        else
        {
          v13 = -1073741436;
        }
LABEL_5:
        v14 = 0LL;
        goto LABEL_11;
      }
      HIDWORD(v32[1]) = 1;
      v34 = off_1C00633B0;
      *(_OWORD *)((char *)v32 + 4) = 0LL;
      *(_QWORD *)((char *)&v32[1] + 4) = 0x100000000LL;
      *((_QWORD *)&v33 + 1) = 0LL;
      LODWORD(v32[0]) = 56;
      *(_QWORD *)&v33 = *(_QWORD *)(v10 + 688);
      v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _OWORD *, __int64 *))(WdfFunctions_01023 + 1656))(
              WdfDriverGlobals,
              v32,
              &v28);
      if ( v13 >= 0 )
      {
        v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                WdfDriverGlobals,
                v28,
                off_1C00633B0);
        *(_BYTE *)(v19 + 60) = 0;
        *(_QWORD *)(v19 + 16) = v28;
        *(_QWORD *)(v19 + 24) = 0LL;
        v20 = v28;
        goto LABEL_37;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v10 + 72),
          v9,
          4,
          290,
          (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
          v13);
      }
    }
  }
LABEL_11:
  v16 = v28;
  ++*(_DWORD *)(v10 + 816);
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 0x10) != 0 )
    McTemplateK0ptqqp_EtwWriteTransfer(v16, v9, v11, *(_QWORD *)(v10 + 8), v8, v27, v13, v16);
  result = (PDEVICE_OBJECT)&WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    result = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v9) = 5;
      result = (PDEVICE_OBJECT)WPP_RECORDER_SF_dqd(
                                 *(_QWORD *)(v10 + 72),
                                 v9,
                                 4,
                                 292,
                                 (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
                                 v13,
                                 v28,
                                 v27);
    }
  }
  if ( v13 >= 0 )
  {
    if ( v13 == 259 )
      return result;
  }
  else if ( !v27 )
  {
    if ( v28 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 1664))(WdfDriverGlobals);
  }
  return (PDEVICE_OBJECT)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, unsigned __int64))(WdfFunctions_01023 + 2120))(
                           WdfDriverGlobals,
                           a2,
                           (unsigned int)v13,
                           v14);
}
