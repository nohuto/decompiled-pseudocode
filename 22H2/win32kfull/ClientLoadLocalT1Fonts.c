/*
 * XREFs of ClientLoadLocalT1Fonts @ 0x1C00E6368
 * Callers:
 *     xxxLW_LoadFonts @ 0x1C00E6120 (xxxLW_LoadFonts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ClientLoadLocalT1Fonts(__int64 a1)
{
  int v2; // [rsp+40h] [rbp+8h] BYREF
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0LL;
  v2 = 0;
  if ( gdwInAtomicOperation )
  {
    a1 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(a1);
  EtwTraceBeginCallback(77LL);
  KeUserModeCallback(77LL, 0LL, 0LL, &v3, &v2);
  EtwTraceEndCallback(77LL);
  return EnterCrit(0LL, 1LL);
}
