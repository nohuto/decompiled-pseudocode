/*
 * XREFs of NtUserSoundSentry @ 0x1C01DED70
 * Callers:
 *     <none>
 * Callees:
 *     xxxSoundSentry @ 0x1C01F6208 (xxxSoundSentry.c)
 */

__int64 NtUserSoundSentry()
{
  __int64 v0; // rcx
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9

  EnterCrit(0LL, 0LL);
  v1 = (int)xxxSoundSentry(v0);
  UserSessionSwitchLeaveCrit(v3, v2, v4, v5);
  return v1;
}
