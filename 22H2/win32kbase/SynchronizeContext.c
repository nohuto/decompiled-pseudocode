/*
 * XREFs of SynchronizeContext @ 0x1C0068170
 * Callers:
 *     _lambda_7336048acd17859272a6f98208d72592_::_lambda_invoker_cdecl_ @ 0x1C00C5780 (_lambda_7336048acd17859272a6f98208d72592_--_lambda_invoker_cdecl_.c)
 *     DestroyProcessInfo @ 0x1C00C5EA0 (DestroyProcessInfo.c)
 * Callees:
 *     SendMessageTo @ 0x1C006A100 (SendMessageTo.c)
 */

__int64 SynchronizeContext()
{
  __int64 v0; // rdx
  __int64 v1; // rax
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0LL;
  if ( grpdeskRitInput )
  {
    v0 = *((_QWORD *)grpdeskRitInput + 1);
    v1 = *(_QWORD *)(v0 + 176);
    *(_QWORD *)&v3 = **(_QWORD **)v0;
    if ( v1 )
      DWORD2(v3) = *(_DWORD *)(v1 + 56);
    else
      DWORD2(v3) = 0;
  }
  return SendMessageTo(20LL, &v3, 16LL);
}
