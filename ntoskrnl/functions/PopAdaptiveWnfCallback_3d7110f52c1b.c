__int64 __fastcall PopAdaptiveWnfCallback(__int64 a1, _QWORD *a2)
{
  bool v2; // zf
  __int64 result; // rax
  __int64 v4; // rdx
  int v5; // r8d
  int v6; // r9d
  unsigned int v7; // [rsp+20h] [rbp-38h] BYREF
  int v8; // [rsp+28h] [rbp-30h] BYREF
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF

  v2 = *a2 == WNF_HPM_GLOBAL_HUMAN_PRESENCE_STATE;
  v9 = 0LL;
  if ( v2 )
  {
    v7 = 16;
    result = ExQueryWnfStateData(a1, &v8, &v9, &v7);
    if ( (int)result < 0 )
      return result;
    if ( v7 < 0x10 )
      return 3221225485LL;
    if ( !PopConsoleSession || !DWORD2(v9) || SDWORD2(v9) >= 3 )
      return 0LL;
    PopAcquireAdaptiveLock(0, v4);
    if ( DWORD2(v9) == 2 )
    {
      v5 = PopAdaptiveSensorInattentiveDisplayTimeout;
      if ( PopAdaptiveSensorInattentiveDisplayTimeout || PopAdaptiveSensorInattentiveDimTimeout )
      {
        v6 = PopAdaptiveSensorInattentiveDimTimeout;
LABEL_16:
        qword_140C398E8 = v9;
        byte_140C398E0[0] = 1;
        dword_140C398F0 = v5;
        dword_140C398F4 = v6;
        PopDiagTraceAdaptiveOverrideTriggered(v9);
LABEL_18:
        PopReleaseAdaptiveLock();
        return 0LL;
      }
    }
    else if ( DWORD2(v9) == 1 )
    {
      v5 = PopAdaptiveSensorAwayDisplayTimeout;
      if ( PopAdaptiveSensorAwayDisplayTimeout || PopAdaptiveSensorAwayDimTimeout )
      {
        v6 = PopAdaptiveSensorAwayDimTimeout;
        goto LABEL_16;
      }
    }
    PopAdaptiveConsoleSessionOverrideClear(0, 2);
    goto LABEL_18;
  }
  return 3221225659LL;
}
