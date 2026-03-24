/*
 * XREFs of ?GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z @ 0x1C00CD540
 * Callers:
 *     _lambda_753f1a24f15e9d4fbe47901cff45fae9_::_lambda_invoker_cdecl_ @ 0x1C00CD440 (_lambda_753f1a24f15e9d4fbe47901cff45fae9_--_lambda_invoker_cdecl_.c)
 *     _lambda_fa6a589edf23ed69d06e62f02aabf114_::_lambda_invoker_cdecl_ @ 0x1C00CD4D0 (_lambda_fa6a589edf23ed69d06e62f02aabf114_--_lambda_invoker_cdecl_.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C0189704 (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 * Callees:
 *     <none>
 */

struct CPTPProcessor *__fastcall CPTPProcessorFactory::GetProcessor(struct DEVICEINFO *a1)
{
  struct CPTPProcessor *result; // rax

  result = (struct CPTPProcessor *)*((_QWORD *)a1 + 60);
  if ( result )
    return (struct CPTPProcessor *)*((_QWORD *)result + 125);
  return result;
}
