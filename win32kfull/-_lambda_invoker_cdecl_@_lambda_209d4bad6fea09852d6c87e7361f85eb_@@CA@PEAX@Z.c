void __fastcall _lambda_209d4bad6fea09852d6c87e7361f85eb_::_lambda_invoker_cdecl_(void *a1)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
    Win32FreePool(a1);
}
