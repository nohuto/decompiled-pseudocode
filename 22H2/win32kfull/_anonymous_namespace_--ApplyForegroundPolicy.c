/*
 * XREFs of _anonymous_namespace_::ApplyForegroundPolicy @ 0x1C00E55C0
 * Callers:
 *     EditionApplyForegroundPolicyStartingApp @ 0x1C00E5C90 (EditionApplyForegroundPolicyStartingApp.c)
 * Callees:
 *     _anonymous_namespace_::CheckAllowForeground @ 0x1C00E3878 (_anonymous_namespace_--CheckAllowForeground.c)
 *     WPP_RECORDER_AND_TRACE_SF_sD @ 0x1C00E4F24 (WPP_RECORDER_AND_TRACE_SF_sD.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00E5B60 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_dD @ 0x1C00E5BE4 (WPP_RECORDER_AND_TRACE_SF_dD.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall anonymous_namespace_::ApplyForegroundPolicy(__int64 a1)
{
  char v2; // bl
  int v3; // ebp
  HANDLE ProcessId; // r14
  unsigned int v5; // ecx
  HANDLE *v6; // rdx
  __int64 v7; // rdi
  void *v8; // rdx
  int v9; // r8d
  __int64 result; // rax
  PDEVICE_OBJECT v11; // rcx
  __int16 v12; // ax
  int v13; // edx
  _UNKNOWN **v14; // r9
  int v15; // eax
  const char *v16; // rax
  void *v17; // rdx
  int v18; // [rsp+20h] [rbp-78h]
  int v19; // [rsp+28h] [rbp-70h]
  int v20; // [rsp+30h] [rbp-68h]
  void *v21; // [rsp+38h] [rbp-60h]
  char v22; // [rsp+40h] [rbp-58h]

  v2 = 1;
  v3 = 1;
  ProcessId = PsGetProcessId(*(PEPROCESS *)a1);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&unk_1C035F3C8, 0LL);
  v5 = 5;
  v6 = (HANDLE *)&unk_1C035E238;
  while ( *v6 != ProcessId )
  {
    ++v5;
    v6 += 3;
    if ( v5 >= 0xF )
      goto LABEL_10;
  }
  v7 = 3LL * v5;
  v3 = qword_1C035E1C0[3 * v5 + 1];
  if ( (v3 & 0xFFFFFFFB) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 410LL);
  if ( HIDWORD(qword_1C035E1C0[v7 + 1]) )
  {
    LODWORD(qword_1C035E1C0[v7 + 1]) = 0;
  }
  else
  {
    *(_OWORD *)&qword_1C035E1C0[v7] = 0LL;
    qword_1C035E1C0[v7 + 2] = 0LL;
  }
LABEL_10:
  ExReleasePushLockExclusiveEx(&unk_1C035F3C8, 0LL);
  KeLeaveCriticalRegion();
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v8) = 0;
  }
  if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v21 = &WPP_61c26a9f6da9378abf1f04fdf8202002_Traceguids;
    LOWORD(v20) = 14;
    v19 = 2;
    LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_dD(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v8,
      v9,
      (unsigned int)&WPP_RECORDER_INITIALIZED);
  }
  result = gdwPUDFlags;
  if ( (gdwPUDFlags & 0x8000000) != 0 )
  {
    if ( (unsigned int)IsImmersiveAppRestricted(a1) )
    {
      v11 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v2 = 0;
      }
      result = (__int64)&WPP_RECORDER_INITIALIZED;
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = 16;
LABEL_26:
        v8 = &WPP_61c26a9f6da9378abf1f04fdf8202002_Traceguids;
        v22 = (char)ProcessId;
LABEL_93:
        LOBYTE(v8) = v2;
        return WPP_RECORDER_AND_TRACE_SF_D(
                 v11->AttachedDevice,
                 (_DWORD)v8,
                 v9,
                 (_DWORD)gFullLog,
                 4,
                 2,
                 v12,
                 (__int64)&WPP_61c26a9f6da9378abf1f04fdf8202002_Traceguids,
                 v22);
      }
    }
    else
    {
      v13 = *(_DWORD *)(a1 + 12);
      if ( (v13 & 0x40) != 0 )
      {
        if ( v3 == 2 )
        {
          if ( (v13 & 0x100) != 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 462LL);
          v11 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
          {
            v2 = 0;
          }
          result = (__int64)&WPP_RECORDER_INITIALIZED;
          LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v12 = 18;
            goto LABEL_26;
          }
        }
        else if ( v3 == 3 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
          {
            v2 = 0;
          }
          result = (__int64)&WPP_RECORDER_INITIALIZED;
          if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v17 = &WPP_61c26a9f6da9378abf1f04fdf8202002_Traceguids;
            LOBYTE(v17) = v2;
            LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            result = WPP_RECORDER_AND_TRACE_SF_D(
                       WPP_GLOBAL_Control->AttachedDevice,
                       (_DWORD)v17,
                       v9,
                       (_DWORD)gFullLog,
                       4,
                       2,
                       19,
                       (__int64)&WPP_61c26a9f6da9378abf1f04fdf8202002_Traceguids,
                       (char)ProcessId);
          }
          *(_DWORD *)(a1 + 12) |= 0x100u;
        }
        else
        {
          if ( v3 != 1 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 481LL);
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
            || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v13) = 0;
          }
          v14 = &WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_D(
              WPP_GLOBAL_Control->AttachedDevice,
              v13,
              v9,
              (_DWORD)gFullLog,
              4,
              2,
              20,
              (__int64)&WPP_61c26a9f6da9378abf1f04fdf8202002_Traceguids,
              (char)ProcessId);
            v14 = &WPP_RECORDER_INITIALIZED;
          }
          v15 = *(_DWORD *)(a1 + 12);
          if ( v15 < 0 )
            *(_DWORD *)(a1 + 12) = v15 | 0x100;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
            || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v13) = 0;
          }
          if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_D(
              WPP_GLOBAL_Control->AttachedDevice,
              v13,
              v9,
              (_DWORD)gFullLog,
              4,
              2,
              21,
              (__int64)&WPP_61c26a9f6da9378abf1f04fdf8202002_Traceguids,
              (char)ProcessId);
          }
          if ( (*(_DWORD *)(a1 + 12) & 0x100) == 0 && anonymous_namespace_::CheckAllowForeground(*(_QWORD *)a1) )
            *(_DWORD *)(a1 + 12) |= 0x100u;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
          {
            v2 = 0;
          }
          result = (__int64)&WPP_RECORDER_INITIALIZED;
          if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v16 = "given";
            if ( (*(_DWORD *)(a1 + 12) & 0x100) == 0 )
              v16 = "NOT given";
            return (__int64)WPP_RECORDER_AND_TRACE_SF_sD(
                              (__int64)WPP_GLOBAL_Control->AttachedDevice,
                              v2,
                              WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                              (__int64)v14,
                              v18,
                              v19,
                              v20,
                              (int)v21,
                              v16);
          }
        }
      }
      else
      {
        if ( v3 != 1 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 449LL);
        v11 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v2 = 0;
        }
        result = (__int64)&WPP_RECORDER_INITIALIZED;
        LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v12 = 17;
          goto LABEL_26;
        }
      }
    }
  }
  else
  {
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (result = HIDWORD(WPP_GLOBAL_Control->Timer), (result & 2) == 0)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v2 = 0;
    }
    LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = (char)ProcessId;
      v12 = 15;
      goto LABEL_93;
    }
  }
  return result;
}
