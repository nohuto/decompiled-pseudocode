/*
 * XREFs of PDEVOBJ_bDisableHalftoneWrap @ 0x1C000C1A8
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00B9C00 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     _lambda_45072801a0d31dffc7965423336b068f_::operator() @ 0x1C00C8860 (_lambda_45072801a0d31dffc7965423336b068f_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 (*PDEVOBJ_bDisableHalftoneWrap())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02556D8;
  if ( qword_1C02556D8 )
    return (__int64 (*)(void))qword_1C02556D8();
  return result;
}
