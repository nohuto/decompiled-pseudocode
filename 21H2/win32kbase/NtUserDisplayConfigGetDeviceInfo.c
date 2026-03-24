/*
 * XREFs of NtUserDisplayConfigGetDeviceInfo @ 0x1C001D580
 * Callers:
 *     <none>
 * Callees:
 *     DrvSampleDisplayState @ 0x1C001B860 (DrvSampleDisplayState.c)
 *     _DeviceInfoTranslateStatusDefault @ 0x1C001DCF8 (_DeviceInfoTranslateStatusDefault.c)
 *     UserIsWddmConnectedSession @ 0x1C001DEB0 (UserIsWddmConnectedSession.c)
 *     Win32AllocPoolWithQuota @ 0x1C00295D0 (Win32AllocPoolWithQuota.c)
 *     W32GetThreadWin32Thread @ 0x1C002E580 (W32GetThreadWin32Thread.c)
 *     EnterSharedCrit @ 0x1C0035E30 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0084DFC (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C00CA9D8 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     SetLastNtError @ 0x1C00CDCF8 (SetLastNtError.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00CF880 (memmove.c)
 */

__int64 __fastcall NtUserDisplayConfigGetDeviceInfo(char *a1)
{
  unsigned int *v2; // r14
  const void *v3; // r13
  __int64 v4; // rcx
  int DeviceInfoInternal; // ebx
  unsigned int *v6; // rdx
  size_t v7; // rsi
  SIZE_T v8; // r12
  _DWORD *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // ebx
  unsigned int v13; // eax
  bool v14; // zf
  unsigned int v15; // eax
  volatile void *v16; // rsi
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  __int64 v21; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v23; // rax
  char *v24; // rcx
  _DWORD *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rsi
  int v30; // r12d
  __int64 v31; // r15
  __int64 v32; // rsi
  _DWORD *v33; // rdx
  char *v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  int v41; // [rsp+40h] [rbp-D8h]
  __int64 v42; // [rsp+44h] [rbp-D4h]
  signed int v43; // [rsp+4Ch] [rbp-CCh]
  __int64 v44; // [rsp+78h] [rbp-A0h] BYREF
  unsigned int v45; // [rsp+80h] [rbp-98h]
  __int128 v46; // [rsp+98h] [rbp-80h] BYREF
  __int64 v47; // [rsp+A8h] [rbp-70h]
  __int128 v48; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v49; // [rsp+C0h] [rbp-58h]

  v2 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v3 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v43 = 0;
  v42 = 0LL;
  v41 = 0;
  EnterSharedCrit(0LL, 1LL);
  if ( !gbVideoInitialized )
    goto LABEL_2;
  W32GetThreadWin32Thread(KeGetCurrentThread());
  v6 = (unsigned int *)(a1 + 4);
  if ( (unsigned __int64)(a1 + 4) >= MmUserProbeAddress )
    v6 = (unsigned int *)MmUserProbeAddress;
  v7 = *v6;
  if ( (unsigned int)v7 < 0x14 )
    ExRaiseStatus(-1073741811);
  v8 = *v6;
  v2 = (unsigned int *)Win32AllocPoolWithQuota(v7, 1665430357LL);
  if ( !v2 )
  {
    v24 = (char *)MmUserProbeAddress;
    v25 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v25 = (_DWORD *)MmUserProbeAddress;
    if ( *v25 == -21 && (_DWORD)v7 == 2056 )
    {
      if ( a1 + 2020 < a1 + 2016 || (unsigned __int64)(a1 + 2020) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *((_DWORD *)a1 + 504) = 0;
      if ( a1 + 2024 < a1 + 2020 || (unsigned __int64)(a1 + 2024) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *((_DWORD *)a1 + 505) = 0;
      v9 = a1 + 2024;
      v24 = a1 + 2028;
      if ( a1 + 2028 < a1 + 2024 || (unsigned __int64)v24 > MmUserProbeAddress )
      {
        v24 = (char *)MmUserProbeAddress;
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      *v9 = 1144084230;
    }
    v26 = WdLogNewEntry5_WdError(v24, v9);
    *(_QWORD *)(v26 + 24) = v7;
    *(_QWORD *)(v26 + 32) = 1144084230LL;
    WdLogEvent5_WdError(v26);
    ExRaiseStatus(-1073741801);
  }
  if ( qword_1C0256FC0 )
    qword_1C0256FC0(v2, &v48, Win32FreePool);
  if ( ((PsGetCurrentProcessWow64Process(v10) == 0 ? 3 : 0) & (unsigned __int8)a1) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)&a1[v7] > MmUserProbeAddress || &a1[v7] < a1 )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v2, a1, v7);
  v2[1] = v7;
  v12 = *v2;
  v13 = *v2 + 24;
  if ( v13 > 0x1E || (v4 = 1547905053LL, !_bittest((const int *)&v4, v13)) )
  {
    if ( v12 == 100 )
    {
LABEL_69:
      v14 = (_DWORD)v7 == 24;
      goto LABEL_34;
    }
    if ( gfSwitchInProgress )
    {
LABEL_2:
      DeviceInfoInternal = -1073741823;
      goto LABEL_104;
    }
    if ( !(unsigned int)UserIsWddmConnectedSession(v4, v11) )
    {
      DeviceInfoInternal = -1073741790;
      goto LABEL_104;
    }
  }
  if ( v12 > 100 )
    goto LABEL_35;
  if ( v12 == 100 )
    goto LABEL_69;
  if ( v12 > -7 )
  {
    if ( v12 > 3 )
    {
      v17 = v12 - 4;
      if ( v17 )
      {
        v18 = v17 - 2;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( v19 )
          {
            v20 = v19 - 2;
            if ( !v20 )
              goto LABEL_45;
            if ( v20 != 2 )
              goto LABEL_35;
          }
        }
        goto LABEL_69;
      }
      v14 = (_DWORD)v7 == 276;
    }
    else
    {
      switch ( v12 )
      {
        case 3:
          v14 = (_DWORD)v7 == 80;
          break;
        case -5:
          goto LABEL_44;
        case -3:
LABEL_45:
          v14 = (_DWORD)v7 == 32;
          break;
        case -2:
          goto LABEL_62;
        case 1:
          v14 = (_DWORD)v7 == 84;
          break;
        case 2:
          v14 = (_DWORD)v7 == 420;
          break;
        default:
          goto LABEL_35;
      }
    }
LABEL_34:
    if ( !v14 )
      goto LABEL_35;
    goto LABEL_71;
  }
  if ( v12 == -7 )
  {
    v14 = (_DWORD)v7 == 940;
    goto LABEL_34;
  }
  if ( v12 > -13 )
  {
    if ( v12 != -12 )
    {
      if ( v12 == -11 )
        goto LABEL_62;
      if ( v12 == -10 )
      {
LABEL_44:
        v14 = (_DWORD)v7 == 28;
        goto LABEL_34;
      }
      if ( v12 != -9 )
      {
        v14 = (_DWORD)v7 == 536;
        goto LABEL_34;
      }
    }
    goto LABEL_69;
  }
  switch ( v12 )
  {
    case -13:
      v14 = (_DWORD)v7 == 36;
      goto LABEL_34;
    case -24:
      goto LABEL_45;
    case -22:
      goto LABEL_44;
    case -21:
LABEL_62:
      v14 = (_DWORD)v7 == 2056;
      goto LABEL_34;
    case -20:
      v14 = (_DWORD)v7 == 56;
      goto LABEL_34;
  }
  if ( v12 != -15 )
  {
    if ( v12 == -14 )
    {
      v14 = (_DWORD)v7 == 40;
      goto LABEL_34;
    }
LABEL_35:
    DeviceInfoInternal = -1073741811;
    goto LABEL_104;
  }
  if ( (_DWORD)v7 != 32 )
    goto LABEL_35;
  v15 = v2[5];
  if ( !v15 )
  {
LABEL_71:
    v16 = 0LL;
    goto LABEL_72;
  }
  v3 = (const void *)Win32AllocPoolWithQuota(v15, 1665430357LL);
  if ( !v3 )
  {
    DeviceInfoInternal = -1073741801;
LABEL_104:
    if ( v41 )
    {
      v44 = 0LL;
      v45 = 0;
      DrvSampleDisplayState(&v44);
      v29 = (unsigned int)v44;
      if ( v42 == __PAIR64__(v45, v44) )
      {
        v30 = 1;
        v31 = DeviceInfoInternal;
        v32 = v43;
      }
      else
      {
        v30 = 0;
        v33 = a1 + 2024;
        v34 = a1 + 2028;
        if ( a1 + 2028 < a1 + 2024 || (unsigned __int64)v34 > MmUserProbeAddress )
        {
          v34 = (char *)MmUserProbeAddress;
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        *v33 = 0;
        v35 = (_QWORD *)WdLogNewEntry5_WdError(v34, v33);
        v35[3] = (unsigned int)v42;
        v35[4] = HIDWORD(v42);
        v35[5] = v29;
        v35[6] = v45;
        v32 = v43;
        v35[7] = v43;
        WdLogEvent5_WdError(v35);
        v38 = WdLogNewEntry5_WdError(v37, v36);
        v31 = DeviceInfoInternal;
        *(_QWORD *)(v38 + 24) = DeviceInfoInternal;
        *(_QWORD *)(v38 + 32) = v43;
        WdLogEvent5_WdError(v38);
      }
      if ( dword_1C02594B0 || !v30 )
      {
        v39 = WdLogNewEntry5_WdError(v28, v27);
        *(_QWORD *)(v39 + 24) = v31;
        *(_QWORD *)(v39 + 32) = v32;
        WdLogEvent5_WdError(v39);
      }
      else
      {
        dword_1C02594B0 = 1;
        ((void (__fastcall *)(__int64, __int64, __int64, __int64, _QWORD, _BYTE))qword_1C0251B60)(
          403LL,
          2061LL,
          v31,
          v32,
          0LL,
          0);
      }
    }
    goto LABEL_115;
  }
  if ( qword_1C0256FC0 )
    qword_1C0256FC0(v3, &v46, Win32FreePool);
  v16 = (volatile void *)*((_QWORD *)v2 + 3);
  *((_QWORD *)v2 + 3) = v3;
LABEL_72:
  if ( *v2 == -21 )
  {
    v42 = *((_QWORD *)v2 + 252);
    *((_QWORD *)v2 + 252) = 0LL;
    v41 = 1;
  }
  DeviceInfoInternal = DrvDisplayConfigGetDeviceInfoInternal((struct DISPLAYCONFIG_DEVICE_INFO_HEADER *)v2, 1);
  if ( DeviceInfoInternal < 0 && v41 )
  {
    v21 = v2[506];
    v43 = v2[506];
  }
  if ( *v2 == 3 )
    v2[7] = 0;
  if ( DeviceInfoInternal == -2147483643 )
  {
    DeviceInfoInternal = -1073741789;
  }
  else if ( DeviceInfoInternal != -1073741789 )
  {
    DeviceInfoInternal = DeviceInfoTranslateStatusDefault(*v2, (unsigned int)DeviceInfoInternal);
  }
  if ( *v2 == -15 )
  {
    *((_QWORD *)v2 + 3) = v16;
    if ( DeviceInfoInternal >= 0 )
    {
      if ( v2[5] )
      {
        CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v21);
        ProbeForWrite(v16, v2[5], CurrentProcessWow64Process != 0 ? 1 : 4);
        memmove((void *)v16, v3, v2[5]);
      }
    }
  }
  v23 = PsGetCurrentProcessWow64Process(v21);
  ProbeForWrite(a1, v8, v23 != 0 ? 1 : 4);
  memmove(a1, v2, v8);
  if ( DeviceInfoInternal < 0 )
    goto LABEL_104;
LABEL_115:
  if ( v3 )
    PopAndFreeAlwaysW32ThreadLock(&v46);
  if ( v2 )
    PopAndFreeAlwaysW32ThreadLock(&v48);
  UserSessionSwitchLeaveCrit(v4);
  return (unsigned int)DeviceInfoInternal;
}
