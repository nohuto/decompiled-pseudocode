/*
 * XREFs of Isoch_MappingLoop @ 0x1C0001D7C
 * Callers:
 *     Isoch_MapTransfers @ 0x1C0001D00 (Isoch_MapTransfers.c)
 * Callees:
 *     TR_AttemptStateChange @ 0x1C0001E00 (TR_AttemptStateChange.c)
 *     Isoch_RetrieveNextStage @ 0x1C0002D30 (Isoch_RetrieveNextStage.c)
 *     Isoch_MapStage @ 0x1C0003780 (Isoch_MapStage.c)
 *     Isoch_PrepareStage @ 0x1C00038C0 (Isoch_PrepareStage.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0015850 (WPP_RECORDER_SF_ddL.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Isoch_MappingLoop(_QWORD *a1)
{
  char i; // di
  __int64 result; // rax
  int v4; // edx
  _QWORD *v5; // rcx

  for ( i = 0; ; ++i )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v4 = *(unsigned __int8 *)(a1[6] + 135LL);
      LOBYTE(v4) = 5;
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(a1[7] + 80LL),
        v4,
        14,
        66,
        (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
        *(_BYTE *)(a1[6] + 135LL),
        *(_DWORD *)(a1[7] + 144LL),
        i);
    }
    a1[43] = 0LL;
    if ( !(unsigned __int8)Isoch_RetrieveNextStage(a1) )
      return TR_AttemptStateChange(a1, 3LL, 2LL);
    result = Isoch_PrepareStage(a1);
    if ( (_DWORD)result == 1 )
      continue;
    if ( (_DWORD)result == 3 )
      return result;
    if ( (_DWORD)result == 2 )
      break;
    if ( (_DWORD)result == 4 )
      return TR_AttemptStateChange(a1, 3LL, 2LL);
    result = Isoch_MapStage(a1);
    if ( (_DWORD)result == 2 )
      return result;
    v5 = a1;
    if ( (_DWORD)result == 4 )
      goto LABEL_17;
    result = TR_AttemptStateChange(a1, 3LL, 3LL);
    if ( (_DWORD)result != 3 )
      return result;
  }
  v5 = a1;
LABEL_17:
  result = TR_AttemptStateChange(v5, 3LL, 4LL);
  if ( (_DWORD)result == 3 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
             WdfDriverGlobals,
             a1[40],
             -100000000LL);
  return result;
}
