/*
 * XREFs of ?ValidateDXGIAlphaMode@@YAJW4DXGI_ALPHA_MODE@@@Z @ 0x1C000C7A0
 * Callers:
 *     ?ValidateBufferAttributes@@YAJAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1C000C758 (-ValidateBufferAttributes@@YAJAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?InitializeCloned@CFlipToken@@IEAAJ_KPEBUtagCloneableFlipTokenData@@@Z @ 0x1C0078EB4 (-InitializeCloned@CFlipToken@@IEAAJ_KPEBUtagCloneableFlipTokenData@@@Z.c)
 *     ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@CTokenBase@@@Z @ 0x1C0078FE8 (-InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateDXGIAlphaMode(int a1)
{
  __int64 result; // rax

  result = 3221225485LL;
  if ( (a1 & 0xFFFFFFFC) == 0 && a1 != 2 )
    return 0LL;
  return result;
}
