/*
 * XREFs of HUBREG_DeleteUxdSubKeys @ 0x1C0087990
 * Callers:
 *     HUBREG_UxdShutdown @ 0x1C0087BB0 (HUBREG_UxdShutdown.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0044FC0 (memset.c)
 */

__int64 __fastcall HUBREG_DeleteUxdSubKeys(__int64 a1, __int64 a2, __int64 a3)
{
  void *v6; // r15
  __int64 Pool2; // rbx
  ULONG v8; // edi
  ULONG v9; // esi
  ULONG ResultLength; // [rsp+40h] [rbp-A8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-A0h] BYREF
  _DWORD v13[20]; // [rsp+60h] [rbp-88h] BYREF

  memset(v13, 0, 0x44uLL);
  ResultLength = 0;
  DestinationString = 0LL;
  v6 = (void *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1856))(
                 WdfDriverGlobals,
                 a3);
  Pool2 = ExAllocatePool2(64LL, 42LL, 1748191317LL);
  if ( Pool2 )
  {
    v8 = 0;
    while ( 1 )
    {
      *(_OWORD *)Pool2 = 0LL;
      *(_OWORD *)(Pool2 + 16) = 0LL;
      *(_QWORD *)(Pool2 + 32) = 0LL;
      *(_WORD *)(Pool2 + 40) = 0;
      v9 = v8;
      if ( ZwEnumerateValueKey(v6, v8, KeyValueBasicInformation, (PVOID)Pool2, 0x2Au, &ResultLength) < 0 )
        break;
      ++v8;
      if ( *(_DWORD *)(Pool2 + 4) == 3 )
      {
        *(_WORD *)(Pool2 + 36) = 0;
        RtlInitUnicodeString(&DestinationString, (PCWSTR)(Pool2 + 12));
        memset(v13, 0, 0x44uLL);
        if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, _DWORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
               WdfDriverGlobals,
               a3,
               &DestinationString,
               68LL,
               v13,
               0LL,
               0LL) < 0 )
          break;
        if ( v13[9] == 1 || (*(_DWORD *)(a2 + 4) & 0x100) != 0 )
        {
          if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 1872))(
                 WdfDriverGlobals,
                 a3,
                 &DestinationString) < 0 )
            break;
          v8 = v9;
        }
      }
    }
    ExFreePoolWithTag((PVOID)Pool2, 0x68334855u);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, 3u, 0x71u, (__int64)&WPP_7a0afab5c79d3741c23ff4ee70090e0b_Traceguids);
  }
  return 0LL;
}
