/*
 * XREFs of KiIntSteerEventTraceControlCallback @ 0x140861B80
 * Callers:
 *     <none>
 * Callees:
 *     KiIntSteerLogStatus @ 0x1402A8FAC (KiIntSteerLogStatus.c)
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
