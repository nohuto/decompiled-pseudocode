/*
 * XREFs of ??1?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@QEAA@XZ @ 0x140048EF0
 * Callers:
 *     _CAudioDeviceGraph::Initialize_::_1_::dtor$6 @ 0x14002C100 (_CAudioDeviceGraph--Initialize_--_1_--dtor$6.c)
 * Callees:
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x14003DC3C (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 */

LPVOID *__fastcall wistd::unique_ptr<CPipeInstance,wistd::default_delete<CPipeInstance>>::~unique_ptr<CPipeInstance,wistd::default_delete<CPipeInstance>>(
        LPVOID **a1)
{
  LPVOID *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return CPipeInstance::`scalar deleting destructor'(result);
  return result;
}
