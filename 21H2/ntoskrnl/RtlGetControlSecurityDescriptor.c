/*
 * XREFs of RtlGetControlSecurityDescriptor @ 0x1406772D0
 * Callers:
 *     AdtpIsSDValidSelfRelative @ 0x1403F9A44 (AdtpIsSDValidSelfRelative.c)
 *     ObpInsertOrLocateNamedObject @ 0x140662900 (ObpInsertOrLocateNamedObject.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x140676E30 (LocalConvertSDToStringSD_Rev1.c)
 *     SepHasCriticalAcesRemoved @ 0x140679660 (SepHasCriticalAcesRemoved.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetControlSecurityDescriptor(unsigned __int8 *a1, _WORD *a2, _DWORD *a3)
{
  *a3 = *a1;
  if ( *a1 != 1 )
    return 3221225560LL;
  *a2 = *((_WORD *)a1 + 1);
  return 0LL;
}
