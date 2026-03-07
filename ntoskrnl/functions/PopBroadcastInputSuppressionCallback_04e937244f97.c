__int64 __fastcall PopBroadcastInputSuppressionCallback(_QWORD *a1)
{
  _QWORD *v1; // r8
  __int64 v3; // rax
  __int64 v4; // rdx

  v1 = a1;
  if ( PopPlatformAoAc )
  {
    v3 = *a1;
    v4 = *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 - *a1;
    if ( *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 == *a1 )
      v4 = *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4 - a1[1];
    if ( !v4 )
      goto LABEL_12;
    a1 = (_QWORD *)(*(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 - v3);
    if ( *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 == v3 )
      a1 = (_QWORD *)(*(_QWORD *)GUID_LIDSWITCH_STATE_CHANGE.Data4 - v1[1]);
    if ( !a1 )
      goto LABEL_12;
    a1 = (_QWORD *)(*(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1 - v3);
    if ( *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1 == v3 )
      a1 = (_QWORD *)(*(_QWORD *)GUID_CONSOLE_DISPLAY_STATE.Data4 - v1[1]);
    if ( !a1 )
LABEL_12:
      PopEvaluateInputSuppressionAction(a1, v4, v1);
  }
  return 0LL;
}
