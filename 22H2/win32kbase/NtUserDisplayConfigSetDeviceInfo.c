/*
 * XREFs of NtUserDisplayConfigSetDeviceInfo @ 0x1C0143890
 * Callers:
 *     <none>
 * Callees:
 *     _DeviceInfoTranslateStatusDefault @ 0x1C001ED8C (_DeviceInfoTranslateStatusDefault.c)
 *     UserIsWddmConnectedSession @ 0x1C001EFF0 (UserIsWddmConnectedSession.c)
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FB14 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     CheckAccessEx @ 0x1C0091E70 (CheckAccessEx.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     memmove @ 0x1C00D6F40 (memmove.c)
 *     ?GetSetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1C0140374 (-GetSetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C0166700 (DrvDisplayConfigSetDeviceInfo.c)
 */

__int64 __fastcall NtUserDisplayConfigSetDeviceInfo(unsigned int *Src)
{
  _DWORD *QuotaZInit; // rsi
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  struct tagTHREADINFO *v7; // rax
  unsigned int *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 CurrentProcessWin32Process; // rax
  char v13; // al
  __int64 *v14; // rbx
  unsigned int v15; // ebx
  int v16; // eax
  size_t v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 CurrentProcess; // rax
  int SetterTypeSize; // eax
  unsigned int v23; // eax
  unsigned int v25[4]; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v26; // [rsp+50h] [rbp-98h] BYREF
  __int64 v27; // [rsp+60h] [rbp-88h]
  _QWORD v28[10]; // [rsp+70h] [rbp-78h] BYREF

  memset(v28, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v28[1]);
  v28[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v28[3]) = 30;
  LOBYTE(v28[6]) = -1;
  QuotaZInit = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v25[0] = 0x2000;
  v25[1] = -1;
  LOBYTE(v3) = 1;
  v7 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(v3, v4, v5, v6);
  gptiCurrent = v7;
  if ( v7 )
  {
    *((_DWORD *)v7 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
    v8 = (unsigned int *)CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v9 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v8 = (unsigned int *)(v9 & CurrentProcessWin32Process);
    }
    if ( v8 && (v8[3] & 0x8000) != 0 )
    {
      v9 = (__int64)gptiCurrent;
      if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0 || (v13 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
        v13 = 0;
      if ( v13 )
      {
        while ( 1 )
        {
          v14 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          v14[2] = 0LL;
          if ( !*(_DWORD *)(*v14 + 8) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
          HMUnlockObject(*v14);
        }
      }
    }
  }
  if ( !gbVideoInitialized )
  {
LABEL_16:
    v15 = -1073741823;
    goto LABEL_52;
  }
  v8 = (unsigned int *)((char *)gptiCurrent + 424);
  if ( (*((_DWORD *)gptiCurrent + 122) & 0x20000000) != 0 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)v8 + 760LL);
    v16 = *(_DWORD *)(v9 + 24) & 0x10;
  }
  else
  {
    v16 = 0;
  }
  if ( v16 || !CheckAccessEx((int *)(*(_QWORD *)v8 + 888LL), v25, 0LL) )
    goto LABEL_51;
  v8 = Src + 1;
  v9 = MmUserProbeAddress;
  if ( (unsigned __int64)(Src + 1) >= MmUserProbeAddress )
    v8 = (unsigned int *)MmUserProbeAddress;
  v17 = *v8;
  if ( *v8 < 0x14 )
  {
    v15 = -1073741789;
    QuotaZInit = 0LL;
    goto LABEL_52;
  }
  QuotaZInit = (_DWORD *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                           (NSInstrumentation::CLeakTrackingAllocator *)MmUserProbeAddress,
                           (unsigned __int64)v8,
                           *v8,
                           0x63447355u);
  if ( !QuotaZInit )
    ExRaiseStatus(-1073741801);
  if ( qword_1C0295450 )
    qword_1C0295450(QuotaZInit, &v26, Win32FreePool);
  if ( ((unsigned __int8)Src & (PsGetCurrentProcessWow64Process(v19, v18, v20) == 0 ? 3 : 0)) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)Src + v17 > MmUserProbeAddress || (unsigned int *)((char *)Src + v17) < Src )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(QuotaZInit, Src, v17);
  QuotaZInit[1] = v17;
  if ( HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) )
    goto LABEL_16;
  if ( *QuotaZInit != -19 )
  {
    if ( (unsigned int)UserIsWddmConnectedSession() )
      goto LABEL_43;
LABEL_51:
    v15 = -1073741790;
    goto LABEL_52;
  }
  if ( !gbOSTestSigningEnabled )
  {
    if ( !(unsigned __int8)RtlIsMultiSessionSku(v9) )
      goto LABEL_51;
    CurrentProcess = PsGetCurrentProcess(v9, v8, v10);
    v9 = 0LL;
    if ( CurrentProcess )
      v9 = CurrentProcess == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
    if ( !(_DWORD)v9 )
      goto LABEL_51;
  }
LABEL_43:
  SetterTypeSize = DispConfigTypes::GetSetterTypeSize(*QuotaZInit);
  if ( SetterTypeSize && QuotaZInit[1] == SetterTypeSize )
  {
    v23 = DrvDisplayConfigSetDeviceInfo(QuotaZInit, v28);
    v15 = v23;
    if ( v23 == -2147483643 )
    {
      v15 = -1073741789;
    }
    else if ( v23 != -1073741789 )
    {
      v15 = DeviceInfoTranslateStatusDefault(*QuotaZInit, v23);
    }
  }
  else
  {
    v15 = -1073741811;
  }
LABEL_52:
  if ( QuotaZInit && qword_1C0295558 )
    qword_1C0295558(&v26);
  UserSessionSwitchLeaveCrit(v9, (__int64)v8, v10, v11);
  return v15;
}
