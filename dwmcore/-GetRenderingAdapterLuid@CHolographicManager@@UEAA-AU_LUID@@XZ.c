/*
 * XREFs of ?GetRenderingAdapterLuid@CHolographicManager@@UEAA?AU_LUID@@XZ @ 0x180107D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CHolographicManager::GetRenderingAdapterLuid(CHolographicManager *this, _QWORD *a2)
{
  *a2 = *(_QWORD *)((char *)this + 68);
  return (struct _LUID)a2;
}
