/*
 * XREFs of KeCanChangeEnclavePageProtection @ 0x14056DE10
 * Callers:
 *     MiProtectEnclavePages @ 0x140645C9C (MiProtectEnclavePages.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiEncls @ 0x140417230 (KiEncls.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiEnclsStatus @ 0x14056E148 (KiEnclsStatus.c)
 */

__int64 KeCanChangeEnclavePageProtection()
{
  _DWORD *v0; // rbp
  unsigned int v1; // eax
  __int64 result; // rax
  _DWORD v3[16]; // [rsp+60h] [rbp+0h] BYREF

  v0 = (_DWORD *)((unsigned __int64)v3 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( !_bittest64(&KeFeatureBits, 0x2Bu) )
    return 3221225659LL;
  memset(v0 + 16, 0, 0x40uLL);
  *(_DWORD *)(((unsigned __int64)v3 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 7;
  do
    v1 = KiEncls(0xEu);
  while ( v1 == 15 );
  result = KiEnclsStatus(v1);
  *v0 = result;
  return result;
}
