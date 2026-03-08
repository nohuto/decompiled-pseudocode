/*
 * XREFs of CarpSecondaryDataCallback @ 0x14036E2D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CarpSecondaryDataCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _OWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  ReasonSpecificData[1] = CarSecondaryDataGuid;
  *((_DWORD *)ReasonSpecificData + 10) = dword_140C34B44;
  *((_QWORD *)ReasonSpecificData + 4) = &CarViolationSnapshot;
}
