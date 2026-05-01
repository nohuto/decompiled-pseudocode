/*
 * XREFs of ?GetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGPEAK@Z @ 0x1800B5608
 * Callers:
 *     ?IsFeedsAvailable@ShellFeedsExperienceHelpers@@YAJPEAE@Z @ 0x1800B5A6C (-IsFeedsAvailable@ShellFeedsExperienceHelpers@@YAJPEAE@Z.c)
 *     ?WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z @ 0x180108328 (-WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z.c)
 *     ?GetEnablementCheckURL@ShellFeedsAvailabilityHelpers@@YAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV23@@Z @ 0x180109D34 (-GetEnablementCheckURL@ShellFeedsAvailabilityHelpers@@YAJAEBV-$basic_string@GU-$char_traits@G@st.c)
 * Callees:
 *     ?EnsureShellFeedsEncryptionHelper@ShellFeedsExperienceHelpers@@YAPEAVShellFeedsEncryptionHelper@2@XZ @ 0x1800B2A64 (-EnsureShellFeedsEncryptionHelper@ShellFeedsExperienceHelpers@@YAPEAVShellFeedsEncryptionHelper@.c)
 *     ?ReadEncryptedShellFeedsRegKey@ShellFeedsEncryptionHelper@1@QEAAJPEBGPEAK@Z @ 0x1800B6AE4 (-ReadEncryptedShellFeedsRegKey@ShellFeedsEncryptionHelper@1@QEAAJPEBGPEAK@Z.c)
 */

__int64 __fastcall ShellFeedsExperienceHelpers::GetShellFeedsRegKey(
        ShellFeedsExperienceHelpers *this,
        unsigned int *a2,
        unsigned int *a3)
{
  ShellFeedsEncryptionHelper::ShellFeedsEncryptionHelper *v5; // rcx

  qword_180650128 = (__int64)ShellFeedsExperienceHelpers::EnsureShellFeedsEncryptionHelper(this);
  if ( !qword_180650128 )
    return 2147942414LL;
  ShellFeedsEncryptionHelper::ShellFeedsEncryptionHelper::ReadEncryptedShellFeedsRegKey(
    v5,
    (const unsigned __int16 *)this,
    a2);
  return 0LL;
}
