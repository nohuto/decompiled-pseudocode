/*
 * XREFs of IsClearDelegationCaptureSupported @ 0x1C00A9300
 * Callers:
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagWND___ @ 0x1C00A9270 (_anonymous_namespace_--ScrubDelegatedWindow_tagWND___.c)
 *     zzzDestroyQueue @ 0x1C01553C0 (zzzDestroyQueue.c)
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagBWND___ @ 0x1C015D4A0 (_anonymous_namespace_--ScrubDelegatedWindow_tagBWND___.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 IsClearDelegationCaptureSupported()
{
  if ( qword_1C02D66E8 )
    return qword_1C02D66E8();
  else
    return 3221225659LL;
}
