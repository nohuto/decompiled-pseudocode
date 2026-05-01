/*
 * XREFs of ?WriteEncryptedShellFeedsRegKey@ShellFeedsEncryptionHelper@1@QEAAJPEBGKK@Z @ 0x18010814C
 * Callers:
 *     ?SetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGKK@Z @ 0x180108010 (-SetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGKK@Z.c)
 * Callees:
 *     ?GetEncryptedViewMode@ShellFeedsEncryptionHelper@1@AEAAKK@Z @ 0x1800B52C8 (-GetEncryptedViewMode@ShellFeedsEncryptionHelper@1@AEAAKK@Z.c)
 *     ?SetShellFeedsRegKey@ShellFeedsRegistryHelper@@YAJPEBGKK@Z @ 0x1800B7BD8 (-SetShellFeedsRegKey@ShellFeedsRegistryHelper@@YAJPEBGKK@Z.c)
 */

__int64 __fastcall ShellFeedsEncryptionHelper::ShellFeedsEncryptionHelper::WriteEncryptedShellFeedsRegKey(
        ShellFeedsEncryptionHelper::ShellFeedsEncryptionHelper *this,
        const unsigned __int16 *a2,
        unsigned int a3)
{
  ShellFeedsEncryptionHelper::ShellFeedsEncryptionHelper *v3; // rsi
  int v6; // eax
  unsigned __int64 EncryptedViewMode; // rdx
  const WCHAR *v8; // rcx

  v3 = qword_180650120;
  v6 = _o__wcsicmp(L"ShellFeedsTaskbarViewMode", a2);
  EncryptedViewMode = a3;
  if ( v6 )
  {
    v8 = a2;
  }
  else
  {
    EncryptedViewMode = (unsigned int)ShellFeedsEncryptionHelper::ShellFeedsEncryptionHelper::GetEncryptedViewMode(
                                        v3,
                                        a3);
    v8 = L"EnShellFeedsTaskbarViewMode";
  }
  ShellFeedsRegistryHelper::SetShellFeedsRegKey(v8, (const unsigned __int16 *)EncryptedViewMode);
  return 0LL;
}
