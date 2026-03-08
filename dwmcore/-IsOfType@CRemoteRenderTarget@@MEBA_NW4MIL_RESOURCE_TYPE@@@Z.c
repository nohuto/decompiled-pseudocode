/*
 * XREFs of ?IsOfType@CRemoteRenderTarget@@MEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18010AB40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CRemoteRenderTarget::IsOfType(__int64 a1, int a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rcx
  bool result; // al

  v2 = (unsigned int)(a2 - 114);
  result = 0;
  if ( (unsigned int)v2 <= 0x20 )
  {
    v3 = 0x140000001LL;
    if ( _bittest64(&v3, v2) )
      return 1;
  }
  return result;
}
