void __fastcall CGradientBrush::NotifyAtlasEntryInvalidated(CGradientBrush *this)
{
  CGradientSource::NotifyAtlasEntryInvalidated(this);
  (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this - 11) + 72LL))((char *)this - 88, 5LL);
}
