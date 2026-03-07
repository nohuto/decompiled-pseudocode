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
