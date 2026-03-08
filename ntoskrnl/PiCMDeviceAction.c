/*
 * XREFs of PiCMDeviceAction @ 0x14096671C
 * Callers:
 *     PiCMHandleIoctl @ 0x1406CF040 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     PiAuDoesClientHaveAccess @ 0x1406C4454 (PiAuDoesClientHaveAccess.c)
 *     PiCMReleaseObjectInputData @ 0x1406C7AC0 (PiCMReleaseObjectInputData.c)
 *     PiCMReturnBasicResultData @ 0x1406C7AF0 (PiCMReturnBasicResultData.c)
 *     PiCMCaptureObjectInputData @ 0x1406C7B6C (PiCMCaptureObjectInputData.c)
 *     _CmIsRootDevice @ 0x1406C7E80 (_CmIsRootDevice.c)
 *     _CmGetDeviceStatus @ 0x1406C8624 (_CmGetDeviceStatus.c)
 *     _CmValidateDeviceName @ 0x1406D3DF0 (_CmValidateDeviceName.c)
 *     PiAuDoesClientHavePrivilege @ 0x140958948 (PiAuDoesClientHavePrivilege.c)
 *     PiCMSetProblem @ 0x140967AB4 (PiCMSetProblem.c)
 *     PiQueueDeviceRequest @ 0x14096AF78 (PiQueueDeviceRequest.c)
 */

__int64 __fastcall PiCMDeviceAction(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  unsigned int v6; // esi
  int inited; // ebx
  const WCHAR *v9; // r13
  int v10; // r12d
  int v11; // r14d
  int v12; // r12d
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // r14d
  int v16; // r14d
  int v17; // r14d
  __int64 v18; // rdx
  unsigned int v20; // [rsp+38h] [rbp-49h]
  int v21; // [rsp+4Ch] [rbp-35h] BYREF
  int v22; // [rsp+50h] [rbp-31h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-29h] BYREF
  int v24; // [rsp+68h] [rbp-19h] BYREF
  int v25; // [rsp+6Ch] [rbp-15h] BYREF
  __int128 v26; // [rsp+70h] [rbp-11h] BYREF
  PCWSTR SourceString[2]; // [rsp+80h] [rbp-1h]
  __int64 v28; // [rsp+90h] [rbp+Fh]

  v6 = 0;
  v28 = 0LL;
  DestinationString = 0LL;
  v21 = 0;
  *a6 = 0;
  v26 = 0LL;
  v25 = 0;
  *(_OWORD *)SourceString = 0LL;
  v24 = 0;
  v22 = 0;
  inited = PiCMCaptureObjectInputData(a1, a2, a5, (__int64)&v26);
  if ( inited >= 0 )
  {
    v9 = SourceString[0];
    if ( !SourceString[0] || DWORD2(v26) != 1 || !a3 || a4 < 8 )
    {
      inited = -1073741811;
      goto LABEL_53;
    }
    v10 = HIDWORD(SourceString[1]);
    if ( HIDWORD(SourceString[1]) == 1 )
    {
      v11 = DWORD1(v26);
      if ( (unsigned int)(DWORD1(v26) - 1) > 5 )
        goto LABEL_8;
    }
    else
    {
      if ( HIDWORD(SourceString[1]) != 2 )
      {
LABEL_8:
        inited = -1073741811;
        goto LABEL_53;
      }
      v11 = 0;
      v22 = DWORD1(v26);
      if ( (unsigned int)(DWORD1(v26) - 1) > 1 )
        inited = -1073741811;
      if ( inited < 0 )
        goto LABEL_53;
    }
    inited = CmValidateDeviceName((unsigned int)(HIDWORD(SourceString[1]) - 1), SourceString[0]);
    if ( inited < 0 )
      goto LABEL_53;
    v12 = v10 - 1;
    if ( v12 )
    {
      if ( v12 != 1 )
        goto LABEL_8;
      if ( PiAuDoesClientHaveAccess(0x20u) && PiAuDoesClientHavePrivilege(0xAu) )
      {
        inited = RtlInitUnicodeStringEx(&DestinationString, v9);
        if ( inited < 0 )
          goto LABEL_53;
        v13 = 9LL;
        LOBYTE(v6) = v22 != 2;
        v14 = v6;
        goto LABEL_51;
      }
    }
    else if ( v11 == 1 || v11 == 2 )
    {
      if ( PiAuDoesClientHaveAccess(0x20u) && PiAuDoesClientHavePrivilege(0xAu) )
      {
        if ( CmIsRootDevice(v9) )
          goto LABEL_8;
        if ( (int)CmGetDeviceStatus(PiPnpRtlCtx, v9, 0, &v21, &v25, &v24, v20) >= 0 )
        {
          if ( (v21 & 8) != 0 )
            goto LABEL_53;
          if ( (v21 & 0x400) != 0 )
          {
            inited = PiCMSetProblem(v9);
            if ( inited < 0 )
              goto LABEL_53;
          }
        }
        inited = RtlInitUnicodeStringEx(&DestinationString, v9);
        if ( inited < 0 )
          goto LABEL_53;
        v13 = 16LL;
        v14 = 1LL;
        if ( v11 != 1 )
          v13 = 12LL;
LABEL_51:
        inited = PiQueueDeviceRequest(&DestinationString, v13, v14);
        goto LABEL_53;
      }
    }
    else
    {
      if ( v11 != 3 && v11 != 4 && (unsigned int)(v11 - 5) > 1 )
        goto LABEL_8;
      if ( PiAuDoesClientHaveAccess(2u) && PiAuDoesClientHavePrivilege(0xAu) )
      {
        inited = RtlInitUnicodeStringEx(&DestinationString, v9);
        if ( inited >= 0 )
        {
          v15 = v11 - 3;
          if ( v15 )
          {
            v16 = v15 - 1;
            if ( v16 )
            {
              v17 = v16 - 1;
              if ( v17 )
              {
                if ( v17 != 1 )
                {
                  inited = -1073741811;
                  goto LABEL_53;
                }
                v18 = 24LL;
              }
              else
              {
                v18 = 23LL;
              }
            }
            else
            {
              v18 = 22LL;
            }
          }
          else
          {
            v18 = 21LL;
          }
          inited = PiQueueDeviceRequest(&DestinationString, v18, 1LL);
          if ( inited >= 0 )
            inited = 0;
        }
LABEL_53:
        inited = PiCMReturnBasicResultData(inited, v28, a3, a4, a6);
        goto LABEL_54;
      }
    }
    inited = -1073741790;
    goto LABEL_53;
  }
LABEL_54:
  PiCMReleaseObjectInputData((__int64)&v26);
  return (unsigned int)inited;
}
