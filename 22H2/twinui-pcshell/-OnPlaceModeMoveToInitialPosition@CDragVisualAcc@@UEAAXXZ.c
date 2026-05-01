/*
 * XREFs of ?OnPlaceModeMoveToInitialPosition@CDragVisualAcc@@UEAAXXZ @ 0x18049DD60
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDropEffect@CDragVisualAcc@@UEAAXPEBG@Z @ 0x18049DFC0 (-SetDropEffect@CDragVisualAcc@@UEAAXPEBG@Z.c)
 */

void __fastcall CDragVisualAcc::OnPlaceModeMoveToInitialPosition(CDragVisualAcc *this)
{
  const unsigned __int16 *v1; // rdx

  v1 = (const unsigned __int16 *)*((_QWORD *)this + 13);
  if ( v1 )
    CDragVisualAcc::SetDropEffect(this, v1);
}
