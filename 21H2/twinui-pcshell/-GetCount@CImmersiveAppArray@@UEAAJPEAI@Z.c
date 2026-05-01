/*
 * XREFs of ?GetCount@CImmersiveAppArray@@UEAAJPEAI@Z @ 0x180086300
 * Callers:
 *     ?GetCount@CImmersiveAppArray@@W7EAAJPEAI@Z @ 0x180161DD0 (-GetCount@CImmersiveAppArray@@W7EAAJPEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveAppArray::GetCount(CImmersiveAppArray *this, unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3), a2);
}
