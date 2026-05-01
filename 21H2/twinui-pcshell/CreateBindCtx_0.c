/*
 * XREFs of CreateBindCtx_0 @ 0x180094F52
 * Callers:
 *     BindCtx_RegisterObjectParam @ 0x180160290 (BindCtx_RegisterObjectParam.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall CreateBindCtx_0(DWORD reserved, LPBC *ppbc)
{
  return CreateBindCtx(reserved, ppbc);
}
