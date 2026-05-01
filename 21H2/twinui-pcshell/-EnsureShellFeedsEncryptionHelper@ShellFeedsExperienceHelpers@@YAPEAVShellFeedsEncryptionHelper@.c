/*
 * XREFs of ?EnsureShellFeedsEncryptionHelper@ShellFeedsExperienceHelpers@@YAPEAVShellFeedsEncryptionHelper@2@XZ @ 0x1800B2A64
 * Callers:
 *     ?GetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGPEAK@Z @ 0x1800B5608 (-GetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGPEAK@Z.c)
 *     ?SetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGKK@Z @ 0x180108180 (-SetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGKK@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800904EC (--2@YAPEAX_K@Z.c)
 *     ??0ShellFeedsEncryptionHelper@0@QEAA@XZ @ 0x1800B0FDC (--0ShellFeedsEncryptionHelper@0@QEAA@XZ.c)
 */

struct ShellFeedsEncryptionHelper::ShellFeedsEncryptionHelper *__fastcall ShellFeedsExperienceHelpers::EnsureShellFeedsEncryptionHelper(
        ShellFeedsExperienceHelpers *this)
{
  struct ShellFeedsEncryptionHelper::ShellFeedsEncryptionHelper *result; // rax
  ShellFeedsEncryptionHelper::ShellFeedsEncryptionHelper *v2; // rax

  result = (struct ShellFeedsEncryptionHelper::ShellFeedsEncryptionHelper *)qword_180650128;
  if ( !qword_180650128 )
  {
    try
    {
      v2 = (ShellFeedsEncryptionHelper::ShellFeedsEncryptionHelper *)operator new(0x60uLL);
      result = ShellFeedsEncryptionHelper::ShellFeedsEncryptionHelper::ShellFeedsEncryptionHelper(v2);
      qword_180650128 = (__int64)result;
    }
    catch ( ... )
    {
      qword_180650128 = 0LL;
      return 0LL;
    }
  }
  return result;
}
