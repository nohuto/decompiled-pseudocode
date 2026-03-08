/*
 * XREFs of TR_Create @ 0x1C006DDF8
 * Callers:
 *     Endpoint_UcxEvtEndpointStaticStreamsAdd @ 0x1C003CA10 (Endpoint_UcxEvtEndpointStaticStreamsAdd.c)
 *     Endpoint_Create @ 0x1C006D624 (Endpoint_Create.c)
 * Callees:
 *     Controller_IsSecureDevice @ 0x1C000B0F8 (Controller_IsSecureDevice.c)
 *     Endpoint_IsProxyEndpoint @ 0x1C000B198 (Endpoint_IsProxyEndpoint.c)
 *     TR_AcquireSegment @ 0x1C000B1A8 (TR_AcquireSegment.c)
 *     TR_EnsureSegments @ 0x1C000B240 (TR_EnsureSegments.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0020700 (memset.c)
 *     TR_CreateSecureObject @ 0x1C004139C (TR_CreateSecureObject.c)
 *     WPP_RECORDER_SF_DDDd @ 0x1C0041F60 (WPP_RECORDER_SF_DDDd.c)
 *     XilUsbDevice_IsSecureUsbDevice @ 0x1C00481B4 (XilUsbDevice_IsSecureUsbDevice.c)
 *     Counter_CreateTransferRingInstance @ 0x1C006E274 (Counter_CreateTransferRingInstance.c)
 *     Bulk_GetConfiguration @ 0x1C00752B0 (Bulk_GetConfiguration.c)
 */

__int64 __fastcall TR_Create(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 *a5)
{
  char IsProxyEndpoint; // al
  int v10; // r11d
  __int64 v11; // rax
  int v12; // ecx
  int v13; // edx
  int v14; // edx
  bool v15; // zf
  int v16; // eax
  int v17; // r10d
  int v18; // eax
  unsigned int v19; // r8d
  __int64 (__fastcall **v20)(); // r15
  int v21; // eax
  __int64 (__fastcall *v22)(); // rax
  char v23; // al
  int v24; // r9d
  __int64 v25; // rdx
  int v26; // r10d
  int v27; // ecx
  int v28; // edx
  int SecureObject; // edi
  __int64 v30; // rax
  __int128 v31; // xmm0
  __int64 v32; // rbx
  __int128 v33; // xmm1
  unsigned __int64 v34; // rax
  char IsSecureUsbDevice; // al
  int v36; // r8d
  __int64 (__fastcall *v37)(); // r8
  char IsSecureDevice; // al
  bool v40; // cf
  int v41; // r9d
  __int64 v42; // rax
  char v43; // [rsp+28h] [rbp-D8h]
  int v44; // [rsp+30h] [rbp-D0h]
  char v45; // [rsp+38h] [rbp-C8h]
  char v46; // [rsp+40h] [rbp-C0h]
  __int128 v47; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v48; // [rsp+60h] [rbp-A0h]
  __int128 v49; // [rsp+70h] [rbp-90h]
  void *v50; // [rsp+80h] [rbp-80h]
  __int128 v51; // [rsp+88h] [rbp-78h] BYREF
  __int128 v52; // [rsp+98h] [rbp-68h]
  __int64 (__fastcall **v53)(); // [rsp+A8h] [rbp-58h]
  __int128 v54; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v55; // [rsp+C0h] [rbp-40h]
  __int128 v56; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v57; // [rsp+D8h] [rbp-28h]
  _QWORD v58[12]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v59; // [rsp+178h] [rbp+78h] BYREF

  LODWORD(v57) = 0;
  LODWORD(v55) = 0;
  LODWORD(v50) = 0;
  v56 = 0LL;
  v54 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  memset(v58, 0, sizeof(v58));
  v59 = 0LL;
  v51 = 0LL;
  v53 = 0LL;
  v52 = 0LL;
  IsProxyEndpoint = Endpoint_IsProxyEndpoint(a2);
  v10 = -1;
  if ( IsProxyEndpoint )
  {
    v12 = 16776704;
    v13 = -1;
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 96);
    v12 = *(_DWORD *)(v11 + 16);
    v13 = *(_DWORD *)(v11 + 20);
  }
  DWORD2(v51) = v13;
  DWORD1(v51) = v12 - 4096;
  v14 = 3;
  v15 = (*(_BYTE *)(a2 + 99) & 3) == 0;
  v16 = *(_BYTE *)(a2 + 99) & 3;
  LODWORD(v51) = v16;
  v17 = 1;
  if ( v15 )
  {
    v20 = ControlFunctionTable;
    HIDWORD(v51) = 1;
    LODWORD(v52) = 384;
    v53 = ControlFunctionTable;
    IsSecureDevice = Controller_IsSecureDevice(a1);
    v40 = (*(_QWORD *)(a1 + 336) & 8) != 0;
    DWORD2(v52) = IsSecureDevice != 0 ? 0 : 0x200;
    DWORD1(v52) = v40 ? 4096 : 512;
  }
  else
  {
    v18 = v16 - 1;
    if ( v18 )
    {
      if ( (unsigned int)(v18 - 1) > 1 )
        return (unsigned int)-1073741823;
      Bulk_GetConfiguration(a1, &v51);
      v19 = v52;
      v20 = v53;
      v14 = HIDWORD(v51);
    }
    else
    {
      v20 = IsochFunctionTable;
      v19 = 440;
      HIDWORD(v51) = 3;
      LODWORD(v52) = 440;
      v53 = IsochFunctionTable;
      *(_QWORD *)((char *)&v52 + 4) = 512LL;
    }
  }
  v21 = v58[10];
  LODWORD(v58[0]) = 96;
  LODWORD(v58[1]) = 2;
  if ( v14 == 2 )
    v21 = v10;
  HIDWORD(v58[0]) = v14;
  LODWORD(v58[10]) = v21;
  v58[2] = v20[20];
  v22 = v20[21];
  *(_QWORD *)&v48 = 0LL;
  v58[9] = v22;
  v50 = off_1C0063388;
  *((_QWORD *)&v49 + 1) = v19;
  *((_QWORD *)&v47 + 1) = TR_WdfEvtCleanupCallback;
  *(_QWORD *)&v47 = 56LL;
  DWORD2(v48) = v17;
  HIDWORD(v48) = v17;
  *(_QWORD *)&v49 = a3;
  v23 = Endpoint_IsProxyEndpoint(a2);
  v25 = *(_QWORD *)a1;
  v27 = v26;
  if ( v23 )
    v27 = v24;
  DWORD2(v48) = v27;
  SecureObject = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, __int128 *, unsigned __int64 *))(WdfFunctions_01023 + 1216))(
                   WdfDriverGlobals,
                   v25,
                   v58,
                   &v47,
                   &v59);
  if ( SecureObject < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)SecureObject;
    v41 = 10;
    v46 = SecureObject;
    v45 = a4;
    v36 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 16) + 135LL);
    v44 = *(_DWORD *)(a2 + 144);
    v43 = *(_BYTE *)(*(_QWORD *)(a2 + 16) + 135LL);
LABEL_29:
    LOBYTE(v28) = 2;
    WPP_RECORDER_SF_DDDd(
      *(_QWORD *)(a1 + 72),
      v28,
      v36,
      v41,
      (__int64)&WPP_9ff532af533633cb75752ac9b9d63831_Traceguids,
      v43,
      v44,
      v45,
      v46);
    return (unsigned int)SecureObject;
  }
  v30 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, void *))(WdfFunctions_01023 + 1616))(
          WdfDriverGlobals,
          v59,
          off_1C0063388);
  v31 = v51;
  v32 = v30;
  v33 = v52;
  *(_QWORD *)(v30 + 40) = a1;
  *(_OWORD *)v30 = v31;
  *(_QWORD *)&v31 = v53;
  *(_OWORD *)(v30 + 16) = v33;
  *(_QWORD *)(v30 + 32) = v31;
  *(_QWORD *)(v30 + 48) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(v30 + 56) = a2;
  *(_DWORD *)(v30 + 64) = a4;
  v34 = v59;
  *(_QWORD *)(v32 + 304) = 0LL;
  *(_DWORD *)(v32 + 312) = 0;
  *(_QWORD *)(v32 + 72) = v34;
  IsSecureUsbDevice = Controller_IsSecureDevice(a1);
  if ( IsSecureUsbDevice )
  {
    if ( *(_DWORD *)(a1 + 604) == 2 )
      IsSecureUsbDevice = XilUsbDevice_IsSecureUsbDevice(*(_QWORD *)(a2 + 16));
    else
      IsSecureUsbDevice = 1;
  }
  *(_BYTE *)(v32 + 280) = IsSecureUsbDevice;
  KeInitializeSpinLock((PKSPIN_LOCK)(v32 + 96));
  v15 = *(_BYTE *)(v32 + 280) == 0;
  *(_QWORD *)(v32 + 216) = v32 + 208;
  *(_QWORD *)(v32 + 208) = v32 + 208;
  *(_QWORD *)(v32 + 232) = v32 + 224;
  *(_QWORD *)(v32 + 224) = v32 + 224;
  if ( v15 )
  {
    SecureObject = TR_EnsureSegments(v32, 1u, 0);
    if ( SecureObject < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)SecureObject;
      v42 = *(_QWORD *)(v32 + 48);
      v41 = 12;
      goto LABEL_28;
    }
  }
  else
  {
    SecureObject = TR_CreateSecureObject(v32);
    if ( SecureObject < 0 )
      return (unsigned int)SecureObject;
    *((_QWORD *)&v54 + 1) = v20[24];
    *(_QWORD *)&v54 = 24LL;
    v50 = 0LL;
    v55 = 1LL;
    *(_QWORD *)&v48 = 0LL;
    v49 = v59;
    v47 = 0LL;
    *((_QWORD *)&v48 + 1) = 0x100000001LL;
    LODWORD(v47) = 56;
    SecureObject = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, __int64))(WdfFunctions_01023 + 3032))(
                     WdfDriverGlobals,
                     &v54,
                     &v47,
                     v32 + 88);
    if ( SecureObject < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)SecureObject;
      v41 = 11;
      goto LABEL_27;
    }
  }
  v37 = v20[22];
  if ( v37 )
  {
    SecureObject = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int64 (__fastcall *)(), __int64))(WdfFunctions_01023 + 1328))(
                     WdfDriverGlobals,
                     v59,
                     v37,
                     v32);
    if ( SecureObject < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)SecureObject;
      v41 = 13;
      goto LABEL_27;
    }
  }
  *((_QWORD *)&v56 + 1) = v20[23];
  *(_QWORD *)&v56 = 24LL;
  v50 = 0LL;
  v57 = 1LL;
  *(_QWORD *)&v48 = 0LL;
  v49 = v59;
  v47 = 0LL;
  *((_QWORD *)&v48 + 1) = 0x100000001LL;
  LODWORD(v47) = 56;
  SecureObject = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, __int64))(WdfFunctions_01023
                                                                                                 + 888))(
                   WdfDriverGlobals,
                   &v56,
                   &v47,
                   v32 + 80);
  if ( SecureObject < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)SecureObject;
    v41 = 14;
    goto LABEL_27;
  }
  *(_QWORD *)(v32 + 176) = TR_AcquireSegment(v32);
  SecureObject = ((__int64 (__fastcall *)(__int64))*v20)(v32);
  if ( SecureObject < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)SecureObject;
    v41 = 15;
LABEL_27:
    v42 = *(_QWORD *)(a2 + 16);
LABEL_28:
    v46 = SecureObject;
    v45 = a4;
    v44 = *(_DWORD *)(a2 + 144);
    v43 = *(_BYTE *)(v42 + 135);
    goto LABEL_29;
  }
  Counter_CreateTransferRingInstance(*(_QWORD *)(v32 + 56), *(unsigned int *)(v32 + 64), v32 + 240);
  *a5 = v32;
  return (unsigned int)SecureObject;
}
