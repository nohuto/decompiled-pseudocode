/*
 * XREFs of ?_Destroy@?$_Ref_count@VDDAScreenCapture@@@std@@EEAAXXZ @ 0x18028CEC0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GDDAScreenCapture@@QEAAPEAXI@Z @ 0x18028C1A8 (--_GDDAScreenCapture@@QEAAPEAXI@Z.c)
 */

DDAScreenCapture *__fastcall std::_Ref_count<DDAScreenCapture>::_Destroy(__int64 a1)
{
  DDAScreenCapture *v1; // rcx
  DDAScreenCapture *result; // rax

  v1 = *(DDAScreenCapture **)(a1 + 16);
  if ( v1 )
    return DDAScreenCapture::`scalar deleting destructor'(v1);
  return result;
}
