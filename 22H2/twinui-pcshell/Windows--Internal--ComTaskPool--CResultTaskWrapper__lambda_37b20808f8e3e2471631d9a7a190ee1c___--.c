/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_37b20808f8e3e2471631d9a7a190ee1c___::Run @ 0x180304950
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CreationThreadDispatcher::RunSync__lambda_77c8267e29f72fe3161976dfeecbc743__&_ @ 0x180303358 (CreationThreadDispatcher--RunSync__lambda_77c8267e29f72fe3161976dfeecbc743__-_.c)
 */

int *__fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_37b20808f8e3e2471631d9a7a190ee1c___::Run(
        __int64 a1)
{
  int v2; // eax
  int v3; // ebx
  int *result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CreationThreadDispatcher::RunSync__lambda_77c8267e29f72fe3161976dfeecbc743____(
         *(_QWORD *)(a1 + 16),
         *(_OWORD **)(a1 + 24));
  v3 = v2;
  if ( v2 >= 0 )
    v3 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5C,
      (__int64)"onecoreuap\\internal\\shell\\inc\\CreationThreadDispatcher.h",
      (const char *)(unsigned int)v2);
  result = *(int **)(a1 + 32);
  *result = v3;
  return result;
}
