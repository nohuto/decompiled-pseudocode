/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c2a2628a81f3a0afe82e0d81e4960563___::_scalar_deleting_destructor_ @ 0x18041D4D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800906D4 (--3@YAXPEAX@Z.c)
 *     _lambda_c2a2628a81f3a0afe82e0d81e4960563_::__lambda_c2a2628a81f3a0afe82e0d81e4960563_ @ 0x18041D440 (_lambda_c2a2628a81f3a0afe82e0d81e4960563_--__lambda_c2a2628a81f3a0afe82e0d81e4960563_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c2a2628a81f3a0afe82e0d81e4960563___::_scalar_deleting_destructor_(
        __int64 *Block,
        char a2)
{
  lambda_c2a2628a81f3a0afe82e0d81e4960563_::__lambda_c2a2628a81f3a0afe82e0d81e4960563_(Block + 2);
  *((_DWORD *)Block + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
