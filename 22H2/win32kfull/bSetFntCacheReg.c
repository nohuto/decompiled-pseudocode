/*
 * XREFs of bSetFntCacheReg @ 0x1C00E5994
 * Callers:
 *     InitFNTCache @ 0x1C00E53A0 (InitFNTCache.c)
 *     bServicingStackModifiedFonts @ 0x1C00E5940 (bServicingStackModifiedFonts.c)
 *     EngCloseFNTCache @ 0x1C00E61F0 (EngCloseFNTCache.c)
 *     EngFntCacheFault @ 0x1C0288BD0 (EngFntCacheFault.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bSetFntCacheReg(unsigned int a1, int a2)
{
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int Data; // [rsp+58h] [rbp+10h] BYREF

  Data = a2;
  DestinationString = 0LL;
  if ( a1 >= 3 )
    return 0LL;
  RtlInitUnicodeString(&DestinationString, (PCWSTR)(&g_fntCacheRegistryPaths)[a1]);
  return ZwSetValueKey(ghkeyGreInitialize, &DestinationString, 0, 4u, &Data, 4u) >= 0;
}
