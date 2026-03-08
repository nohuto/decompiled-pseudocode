/*
 * XREFs of NtUserDisplayConfigSetDeviceInfo @ 0x1C016E700
 * Callers:
 *     <none>
 * Callees:
 *     CheckAccessEx @ 0x1C0016FB0 (CheckAccessEx.c)
 *     _DeviceInfoTranslateStatusDefault @ 0x1C00221BC (_DeviceInfoTranslateStatusDefault.c)
 *     UserIsWddmConnectedSession @ 0x1C0022420 (UserIsWddmConnectedSession.c)
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C004FB50 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0068568 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     ?GetSetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1C0169004 (-GetSetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C0193490 (DrvDisplayConfigSetDeviceInfo.c)
 */

__int64 __fastcall NtUserDisplayConfigSetDeviceInfo(unsigned int *Src)
{
  _DWORD *QuotaZInit; // rsi
  __int64 v3; // rcx
  struct tagTHREADINFO *v4; // rax
  unsigned int *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 CurrentProcessWin32Process; // rax
  char v10; // al
  __int64 *v11; // rbx
  unsigned int v12; // ebx
  int v13; // eax
  size_t v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 CurrentProcess; // rax
  int SetterTypeSize; // eax
  unsigned int v21; // eax
  unsigned int v23[4]; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v24; // [rsp+50h] [rbp-98h] BYREF
  __int64 v25; // [rsp+60h] [rbp-88h]
  _QWORD v26[10]; // [rsp+70h] [rbp-78h] BYREF

  memset(v26, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v26[1]);
  v26[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v26[3]) = 30;
  LOBYTE(v26[6]) = -1;
  QuotaZInit = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v23[0] = 0x2000;
  v23[1] = -1;
  LOBYTE(v3) = 1;
  v4 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(v3);
  gptiCurrent = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    v5 = (unsigned int *)CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v6 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v5 = (unsigned int *)(v6 & CurrentProcessWin32Process);
    }
    if ( v5 && (v5[3] & 0x8000) != 0 )
    {
      v6 = (__int64)gptiCurrent;
      if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0 || (v10 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
        v10 = 0;
      if ( v10 )
      {
        while ( 1 )
        {
          v11 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          v11[2] = 0LL;
          if ( !*(_DWORD *)(*v11 + 8) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
          HMUnlockObject(*v11);
        }
      }
    }
  }
  if ( !gbVideoInitialized )
  {
LABEL_16:
    v12 = -1073741823;
    goto LABEL_52;
  }
  v5 = (unsigned int *)((char *)gptiCurrent + 424);
  if ( (*((_DWORD *)gptiCurrent + 122) & 0x20000000) != 0 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)v5 + 760LL);
    v13 = *(_DWORD *)(v6 + 24) & 0x10;
  }
  else
  {
    v13 = 0;
  }
  if ( v13 || !CheckAccessEx((int *)(*(_QWORD *)v5 + 864LL), v23, 0LL) )
    goto LABEL_51;
  v5 = Src + 1;
  v6 = MmUserProbeAddress;
  if ( (unsigned __int64)(Src + 1) >= MmUserProbeAddress )
    v5 = (unsigned int *)MmUserProbeAddress;
  v14 = *v5;
  if ( *v5 < 0x14 )
  {
    v12 = -1073741789;
    QuotaZInit = 0LL;
    goto LABEL_52;
  }
  QuotaZInit = (_DWORD *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                           (NSInstrumentation::CLeakTrackingAllocator *)MmUserProbeAddress,
                           (unsigned __int64)v5,
                           *v5,
                           0x63447355u);
  if ( !QuotaZInit )
    ExRaiseStatus(-1073741801);
  if ( qword_1C02D65C8 )
    qword_1C02D65C8(QuotaZInit, &v24, Win32FreePool);
  if ( ((unsigned __int8)Src & (PsGetCurrentProcessWow64Process(v16, v15, v17, v18) == 0 ? 3 : 0)) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)Src + v14 > MmUserProbeAddress || (unsigned int *)((char *)Src + v14) < Src )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(QuotaZInit, Src, v14);
  QuotaZInit[1] = v14;
  if ( HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) )
    goto LABEL_16;
  if ( *QuotaZInit != -19 )
  {
    if ( (unsigned int)UserIsWddmConnectedSession() )
      goto LABEL_43;
LABEL_51:
    v12 = -1073741790;
    goto LABEL_52;
  }
  if ( !gbOSTestSigningEnabled )
  {
    if ( !(unsigned __int8)RtlIsMultiSessionSku(v6) )
      goto LABEL_51;
    CurrentProcess = PsGetCurrentProcess(v6, v5, v7, v8);
    v6 = 0LL;
    if ( CurrentProcess )
      v6 = CurrentProcess == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
    if ( !(_DWORD)v6 )
      goto LABEL_51;
  }
LABEL_43:
  SetterTypeSize = DispConfigTypes::GetSetterTypeSize(*QuotaZInit);
  if ( SetterTypeSize && QuotaZInit[1] == SetterTypeSize )
  {
    v21 = DrvDisplayConfigSetDeviceInfo(QuotaZInit, v26);
    v12 = v21;
    if ( v21 == -2147483643 )
    {
      v12 = -1073741789;
    }
    else if ( v21 != -1073741789 )
    {
      v12 = DeviceInfoTranslateStatusDefault(*QuotaZInit, v21);
    }
  }
  else
  {
    v12 = -1073741811;
  }
LABEL_52:
  if ( QuotaZInit && qword_1C02D66D0 )
    qword_1C02D66D0(&v24);
  UserSessionSwitchLeaveCrit(v6, (__int64)v5, v7, v8);
  return v12;
}
