/*
 * XREFs of PpmPdcNotifyMediaBufferingUpdate @ 0x1408F5E54
 * Callers:
 *     PpmMediaBufferingWorker @ 0x14036BF90 (PpmMediaBufferingWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 (*PpmPdcNotifyMediaBufferingUpdate())(void)
{
  __int64 (*result)(void); // rax

  result = qword_140C543F8;
  if ( qword_140C543F8 )
    return (__int64 (*)(void))qword_140C543F8();
  return result;
}
