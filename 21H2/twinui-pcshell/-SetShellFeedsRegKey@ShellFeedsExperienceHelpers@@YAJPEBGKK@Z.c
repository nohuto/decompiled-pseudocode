/*
 * XREFs of ?SetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGKK@Z @ 0x180108180
 * Callers:
 *     _lambda_e3d1dbb9eeb8ba237d63926ec8c2eed5_::operator() @ 0x1801070A0 (_lambda_e3d1dbb9eeb8ba237d63926ec8c2eed5_--operator().c)
 *     ?CheckEdgeAvailability@ShellFeedsAvailability@@YAJPEAEPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180107220 (-CheckEdgeAvailability@ShellFeedsAvailability@@YAJPEAEPEAV-$basic_string@GU-$char_traits@G@std@@.c)
 *     ?CheckFeedsAvailability@ShellFeedsAvailability@@YAJPEAEPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180107298 (-CheckFeedsAvailability@ShellFeedsAvailability@@YAJPEAEPEAV-$basic_string@GU-$char_traits@G@std@.c)
 *     ?WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z @ 0x180108328 (-WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z.c)
 *     ?IsFeedsEnabledAtEndPoint@ShellFeedsAvailabilityHelpers@@YAJAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAE1@Z @ 0x1801155CC (-IsFeedsEnabledAtEndPoint@ShellFeedsAvailabilityHelpers@@YAJAEBV-$basic_string@DU-$char_traits@D.c)
 *     ?WriteDeviceEnterpriseStatusToregistry@ShellFeedsAvailabilityHelpers@@YAXXZ @ 0x180116630 (-WriteDeviceEnterpriseStatusToregistry@ShellFeedsAvailabilityHelpers@@YAXXZ.c)
 * Callees:
 *     ?EnsureShellFeedsEncryptionHelper@ShellFeedsExperienceHelpers@@YAPEAVShellFeedsEncryptionHelper@2@XZ @ 0x1800B2A64 (-EnsureShellFeedsEncryptionHelper@ShellFeedsExperienceHelpers@@YAPEAVShellFeedsEncryptionHelper@.c)
 *     ?WriteEncryptedShellFeedsRegKey@ShellFeedsEncryptionHelper@1@QEAAJPEBGKK@Z @ 0x1801082BC (-WriteEncryptedShellFeedsRegKey@ShellFeedsEncryptionHelper@1@QEAAJPEBGKK@Z.c)
 */

__int64 __fastcall ShellFeedsExperienceHelpers::SetShellFeedsRegKey(
        ShellFeedsExperienceHelpers *this,
        const unsigned __int16 *a2)
{
  unsigned int v2; // ebx
  ShellFeedsEncryptionHelper::ShellFeedsEncryptionHelper *v4; // rcx
  unsigned int v5; // r9d

  v2 = (unsigned int)a2;
  qword_180650130 = ShellFeedsExperienceHelpers::EnsureShellFeedsEncryptionHelper(this);
  if ( !qword_180650130 )
    return 2147942414LL;
  ShellFeedsEncryptionHelper::ShellFeedsEncryptionHelper::WriteEncryptedShellFeedsRegKey(
    v4,
    (const unsigned __int16 *)this,
    v2,
    v5);
  return 0LL;
}
