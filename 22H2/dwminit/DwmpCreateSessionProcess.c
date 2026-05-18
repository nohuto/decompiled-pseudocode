/*
 * XREFs of DwmpCreateSessionProcess @ 0x180003360
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$01@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$01@@6@Z @ 0x1800011F0 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$00@@U1@U-$_.c)
 *     ?IsRunningInWininit@@YA_NXZ @ 0x1800016EC (-IsRunningInWininit@@YA_NXZ.c)
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002E80 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 *     ?OneCoreSkipDwmLaunch@@YA_NXZ @ 0x1800032E4 (-OneCoreSkipDwmLaunch@@YA_NXZ.c)
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x180003BD0 (-DoStackCaptureDirect@@YAXJI@Z.c)
 */

__int64 __fastcall DwmpCreateSessionProcess(PVOID Parameter)
{
  unsigned __int64 v1; // r14
  signed int v2; // ebx
  HANDLE Thread; // rdi
  signed int LastError; // eax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v9; // [rsp+60h] [rbp-20h] BYREF
  signed int v10; // [rsp+64h] [rbp-1Ch] BYREF
  GUID *v11; // [rsp+68h] [rbp-18h] BYREF
  GUID *v12; // [rsp+70h] [rbp-10h] BYREF
  bool v13; // [rsp+B8h] [rbp+38h] BYREF
  unsigned __int16 v14; // [rsp+C0h] [rbp+40h] BYREF
  unsigned __int16 v15; // [rsp+C8h] [rbp+48h] BYREF

  v1 = (unsigned int)Parameter;
  v2 = 0;
  Thread = 0LL;
  if ( OneCoreSkipDwmLaunch() )
  {
    v2 = 1;
  }
  else if ( gDwmFirstLaunch )
  {
    SetLastError(0);
    Thread = CreateThread(
               0LL,
               0LL,
               (LPTHREAD_START_ROUTINE)DwmpCreateSessionProcessWorker,
               (LPVOID)(unsigned int)v1,
               0,
               0LL);
    if ( !Thread )
    {
      LastError = GetLastError();
      v2 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v2 = LastError;
      if ( v2 >= 0 )
        v2 = -2003304445;
      DoStackCaptureDirect(v2, 0x5CEu);
    }
  }
  else
  {
    DwmpCreateSessionProcessWorker((PVOID)v1);
  }
  if ( (unsigned int)dword_18000B000 > 5
    && (qword_18000B010 & 0x400000000000LL) != 0
    && (qword_18000B018 & 0x400000000000LL) == qword_18000B018 )
  {
    v14 = gSessionId;
    v15 = gBootId;
    v11 = &gDwmInitTargetAppSessionGuid;
    v13 = IsRunningInWininit();
    v9 = v1;
    v12 = &gDwmInitTelemetryActivityId;
    v10 = v2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>>(
      v5,
      byte_18000837E,
      v6,
      v7,
      (__int64 *)&v12,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v13,
      (__int64 *)&v11,
      (__int64)&v15,
      (__int64)&v14);
  }
  if ( Thread )
    CloseHandle(Thread);
  return (unsigned int)v2;
}
