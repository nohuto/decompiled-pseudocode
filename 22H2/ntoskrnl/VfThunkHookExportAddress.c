/*
 * XREFs of VfThunkHookExportAddress @ 0x140ADC52C
 * Callers:
 *     VerifierMmGetSystemRoutineAddress @ 0x140AE3FB0 (VerifierMmGetSystemRoutineAddress.c)
 * Callees:
 *     ViThunkHookExportAddress @ 0x140ADCC48 (ViThunkHookExportAddress.c)
 */

__int64 __fastcall VfThunkHookExportAddress(__int64 a1, __int64 a2)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  if ( !(unsigned int)ViThunkHookExportAddress(&v4, a2, &VfRegularThunks)
    && !(unsigned int)ViThunkHookExportAddress(&v4, a2, &VfPoolThunks) )
  {
    ViThunkHookExportAddress(&v4, a2, &VfDifThunks);
  }
  return v4;
}
