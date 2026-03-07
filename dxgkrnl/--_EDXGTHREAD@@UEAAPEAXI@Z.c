int *__fastcall DXGTHREAD::`vector deleting destructor'(int *Entry, char a2)
{
  int v5; // edx
  int v6; // r8d

  Entry[8] = 1409316932;
  *(_QWORD *)Entry = &ReferenceCounted::`vftable';
  if ( Entry[2] )
  {
    WdLogSingleEntry1(2LL, Entry[2]);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          Entry[2],
          v5,
          v6,
          0,
          0,
          -1,
          (__int64)L"Reference counted instance being destroyed still has %I64d outstanding references on it!",
          Entry[2],
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( (a2 & 1) != 0 )
    ExFreeToLookasideListEx(&g_DxgkThreadLookasideList, Entry);
  return Entry;
}
