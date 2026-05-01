/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_eb7347f801496dc1bb0f8fceb055189e___::_scalar_deleting_destructor_ @ 0x18041D520
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800906D4 (--3@YAXPEAX@Z.c)
 *     _lambda_5c8667dff346ed4d003bfb934b61e856_::__lambda_5c8667dff346ed4d003bfb934b61e856_ @ 0x1801D71BC (_lambda_5c8667dff346ed4d003bfb934b61e856_--__lambda_5c8667dff346ed4d003bfb934b61e856_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_eb7347f801496dc1bb0f8fceb055189e___::_scalar_deleting_destructor_(
        __int64 *Block,
        char a2)
{
  lambda_5c8667dff346ed4d003bfb934b61e856_::__lambda_5c8667dff346ed4d003bfb934b61e856_(Block + 2);
  *((_DWORD *)Block + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
