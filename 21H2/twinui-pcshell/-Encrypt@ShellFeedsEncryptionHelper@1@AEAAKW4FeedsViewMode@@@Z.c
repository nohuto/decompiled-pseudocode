/*
 * XREFs of ?Encrypt@ShellFeedsEncryptionHelper@1@AEAAKW4FeedsViewMode@@@Z @ 0x1800B256C
 * Callers:
 *     ??0ShellFeedsEncryptionHelper@0@QEAA@XZ @ 0x1800B0FDC (--0ShellFeedsEncryptionHelper@0@QEAA@XZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     memset_0 @ 0x180090978 (memset_0.c)
 *     ?swprintf@@YAHQEAGQEBGZZ @ 0x1800BA2A4 (-swprintf@@YAHQEAGQEBGZZ.c)
 */

__int64 __fastcall ShellFeedsEncryptionHelper::ShellFeedsEncryptionHelper::Encrypt(__int64 a1, unsigned int a2)
{
  HRESULT v4; // eax
  BYTE pbHash[4]; // [rsp+20h] [rbp-88h] BYREF
  wchar_t String[48]; // [rsp+30h] [rbp-78h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  memset_0(String, 0, 0x56uLL);
  *(_DWORD *)pbHash = 195948557;
  swprintf(String, L"%s_%d", a1 + 16, a2);
  _wcsrev(String);
  v4 = HashData((BYTE *)String, 0x53u, pbHash, 4u);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x6E,
      (__int64)"internal\\shellcommonshell\\inc\\ShellFeeds\\shellfeedsencryptionhelper.h",
      (const char *)(unsigned int)v4);
  return *(unsigned int *)pbHash;
}
