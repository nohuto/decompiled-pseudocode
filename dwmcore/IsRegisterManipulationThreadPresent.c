/*
 * XREFs of IsRegisterManipulationThreadPresent @ 0x18010FA08
 * Callers:
 *     ?ManipulationThreadMain@CGlobalManipulationManager@@EEAAJXZ @ 0x1800CAD30 (-ManipulationThreadMain@CGlobalManipulationManager@@EEAAJXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1801103F0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsRegisterManipulationThreadPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1803E2714 == 1 )
    return 1;
  if ( dword_1803E2714 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"HJ", &v1) < 0 )
    return 0;
  result = v1;
  dword_1803E2714 = 2 - (v1 != 0);
  return result;
}
