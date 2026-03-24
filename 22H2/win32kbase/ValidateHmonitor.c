/*
 * XREFs of ValidateHmonitor @ 0x1C0010E00
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C003ED88 (xxxCreateThreadInfo.c)
 * Callees:
 *     HMValidateSharedHandle @ 0x1C0010E18 (HMValidateSharedHandle.c)
 */

__int64 __fastcall ValidateHmonitor(__int64 a1)
{
  return HMValidateSharedHandle(a1);
}
