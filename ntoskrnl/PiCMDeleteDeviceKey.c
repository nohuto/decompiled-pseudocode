/*
 * XREFs of PiCMDeleteDeviceKey @ 0x140966320
 * Callers:
 *     PiCMHandleIoctl @ 0x1406CF040 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     PiAuDoesClientHaveAccess @ 0x1406C4454 (PiAuDoesClientHaveAccess.c)
 *     PiCMReleaseObjectInputData @ 0x1406C7AC0 (PiCMReleaseObjectInputData.c)
 *     PiCMReturnBasicResultData @ 0x1406C7AF0 (PiCMReturnBasicResultData.c)
 *     PiCMCaptureObjectInputData @ 0x1406C7B6C (PiCMCaptureObjectInputData.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1406D3680 (_PnpCtxGetCachedContextBaseKey.c)
 *     _SysCtxRegOpenKey @ 0x1406D4350 (_SysCtxRegOpenKey.c)
 *     RtlUnicodeStringToInteger @ 0x140751D60 (RtlUnicodeStringToInteger.c)
 *     PiCMConvertDeviceKeyType @ 0x14076C950 (PiCMConvertDeviceKeyType.c)
 *     _RegRtlEnumKey @ 0x140868D44 (_RegRtlEnumKey.c)
 *     _CmDeleteDeviceRegKey @ 0x140A5F12C (_CmDeleteDeviceRegKey.c)
 */

__int64 __fastcall PiCMDeleteDeviceKey(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  _DWORD *v6; // rdi
  int v9; // ebx
  int v10; // ebx
  __int16 v11; // r11
  __int64 v12; // rcx
  ULONG v13; // edi
  ULONG v14; // r15d
  int inited; // esi
  int v17; // [rsp+30h] [rbp-59h] BYREF
  ULONG Value[3]; // [rsp+34h] [rbp-55h] BYREF
  _DWORD *v19; // [rsp+40h] [rbp-49h]
  HANDLE Handle; // [rsp+48h] [rbp-41h] BYREF
  __int128 v21; // [rsp+50h] [rbp-39h] BYREF
  __int128 v22; // [rsp+60h] [rbp-29h]
  __int64 v23; // [rsp+70h] [rbp-19h]
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-11h] BYREF
  WCHAR SourceString[8]; // [rsp+88h] [rbp-1h] BYREF

  v6 = a6;
  Handle = 0LL;
  memset(Value, 0, sizeof(Value));
  *a6 = 0;
  v17 = 0;
  v19 = a6;
  v21 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  DestinationString = 0LL;
  v9 = PiCMCaptureObjectInputData(a1, a2, a5, (__int64)&v21);
  if ( v9 >= 0 )
  {
    if ( PiAuDoesClientHaveAccess(2u) )
    {
      if ( (_QWORD)v22 && DWORD2(v21) == 1 && a3 && a4 >= 8 )
      {
        v10 = PiCMConvertDeviceKeyType(SWORD2(v21), &v17);
        if ( v10 >= 0 )
        {
          if ( (v11 & 0xFF00) == 0x200 && HIDWORD(v22) == -1 )
          {
            if ( (int)PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 4, (__int64)&Value[1]) >= 0 )
            {
              if ( *(_QWORD *)&PiPnpRtlCtx )
                v12 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
              else
                v12 = 0LL;
              v13 = 0;
              if ( (int)SysCtxRegOpenKey(
                          v12,
                          *(__int64 *)&Value[1],
                          (__int64)L"Control\\IDConfigDB\\Hardware Profiles",
                          0,
                          8u,
                          (__int64)&Handle) >= 0 )
              {
                do
                {
                  v14 = v13;
                  if ( v10 < 0 )
                    break;
                  while ( 1 )
                  {
                    Value[1] = 5;
                    inited = RegRtlEnumKey(Handle, v13, (char *)SourceString, &Value[1]);
                    if ( inited < 0 )
                      break;
                    inited = RtlInitUnicodeStringEx(&DestinationString, SourceString);
                    if ( inited < 0 )
                      break;
                    inited = RtlUnicodeStringToInteger(&DestinationString, 0, Value);
                    if ( inited < 0 )
                      break;
                    v10 = CmDeleteDeviceRegKey(PiPnpRtlCtx);
                    if ( v10 != -1073741772 )
                      break;
                    v13 = v14 + 1;
                    v10 = 0;
                    ++v14;
                  }
                  ++v13;
                }
                while ( inited >= 0 );
              }
              v6 = v19;
            }
          }
          else
          {
            v10 = CmDeleteDeviceRegKey(PiPnpRtlCtx);
          }
        }
      }
      else
      {
        v10 = -1073741811;
      }
    }
    else
    {
      v10 = -1073741790;
    }
    if ( Handle )
      ZwClose(Handle);
    v9 = PiCMReturnBasicResultData(v10, v23, a3, a4, v6);
  }
  PiCMReleaseObjectInputData((__int64)&v21);
  return (unsigned int)v9;
}
