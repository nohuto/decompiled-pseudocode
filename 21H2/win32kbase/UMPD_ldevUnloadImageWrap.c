/*
 * XREFs of UMPD_ldevUnloadImageWrap @ 0x1C00C2620
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0074810 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall UMPD_ldevUnloadImageWrap(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_1C029B448;
  if ( qword_1C029B448 )
    return (__int64 (__fastcall *)(_QWORD))qword_1C029B448(a1);
  return result;
}
