/*
 * XREFs of PopValidateContextMembership @ 0x1407EC09C
 * Callers:
 *     PopGetSettingNotificationName @ 0x140783590 (PopGetSettingNotificationName.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x14036FA40 (RtlCheckTokenMembership.c)
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
