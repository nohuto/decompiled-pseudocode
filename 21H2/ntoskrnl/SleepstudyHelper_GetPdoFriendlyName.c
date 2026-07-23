/*
 * XREFs of SleepstudyHelper_GetPdoFriendlyName @ 0x1408FB550
 * Callers:
 *     <none>
 * Callees:
 *     SshpGenerateDeviceFriendlyName @ 0x1408FB280 (SshpGenerateDeviceFriendlyName.c)
 */

__int64 __fastcall SleepstudyHelper_GetPdoFriendlyName(struct _DEVICE_OBJECT *a1, UNICODE_STRING *a2)
{
  return SshpGenerateDeviceFriendlyName(a1, 0LL, 0x6C687373u, a2);
}
