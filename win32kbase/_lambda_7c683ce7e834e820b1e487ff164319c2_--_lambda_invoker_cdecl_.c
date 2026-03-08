/*
 * XREFs of _lambda_7c683ce7e834e820b1e487ff164319c2_::_lambda_invoker_cdecl_ @ 0x1C019EEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?RawInputManagerObjectUsed@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@@Z @ 0x1C0034770 (-RawInputManagerObjectUsed@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@@Z.c)
 *     ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1C00BC24C (-RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 */

void __fastcall lambda_7c683ce7e834e820b1e487ff164319c2_::_lambda_invoker_cdecl_(__int64 a1)
{
  __int64 i; // rbx

  InputTraceLogging::RIM::RawInputManagerObjectUsed((const struct RawInputManagerObject *)a1);
  for ( i = *(_QWORD *)(a1 + 424); i; i = *(_QWORD *)(i + 40) )
    InputTraceLogging::RIM::RimDevice((const struct RIMDEV *)i);
}
