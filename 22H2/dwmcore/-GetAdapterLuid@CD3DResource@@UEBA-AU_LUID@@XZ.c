/*
 * XREFs of ?GetAdapterLuid@CD3DResource@@UEBA?AU_LUID@@XZ @ 0x1800E31D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CD3DResource::GetAdapterLuid(CD3DResource *this, _QWORD *a2)
{
  *a2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this - 1) + 80LL) + 936LL);
  return (struct _LUID)a2;
}
