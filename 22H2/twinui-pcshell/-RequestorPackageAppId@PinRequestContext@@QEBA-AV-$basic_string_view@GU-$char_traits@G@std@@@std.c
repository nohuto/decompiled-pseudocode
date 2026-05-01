/*
 * XREFs of ?RequestorPackageAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x18013FEF8
 * Callers:
 *     ?AreEquivalentPinSources@@YA_NV?$shared_ptr@VPinRequestContext@@@std@@0@Z @ 0x180137560 (-AreEquivalentPinSources@@YA_NV-$shared_ptr@VPinRequestContext@@@std@@0@Z.c)
 *     _anonymous_namespace_::DoesRequestorMeetPinningForegroundRequirements @ 0x180138E88 (_anonymous_namespace_--DoesRequestorMeetPinningForegroundRequirements.c)
 *     ?FromProcessThread@PinRequestContext@@SA?AV?$shared_ptr@VPinRequestContext@@@std@@PEAXK@Z @ 0x180139228 (-FromProcessThread@PinRequestContext@@SA-AV-$shared_ptr@VPinRequestContext@@@std@@PEAXK@Z.c)
 *     _anonymous_namespace_::TryGetRequestorDisplayInformation @ 0x180143AB0 (_anonymous_namespace_--TryGetRequestorDisplayInformation.c)
 *     ?UpdateRequestorBestAvailableAppId@PinRequestContext@@AEAAXXZ @ 0x1801444CC (-UpdateRequestorBestAvailableAppId@PinRequestContext@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall PinRequestContext::RequestorPackageAppId(_QWORD *a1, _OWORD *a2)
{
  __int64 v2; // rax
  _OWORD *result; // rax
  __int128 v4; // [rsp+0h] [rbp-18h]

  if ( *a1 )
  {
    *(_QWORD *)&v4 = *a1;
    v2 = -1LL;
    do
      ++v2;
    while ( *(_WORD *)(*a1 + 2 * v2) );
    *((_QWORD *)&v4 + 1) = v2;
  }
  else
  {
    v4 = 0uLL;
  }
  result = a2;
  *a2 = v4;
  return result;
}
