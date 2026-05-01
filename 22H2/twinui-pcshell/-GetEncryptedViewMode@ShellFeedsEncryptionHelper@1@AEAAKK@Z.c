/*
 * XREFs of ?GetEncryptedViewMode@ShellFeedsEncryptionHelper@1@AEAAKK@Z @ 0x1800B52C8
 * Callers:
 *     ?MigrateShellFeedsSettingRegToEncryption@ShellFeedsEncryptionHelper@1@AEAAJXZ @ 0x1800B5AB8 (-MigrateShellFeedsSettingRegToEncryption@ShellFeedsEncryptionHelper@1@AEAAJXZ.c)
 *     ?WriteEncryptedShellFeedsRegKey@ShellFeedsEncryptionHelper@1@QEAAJPEBGKK@Z @ 0x18010814C (-WriteEncryptedShellFeedsRegKey@ShellFeedsEncryptionHelper@1@QEAAJPEBGKK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ShellFeedsEncryptionHelper::ShellFeedsEncryptionHelper::GetEncryptedViewMode(
        ShellFeedsEncryptionHelper::ShellFeedsEncryptionHelper *this,
        int a2)
{
  __int64 result; // rax

  result = 195948557LL;
  switch ( a2 )
  {
    case 0:
      return *((unsigned int *)this + 1);
    case 1:
      return *((unsigned int *)this + 2);
    case 2:
      return *(unsigned int *)this;
    case -1:
      return *((unsigned int *)this + 3);
  }
  return result;
}
