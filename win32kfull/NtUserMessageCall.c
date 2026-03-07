__int64 __fastcall NtUserMessageCall(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, int a6, int a7)
{
  __int64 v8; // r15
  int v10; // esi
  char v11; // bp
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rbp
  __int64 *v30; // rax
  int v31; // r14d
  __int128 v32; // [rsp+40h] [rbp-58h] BYREF
  __int64 v33; // [rsp+50h] [rbp-48h]

  v8 = a2;
  Feature_UseSharedNtUserMessageCall__private_ReportDeviceUsage();
  v10 = 0;
  v11 = 0;
  v12 = 0LL;
  if ( (v8 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87);
    UserSetLastError(87);
    return 0LL;
  }
  else
  {
    if ( ((a1 + 1) & 0xFFFFFFFFFFFEFFFFuLL) == 0 && (unsigned int)(a6 - 695) <= 1 )
    {
      v12 = -1LL;
LABEL_4:
      v11 = 1;
      goto LABEL_5;
    }
    if ( a6 != 689 || (unsigned int)(v8 - 992) <= 8 )
      goto LABEL_4;
    while ( 1 )
    {
LABEL_5:
      if ( v11 || !(unsigned __int8)ShouldRunShared(5LL) )
        EnterCrit(0LL, 1LL);
      else
        EnterSharedCrit(v26, v25, v27);
      v14 = SGDGetUserSessionState(v13);
      if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v14 + 8)) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
      v15 = 0LL;
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread )
        v15 = *ThreadWin32Thread;
      if ( v12 == -1 )
        break;
      v18 = ValidateHwnd(a1);
      v12 = v18;
      if ( !v18 )
      {
        UserSessionSwitchLeaveCrit(v17);
        return 0LL;
      }
      if ( *(_QWORD *)(v18 + 16) == v15 && (*(_BYTE *)(*(_QWORD *)(v18 + 40) + 18LL) & 4) == 0 || v11 )
        break;
      v11 = 1;
      UserSessionSwitchLeaveCrit(v17);
    }
    v33 = 0LL;
    v32 = 0LL;
    if ( v12 != -1 )
    {
      *(_QWORD *)&v32 = *(_QWORD *)(v15 + 416);
      *(_QWORD *)(v15 + 416) = &v32;
      *((_QWORD *)&v32 + 1) = v12;
      HMLockObject(v12);
    }
    if ( v11 )
    {
      if ( (unsigned int)v8 >= 0x400 )
      {
        v19 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
               + (((_BYTE)a6 + 6) & 0x1F)))(
                v12,
                (unsigned int)v8,
                a3,
                a4,
                a5);
      }
      else
      {
        _mm_lfence();
        LOBYTE(v10) = a7 != 0;
        v19 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64, int, int))gapfnMessageCall[(unsigned __int8)MessageTable[v8]])(
                v12,
                (unsigned int)v8,
                a3,
                a4,
                a5,
                a6,
                v10);
      }
    }
    else
    {
      v28 = SGDGetUserSessionState(v17);
      if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v28 + 8)) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
      v29 = 0LL;
      v30 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v30 )
        v29 = *v30;
      v31 = *(_DWORD *)(v29 + 1548);
      *(_DWORD *)(v29 + 1548) = 0;
      if ( (unsigned int)v8 < 0x400 )
      {
        _mm_lfence();
        if ( a7 )
          v10 = 1;
        v19 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64, int, int))gapfnMessageCall[(unsigned __int8)MessageTable[v8]])(
                v12,
                (unsigned int)v8,
                a3,
                a4,
                a5,
                a6,
                v10);
      }
      else
      {
        v19 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
               + (((_BYTE)a6 + 6) & 0x1F)))(
                v12,
                (unsigned int)v8,
                a3,
                a4,
                a5);
      }
      *(_DWORD *)(v29 + 1548) = v31;
    }
    v23 = v19;
    if ( v12 != -1 )
      ThreadUnlock1(v21, v20, v22);
    UserSessionSwitchLeaveCrit(v21);
    return v23;
  }
}
