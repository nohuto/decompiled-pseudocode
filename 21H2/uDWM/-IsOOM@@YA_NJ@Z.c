/*
 * XREFs of ?IsOOM@@YA_NJ@Z @ 0x180004610
 * Callers:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x1800043B4 (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall IsOOM(int a1)
{
  char result; // al
  _DWORD *v2; // rdx
  unsigned int v3; // r8d

  result = 0;
  v2 = &unk_1800CC6E0;
  v3 = 0;
  while ( *v2 != a1 )
  {
    ++v3;
    ++v2;
    if ( v3 >= 0xA )
      return result;
  }
  return 1;
}
