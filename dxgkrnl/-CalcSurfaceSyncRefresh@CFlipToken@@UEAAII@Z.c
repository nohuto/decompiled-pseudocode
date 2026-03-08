/*
 * XREFs of ?CalcSurfaceSyncRefresh@CFlipToken@@UEAAII@Z @ 0x1C00787B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipToken::CalcSurfaceSyncRefresh(CFlipToken *this, unsigned int a2)
{
  int v2; // eax

  v2 = *((_DWORD *)this + 28);
  if ( v2 )
    return v2 + a2 - 1;
  return a2;
}
