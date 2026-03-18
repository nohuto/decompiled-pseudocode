/*
 * XREFs of IsCreateHolographicCompositorPresent @ 0x1801111A4
 * Callers:
 *     ?EnsureHolographicCompositor@CHolographicClient@@AEAAJXZ @ 0x1802ACD10 (-EnsureHolographicCompositor@CHolographicClient@@AEAAJXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180110F30 (ApiSetQueryApiSetPresence_0.c)
 */

char IsCreateHolographicCompositorPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1803E57B8 == 1 )
    return 1;
  if ( dword_1803E57B8 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0((__int64)L"RT", (__int64)&v1) < 0 )
    return 0;
  result = v1;
  dword_1803E57B8 = 2 - (v1 != 0);
  return result;
}
