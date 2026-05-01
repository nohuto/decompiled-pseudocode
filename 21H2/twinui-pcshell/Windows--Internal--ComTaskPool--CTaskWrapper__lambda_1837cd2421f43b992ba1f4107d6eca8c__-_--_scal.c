/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1837cd2421f43b992ba1f4107d6eca8c__&_::_scalar_deleting_destructor_ @ 0x1803F9FF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800906D4 (--3@YAXPEAX@Z.c)
 *     _lambda_1837cd2421f43b992ba1f4107d6eca8c_::__lambda_1837cd2421f43b992ba1f4107d6eca8c_ @ 0x1803F9E20 (_lambda_1837cd2421f43b992ba1f4107d6eca8c_--__lambda_1837cd2421f43b992ba1f4107d6eca8c_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1837cd2421f43b992ba1f4107d6eca8c____::_scalar_deleting_destructor_(
        __int64 *Block,
        char a2)
{
  lambda_1837cd2421f43b992ba1f4107d6eca8c_::__lambda_1837cd2421f43b992ba1f4107d6eca8c_(Block + 2);
  *((_DWORD *)Block + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
