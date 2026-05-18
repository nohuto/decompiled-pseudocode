/*
 * XREFs of sub_18005C7A8 @ 0x18005C7A8
 * Callers:
 *     sub_18005C8C4 @ 0x18005C8C4 (sub_18005C8C4.c)
 * Callees:
 *     atexit @ 0x18011E554 (atexit.c)
 *     _Init_thread_footer @ 0x18011ED48 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18011EDA8 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *sub_18005C7A8()
{
  if ( dword_180219608 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_180219608);
    if ( dword_180219608 == -1 )
    {
      qmemcpy(&qword_1802083E0, "ColorGrading", 12);
      qmemcpy(&qword_180208400, "ContrastCurve", 13);
      qmemcpy(&qword_180208420, "ToneMapping", 11);
      qword_180208460 = 0x6C6E4F6874706544LL;
      byte_180208468 = 121;
      qmemcpy(&qword_180208480, "GroundPlane", 11);
      atexit(sub_18012BA30);
      Init_thread_footer(&dword_180219608);
    }
  }
  return &qword_1802083E0;
}
