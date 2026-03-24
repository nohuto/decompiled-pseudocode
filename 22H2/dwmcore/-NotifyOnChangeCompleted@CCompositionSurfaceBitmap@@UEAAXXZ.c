/*
 * XREFs of ?NotifyOnChangeCompleted@CCompositionSurfaceBitmap@@UEAAXXZ @ 0x1800E2960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CCompositionSurfaceBitmap::NotifyOnChangeCompleted(CCompositionSurfaceBitmap *this)
{
  _DWORD *v1; // rax

  v1 = (_DWORD *)*((_QWORD *)this + 14);
  *((_QWORD *)this + 13) = 0LL;
  *v1 = 0;
}
