/*
 * XREFs of ?DestroyFallbackWindow@WindowGroup@@UEAAXXZ @ 0x180308C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WindowGroup::DestroyFallbackWindow(WindowGroup *this)
{
  HWND v2; // rcx

  v2 = (HWND)*((_QWORD *)this + 9);
  if ( v2 )
  {
    DestroyWindow(v2);
    *((_QWORD *)this + 9) = 0LL;
  }
}
