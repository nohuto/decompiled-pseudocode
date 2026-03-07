__int64 Endpoint_Create(__int64 a1, __int64 a2, ...)
{
  __int64 v3; // rdi
  __m128i *v4; // rsi
  _BYTE *v5; // r14
  unsigned int v6; // ebx
  int v7; // edx
  char IsSecureDevice; // al
  int v9; // edx
  int v10; // ecx
  int v11; // edx
  int ClearStallContext; // edi
  unsigned int v13; // ebx
  __int64 v14; // rax
  int v15; // edx
  int v16; // r9d
  unsigned int v17; // ebx
  __int64 v18; // rax
  int v19; // edx
  __int64 v20; // rbx
  bool v21; // cf
  unsigned int v22; // ebx
  __int64 v23; // rax
  struct _DEVICE_OBJECT *v24; // rax
  PIO_WORKITEM WorkItem; // rax
  unsigned int v26; // ebx
  __int64 v27; // rax
  unsigned int v28; // edx
  char v29; // al
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  int v36; // r9d
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  int ContextSize; // eax
  int v42; // edx
  __int64 WdfQueue; // rax
  __int64 v44; // rcx
  __int64 v45; // rcx
  char v47; // [rsp+30h] [rbp-91h]
  int v48; // [rsp+38h] [rbp-89h]
  char v49; // [rsp+40h] [rbp-81h]
  unsigned __int64 v50; // [rsp+68h] [rbp-59h] BYREF
  __int128 v51; // [rsp+70h] [rbp-51h] BYREF
  void (__fastcall *v52)(__int64); // [rsp+80h] [rbp-41h]
  __int64 v53; // [rsp+88h] [rbp-39h]
  __int128 v54; // [rsp+90h] [rbp-31h]
  void *v55; // [rsp+A0h] [rbp-21h]
  _QWORD v56[2]; // [rsp+A8h] [rbp-19h] BYREF
  __int128 v57; // [rsp+B8h] [rbp-9h]
  __int64 v58; // [rsp+C8h] [rbp+7h]
  __int64 v59; // [rsp+D0h] [rbp+Fh]
  __int64 v60; // [rsp+128h] [rbp+67h] BYREF
  va_list va; // [rsp+128h] [rbp+67h]
  __int64 v62; // [rsp+130h] [rbp+6Fh]
  __int64 v63; // [rsp+138h] [rbp+77h]
  _QWORD *v64; // [rsp+140h] [rbp+7Fh]
  va_list va1; // [rsp+148h] [rbp+87h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v60 = va_arg(va1, _QWORD);
  v62 = va_arg(va1, _QWORD);
  v63 = va_arg(va1, _QWORD);
  v64 = va_arg(va1, _QWORD *);
  v50 = 0LL;
  DWORD1(v51) = 0;
  v3 = v62;
  HIDWORD(v56[0]) = 0;
  v4 = (__m128i *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                    WdfDriverGlobals,
                    a1,
                    off_1C0063428);
  v59 = v4[5].m128i_i64[1];
  v5 = (_BYTE *)(v3 + 2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = (unsigned __int8)*v5;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
      WdfDriverGlobals,
      a2,
      off_1C00632C0);
    WPP_RECORDER_SF_ddqDdd(v4[4].m128i_i64[1], v7, (v6 >> 7) + 2 * (*v5 & 0x7F), *(_BYTE *)(v3 + 3) & 3);
  }
  v55 = off_1C00631A8;
  *(_QWORD *)&v51 = 56LL;
  *((_QWORD *)&v51 + 1) = Endpoint_EvtEndpointCleanupCallback;
  v52 = Endpoint_EvtDestroyCallback;
  v54 = 0LL;
  v53 = 0x100000001LL;
  IsSecureDevice = Controller_IsSecureDevice((__int64)v4);
  v10 = v9;
  v11 = v9 + 1;
  if ( IsSecureDevice )
    v10 = v11;
  LODWORD(v53) = v10;
  ClearStallContext = qword_1C0064830(UcxDriverGlobals, a2, (__int64 *)va, &v51, &v50);
  if ( ClearStallContext >= 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = (unsigned __int8)*v5;
      v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
              WdfDriverGlobals,
              a2,
              off_1C00632C0);
      LOBYTE(v19) = 4;
      WPP_RECORDER_SF_ddq(
        v4[4].m128i_i64[1],
        v19,
        13,
        16,
        (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
        *(_BYTE *)(v18 + 135),
        (v17 >> 7) + 2 * (*v5 & 0x7F),
        v50);
    }
    v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            v50,
            off_1C00631A8);
    KeInitializeEvent((PRKEVENT)(v20 + 40), NotificationEvent, 0);
    v58 = 0LL;
    v57 = 0LL;
    LODWORD(v57) = 0;
    DWORD2(v57) = 0;
    v56[1] = Endpoint_WdfEvtStateMachineTimer;
    BYTE4(v57) = 1;
    v56[0] = 40LL;
    v21 = (_mm_srli_si128(v4[21], 8).m128i_u32[0] & 0x40000) != 0LL;
    v52 = 0LL;
    v53 = 0x100000001LL;
    LOBYTE(v58) = v21;
    v55 = 0LL;
    v54 = v50;
    v51 = 0LL;
    LODWORD(v51) = 56;
    ClearStallContext = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int128 *, __int64))(WdfFunctions_01023 + 2544))(
                          WdfDriverGlobals,
                          v56,
                          &v51,
                          v20 + 1304);
    if ( ClearStallContext < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)ClearStallContext;
      v22 = (unsigned __int8)*v5;
      v23 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
              WdfDriverGlobals,
              a2,
              off_1C00632C0);
      v16 = 17;
      goto LABEL_14;
    }
    v24 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 248))(
                                     WdfDriverGlobals,
                                     v4->m128i_i64[0]);
    WorkItem = IoAllocateWorkItem(v24);
    *(_QWORD *)(v20 + 1280) = WorkItem;
    if ( !WorkItem )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v26 = (unsigned __int8)*v5;
        v27 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                WdfDriverGlobals,
                a2,
                off_1C00632C0);
        v26 >>= 7;
        v28 = v26 + 2 * (*v5 & 0x7F);
        LOBYTE(v28) = 2;
        WPP_RECORDER_SF_dd(
          v4[4].m128i_i64[1],
          v28,
          13,
          18,
          (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
          *(_BYTE *)(v27 + 135),
          v26 + 2 * (*v5 & 0x7F));
      }
      return (unsigned int)-1073741670;
    }
    *(_DWORD *)(v20 + 1176) = 0;
    *(_DWORD *)(v20 + 1148) = 2000;
    *(_DWORD *)(v20 + 1272) = 2000;
    *(_QWORD *)(v20 + 1264) = &ESMStateTable;
    *(_QWORD *)(v20 + 1256) = v20;
    *(_BYTE *)(v20 + 1314) = Controller_IsSecureDevice((__int64)v4);
    if ( *(_BYTE *)(g_WdfDriverUsbXhciContext + 28) )
    {
      v29 = *(_BYTE *)(v20 + 1314);
      if ( (v4[54].m128i_i8[12] & 1) != 0 )
        v29 = 1;
      *(_BYTE *)(v20 + 1314) = v29;
    }
    *(_QWORD *)v20 = v4;
    *(_QWORD *)(v20 + 8) = a2;
    v30 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            a2,
            off_1C00632C0);
    v31 = v62;
    *(_QWORD *)(v20 + 16) = v30;
    *(_QWORD *)(v20 + 136) = 0LL;
    *(_QWORD *)(v20 + 272) = 0LL;
    *(_DWORD *)(v20 + 96) = *(_DWORD *)v31;
    *(_WORD *)(v20 + 100) = *(_WORD *)(v31 + 4);
    LOBYTE(v30) = *(_BYTE *)(v31 + 6);
    v32 = v63;
    *(_BYTE *)(v20 + 102) = v30;
    if ( v32 )
    {
      *(_DWORD *)(v20 + 103) = *(_DWORD *)v32;
      *(_WORD *)(v20 + 107) = *(_WORD *)(v32 + 4);
    }
    if ( v64 )
      *(_QWORD *)(v20 + 109) = *v64;
    Endpoint_SetType(v20);
    if ( *(_DWORD *)(v20 + 120) == 1 || (unsigned int)(*(_DWORD *)(v20 + 120) - 2) < 2 )
      v37 = 2 * (*(_BYTE *)(v20 + 98) & 0xF);
    else
      v37 = 2 * (*(_BYTE *)(v20 + 98) & 0xF) + 1;
    *(_DWORD *)(v20 + 144) = v37;
    ClearStallContext = XilEndpoint_Create(v34, v33, v35, v36);
    if ( ClearStallContext < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)ClearStallContext;
      v22 = (unsigned __int8)*v5;
      v23 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
              WdfDriverGlobals,
              a2,
              off_1C00632C0);
      v16 = 19;
LABEL_14:
      v49 = ClearStallContext;
      v48 = (v22 >> 7) + 2 * (*v5 & 0x7F);
      v47 = *(_BYTE *)(v23 + 135);
      goto LABEL_8;
    }
    v38 = *(_QWORD *)(v20 + 16);
    *(_QWORD *)(v20 + 264) = 0LL;
    if ( *(_DWORD *)(v38 + 20) == 3 && (*(_BYTE *)(v20 + 99) & 3) == 2 && (*(_BYTE *)(v20 + 106) & 0x1F) != 0 )
    {
      v39 = *(_QWORD *)v20;
      *(_BYTE *)(v20 + 37) = 1;
      if ( (*(_QWORD *)(v39 + 336) & 0x200000LL) != 0 )
      {
        ClearStallContext = Endpoint_CreateClearStallContext(v20);
        if ( ClearStallContext < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return (unsigned int)ClearStallContext;
          v40 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                  WdfDriverGlobals,
                  a2,
                  off_1C00632C0);
          v16 = 20;
          goto LABEL_41;
        }
        ContextSize = XilRegister_GetContextSize(v59);
        v42 = 2112;
        if ( ContextSize != 1 )
          v42 = 1056;
        *(_QWORD *)(v20 + 264) = XilEndpoint_AcquireBuffer((_BYTE *)v20, v42, v20, 863268933);
      }
    }
    else
    {
      *(_BYTE *)(v20 + 37) = 0;
    }
    ClearStallContext = TR_Create((_DWORD)v4, v20, v50, *(_BYTE *)(v20 + 37) != 0, v20 + 88);
    if ( ClearStallContext >= 0 )
    {
      WdfQueue = TR_GetWdfQueue(*(_QWORD *)(v20 + 88));
      ((void (__fastcall *)(__int64, unsigned __int64, __int64))qword_1C0064858)(UcxDriverGlobals, v50, WdfQueue);
      if ( *(_DWORD *)(v20 + 144) == 1 )
        *(_QWORD *)(*(_QWORD *)(v20 + 16) + 176LL) = v20;
      v44 = *(_QWORD *)(v20 + 16);
      *(_QWORD *)(v20 + 24) = v50;
      UsbDevice_AddEndpointToDeviceEndpointList(v44, v50, (_QWORD *)(v20 + 64));
      Etw_EndpointCreate(v45, (_QWORD *)v20);
      return (unsigned int)ClearStallContext;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)ClearStallContext;
    v40 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            a2,
            off_1C00632C0);
    v16 = 21;
LABEL_41:
    v49 = ClearStallContext;
    v48 = *(_DWORD *)(v20 + 144);
    v47 = *(_BYTE *)(v40 + 135);
    goto LABEL_8;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = (unsigned __int8)*v5;
    v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            a2,
            off_1C00632C0);
    v16 = 15;
    v49 = ClearStallContext;
    v48 = (v13 >> 7) + 2 * (*v5 & 0x7F);
    v47 = *(_BYTE *)(v14 + 135);
LABEL_8:
    LOBYTE(v15) = 2;
    WPP_RECORDER_SF_ddd(
      v4[4].m128i_i64[1],
      v15,
      13,
      v16,
      (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
      v47,
      v48,
      v49);
  }
  return (unsigned int)ClearStallContext;
}
