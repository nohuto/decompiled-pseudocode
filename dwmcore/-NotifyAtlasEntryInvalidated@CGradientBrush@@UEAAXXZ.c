/*
 * XREFs of ?NotifyAtlasEntryInvalidated@CGradientBrush@@UEAAXXZ @ 0x18024A190
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyAtlasEntryInvalidated@CGradientSource@@MEAAXXZ @ 0x18024A23C (-NotifyAtlasEntryInvalidated@CGradientSource@@MEAAXXZ.c)
 */

void __fastcall CGradientBrush::NotifyAtlasEntryInvalidated(CGradientBrush *this)
{
  CGradientSource::NotifyAtlasEntryInvalidated(this);
  (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this - 11) + 72LL))((char *)this - 88, 5LL);
}
