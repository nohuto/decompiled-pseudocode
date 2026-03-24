/*
 * XREFs of IS_UI_LANGID @ 0x1C0107630
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C00DCE08 (xxxDrawCaptionBar.c)
 *     BitBltSysBmp @ 0x1C010723C (BitBltSysBmp.c)
 * Callees:
 *     <none>
 */

__int64 IS_UI_LANGID()
{
  unsigned int v0; // ebx
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v2 = 0;
  if ( (int)RtlGetThreadLangIdByIndex(0LL, 0LL, &v2, 0LL) < 0 )
    return 0LL;
  LOBYTE(v0) = v2 == 1037;
  return v0;
}
