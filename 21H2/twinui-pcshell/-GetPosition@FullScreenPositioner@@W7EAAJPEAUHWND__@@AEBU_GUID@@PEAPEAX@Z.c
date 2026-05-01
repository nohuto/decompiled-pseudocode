/*
 * XREFs of ?GetPosition@FullScreenPositioner@@W7EAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x180163B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall FullScreenPositioner::GetPosition(__int64 a1, HWND a2, const struct _GUID *a3, void **a4)
{
  return FullScreenPositioner::GetPosition((FullScreenPositioner *)(a1 - 8), a2, a3, a4);
}
