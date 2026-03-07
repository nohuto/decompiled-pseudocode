__int64 __fastcall PopAdaptivePowerSettingCallback(_QWORD *a1, int *a2, int a3)
{
  char v5; // r14
  char v6; // bp
  unsigned int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // r8
  GUID v11; // [rsp+30h] [rbp-28h] BYREF
  int v12; // [rsp+40h] [rbp-18h]

  if ( a3 != 4 || !a2 )
    return (unsigned int)-1073741811;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  PopAcquireAdaptiveLock(1, (__int64)a2);
  if ( *(_QWORD *)&GUID_NON_ADAPTIVE_INPUT_TIMEOUT.Data1 == *a1
    && *(_QWORD *)GUID_NON_ADAPTIVE_INPUT_TIMEOUT.Data4 == a1[1] )
  {
    if ( *a2 != PopInputTimeout )
    {
      PopInputTimeout = *a2;
LABEL_32:
      v5 = 1;
      goto LABEL_33;
    }
    goto LABEL_33;
  }
  if ( *(_QWORD *)&GUID_VIDEO_POWERDOWN_TIMEOUT.Data1 == *a1 && *(_QWORD *)GUID_VIDEO_POWERDOWN_TIMEOUT.Data4 == a1[1] )
  {
    if ( *a2 == PopDisplayTimeout )
      goto LABEL_33;
    PopDisplayTimeout = *a2;
LABEL_11:
    v6 = 1;
    goto LABEL_33;
  }
  if ( *(_QWORD *)&GUID_VIDEO_CONSOLE_LOCK_TIMEOUT.Data1 == *a1
    && *(_QWORD *)GUID_VIDEO_CONSOLE_LOCK_TIMEOUT.Data4 == a1[1] )
  {
    if ( *a2 == PopAdaptiveLockConsoleTimeout )
      goto LABEL_33;
    PopAdaptiveLockConsoleTimeout = *a2;
    goto LABEL_11;
  }
  if ( *(_QWORD *)&GUID_HUPR_ADAPTIVE_AWAY_DISPLAY_TIMEOUT.Data1 == *a1
    && *(_QWORD *)GUID_HUPR_ADAPTIVE_AWAY_DISPLAY_TIMEOUT.Data4 == a1[1] )
  {
    PopAdaptiveSensorAwayDisplayTimeout = *a2;
    goto LABEL_33;
  }
  if ( *(_QWORD *)&GUID_HUPR_ADAPTIVE_AWAY_DIM_TIMEOUT.Data1 == *a1
    && *(_QWORD *)GUID_HUPR_ADAPTIVE_AWAY_DIM_TIMEOUT.Data4 == a1[1] )
  {
    PopAdaptiveSensorAwayDimTimeout = *a2;
    goto LABEL_33;
  }
  if ( *(_QWORD *)&GUID_HUPR_ADAPTIVE_INATTENTIVE_DISPLAY_TIMEOUT.Data1 == *a1
    && *(_QWORD *)GUID_HUPR_ADAPTIVE_INATTENTIVE_DISPLAY_TIMEOUT.Data4 == a1[1] )
  {
    PopAdaptiveSensorInattentiveDisplayTimeout = *a2;
    goto LABEL_33;
  }
  if ( *(_QWORD *)&GUID_HUPR_ADAPTIVE_INATTENTIVE_DIM_TIMEOUT.Data1 == *a1
    && *(_QWORD *)GUID_HUPR_ADAPTIVE_INATTENTIVE_DIM_TIMEOUT.Data4 == a1[1] )
  {
    PopAdaptiveSensorInattentiveDimTimeout = *a2;
    goto LABEL_33;
  }
  if ( *(_QWORD *)&GUID_VIDEO_DIM_TIMEOUT.Data1 == *a1 && *(_QWORD *)GUID_VIDEO_DIM_TIMEOUT.Data4 == a1[1] )
  {
    if ( *a2 != PopAdaptiveDimTimeout )
    {
      PopAdaptiveDimTimeout = *a2;
      goto LABEL_32;
    }
LABEL_33:
    PopDiagTracePolicyChange();
    goto LABEL_35;
  }
  v7 = -1073741811;
LABEL_35:
  PopReleaseAdaptiveLock();
  v12 = 0;
  v11 = GUID_ADAPTIVE_SESSION_STATE_CHANGED;
  if ( v5 )
  {
    PopBroadcastSessionInfo(0LL, 20LL, &v11);
  }
  else if ( v6 && PopConsoleSession )
  {
    PopSendSessionInfo(dword_140C398D8, v8, v9, (__int64)&v11);
  }
  return v7;
}
