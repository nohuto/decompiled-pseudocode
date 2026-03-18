/*
 * XREFs of NtUserDisplayConfigSetDeviceInfo @ 0x1C01580E0
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C00293AC (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     CheckAccessEx @ 0x1C002FB20 (CheckAccessEx.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     _DeviceInfoTranslateStatusDefault @ 0x1C00705AC (_DeviceInfoTranslateStatusDefault.c)
 *     UserIsWddmConnectedSession @ 0x1C0071CE0 (UserIsWddmConnectedSession.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ?GetSetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1C01530F0 (-GetSetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C0173980 (DrvDisplayConfigSetDeviceInfo.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserDisplayConfigSetDeviceInfo(char *Src)
{
  __int64 Pool2; // rbx
  unsigned int v3; // edi
  struct tagTHREADINFO *v4; // rax
  __int64 v5; // rdx
  struct tagTHREADINFO *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rcx
  struct tagKERNELHANDLETABLEENTRY *v12; // rsi
  int v13; // eax
  unsigned int v14; // eax
  size_t v15; // r12
  PVOID v16; // rsi
  size_t v17; // rdx
  unsigned __int64 i; // rcx
  char v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // edi
  PVOID CurrentProcess; // rax
  int SetterTypeSize; // eax
  unsigned int v26; // eax
  _DWORD v28[6]; // [rsp+30h] [rbp-1B8h] BYREF
  __int64 v29; // [rsp+48h] [rbp-1A0h]
  int v30[4]; // [rsp+50h] [rbp-198h] BYREF
  __int128 v31; // [rsp+60h] [rbp-188h]
  __int64 v32; // [rsp+78h] [rbp-170h] BYREF
  size_t v33; // [rsp+80h] [rbp-168h]
  unsigned __int64 v34; // [rsp+88h] [rbp-160h]
  __int128 v35; // [rsp+90h] [rbp-158h]
  __int128 v36; // [rsp+A0h] [rbp-148h] BYREF
  __int64 v37; // [rsp+B0h] [rbp-138h]
  PVOID BackTrace[20]; // [rsp+C0h] [rbp-128h] BYREF
  _QWORD v39[10]; // [rsp+160h] [rbp-88h] BYREF

  memset(v39, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v39[1]);
  v39[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v39[3]) = 30;
  LOBYTE(v39[6]) = -1;
  Pool2 = 0LL;
  v29 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v30[0] = 0x2000;
  v30[1] = -1;
  v3 = -1073741823;
  v28[4] = -1073741823;
  v4 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(1);
  gptiCurrent = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 377) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    if ( CurrentProcessWin32Process )
    {
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        v6 = gptiCurrent;
        if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v12 = gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                         + 2);
            *((_QWORD *)v12 + 2) = 0LL;
            v11 = *(_QWORD *)v12;
            if ( !*(_DWORD *)(*(_QWORD *)v12 + 8LL) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v5, v7);
              v11 = *(_QWORD *)v12;
            }
            HMUnlockObject(v11);
          }
        }
      }
    }
  }
  if ( !gbVideoInitialized )
    goto LABEL_68;
  v5 = (__int64)gptiCurrent;
  if ( (*((_DWORD *)gptiCurrent + 122) & 0x20000000) != 0 )
  {
    v6 = *(struct tagTHREADINFO **)(*((_QWORD *)gptiCurrent + 53) + 768LL);
    v13 = *((_DWORD *)v6 + 6) & 0x10;
  }
  else
  {
    v13 = 0;
  }
  if ( v13 || !CheckAccessEx((int *)(*((_QWORD *)gptiCurrent + 53) + 880LL), v30, 0) )
    goto LABEL_67;
  v5 = (__int64)(Src + 4);
  v6 = (struct tagTHREADINFO *)MmUserProbeAddress;
  if ( (unsigned __int64)(Src + 4) >= MmUserProbeAddress )
    v5 = MmUserProbeAddress;
  v14 = *(_DWORD *)v5;
  v15 = *(unsigned int *)v5;
  if ( *(_DWORD *)v5 < 0x14u )
  {
    v3 = -1073741789;
    v28[5] = -1073741789;
    Pool2 = v29;
    goto LABEL_68;
  }
  v28[0] = 1665430357;
  v32 = 260LL;
  v16 = gpLeakTrackingAllocator;
  *(_QWORD *)&v35 = &v32;
  *((_QWORD *)&v35 + 1) = v28;
  v31 = v35;
  v17 = v14;
  v33 = v14;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x63447355) == 0x63447355 )
  {
    for ( i = 0LL; ; ++i )
    {
      v34 = i;
      if ( i >= *((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_41;
      if ( *((_DWORD *)gpLeakTrackingAllocator + i) == 1665430357 )
        break;
    }
    v19 = 0;
    if ( v15 < 0x1000 || (v15 & 0xFFF) != 0 )
    {
      v19 = 1;
      v17 = v15 + 16;
      v33 = v15 + 16;
    }
    Pool2 = ExAllocatePool2(*(_QWORD *)v31 & 0xFFFFFFFFFFFFFFFCuLL | 1, v17);
    if ( !Pool2 )
    {
LABEL_32:
      Pool2 = 0LL;
      goto LABEL_42;
    }
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( v19 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v16,
                              Pool2,
                              BackTrace) )
      {
        Pool2 += 16LL;
        goto LABEL_42;
      }
LABEL_39:
      ExFreePoolWithTag((PVOID)Pool2, 0);
      goto LABEL_32;
    }
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                             v16,
                             Pool2,
                             BackTrace) )
      goto LABEL_39;
  }
  else
  {
LABEL_41:
    Pool2 = ExAllocatePool2(*(_QWORD *)v31 & 0xFFFFFFFFFFFFFFFCuLL | 1, v14);
  }
LABEL_42:
  v29 = Pool2;
  if ( !Pool2 )
    ExRaiseStatus(-1073741801);
  if ( qword_1C029BD10 )
    qword_1C029BD10(Pool2, &v36, Win32FreePool);
  if ( ((PsGetCurrentProcessWow64Process(v21, v20, v22) == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)&Src[v15] > MmUserProbeAddress || &Src[v15] < Src )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove((void *)Pool2, Src, v15);
  *(_DWORD *)(Pool2 + 4) = v15;
  if ( !gfSwitchInProgress )
  {
    v23 = *(_DWORD *)Pool2;
    if ( *(_DWORD *)Pool2 == -19 )
    {
      if ( gbOSTestSigningEnabled )
        goto LABEL_57;
      if ( (unsigned __int8)RtlIsMultiSessionSku(v6, v5, v7) )
      {
        CurrentProcess = (PVOID)PsGetCurrentProcess(v6, v5, v7, v8);
        v5 = 0LL;
        if ( CurrentProcess )
          v5 = CurrentProcess == g_pepDwm;
        if ( (_DWORD)v5 )
        {
LABEL_57:
          v23 = *(_DWORD *)Pool2;
LABEL_59:
          SetterTypeSize = DispConfigTypes::GetSetterTypeSize(v23);
          if ( SetterTypeSize && *(_DWORD *)(Pool2 + 4) == SetterTypeSize )
          {
            v26 = DrvDisplayConfigSetDeviceInfo(Pool2, v39);
            v3 = v26;
            if ( v26 == -2147483643 )
            {
              v3 = -1073741789;
            }
            else if ( v26 != -1073741789 )
            {
              v3 = DeviceInfoTranslateStatusDefault(*(_DWORD *)Pool2, v26);
            }
          }
          else
          {
            v3 = -1073741811;
          }
          goto LABEL_68;
        }
      }
    }
    else if ( (unsigned int)UserIsWddmConnectedSession() )
    {
      goto LABEL_59;
    }
LABEL_67:
    v3 = -1073741790;
  }
LABEL_68:
  if ( Pool2 && qword_1C029BE28 )
    qword_1C029BE28(&v36);
  UserSessionSwitchLeaveCrit((__int64)v6, v5, v7, v8);
  return v3;
}
