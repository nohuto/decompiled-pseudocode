/*
 * XREFs of ?ReadEncryptedShellFeedsRegKey@ShellFeedsEncryptionHelper@1@QEAAJPEBGPEAK@Z @ 0x1800B6AE4
 * Callers:
 *     ?GetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGPEAK@Z @ 0x1800B5608 (-GetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGPEAK@Z.c)
 * Callees:
 *     ?GetShellFeedsRegKey@ShellFeedsRegistryHelper@@YAJPEBGPEAK@Z @ 0x1800B5650 (-GetShellFeedsRegKey@ShellFeedsRegistryHelper@@YAJPEBGPEAK@Z.c)
 */

__int64 __fastcall ShellFeedsEncryptionHelper::ShellFeedsEncryptionHelper::ReadEncryptedShellFeedsRegKey(
        ShellFeedsEncryptionHelper::ShellFeedsEncryptionHelper *this,
        const unsigned __int16 *a2,
        BYTE *a3)
{
  _DWORD *v3; // rsi
  unsigned int *v6; // r8
  int v7; // ebx
  int v8; // ecx

  v3 = (_DWORD *)qword_180650128;
  v7 = 0;
  if ( _o__wcsicmp(L"ShellFeedsTaskbarViewMode", a2) )
  {
    ShellFeedsRegistryHelper::GetShellFeedsRegKey(a2, a3, v6);
  }
  else
  {
    ShellFeedsRegistryHelper::GetShellFeedsRegKey(L"EnShellFeedsTaskbarViewMode", a3, v6);
    v8 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 == *v3 )
    {
      v7 = 2;
    }
    else if ( v8 != v3[1] )
    {
      if ( v8 == v3[2] )
        v7 = 1;
      else
        v7 = (v8 != v3[3]) - 1;
    }
    *(_DWORD *)a3 = v7;
  }
  return 0LL;
}
