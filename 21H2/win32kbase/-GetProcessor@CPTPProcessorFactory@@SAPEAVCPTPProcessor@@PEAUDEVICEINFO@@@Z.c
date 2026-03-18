/*
 * XREFs of ?GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z @ 0x1C00DCD30
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01C7310 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     <none>
 */

struct CPTPProcessor *__fastcall CPTPProcessorFactory::GetProcessor(struct DEVICEINFO *a1)
{
  struct CPTPProcessor *result; // rax

  result = (struct CPTPProcessor *)*((_QWORD *)a1 + 59);
  if ( result )
    return (struct CPTPProcessor *)*((_QWORD *)result + 132);
  return result;
}
