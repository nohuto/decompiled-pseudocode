/*
 * XREFs of ?SetReleasingResources@CThreadContext@@SAX_N@Z @ 0x18007B580
 * Callers:
 *     ?Release@CLegacyRenderTarget@@UEAAKXZ @ 0x1800DE0B0 (-Release@CLegacyRenderTarget@@UEAAKXZ.c)
 * Callees:
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x1800789A0 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 */

void __fastcall CThreadContext::SetReleasingResources(char a1)
{
  struct CThreadContext *v2; // [rsp+38h] [rbp+10h] BYREF

  if ( (int)CThreadContext::GetCurrent(&v2) >= 0 )
    *(_BYTE *)v2 = a1;
}
