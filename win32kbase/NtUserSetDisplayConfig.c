/*
 * XREFs of NtUserSetDisplayConfig @ 0x1C0176190
 * Callers:
 *     <none>
 * Callees:
 *     LogDiagSDC @ 0x1C001049C (LogDiagSDC.c)
 *     xxxUserSetDisplayConfig @ 0x1C0011DE0 (xxxUserSetDisplayConfig.c)
 *     CheckAccessEx @ 0x1C0016FB0 (CheckAccessEx.c)
 *     _QdcSdcTranslateStatusDefault @ 0x1C00221EC (_QdcSdcTranslateStatusDefault.c)
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
 *     DrvIsDisplayStateCurrent @ 0x1C0194350 (DrvIsDisplayStateCurrent.c)
 */

__int64 __fastcall NtUserSetDisplayConfig(
        unsigned int a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        __int64 a5)
{
  __int64 v7; // r12
  __int64 v8; // r14
  signed int v9; // edi
  __int64 v10; // rcx
  struct tagTHREADINFO *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 (__fastcall *v14)(_QWORD, _QWORD, _QWORD); // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // rax
  char v17; // al
  __int64 *v18; // rsi
  unsigned int v19; // esi
  unsigned int v20; // r15d
  __int64 v21; // rax
  ULONG64 v22; // rdx
  int v23; // eax
  unsigned int v24; // r14d
  __int64 v25; // rsi
  unsigned int v26; // esi
  unsigned int v27; // eax
  __int64 QuotaZInit; // rax
  int v29; // eax
  int v30; // eax
  __int64 v33; // [rsp+68h] [rbp-130h]
  unsigned int v34; // [rsp+84h] [rbp-114h]
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v35; // [rsp+88h] [rbp-110h]
  __int64 v36; // [rsp+B8h] [rbp-E0h] BYREF
  int v37; // [rsp+C0h] [rbp-D8h]
  unsigned int v38[2]; // [rsp+C8h] [rbp-D0h] BYREF
  __int64 v39; // [rsp+D0h] [rbp-C8h]
  __int64 v40; // [rsp+E0h] [rbp-B8h]
  __int64 v41; // [rsp+E8h] [rbp-B0h]
  __int128 v42; // [rsp+F0h] [rbp-A8h] BYREF
  __int64 v43; // [rsp+100h] [rbp-98h]
  _QWORD v44[10]; // [rsp+110h] [rbp-88h] BYREF

  v7 = a1;
  v41 = a5;
  memset(v44, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v44[1]);
  v44[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v44[3]) = 29;
  LOBYTE(v44[6]) = -1;
  v38[0] = 0x2000;
  v38[1] = -1;
  v35 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v34 = 0;
  v36 = 0LL;
  v37 = 0;
  v40 = MEMORY[0xFFFFF78000000320];
  v8 = v40 * KeQueryTimeIncrement();
  v33 = v8;
  v9 = -1073741811;
  LOBYTE(v10) = 1;
  v11 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(v10);
  gptiCurrent = v11;
  if ( v11 )
  {
    *((_DWORD *)v11 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
    if ( CurrentProcessWin32Process )
    {
      v12 = -*(_QWORD *)CurrentProcessWin32Process;
      v16 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      if ( v16 )
      {
        if ( (*(_DWORD *)(v16 + 12) & 0x8000) != 0 )
        {
          v12 = (__int64)gptiCurrent;
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
            || (v17 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
          {
            v17 = 0;
          }
          if ( v17 )
          {
            while ( 1 )
            {
              v18 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v18[2] = 0LL;
              if ( !*(_DWORD *)(*v18 + 8) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
              HMUnlockObject(*v18);
            }
          }
        }
      }
    }
  }
  if ( gbVideoInitialized )
  {
    v22 = (ULONG64)gptiCurrent + 424;
    if ( (*((_DWORD *)gptiCurrent + 122) & 0x20000000) != 0 )
    {
      v12 = *(_QWORD *)(*(_QWORD *)v22 + 760LL);
      v23 = *(_DWORD *)(v12 + 24) & 0x10;
    }
    else
    {
      v23 = 0;
    }
    if ( v23 || !CheckAccessEx((int *)(*(_QWORD *)v22 + 864LL), v38, 0LL) )
    {
      v9 = -1073741790;
      v19 = -2147483647;
      v20 = a3;
      v21 = v8;
    }
    else
    {
      if ( (unsigned int)v7 > 0x400 )
      {
        v19 = -2147483646;
        goto LABEL_17;
      }
      v39 = 0LL;
      v24 = 0;
      if ( !(_DWORD)v7 )
        goto LABEL_53;
      v25 = 216 * v7;
      if ( 216 * v7 )
      {
        if ( ((PsGetCurrentProcessWow64Process(v12, v22, v13, v14) == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
          ExRaiseDatatypeMisalignment();
        v22 = MmUserProbeAddress;
        if ( v25 + a2 > MmUserProbeAddress || v25 + a2 < a2 )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
      v26 = 0;
      v27 = 0;
      v12 = a2;
      while ( v27 < (unsigned int)v7 )
      {
        if ( *(__int64 *)v12 < 0 )
          ++v26;
        ++v27;
        v12 += 216LL;
      }
      if ( v26 )
      {
        QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                       (NSInstrumentation::CLeakTrackingAllocator *)v12,
                       v22,
                       216LL * v26,
                       0x63447355u);
        v35 = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)QuotaZInit;
        if ( !QuotaZInit )
          ExRaiseStatus(-1073741801);
        v14 = qword_1C02D65C8;
        if ( qword_1C02D65C8 )
          qword_1C02D65C8(QuotaZInit, &v42, Win32FreePool);
      }
      v13 = (__int64)v35;
      v39 = (__int64)v35;
      v22 = 0LL;
      while ( (unsigned int)v22 < (unsigned int)v7 )
      {
        if ( *(__int64 *)a2 < 0 )
        {
          if ( v24 >= v26 )
          {
            v19 = -2147483645;
            v20 = a3;
            v21 = v33;
            goto LABEL_73;
          }
          *(_OWORD *)v13 = *(_OWORD *)a2;
          *(_OWORD *)(v13 + 16) = *(_OWORD *)(a2 + 16);
          *(_OWORD *)(v13 + 32) = *(_OWORD *)(a2 + 32);
          *(_OWORD *)(v13 + 48) = *(_OWORD *)(a2 + 48);
          *(_OWORD *)(v13 + 64) = *(_OWORD *)(a2 + 64);
          *(_OWORD *)(v13 + 80) = *(_OWORD *)(a2 + 80);
          *(_OWORD *)(v13 + 96) = *(_OWORD *)(a2 + 96);
          v12 = v13 + 128;
          *(_OWORD *)(v13 + 112) = *(_OWORD *)(a2 + 112);
          *(_OWORD *)(v13 + 128) = *(_OWORD *)(a2 + 128);
          *(_OWORD *)(v13 + 144) = *(_OWORD *)(a2 + 144);
          *(_OWORD *)(v13 + 160) = *(_OWORD *)(a2 + 160);
          *(_OWORD *)(v13 + 176) = *(_OWORD *)(a2 + 176);
          *(_OWORD *)(v13 + 192) = *(_OWORD *)(a2 + 192);
          *(_QWORD *)(v13 + 208) = *(_QWORD *)(a2 + 208);
          if ( *(__int64 *)v13 >= 0 )
          {
            v9 = -1073741790;
            v19 = -2147483644;
            v20 = a3;
            v21 = v33;
            goto LABEL_73;
          }
          ++v24;
          v13 += 216LL;
          v39 = v13;
        }
        v22 = (unsigned int)(v22 + 1);
        a2 += 216LL;
      }
      if ( v24 == v26 )
      {
LABEL_53:
        v34 = v24;
        if ( a4 )
        {
          if ( ((PsGetCurrentProcessWow64Process(v12, v22, v13, v14) == 0 ? 3 : 0) & (unsigned __int8)a4) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( a4 + 12 > MmUserProbeAddress || a4 + 12 < a4 )
            *(_BYTE *)MmUserProbeAddress = 0;
          v36 = *(_QWORD *)a4;
          v37 = *(_DWORD *)(a4 + 8);
        }
        if ( HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) )
        {
          v19 = -2147483643;
          goto LABEL_16;
        }
        if ( !(unsigned int)UserIsWddmConnectedSession() )
        {
          v9 = -1073741790;
          v19 = -2147483642;
          goto LABEL_17;
        }
        if ( a4 && !(unsigned int)DrvIsDisplayStateCurrent(1LL, &v36) )
        {
          v9 = -1071774921;
          v19 = -2147483641;
          v20 = a3;
          v21 = v33;
          goto LABEL_74;
        }
        v19 = 18;
        v20 = a3;
        v29 = xxxUserSetDisplayConfig(v24, v35, a3, 0, 0LL, 1, v41, 0LL, 0LL, (__int64)v44, 0LL);
        v9 = v29;
        if ( v29 == -2147483643 )
        {
          v9 = -1073741789;
        }
        else if ( v29 != -1073741789 && (a3 & 0x10000) == 0 )
        {
          if ( v29 == -1071774970 )
            v9 = -2147023286;
          else
            v9 = QdcSdcTranslateStatusDefault(v29);
        }
        v21 = v33;
      }
      else
      {
        v19 = -2147483645;
        v20 = a3;
        v21 = v33;
      }
    }
LABEL_73:
    if ( v19 == 18 )
      goto LABEL_78;
    goto LABEL_74;
  }
  v19 = 0x80000000;
LABEL_16:
  v9 = -1073741823;
LABEL_17:
  v20 = a3;
  v21 = v33;
LABEL_74:
  LogDiagSDC(v34, (__int64)v35, v20, v9, 0, v19, v21, 0, 0LL);
LABEL_78:
  if ( v9 < 0 )
  {
    if ( a4 && !(unsigned int)DrvIsDisplayStateCurrent(0LL, &v36) )
      v9 = -1071774921;
  }
  else
  {
    if ( qword_1C02D71D8 )
      v30 = qword_1C02D71D8();
    else
      v30 = -1073741637;
    if ( v30 >= 0 && qword_1C02D71E0 )
      qword_1C02D71E0();
  }
  if ( v35 && qword_1C02D66D0 )
    qword_1C02D66D0(&v42);
  UserSessionSwitchLeaveCrit(v12, v22, v13, (__int64)v14);
  return (unsigned int)v9;
}
