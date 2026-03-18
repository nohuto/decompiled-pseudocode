/*
 * XREFs of NtUserSetDisplayConfig @ 0x1C0160660
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C00293AC (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     CheckAccessEx @ 0x1C002FB20 (CheckAccessEx.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     xxxUserSetDisplayConfig @ 0x1C005C190 (xxxUserSetDisplayConfig.c)
 *     LogDiagSDC @ 0x1C005C5BC (LogDiagSDC.c)
 *     _QdcSdcTranslateStatusDefault @ 0x1C00705D8 (_QdcSdcTranslateStatusDefault.c)
 *     UserIsWddmConnectedSession @ 0x1C0071CE0 (UserIsWddmConnectedSession.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     DrvIsDisplayStateCurrent @ 0x1C0174768 (DrvIsDisplayStateCurrent.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserSetDisplayConfig(
        unsigned int a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        __int64 a5)
{
  unsigned int v6; // r14d
  unsigned __int64 v7; // r12
  __int64 v8; // r15
  signed int v9; // edi
  struct tagTHREADINFO *v10; // rax
  struct tagTHREADINFO *v11; // rcx
  __int64 v12; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  char v16; // al
  __int64 v17; // rcx
  struct tagKERNELHANDLETABLEENTRY *v18; // rsi
  unsigned int v19; // esi
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rdx
  int v23; // eax
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v24; // r8
  unsigned int v25; // r15d
  __int64 v26; // rsi
  unsigned int v27; // r14d
  unsigned int v28; // eax
  PVOID v29; // r12
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  __int64 Pool2; // rsi
  int v33; // eax
  int v34; // eax
  char v37; // [rsp+64h] [rbp-224h]
  __int64 v38; // [rsp+68h] [rbp-220h]
  unsigned int v40; // [rsp+84h] [rbp-204h]
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v41; // [rsp+88h] [rbp-200h]
  int v42; // [rsp+A0h] [rbp-1E8h] BYREF
  unsigned int v43; // [rsp+A8h] [rbp-1E0h]
  int v44; // [rsp+B8h] [rbp-1D0h]
  unsigned int v45; // [rsp+C0h] [rbp-1C8h]
  __int64 v46; // [rsp+C8h] [rbp-1C0h] BYREF
  int v47; // [rsp+D0h] [rbp-1B8h]
  int v48[2]; // [rsp+D8h] [rbp-1B0h] BYREF
  unsigned __int64 v49; // [rsp+E0h] [rbp-1A8h]
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v50; // [rsp+E8h] [rbp-1A0h]
  __int128 v51; // [rsp+F0h] [rbp-198h]
  __int64 v52; // [rsp+108h] [rbp-180h]
  __int64 v53; // [rsp+110h] [rbp-178h] BYREF
  unsigned __int64 v54; // [rsp+118h] [rbp-170h]
  unsigned __int64 i; // [rsp+120h] [rbp-168h]
  __int64 v56; // [rsp+128h] [rbp-160h]
  __int128 v57; // [rsp+130h] [rbp-158h]
  __int128 v58; // [rsp+140h] [rbp-148h] BYREF
  __int64 v59; // [rsp+150h] [rbp-138h]
  PVOID BackTrace[20]; // [rsp+160h] [rbp-128h] BYREF
  _QWORD v61[10]; // [rsp+200h] [rbp-88h] BYREF

  v6 = a3;
  v7 = a2;
  v49 = a2;
  v45 = a3;
  v56 = a5;
  memset(v61, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v61[1]);
  v61[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v61[3]) = 29;
  LOBYTE(v61[6]) = -1;
  v48[0] = 0x2000;
  v48[1] = -1;
  v41 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v40 = 0;
  v46 = 0LL;
  v47 = 0;
  v52 = MEMORY[0xFFFFF78000000320];
  v8 = v52 * KeQueryTimeIncrement();
  v38 = v8;
  v9 = -1073741811;
  v44 = -1073741811;
  v10 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(1);
  gptiCurrent = v10;
  if ( v10 )
  {
    *((_DWORD *)v10 + 377) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
    if ( CurrentProcessWin32Process )
    {
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        v11 = gptiCurrent;
        if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
          || (v16 = 1, (*((_DWORD *)gptiCurrent + 314) & 0x80u) != 0) )
        {
          v16 = 0;
        }
        if ( v16 )
        {
          while ( 1 )
          {
            v18 = gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                         + 2);
            *((_QWORD *)v18 + 2) = 0LL;
            v17 = *(_QWORD *)v18;
            if ( !*(_DWORD *)(*(_QWORD *)v18 + 8LL) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v14, v15);
              v17 = *(_QWORD *)v18;
            }
            HMUnlockObject(v17);
          }
        }
      }
    }
  }
  if ( gbVideoInitialized )
  {
    v22 = (__int64)gptiCurrent;
    if ( (*((_DWORD *)gptiCurrent + 122) & 0x20000000) != 0 )
    {
      v11 = *(struct tagTHREADINFO **)(*((_QWORD *)gptiCurrent + 53) + 768LL);
      v23 = *((_DWORD *)v11 + 6) & 0x10;
    }
    else
    {
      v23 = 0;
    }
    if ( v23 || !CheckAccessEx((int *)(*((_QWORD *)gptiCurrent + 53) + 880LL), v48, 0) )
    {
      v9 = -1073741790;
      v19 = -2147483647;
      v20 = v6;
      v21 = v8;
      goto LABEL_93;
    }
    v12 = a1;
    if ( a1 > 0x400 )
    {
      v19 = -2147483646;
      goto LABEL_15;
    }
    v50 = 0LL;
    v25 = 0;
    v43 = 0;
    if ( !a1 )
    {
LABEL_72:
      v40 = v25;
      if ( a4 )
      {
        if ( ((PsGetCurrentProcessWow64Process(v11, v22, v24) == 0 ? 3 : 0) & (unsigned __int8)a4) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( a4 + 12 > MmUserProbeAddress || a4 + 12 < a4 )
          *(_BYTE *)MmUserProbeAddress = 0;
        v46 = *(_QWORD *)a4;
        v47 = *(_DWORD *)(a4 + 8);
      }
      if ( gfSwitchInProgress )
      {
        v9 = -1073741823;
        v19 = -2147483643;
LABEL_81:
        LODWORD(v20) = a3;
        v21 = v38;
        goto LABEL_94;
      }
      if ( !(unsigned int)UserIsWddmConnectedSession() )
      {
        v9 = -1073741790;
        v19 = -2147483642;
        goto LABEL_81;
      }
      if ( a4 && !(unsigned int)DrvIsDisplayStateCurrent(1LL, &v46) )
      {
        v9 = -1071774921;
        v19 = -2147483641;
        LODWORD(v20) = a3;
        v21 = v38;
        goto LABEL_94;
      }
      v19 = 18;
      v33 = xxxUserSetDisplayConfig(v25, v41, v6, 0, 0LL, 1, v56, 0LL, 0LL, (__int64)v61, 0LL);
      v9 = v33;
      if ( v33 == -2147483643 )
      {
        v9 = -1073741789;
      }
      else if ( v33 != -1073741789 && (v6 & 0x10000) == 0 )
      {
        if ( v33 == -1071774970 )
          v9 = -2147023286;
        else
          v9 = QdcSdcTranslateStatusDefault(v33);
      }
      v20 = a3;
      v21 = v38;
LABEL_93:
      if ( v19 == 18 )
        goto LABEL_98;
      goto LABEL_94;
    }
    v26 = 216LL * a1;
    if ( v26 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v11, v22, v24) == 0 ? 3 : 0) & (unsigned __int8)v7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v26 + v7 > MmUserProbeAddress || v26 + v7 < v7 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v12 = a1;
    }
    v27 = 0;
    v28 = 0;
    v11 = (struct tagTHREADINFO *)v7;
    while ( v28 < (unsigned int)v12 )
    {
      if ( *(__int64 *)v11 < 0 )
        ++v27;
      ++v28;
      v11 = (struct tagTHREADINFO *)((char *)v11 + 216);
    }
    if ( !v27 )
    {
LABEL_59:
      v24 = v41;
      v50 = v41;
      v22 = 0LL;
      while ( (unsigned int)v22 < (unsigned int)v12 )
      {
        if ( *(__int64 *)v7 < 0 )
        {
          if ( v25 >= v27 )
          {
            v19 = -2147483645;
            v20 = a3;
            v21 = v38;
            goto LABEL_93;
          }
          *(_OWORD *)v24 = *(_OWORD *)v7;
          *((_OWORD *)v24 + 1) = *(_OWORD *)(v7 + 16);
          *((_OWORD *)v24 + 2) = *(_OWORD *)(v7 + 32);
          *((_OWORD *)v24 + 3) = *(_OWORD *)(v7 + 48);
          *((_OWORD *)v24 + 4) = *(_OWORD *)(v7 + 64);
          *((_OWORD *)v24 + 5) = *(_OWORD *)(v7 + 80);
          *((_OWORD *)v24 + 6) = *(_OWORD *)(v7 + 96);
          v11 = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)((char *)v24 + 128);
          *((_OWORD *)v24 + 7) = *(_OWORD *)(v7 + 112);
          *((_OWORD *)v24 + 8) = *(_OWORD *)(v7 + 128);
          *((_OWORD *)v24 + 9) = *(_OWORD *)(v7 + 144);
          *((_OWORD *)v24 + 10) = *(_OWORD *)(v7 + 160);
          *((_OWORD *)v24 + 11) = *(_OWORD *)(v7 + 176);
          *((_OWORD *)v24 + 12) = *(_OWORD *)(v7 + 192);
          *((_QWORD *)v24 + 26) = *(_QWORD *)(v7 + 208);
          if ( *(__int64 *)v24 >= 0 )
          {
            v9 = -1073741790;
            v19 = -2147483644;
            v20 = a3;
            v21 = v38;
            goto LABEL_93;
          }
          v43 = ++v25;
          v24 = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)((char *)v24 + 216);
          v50 = v24;
        }
        v22 = (unsigned int)(v22 + 1);
        v7 += 216LL;
      }
      if ( v25 != v27 )
      {
        v19 = -2147483645;
        v20 = a3;
        v21 = v38;
        goto LABEL_93;
      }
      v6 = a3;
      goto LABEL_72;
    }
    v42 = 1665430357;
    v53 = 260LL;
    v29 = gpLeakTrackingAllocator;
    *(_QWORD *)&v57 = &v53;
    *((_QWORD *)&v57 + 1) = &v42;
    v51 = v57;
    v30 = 216LL * v27;
    v54 = v30;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x63447355) == 0x63447355 )
    {
      v31 = 0LL;
      for ( i = 0LL; ; i = v31 )
      {
        if ( v31 >= *((unsigned int *)gpLeakTrackingAllocator + 11) )
          goto LABEL_54;
        if ( *((_DWORD *)gpLeakTrackingAllocator + v31) == 1665430357 )
          break;
        ++v31;
      }
      v37 = 0;
      if ( v30 < 0x1000 || (v30 & 0xFFF) != 0 )
      {
        v37 = 1;
        v30 += 16LL;
        v54 = v30;
      }
      Pool2 = ExAllocatePool2(*(_QWORD *)v51 & 0xFFFFFFFFFFFFFFFCuLL | 1, v30);
      if ( !Pool2 )
      {
LABEL_45:
        Pool2 = 0LL;
        goto LABEL_55;
      }
      memset(BackTrace, 0, sizeof(BackTrace));
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( v37 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
      {
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                v29,
                                Pool2,
                                BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_55;
        }
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                   v29,
                                   Pool2,
                                   BackTrace) )
      {
        goto LABEL_55;
      }
      ExFreePoolWithTag((PVOID)Pool2, 0);
      goto LABEL_45;
    }
LABEL_54:
    Pool2 = ExAllocatePool2(*(_QWORD *)v51 & 0xFFFFFFFFFFFFFFFCuLL | 1, v30);
LABEL_55:
    v41 = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)Pool2;
    if ( !Pool2 )
      ExRaiseStatus(-1073741801);
    if ( qword_1C029BD10 )
      qword_1C029BD10(Pool2, &v58, Win32FreePool);
    v12 = a1;
    v7 = v49;
    goto LABEL_59;
  }
  v9 = -1073741823;
  v19 = 0x80000000;
LABEL_15:
  LODWORD(v20) = a3;
  v21 = v8;
LABEL_94:
  LogDiagSDC(v40, (__int64)v41, v20, v9, 0, v19, v21, 0, 0LL);
LABEL_98:
  if ( v9 < 0 )
  {
    if ( a4 && !(unsigned int)DrvIsDisplayStateCurrent(0LL, &v46) )
      v9 = -1071774921;
  }
  else
  {
    if ( qword_1C029C9A0 )
      v34 = qword_1C029C9A0();
    else
      v34 = -1073741637;
    if ( v34 >= 0 && qword_1C029C9A8 )
      qword_1C029C9A8();
  }
  if ( v41 && qword_1C029BE28 )
    qword_1C029BE28(&v58);
  UserSessionSwitchLeaveCrit((__int64)v11, v22, v20, v12);
  return (unsigned int)v9;
}
