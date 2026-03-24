/*
 * XREFs of KiIntSteerEventTraceControlCallback @ 0x1407D55D0
 * Callers:
 *     <none>
 * Callees:
 *     KiIntSteerLogStatus @ 0x14052275C (KiIntSteerLogStatus.c)
 */

void __fastcall KiIntSteerEventTraceControlCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  if ( (ControlCode & 0xFFFFFFFD) == 0 )
    KiIntSteerLogStatus(1);
}
