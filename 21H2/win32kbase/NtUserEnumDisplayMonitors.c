/*
 * XREFs of NtUserEnumDisplayMonitors @ 0x1C006E560
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C00293AC (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C0029AC4 (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ShouldRunShared @ 0x1C0038570 (ShouldRunShared.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     xxxEnumDisplayMonitors @ 0x1C006E680 (xxxEnumDisplayMonitors.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$03@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C0071E9C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserEnumDisplayMonitors(HDC a1, __int128 *a2)
{
  __int128 *v2; // rdi
  int v4; // ecx
  int v5; // r8d
  __int64 v6; // rdx
  struct tagTHREADINFO *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct tagTHREADINFO *v16; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v19; // rcx
  struct tagKERNELHANDLETABLEENTRY *v20; // rbx
  BOOL v21; // [rsp+30h] [rbp-78h] BYREF
  BOOL v22; // [rsp+34h] [rbp-74h] BYREF
  __int64 v23; // [rsp+48h] [rbp-60h] BYREF
  __int128 *v24; // [rsp+50h] [rbp-58h]
  __int128 v25; // [rsp+60h] [rbp-48h] BYREF

  v2 = a2;
  v25 = 0LL;
  v24 = a2;
  if ( (unsigned int)dword_1C028D6F0 > 5 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL) )
  {
    v23 = 1LL;
    v21 = v2 != 0LL;
    v22 = a1 != 0LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v4,
      (unsigned int)&unk_1C025B433,
      v5,
      (unsigned int)&v22,
      (__int64)&v21,
      (__int64)&v23);
  }
  if ( ShouldRunShared(8) )
  {
    PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal();
  }
  else
  {
    v16 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(1);
    gptiCurrent = v16;
    if ( v16 )
    {
      *((_DWORD *)v16 + 377) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7, v6, v8, v9);
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
        {
          v7 = gptiCurrent;
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v20 = gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              *((_QWORD *)v20 + 2) = 0LL;
              v19 = *(_QWORD *)v20;
              if ( !*(_DWORD *)(*(_QWORD *)v20 + 8LL) )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v6, v8);
                v19 = *(_QWORD *)v20;
              }
              HMUnlockObject(v19);
            }
          }
        }
      }
    }
  }
  if ( gbVideoInitialized )
  {
    if ( v2 )
    {
      if ( (unsigned __int64)v2 >= MmUserProbeAddress )
        v2 = (__int128 *)MmUserProbeAddress;
      v25 = *v2;
      v24 = &v25;
    }
    v10 = (int)xxxEnumDisplayMonitors(a1, 0);
    UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
    return v10;
  }
  else
  {
    UserSessionSwitchLeaveCrit((__int64)v7, v6, v8, v9);
    return 0LL;
  }
}
