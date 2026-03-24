/*
 * XREFs of Win32QueryPoolSize @ 0x1C0139DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

SIZE_T __fastcall Win32QueryPoolSize(_QWORD *a1)
{
  unsigned __int8 QuotaCharged; // [rsp+38h] [rbp+10h] BYREF

  if ( (gdwPoolFlags & 1) != 0 )
    return *(a1 - 4);
  QuotaCharged = 0;
  return ExQueryPoolBlockSize(a1, &QuotaCharged);
}
