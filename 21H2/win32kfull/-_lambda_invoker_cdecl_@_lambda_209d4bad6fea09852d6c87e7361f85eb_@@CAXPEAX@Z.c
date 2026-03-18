/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_209d4bad6fea09852d6c87e7361f85eb_@@CAXPEAX@Z @ 0x1C0211AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _lambda_209d4bad6fea09852d6c87e7361f85eb_::_lambda_invoker_cdecl_(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1, 0xFFFFFFFF) == 1 )
    Win32FreePool(a1);
}
