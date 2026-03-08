/*
 * XREFs of IsValidMouseSensitivity @ 0x1C0218090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall IsValidMouseSensitivity(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx

  v4 = a1;
  SGDGetUserSessionState(a1, a2, a3, a4);
  return (unsigned int)(v4 - 1) <= 0x13;
}
