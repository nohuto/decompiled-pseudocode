/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f8a4012ea914e544f53ba03328832034__&_::_scalar_deleting_destructor_ @ 0x18048C660
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800906D4 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f8a4012ea914e544f53ba03328832034____::_scalar_deleting_destructor_(
        _QWORD *Block,
        char a2)
{
  __int64 v4; // rcx

  v4 = Block[3];
  if ( v4 )
  {
    Block[3] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_DWORD *)Block + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
