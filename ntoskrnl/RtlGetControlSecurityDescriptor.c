/*
 * XREFs of RtlGetControlSecurityDescriptor @ 0x140750B60
 * Callers:
 *     AdtpIsSDValidSelfRelative @ 0x14066EB8C (AdtpIsSDValidSelfRelative.c)
 *     ObpInsertOrLocateNamedObject @ 0x140696BDC (ObpInsertOrLocateNamedObject.c)
 *     SepHasCriticalAcesRemoved @ 0x14074E8C0 (SepHasCriticalAcesRemoved.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x14074F708 (LocalConvertSDToStringSD_Rev1.c)
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
