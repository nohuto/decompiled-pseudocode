/*
 * XREFs of ??1?$lock_guard@Vmutex@std@@@std@@QEAA@XZ @ 0x18000F92C
 * Callers:
 *     _CSerialWorkQueue::WorkCallback_::_1_::dtor$0 @ 0x18003B7F8 (_CSerialWorkQueue--WorkCallback_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall std::lock_guard<std::mutex>::~lock_guard<std::mutex>(_Mtx_t *a1)
{
  int v1; // eax

  v1 = _Mtx_unlock(*a1);
  if ( v1 )
    std::_Throw_C_error(v1);
}
