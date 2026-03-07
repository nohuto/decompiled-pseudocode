__int64 __fastcall COREDEVICEACCESS::AcquireExclusiveUncheck(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 144) )
    COREACCESS::AcquireExclusive(a1 + 72, 2LL);
  return COREACCESS::AcquireExclusive(a1 + 8, 2LL);
}
