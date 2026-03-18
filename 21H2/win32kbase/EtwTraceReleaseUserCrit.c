/*
 * XREFs of EtwTraceReleaseUserCrit @ 0x1C0029EE0
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x1C0003160 (NtUserInjectKeyboardInput.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x1C00070A0 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     UserDeleteW32Thread @ 0x1C0019A70 (UserDeleteW32Thread.c)
 *     NtUserReleaseDC @ 0x1C0029480 (NtUserReleaseDC.c)
 *     NtUserGetDC @ 0x1C00295D0 (NtUserGetDC.c)
 *     LeaveCrit @ 0x1C0029B70 (LeaveCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     ChangeAcquireResourceType @ 0x1C00B4B70 (ChangeAcquireResourceType.c)
 *     UserSessionSwitchEnterCrit @ 0x1C00B8A10 (UserSessionSwitchEnterCrit.c)
 *     ?NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x1C015322C (-NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 *     NtUserInitializeGenericHidInjection @ 0x1C015B1B0 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C015BD40 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C015C5F0 (NtUserInitializePointerDeviceInjectionEx.c)
 *     NtUserInjectDeviceInput @ 0x1C015C9F0 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C015D580 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectMouseInput @ 0x1C015DD80 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C015E990 (NtUserInjectPointerInput.c)
 *     NtUserRemoveInjectionDevice @ 0x1C0160100 (NtUserRemoveInjectionDevice.c)
 *     NtUserSetFeatureReportResponse @ 0x1C0161000 (NtUserSetFeatureReportResponse.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0151B44 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

void EtwTraceReleaseUserCrit()
{
  __int64 CurrentThreadWin32Thread; // rdi
  LARGE_INTEGER v1; // rsi
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 *v5; // rax
  __int64 v6; // [rsp+30h] [rbp-98h] BYREF
  __int64 v7; // [rsp+38h] [rbp-90h]
  __int64 v8; // [rsp+40h] [rbp-88h]
  __int64 v9; // [rsp+48h] [rbp-80h]
  __int64 v10; // [rsp+50h] [rbp-78h]
  __int64 v11; // [rsp+58h] [rbp-70h]
  __int64 v12; // [rsp+60h] [rbp-68h]
  __int64 v13; // [rsp+68h] [rbp-60h]
  __int64 v14; // [rsp+70h] [rbp-58h]
  __int64 v15; // [rsp+78h] [rbp-50h]
  __int64 v16; // [rsp+80h] [rbp-48h]
  __int64 v17; // [rsp+88h] [rbp-40h]
  __int64 v18; // [rsp+90h] [rbp-38h]
  __int64 v19; // [rsp+98h] [rbp-30h]
  __int64 v20; // [rsp+A0h] [rbp-28h]

  if ( dword_1C028D6F0 && (unsigned __int8)tlgKeywordOn(&dword_1C028D6F0, 0x400000000000LL)
    || (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
    && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
    || (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x200000010000000LL) != 0
    && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
    {
      v1 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(CurrentThreadWin32Thread + 8));
      if ( (dword_1C0296CC0 & 1) == 0 )
      {
        dword_1C0296CC0 |= 1u;
        memset(qword_1C0296CD0, 0, 0x198uLL);
        qword_1C0296E68 = 0LL;
        qword_1C0296E70 = 0LL;
      }
      v2 = 1000000 * v1.QuadPart;
      v6 = 10LL;
      v7 = 25LL;
      v8 = 50LL;
      v9 = 100LL;
      v10 = 250LL;
      v11 = 500LL;
      v12 = 1000LL;
      v13 = 2500LL;
      v14 = 5000LL;
      v15 = 10000LL;
      v16 = 25000LL;
      v17 = 50000LL;
      v18 = 100000LL;
      v19 = 200000LL;
      v20 = -1LL;
      if ( gliQpcFreq.QuadPart == 10000000 )
        v3 = v2 / 0x989680;
      else
        v3 = v2 / gliQpcFreq.QuadPart;
      v4 = 0LL;
      v5 = &v6;
      while ( v3 > *v5 )
      {
        v4 = (unsigned int)(v4 + 1);
        ++v5;
        if ( (unsigned int)v4 >= 0xF )
          goto LABEL_14;
      }
      _InterlockedIncrement64(&qword_1C0296CD0[v4 + 30]);
LABEL_14:
      _InterlockedExchangeAdd64((volatile signed __int64 *)&xmmword_1C0296E48, v3);
      _InterlockedIncrement64((_QWORD *)&xmmword_1C0296E58 + 1);
      if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
        && (qword_1C028DB20 & 0x200000010000000LL) != 0
        && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        McTemplateK0xqx_EtwWriteTransfer(
          v4,
          (unsigned int)&ReleaseUserCritEvent,
          v2,
          v1.LowPart,
          0,
          *(_QWORD *)(CurrentThreadWin32Thread + 16),
          v6,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20);
      }
    }
  }
}
