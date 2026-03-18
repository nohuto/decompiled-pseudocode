/*
 * XREFs of PpmPdcNotifyMediaBufferingUpdate @ 0x1408A5FE6
 * Callers:
 *     PpmMediaBufferingWorker @ 0x1403AC410 (PpmMediaBufferingWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 (*PpmPdcNotifyMediaBufferingUpdate())(void)
{
  __int64 (*result)(void); // rax

  result = qword_140C6B048;
  if ( qword_140C6B048 )
    return (__int64 (*)(void))qword_140C6B048();
  return result;
}
