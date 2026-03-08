/*
 * XREFs of ?GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z @ 0x1C020DE90
 * Callers:
 *     _lambda_092b6730be7ef5450921f3f5a9c53660_::_lambda_invoker_cdecl_ @ 0x1C00E0220 (_lambda_092b6730be7ef5450921f3f5a9c53660_--_lambda_invoker_cdecl_.c)
 *     _lambda_41edca9c29f3f67839559e5a2032aaa2_::_lambda_invoker_cdecl_ @ 0x1C00E0290 (_lambda_41edca9c29f3f67839559e5a2032aaa2_--_lambda_invoker_cdecl_.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C01EB57C (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01F3D8C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ @ 0x1C0211410 (-OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x1C0211930 (-OnPTPTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C02120C0 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
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
