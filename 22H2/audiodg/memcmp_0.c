/*
 * XREFs of memcmp_0 @ 0x140029D43
 * Callers:
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x14000FC90 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x1400222E4 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ?GetNodeMode@CDisplayNode@@QEAAIXZ @ 0x14004C53C (-GetNodeMode@CDisplayNode@@QEAAIXZ.c)
 *     ?IsEqual@CAudioMediaType@@UEAAJPEAUIAudioMediaType@@PEAK@Z @ 0x1400509C0 (-IsEqual@CAudioMediaType@@UEAAJPEAUIAudioMediaType@@PEAK@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl memcmp_0(const void *Buf1, const void *Buf2, size_t Size)
{
  return memcmp(Buf1, Buf2, Size);
}
