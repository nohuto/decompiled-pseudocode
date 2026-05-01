/*
 * XREFs of ?swprintf@@YAHQEAGQEBGZZ @ 0x1800BA2A4
 * Callers:
 *     ?Encrypt@ShellFeedsEncryptionHelper@1@AEAAKW4FeedsViewMode@@@Z @ 0x1800B256C (-Encrypt@ShellFeedsEncryptionHelper@1@AEAAKW4FeedsViewMode@@@Z.c)
 * Callees:
 *     vswprintf @ 0x180090990 (vswprintf.c)
 */

int swprintf(unsigned __int16 *const a1, const wchar_t *a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  return vswprintf(a1, 0x7FFFFFFFuLL, a2, va);
}
