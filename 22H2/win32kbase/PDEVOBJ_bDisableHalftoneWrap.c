/*
 * XREFs of PDEVOBJ_bDisableHalftoneWrap @ 0x1C00C5420
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00C68C0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     _lambda_792d576b28627a5f7e8ec309c675ba6b_::operator() @ 0x1C00D182C (_lambda_792d576b28627a5f7e8ec309c675ba6b_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall PDEVOBJ_bDisableHalftoneWrap(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_1C0294AF0;
  if ( qword_1C0294AF0 )
    return (__int64 (__fastcall *)(_QWORD))qword_1C0294AF0(a1);
  return result;
}
