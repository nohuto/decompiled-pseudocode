/*
 * XREFs of sub_180043E00 @ 0x180043E00
 * Callers:
 *     sub_180043F74 @ 0x180043F74 (sub_180043F74.c)
 * Callees:
 *     sub_18000FB34 @ 0x18000FB34 (sub_18000FB34.c)
 *     atexit @ 0x18011E554 (atexit.c)
 *     _Init_thread_footer @ 0x18011ED48 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18011EDA8 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=8
__int64 *sub_180043E00()
{
  if ( dword_1802188C8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_1802188C8);
    if ( dword_1802188C8 == -1 )
    {
      qword_180208160 = 0x6C6E4F6874706544LL;
      byte_180208168 = 121;
      qmemcpy(&qword_180208180, "Diagnostics", 11);
      qmemcpy(&qword_1802081A0, "Background", 10);
      qword_1802081C0 = 0x73614D6168706C41LL;
      byte_1802081C8 = 107;
      qmemcpy(&qword_1802081E0, "AlphaBlend", 10);
      qmemcpy(&qword_180208220, "DepthToColor", 12);
      sub_18000FB34(qword_180208240, 0x16uLL, 0LL, "StochasticTransparency");
      qword_180208278 = 15LL;
      qword_180208270 = 12LL;
      strcpy((char *)&qword_180208260, "GLTFMaterial");
      atexit(sub_18012B990);
      Init_thread_footer(&dword_1802188C8);
    }
  }
  return &qword_180208160;
}
