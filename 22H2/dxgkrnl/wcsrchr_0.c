/*
 * XREFs of wcsrchr_0 @ 0x1C0023E9F
 * Callers:
 *     ?GetInfoInternal@CFlipExBuffer@@QEBAJPEAUCSM_BUFFER_INFO@@@Z @ 0x1C00138C8 (-GetInfoInternal@CFlipExBuffer@@QEBAJPEAUCSM_BUFFER_INFO@@@Z.c)
 *     DpiGdoCreateServiceEntry @ 0x1C0213B74 (DpiGdoCreateServiceEntry.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
wchar_t *__cdecl wcsrchr_0(const wchar_t *Str, wchar_t Ch)
{
  return wcsrchr(Str, Ch);
}
