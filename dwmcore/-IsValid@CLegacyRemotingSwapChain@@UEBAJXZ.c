/*
 * XREFs of ?IsValid@CLegacyRemotingSwapChain@@UEBAJXZ @ 0x18010A34C
 * Callers:
 *     ?IsValid@CLegacyRemotingSwapChain@@$4PPPPPPPM@A@EBAJXZ @ 0x18011D4B0 (-IsValid@CLegacyRemotingSwapChain@@$4PPPPPPPM@A@EBAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyRemotingSwapChain::IsValid(CLegacyRemotingSwapChain *this)
{
  __int64 v1; // rdx
  __int64 (__fastcall ***v2)(_QWORD); // rcx

  v1 = *((_QWORD *)this - 24);
  if ( !v1 )
    return 2291662989LL;
  v2 = (__int64 (__fastcall ***)(_QWORD))(v1 + 8 + *(int *)(*(_QWORD *)(v1 + 8) + 8LL));
  return (**v2)(v2);
}
