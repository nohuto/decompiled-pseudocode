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
  _WORD *Pool2; // rax
  int v19; // edi
  int v20; // edi
  __int64 v21; // rdx
  __int64 v22; // rcx
  int ActiveConsoleId; // eax
  unsigned int v24; // r8d
  int v25; // eax
  unsigned int v27; // [rsp+38h] [rbp-69h]
  _BYTE v28[4]; // [rsp+58h] [rbp-49h] BYREF
  unsigned int v29; // [rsp+5Ch] [rbp-45h] BYREF
  int v30; // [rsp+60h] [rbp-41h] BYREF
  int v31; // [rsp+64h] [rbp-3Dh] BYREF
  int v32; // [rsp+68h] [rbp-39h] BYREF
  int v33; // [rsp+6Ch] [rbp-35h] BYREF
  ULONG SessionId; // [rsp+70h] [rbp-31h] BYREF
  int v35; // [rsp+74h] [rbp-2Dh] BYREF
  int v36; // [rsp+78h] [rbp-29h] BYREF
  int v37; // [rsp+7Ch] [rbp-25h] BYREF
  __int128 v38; // [rsp+80h] [rbp-21h] BYREF
  PCWSTR SourceString[2]; // [rsp+90h] [rbp-11h]
  __int64 v40; // [rsp+A0h] [rbp-1h]
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp+7h] BYREF

  v31 = 0;
  v36 = 0;
  v40 = 0LL;
  DestinationString = 0LL;
  v35 = 0;
  v7 = 0LL;
  v38 = 0LL;
  *a6 = 0;
  v8 = 0;
  *(_OWORD *)SourceString = 0LL;
  v33 = 0;
  v9 = 0;
  v32 = 0;
  v10 = 0LL;
  v37 = 0;
  v28[0] = 0;
  SessionId = 0;
  v29 = 0;
  v30 = 0;
  v12 = PiCMCaptureObjectInputData(a1, a2, a5, (__int64)&v38);
  if ( v12 < 0 )
    goto LABEL_60;
  v7 = SourceString[0];
  v14 = HIDWORD(SourceString[1]);
  if ( (byte_140C0E10B & 4) != 0 )
    McTemplateK0dz_EtwWriteTransfer(
      v11,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_CfgMgr_QueryRemove_Start,
      v13,
      SHIDWORD(SourceString[1]),
      SourceString[0]);
  if ( !v7 || DWORD2(v38) != 1 || !a3 || a4 < 0x14 )
    goto LABEL_56;
  DeviceRegProp = CmValidateDeviceName(v11, v7);
  if ( DeviceRegProp < 0 )
  {
LABEL_52:
    if ( DeviceRegProp != -2147483608 )
      goto LABEL_57;
    v24 = v29;
    goto LABEL_54;
  }
  if ( CmIsRootDevice(v7) )
  {
    DeviceRegProp = -1073741773;
    goto LABEL_57;
  }
  v16 = a4 - 20;
  v17 = 0;
  if ( v16 >= 2 )
    v17 = v16;
  if ( v17 )
  {
    Pool2 = (_WORD *)ExAllocatePool2(256LL, v17, 879783504LL);
    v10 = Pool2;
    if ( !Pool2 )
    {
      DeviceRegProp = -1073741670;
      goto LABEL_57;
    }
    *Pool2 = 0;
  }
  v19 = v14 - 1;
  if ( !v19 )
  {
    if ( PiAuDoesClientHaveAccess(0x20u) && PiAuDoesClientHavePrivilege(0xAu) )
    {
      if ( (DWORD1(v38) & 0xFFFFFFFE) != 0 )
        goto LABEL_23;
      v8 = BYTE4(v38) & 1;
      goto LABEL_47;
    }
LABEL_32:
    DeviceRegProp = -1073741790;
    goto LABEL_57;
  }
  v20 = v19 - 1;
  if ( !v20 )
  {
    v32 = 4;
    DeviceRegProp = CmGetDeviceRegProp(
                      *(__int64 *)&PiPnpRtlCtx,
                      (__int64)v7,
                      0LL,
                      16,
                      (__int64)&v37,
                      (__int64)&v33,
                      (__int64)&v32,
                      0);
    if ( DeviceRegProp >= 0 )
    {
      v8 = 8;
      if ( (v33 & 8) != 0 )
      {
        if ( !PiAuDoesClientHaveAccess(4u) || !PiAuDoesClientHavePrivilege(0x19u) )
          goto LABEL_32;
      }
      else
      {
        DeviceRegProp = PnpGetCallerSessionId(&SessionId);
        if ( DeviceRegProp < 0 || (ActiveConsoleId = RtlGetActiveConsoleId(v22, v21), SessionId != ActiveConsoleId) )
        {
          DeviceRegProp = PiAuCheckClientInteractive(v28);
          if ( DeviceRegProp < 0 || !v28[0] )
          {
            if ( !PiAuDoesClientHaveAccess(4u) || !PiAuDoesClientHavePrivilege(0xAu) )
              goto LABEL_32;
            DeviceRegProp = 0;
          }
        }
      }
      if ( DWORD1(v38) )
        goto LABEL_23;
    }
    v9 = v17;
    if ( DeviceRegProp >= 0 )
      goto LABEL_47;
    goto LABEL_52;
  }
  if ( v20 != 1 )
  {
LABEL_56:
    DeviceRegProp = -1073741811;
    goto LABEL_57;
  }
  if ( !PiAuDoesClientHaveAccess(4u) || !PiAuDoesClientHavePrivilege(0xAu) )
    goto LABEL_32;
  if ( DWORD1(v38) )
  {
LABEL_23:
    DeviceRegProp = -1073741811;
    goto LABEL_57;
  }
  v8 = 2;
  if ( (int)CmGetDeviceStatus(PiPnpRtlCtx, v7, 0, &v31, &v36, &v35, v27) < 0 )
  {
    DeviceRegProp = -1073741810;
    goto LABEL_57;
  }
  if ( (v31 & 0x2000) == 0 )
  {
    DeviceRegProp = -1073741808;
    goto LABEL_57;
  }
LABEL_47:
  DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, v7);
  v9 = v17;
  if ( DeviceRegProp < 0 )
    goto LABEL_52;
  v29 = v17;
  DeviceRegProp = PnpQueueQueryAndRemoveEvent(
                    (unsigned int)&DestinationString,
                    (unsigned int)&v30,
                    (_DWORD)v10,
                    (unsigned int)&v29,
                    v8,
                    0);
  if ( DeviceRegProp != -2147483608 )
    goto LABEL_57;
  v24 = v29;
  if ( v10 )
    v10[((unsigned __int64)v17 >> 1) - 1] = 0;
LABEL_54:
  if ( v24 <= v9 )
  {
    v25 = PiCMReturnBufferResultData(0x80000028, v29, v30, v10, v24, v40, a3, a4, a6);
    goto LABEL_58;
  }
LABEL_57:
  v25 = PiCMReturnBufferResultData(DeviceRegProp, v29, v30, 0LL, 0, v40, a3, a4, a6);
LABEL_58:
  v12 = v25;
  if ( v10 )
    ExFreePoolWithTag(v10, 0x34706E50u);
LABEL_60:
  if ( (byte_140C0E10B & 4) != 0 )
    McTemplateK0z_EtwWriteTransfer(v11, (const EVENT_DESCRIPTOR *)KMPnPEvt_CfgMgr_QueryRemove_Stop, v13, v7);
  PiCMReleaseObjectInputData((__int64)&v38);
  return (unsigned int)v12;
}
