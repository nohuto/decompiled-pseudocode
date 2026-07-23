/*
 * XREFs of PiCMQueryRemove @ 0x14072F1D0
 * Callers:
 *     PiCMHandleIoctl @ 0x1406AD630 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14032EB60 (RtlInitUnicodeStringEx.c)
 *     RtlGetActiveConsoleId @ 0x14034ADC0 (RtlGetActiveConsoleId.c)
 *     McTemplateK0z_EtwWriteTransfer @ 0x14050D9F4 (McTemplateK0z_EtwWriteTransfer.c)
 *     McTemplateK0dz_EtwWriteTransfer @ 0x14050FDC8 (McTemplateK0dz_EtwWriteTransfer.c)
 *     _CmGetDeviceStatus @ 0x140684C00 (_CmGetDeviceStatus.c)
 *     PiAuDoesClientHaveAccess @ 0x140684D94 (PiAuDoesClientHaveAccess.c)
 *     _CmIsRootDevice @ 0x140693D04 (_CmIsRootDevice.c)
 *     PiCMReturnBufferResultData @ 0x1406B0564 (PiCMReturnBufferResultData.c)
 *     PiCMReleaseObjectInputData @ 0x1406B1920 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1406B1954 (PiCMCaptureObjectInputData.c)
 *     _CmGetDeviceRegProp @ 0x1406BA24C (_CmGetDeviceRegProp.c)
 *     _CmValidateDeviceName @ 0x1406BB050 (_CmValidateDeviceName.c)
 *     PiAuDoesClientHavePrivilege @ 0x14072F800 (PiAuDoesClientHavePrivilege.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14072F89C (PnpQueueQueryAndRemoveEvent.c)
 *     PnpGetCallerSessionId @ 0x1408A1E7C (PnpGetCallerSessionId.c)
 *     PiAuCheckClientInteractive @ 0x1408A3AF8 (PiAuCheckClientInteractive.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiCMQueryRemove(
        unsigned __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  const wchar_t *v7; // r13
  int v8; // r12d
  unsigned int v9; // r14d
  _WORD *v10; // r15
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // r8
  int v14; // edi
  signed int DeviceRegProp; // ebx
  unsigned int v16; // eax
  unsigned int v17; // esi
  _WORD *PoolWithTag; // rax
  int v19; // edi
  int v20; // eax
  unsigned int v22; // r8d
  int v23; // edi
  unsigned int v24; // [rsp+38h] [rbp-69h]
  _BYTE v25[4]; // [rsp+58h] [rbp-49h] BYREF
  unsigned int v26; // [rsp+5Ch] [rbp-45h] BYREF
  int v27; // [rsp+60h] [rbp-41h] BYREF
  int v28; // [rsp+64h] [rbp-3Dh] BYREF
  int v29; // [rsp+68h] [rbp-39h] BYREF
  int v30; // [rsp+6Ch] [rbp-35h] BYREF
  ULONG SessionId; // [rsp+70h] [rbp-31h] BYREF
  int v32; // [rsp+74h] [rbp-2Dh] BYREF
  int v33; // [rsp+78h] [rbp-29h] BYREF
  int v34; // [rsp+7Ch] [rbp-25h] BYREF
  __int128 v35; // [rsp+80h] [rbp-21h] BYREF
  PCWSTR SourceString[2]; // [rsp+90h] [rbp-11h]
  __int64 v37; // [rsp+A0h] [rbp-1h]
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp+7h] BYREF

  v28 = 0;
  v33 = 0;
  v37 = 0LL;
  DestinationString = 0LL;
  v32 = 0;
  v7 = 0LL;
  v35 = 0LL;
  *a6 = 0;
  v8 = 0;
  *(_OWORD *)SourceString = 0LL;
  v30 = 0;
  v9 = 0;
  v29 = 0;
  v10 = 0LL;
  v34 = 0;
  v25[0] = 0;
  SessionId = 0;
  v26 = 0;
  v27 = 0;
  v12 = PiCMCaptureObjectInputData(a1, a2, a5, (__int64)&v35);
  if ( v12 < 0 )
    goto LABEL_26;
  v7 = SourceString[0];
  v14 = HIDWORD(SourceString[1]);
  if ( (byte_140C1327B & 4) != 0 )
    McTemplateK0dz_EtwWriteTransfer(
      v11,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_CfgMgr_QueryRemove_Start,
      v13,
      SHIDWORD(SourceString[1]),
      SourceString[0]);
  if ( !v7 || DWORD2(v35) != 1 )
  {
    DeviceRegProp = -1073741811;
    goto LABEL_30;
  }
  if ( !a3 || a4 < 0x14 )
    goto LABEL_58;
  DeviceRegProp = CmValidateDeviceName(v11, v7);
  if ( DeviceRegProp < 0 )
  {
LABEL_30:
    if ( DeviceRegProp != -2147483608 )
      goto LABEL_23;
    v22 = v26;
    goto LABEL_61;
  }
  if ( CmIsRootDevice(v7) )
  {
    DeviceRegProp = -1073741773;
    goto LABEL_23;
  }
  v16 = a4 - 20;
  v17 = 0;
  if ( v16 >= 2 )
    v17 = v16;
  if ( v17 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v17, 0x34706E50u);
    v10 = PoolWithTag;
    if ( !PoolWithTag )
    {
      DeviceRegProp = -1073741670;
      goto LABEL_23;
    }
    *PoolWithTag = 0;
  }
  v19 = v14 - 1;
  if ( !v19 )
  {
    if ( !PiAuDoesClientHaveAccess(0x20u) || !(unsigned __int8)PiAuDoesClientHavePrivilege(10LL) )
    {
      DeviceRegProp = -1073741790;
      goto LABEL_20;
    }
    if ( (DWORD1(v35) & 0xFFFFFFFE) == 0 )
    {
      v8 = BYTE4(v35) & 1;
      goto LABEL_20;
    }
LABEL_58:
    DeviceRegProp = -1073741811;
    goto LABEL_23;
  }
  v23 = v19 - 1;
  if ( !v23 )
  {
    v29 = 4;
    DeviceRegProp = CmGetDeviceRegProp(
                      *(__int64 *)&PiPnpRtlCtx,
                      (__int64)v7,
                      0LL,
                      16,
                      (__int64)&v34,
                      (__int64)&v30,
                      (__int64)&v29,
                      0);
    if ( DeviceRegProp < 0 )
      goto LABEL_20;
    v8 = 8;
    if ( (v30 & 8) != 0 )
    {
      if ( !PiAuDoesClientHaveAccess(4u) || !(unsigned __int8)PiAuDoesClientHavePrivilege(25LL) )
        goto LABEL_49;
    }
    else
    {
      DeviceRegProp = PnpGetCallerSessionId(&SessionId);
      if ( DeviceRegProp < 0 || SessionId != RtlGetActiveConsoleId() )
      {
        DeviceRegProp = PiAuCheckClientInteractive(v25);
        if ( DeviceRegProp < 0 || !v25[0] )
        {
          if ( !PiAuDoesClientHaveAccess(4u) || !(unsigned __int8)PiAuDoesClientHavePrivilege(10LL) )
            goto LABEL_49;
          DeviceRegProp = 0;
        }
      }
    }
    if ( !DWORD1(v35) )
      goto LABEL_20;
    goto LABEL_58;
  }
  if ( v23 != 1 )
  {
    DeviceRegProp = -1073741811;
    goto LABEL_20;
  }
  if ( !PiAuDoesClientHaveAccess(4u) || !(unsigned __int8)PiAuDoesClientHavePrivilege(10LL) )
  {
LABEL_49:
    DeviceRegProp = -1073741790;
    goto LABEL_23;
  }
  if ( DWORD1(v35) )
    goto LABEL_58;
  v8 = 2;
  if ( (int)CmGetDeviceStatus(PiPnpRtlCtx, v7, 0, &v28, &v33, &v32, v24) < 0 )
  {
    DeviceRegProp = -1073741810;
    goto LABEL_23;
  }
  if ( (v28 & 0x2000) == 0 )
  {
    DeviceRegProp = -1073741808;
    goto LABEL_23;
  }
LABEL_20:
  v9 = v17;
  if ( DeviceRegProp < 0 )
    goto LABEL_30;
  DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, v7);
  if ( DeviceRegProp < 0 )
    goto LABEL_30;
  v26 = v17;
  DeviceRegProp = PnpQueueQueryAndRemoveEvent(
                    (unsigned int)&DestinationString,
                    (unsigned int)&v27,
                    (_DWORD)v10,
                    (unsigned int)&v26,
                    v8,
                    0);
  if ( DeviceRegProp != -2147483608 )
  {
LABEL_23:
    v20 = PiCMReturnBufferResultData(DeviceRegProp, v26, v27, 0LL, 0, v37, a3, a4, a6);
    goto LABEL_24;
  }
  v22 = v26;
  v9 = v17;
  if ( v10 )
    v10[((unsigned __int64)v17 >> 1) - 1] = 0;
LABEL_61:
  if ( v22 > v9 )
    goto LABEL_23;
  v20 = PiCMReturnBufferResultData(0x80000028, v26, v27, v10, v22, v37, a3, a4, a6);
LABEL_24:
  v12 = v20;
  if ( v10 )
    ExFreePoolWithTag(v10, 0x34706E50u);
LABEL_26:
  if ( (byte_140C1327B & 4) != 0 )
    McTemplateK0z_EtwWriteTransfer(v11, (const EVENT_DESCRIPTOR *)KMPnPEvt_CfgMgr_QueryRemove_Stop, v13, v7);
  PiCMReleaseObjectInputData((__int64)&v35);
  return (unsigned int)v12;
}
