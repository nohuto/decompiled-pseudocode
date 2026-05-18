/*
 * XREFs of sub_1800550B4 @ 0x1800550B4
 * Callers:
 *     sub_180055318 @ 0x180055318 (sub_180055318.c)
 * Callees:
 *     atexit @ 0x18011E554 (atexit.c)
 *     _Init_thread_footer @ 0x18011ED48 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18011EDA8 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=2
int *sub_1800550B4()
{
  if ( dword_1802191A0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_1802191A0);
    if ( dword_1802191A0 == -1 )
    {
      dword_180208280 = 1920298050;
      byte_180208284 = 56;
      dword_1802082A0 = 1920298050;
      word_1802082A4 = 13873;
      dword_1802082C0 = 1920298050;
      word_1802082C4 = 12851;
      atexit(sub_18012B9B0);
      Init_thread_footer(&dword_1802191A0);
    }
  }
  return &dword_180208280;
}
