/*
 * XREFs of ?IsCddCddRemoteSessionFilteringAllowed@@YAHXZ @ 0x1C00D3D44
 * Callers:
 *     ldevLoadDriver @ 0x1C0024CA0 (ldevLoadDriver.c)
 *     ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C006BF4C (-bRenderLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     EngQueryW32kCddInterface @ 0x1C00BCF70 (EngQueryW32kCddInterface.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsCddCddRemoteSessionFilteringAllowed(__int64 a1)
{
  __int64 v1; // rcx
  _BOOL8 result; // rax

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  result = 0LL;
  if ( !*(_DWORD *)(v1 + 1220) )
    return gRemoteSessionUseWddm == 0;
  return result;
}
