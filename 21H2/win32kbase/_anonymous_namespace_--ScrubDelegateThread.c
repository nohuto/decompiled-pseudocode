/*
 * XREFs of _anonymous_namespace_::ScrubDelegateThread @ 0x1C0097D84
 * Callers:
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagWND___ @ 0x1C0097CF8 (_anonymous_namespace_--ScrubDelegatedWindow_tagWND___.c)
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagBWND___ @ 0x1C0149910 (_anonymous_namespace_--ScrubDelegatedWindow_tagBWND___.c)
 * Callees:
 *     <none>
 */

void __fastcall anonymous_namespace_::ScrubDelegateThread(__int64 a1)
{
  *(_DWORD *)(a1 + 1256) &= ~0x2000u;
  *(_QWORD *)(a1 + 1288) = 0LL;
  *(_QWORD *)(a1 + 1296) = 0LL;
  if ( (*(_DWORD *)(a1 + 1256) & 0x1000000) == 0 )
    *(_DWORD *)(a1 + 488) &= 0xFFFFFF3F;
}
