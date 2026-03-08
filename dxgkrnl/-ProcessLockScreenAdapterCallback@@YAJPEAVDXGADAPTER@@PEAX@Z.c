/*
 * XREFs of ?ProcessLockScreenAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0166610
 * Callers:
 *     <none>
 * Callees:
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXXZ@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXXZP6AJPEAV3@2@Z@Z @ 0x1C0166634 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXXZ@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_M.c)
 */

__int64 __fastcall ProcessLockScreenAdapterCallback(struct DXGADAPTER *a1, void *a2)
{
  return OutputDuplThunks<void (OUTPUTDUPL_MGR::*)(void)>::RunForAdapter(
           a1,
           (__int64)_lambda_9296d912c68d13e00381de7314423c52_::_lambda_invoker_cdecl_);
}
