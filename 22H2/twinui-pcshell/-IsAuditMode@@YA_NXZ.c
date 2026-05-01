/*
 * XREFs of ?IsAuditMode@@YA_NXZ @ 0x180107D18
 * Callers:
 *     ?CheckFeedsAvailability@ShellFeedsAvailability@@YAJPEAEPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180107128 (-CheckFeedsAvailability@ShellFeedsAvailability@@YAJPEAEPEAV-$basic_string@GU-$char_traits@G@std@.c)
 * Callees:
 *     RegExists @ 0x18014E444 (RegExists.c)
 *     RegGetDword @ 0x18014E528 (RegGetDword.c)
 */

char IsAuditMode(void)
{
  char v0; // bl

  v0 = 1;
  if ( ((unsigned int)RegExists(-2147483646LL, L"System\\Setup\\Status", L"AuditBoot") != 1
     || !(unsigned int)RegGetDword(-2147483646LL, L"System\\Setup\\Status"))
    && (unsigned int)RegExists(-2147483646LL, L"System\\Setup\\Status\\AuditBootVolatile", 0LL) != 1 )
  {
    return 0;
  }
  return v0;
}
