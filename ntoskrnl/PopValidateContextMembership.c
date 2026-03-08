/*
 * XREFs of PopValidateContextMembership @ 0x14079BF0C
 * Callers:
 *     PopGetSettingNotificationName @ 0x14068CCC4 (PopGetSettingNotificationName.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x1402BDFD0 (RtlCheckTokenMembership.c)
 */

__int64 __fastcall PopValidateContextMembership(void *a1)
{
  __int64 result; // rax
  char v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  result = RtlCheckTokenMembership(0LL, a1, &v2);
  if ( (int)result < 0 || !v2 )
    return 3221225506LL;
  return result;
}
