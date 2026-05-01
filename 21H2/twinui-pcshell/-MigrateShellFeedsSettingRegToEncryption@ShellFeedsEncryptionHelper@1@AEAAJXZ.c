/*
 * XREFs of ?MigrateShellFeedsSettingRegToEncryption@ShellFeedsEncryptionHelper@1@AEAAJXZ @ 0x1800B5AD8
 * Callers:
 *     ??0ShellFeedsEncryptionHelper@0@QEAA@XZ @ 0x1800B0FDC (--0ShellFeedsEncryptionHelper@0@QEAA@XZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateShellFeedsRegEncryptionFlag@ShellFeedsEncryptionHelper@1@AEAAJXZ @ 0x1800B2098 (-CreateShellFeedsRegEncryptionFlag@ShellFeedsEncryptionHelper@1@AEAAJXZ.c)
 *     ?GetEncryptedViewMode@ShellFeedsEncryptionHelper@1@AEAAKK@Z @ 0x1800B52E8 (-GetEncryptedViewMode@ShellFeedsEncryptionHelper@1@AEAAKK@Z.c)
 *     ?GetShellFeedsRegKey@ShellFeedsRegistryHelper@@YAJPEBGPEAK@Z @ 0x1800B5650 (-GetShellFeedsRegKey@ShellFeedsRegistryHelper@@YAJPEBGPEAK@Z.c)
 *     ?SetShellFeedsRegKey@ShellFeedsRegistryHelper@@YAJPEBGKK@Z @ 0x1800B7BF8 (-SetShellFeedsRegKey@ShellFeedsRegistryHelper@@YAJPEBGKK@Z.c)
 */

__int64 __fastcall ShellFeedsEncryptionHelper::ShellFeedsEncryptionHelper::MigrateShellFeedsSettingRegToEncryption(
        ShellFeedsEncryptionHelper::ShellFeedsEncryptionHelper *this,
        __int64 a2,
        unsigned int *a3)
{
  int ShellFeedsRegKey; // eax
  unsigned int v5; // ebx
  __int64 result; // rax
  unsigned int EncryptedViewMode; // eax
  unsigned int v8; // r8d
  unsigned int v9; // r9d
  ShellFeedsEncryptionHelper::ShellFeedsEncryptionHelper *v10; // rcx
  bool v11; // cc
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int Data; // [rsp+38h] [rbp+10h] BYREF

  Data = 0;
  ShellFeedsRegKey = ShellFeedsRegistryHelper::GetShellFeedsRegKey(L"ShellFeedsTaskbarViewMode", (LPBYTE)&Data, a3);
  v5 = ShellFeedsRegKey;
  if ( ShellFeedsRegKey >= 0 )
  {
    EncryptedViewMode = ShellFeedsEncryptionHelper::ShellFeedsEncryptionHelper::GetEncryptedViewMode(this, Data);
    result = ShellFeedsRegistryHelper::SetShellFeedsRegKey(
               L"EnShellFeedsTaskbarViewMode",
               (const unsigned __int16 *)EncryptedViewMode,
               v8,
               v9);
    v11 = (int)result <= 0;
    if ( (_DWORD)result
      || (result = ShellFeedsEncryptionHelper::ShellFeedsEncryptionHelper::CreateShellFeedsRegEncryptionFlag(v10),
          v11 = (int)result <= 0,
          (_DWORD)result) )
    {
      if ( !v11 )
        return (unsigned __int16)result | 0x80070000;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAF,
      (__int64)"internal\\shellcommonshell\\inc\\ShellFeeds\\shellfeedsencryptionhelper.h",
      (const char *)(unsigned int)ShellFeedsRegKey);
    return v5;
  }
  return result;
}
