/*
 * XREFs of PspVsmLogBugCheckCallback @ 0x1405A4150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PspVsmLogBugCheckCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _QWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  if ( PspIumLogBuffer )
  {
    ReasonSpecificData[4] = PspIumLogBuffer;
    *((_DWORD *)ReasonSpecificData + 10) = 0x2000;
    *((_OWORD *)ReasonSpecificData + 1) = xmmword_1400413A0;
  }
}
