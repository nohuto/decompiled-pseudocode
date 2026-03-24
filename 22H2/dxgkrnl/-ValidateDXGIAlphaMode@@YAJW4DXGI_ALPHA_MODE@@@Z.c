/*
 * XREFs of ?ValidateDXGIAlphaMode@@YAJW4DXGI_ALPHA_MODE@@@Z @ 0x1C001271C
 * Callers:
 *     ?ValidateBufferAttributes@@YAJAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1C00126C4 (-ValidateBufferAttributes@@YAJAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?InitializeCloned@CFlipToken@@IEAAJ_KPEBUtagCloneableFlipTokenData@@@Z @ 0x1C0064F08 (-InitializeCloned@CFlipToken@@IEAAJ_KPEBUtagCloneableFlipTokenData@@@Z.c)
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
