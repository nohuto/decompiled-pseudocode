/*
 * XREFs of PpmPdcNotifyMediaBufferingUpdate @ 0x1408F5F64
 * Callers:
 *     PpmMediaBufferingWorker @ 0x14036C7F0 (PpmMediaBufferingWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 (*PpmPdcNotifyMediaBufferingUpdate())(void)
{
  __int64 (*result)(void); // rax

  result = qword_140C54438;
  if ( qword_140C54438 )
    return (__int64 (*)(void))qword_140C54438();
  return result;
}
