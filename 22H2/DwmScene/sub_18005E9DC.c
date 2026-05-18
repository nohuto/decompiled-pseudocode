/*
 * XREFs of sub_18005E9DC @ 0x18005E9DC
 * Callers:
 *     sub_18005EAC4 @ 0x18005EAC4 (sub_18005EAC4.c)
 * Callees:
 *     atexit @ 0x18011E554 (atexit.c)
 *     _Init_thread_footer @ 0x18011ED48 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18011EDA8 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *sub_18005E9DC()
{
  if ( dword_180219730 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_180219730);
    if ( dword_180219730 == -1 )
    {
      qword_1802084A0 = 0x6C6E4F6874706544LL;
      byte_1802084A8 = 121;
      qmemcpy(&qword_1802084C0, "Diagnostics", 11);
      qword_1802084E0 = 0x73614D6168706C41LL;
      byte_1802084E8 = 107;
      qmemcpy(&qword_180208500, "AlphaBlend", 10);
      atexit(sub_18012BA50);
      Init_thread_footer(&dword_180219730);
    }
  }
  return &qword_1802084A0;
}
