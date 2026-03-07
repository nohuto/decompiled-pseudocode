PVOID __fastcall _lambda_52ccb54780299a4e07ee11c360aca89b_::_lambda_invoker_cdecl_<enum _POOL_TYPE,unsigned __int64,unsigned long,_LOOKASIDE_LIST_EX *>(
        POOL_TYPE PoolType,
        SIZE_T NumberOfBytes,
        ULONG Tag,
        PLOOKASIDE_LIST_EX Lookaside)
{
  return NSInstrumentation::CTypeIsolation<221184,864>::Allocate((__int64)&Lookaside[-1].L.AllocateEx);
}
