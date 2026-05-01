/*
 * XREFs of ?Reset@CEnumerableObjectCollection@@UEAAJXZ @ 0x18008CF20
 * Callers:
 *     ?Reset@CEnumerableObjectCollection@@W7EAAJXZ @ 0x180161B70 (-Reset@CEnumerableObjectCollection@@W7EAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CEnumerableObjectCollection::Reset(CEnumerableObjectCollection *this)
{
  *((_DWORD *)this + 6) = 0;
  return 0LL;
}
