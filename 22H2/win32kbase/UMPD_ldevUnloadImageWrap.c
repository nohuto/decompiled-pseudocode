/*
 * XREFs of UMPD_ldevUnloadImageWrap @ 0x1C00B2ED8
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00B9C00 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall UMPD_ldevUnloadImageWrap(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_1C02556C8;
  if ( qword_1C02556C8 )
    return (__int64 (__fastcall *)(_QWORD))qword_1C02556C8(a1);
  return result;
}
