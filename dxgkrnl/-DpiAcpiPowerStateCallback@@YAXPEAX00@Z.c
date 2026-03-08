/*
 * XREFs of ?DpiAcpiPowerStateCallback@@YAXPEAX00@Z @ 0x1C001CCD0
 * Callers:
 *     <none>
 * Callees:
 *     DpiAcpiCallAcpiEventHandler @ 0x1C00654A4 (DpiAcpiCallAcpiEventHandler.c)
 */

void __fastcall DpiAcpiPowerStateCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  if ( (_DWORD)Argument1 == 4 || (_DWORD)Argument1 == 1 )
    DpiAcpiCallAcpiEventHandler(CallbackContext);
}
