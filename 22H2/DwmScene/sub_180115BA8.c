/*
 * XREFs of sub_180115BA8 @ 0x180115BA8
 * Callers:
 *     sub_180115E98 @ 0x180115E98 (sub_180115E98.c)
 * Callees:
 *     atexit @ 0x18011E554 (atexit.c)
 *     _Init_thread_footer @ 0x18011ED48 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18011EDA8 (_Init_thread_header.c)
 *     _Mtx_init_in_situ @ 0x18011F9A6 (_Mtx_init_in_situ.c)
 */

void *sub_180115BA8()
{
  if ( dword_18021AC50 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_18021AC50);
    if ( dword_18021AC50 == -1 )
    {
      Mtx_init_in_situ((_Mtx_t)&unk_18021AC00, 2);
      atexit(sub_180133AB0);
      Init_thread_footer(&dword_18021AC50);
    }
  }
  return &unk_18021AC00;
}
