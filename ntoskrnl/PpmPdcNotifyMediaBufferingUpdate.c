/*
 * XREFs of PpmPdcNotifyMediaBufferingUpdate @ 0x1408A1166
 * Callers:
 *     PpmMediaBufferingWorker @ 0x1403A6F80 (PpmMediaBufferingWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 (*PpmPdcNotifyMediaBufferingUpdate())(void)
{
  __int64 (*result)(void); // rax

  result = qword_140C6ABD8;
  if ( qword_140C6ABD8 )
    return (__int64 (*)(void))qword_140C6ABD8();
  return result;
}
