/*
 * XREFs of ?IsAdapterSessionized@MONITOR_MGR@@UEBA_NXZ @ 0x1C021AC00
 * Callers:
 *     <none>
 * Callees:
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0001D60 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 */

bool __fastcall MONITOR_MGR::IsAdapterSessionized(MONITOR_MGR *this, struct _LUID *a2)
{
  return DXGADAPTER::IsAdapterSessionized(*(DXGADAPTER **)(*((_QWORD *)this + 3) + 16LL), a2, 0LL, 0LL);
}
