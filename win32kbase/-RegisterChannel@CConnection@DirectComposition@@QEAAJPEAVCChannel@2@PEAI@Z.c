/*
 * XREFs of ?RegisterChannel@CConnection@DirectComposition@@QEAAJPEAVCChannel@2@PEAI@Z @ 0x1C005D0B4
 * Callers:
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C005DAA4 (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 * Callees:
 *     ?InsertChannel@CChannelGroup@DirectComposition@@QEAAJPEAVCChannel@2@PEAI@Z @ 0x1C00BB858 (-InsertChannel@CChannelGroup@DirectComposition@@QEAAJPEAVCChannel@2@PEAI@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::RegisterChannel(
        DirectComposition::CConnection *this,
        struct DirectComposition::CChannel *a2,
        unsigned int *a3)
{
  __int64 result; // rax
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  result = DirectComposition::CChannelGroup::InsertChannel(
             (DirectComposition::CConnection *)((char *)this + 16),
             a2,
             &v6);
  if ( (int)result >= 0 )
  {
    if ( !*((_DWORD *)this + 37) )
      result = 3221225996LL;
    *a3 = v6;
  }
  return result;
}
