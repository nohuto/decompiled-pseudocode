__int64 __fastcall ProcessLockScreenAdapterCallback(struct DXGADAPTER *a1, void *a2)
{
  return OutputDuplThunks<void (OUTPUTDUPL_MGR::*)(void)>::RunForAdapter(
           a1,
           (__int64)_lambda_9296d912c68d13e00381de7314423c52_::_lambda_invoker_cdecl_);
}
