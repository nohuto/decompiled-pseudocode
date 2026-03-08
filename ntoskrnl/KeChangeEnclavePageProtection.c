/*
 * XREFs of KeChangeEnclavePageProtection @ 0x14056DED0
 * Callers:
 *     MiProtectEnclavePages @ 0x140645C9C (MiProtectEnclavePages.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiEncls @ 0x140417230 (KiEncls.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiEnclsStatus @ 0x14056E148 (KiEnclsStatus.c)
 */

__int64 __fastcall KeChangeEnclavePageProtection(__int64 a1, char a2)
{
  int *v2; // rbp
  unsigned int v4; // edi
  int v5; // eax
  int v6; // eax
  unsigned int v7; // eax
  _BYTE v9[80]; // [rsp+B0h] [rbp+B0h] BYREF

  v2 = (int *)((unsigned __int64)v9 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( !_bittest64(&KeFeatureBits, 0x2Bu) )
    return 3221225659LL;
  memset((void *)((unsigned __int64)v9 & 0xFFFFFFFFFFFFFFC0uLL), 0, 0x40uLL);
  if ( (a2 & 8) != 0 )
  {
    v4 = 15;
    *v2 = 256;
  }
  else if ( a2 >= 0 )
  {
    v4 = 14;
    v5 = *v2;
    if ( (a2 & 1) != 0 )
      v5 = 1;
    *v2 = v5;
    v6 = a2 & 1 | 2;
    if ( (a2 & 2) != 0 )
      *v2 = v6;
    else
      v6 = a2 & 1;
    if ( (a2 & 4) != 0 )
      *v2 = v6 | 4;
  }
  else
  {
    v4 = 15;
    *v2 = 1024;
  }
  do
    v7 = KiEncls(v4);
  while ( v7 == 15 );
  return KiEnclsStatus(v7);
}
