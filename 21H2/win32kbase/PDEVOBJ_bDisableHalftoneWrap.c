/*
 * XREFs of PDEVOBJ_bDisableHalftoneWrap @ 0x1C00C2564
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0074810 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     _lambda_27fa0b678d056c4f62e221b84b7517f7_::operator() @ 0x1C00D97C0 (_lambda_27fa0b678d056c4f62e221b84b7517f7_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall PDEVOBJ_bDisableHalftoneWrap(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_1C029B458;
  if ( qword_1C029B458 )
    return (__int64 (__fastcall *)(_QWORD))qword_1C029B458(a1);
  return result;
}
