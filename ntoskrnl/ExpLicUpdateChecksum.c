/*
 * XREFs of ExpLicUpdateChecksum @ 0x140606DE8
 * Callers:
 *     ExpGetLicenseTamperState @ 0x140606C7C (ExpGetLicenseTamperState.c)
 *     sub_1409F6C60 @ 0x1409F6C60 (sub_1409F6C60.c)
 *     SLUpdateLicenseDataInternal @ 0x1409F78B4 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpLicUpdateChecksum(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a1 || !a3 )
    return 3221225485LL;
  *a3 = 0LL;
  return result;
}
