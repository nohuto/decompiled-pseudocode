/*
 * XREFs of HUBDSM_CheckingIfAddDeviceToGlobalListRetryCountExceededLimit @ 0x1C0023290
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall HUBDSM_CheckingIfAddDeviceToGlobalListRetryCountExceededLimit(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v2; // edi
  unsigned __int8 v3; // al
  int v5; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 4061;
  v3 = *(_BYTE *)(v1 + 2456) + 1;
  *(_BYTE *)(v1 + 2456) = v3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = v3;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      3u,
      5u,
      0x12u,
      (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids,
      v5);
  }
  if ( *(_BYTE *)(v1 + 2456) > 0xAu )
  {
    v2 = 4089;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
        2u,
        5u,
        0x13u,
        (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids);
  }
  return v2;
}
