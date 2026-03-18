/*
 * XREFs of SepGetScopedPolicySid @ 0x1405F4288
 * Callers:
 *     SeComputeCreatorDeniedRights @ 0x1402AC350 (SeComputeCreatorDeniedRights.c)
 *     SeAccessCheckWithHint @ 0x1402F9CF0 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x1402FBEC0 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x140383ABC (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140722B40 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     RtlFindAceByType @ 0x140349610 (RtlFindAceByType.c)
 */

unsigned __int8 *__fastcall SepGetScopedPolicySid(__int64 a1)
{
  unsigned __int8 *result; // rax
  unsigned int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  while ( 1 )
  {
    result = RtlFindAceByType(a1, 19, &v3);
    if ( result )
    {
      if ( (result[1] & 8) == 0 )
        break;
    }
    ++v3;
    if ( !result )
      return result;
  }
  result += 8;
  return result;
}
