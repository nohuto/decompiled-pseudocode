/*
 * XREFs of ?GetDesc@CHolographicViewer@@UEAAJPEAUHOLOGRAPHIC_VIEWER_DESC@@@Z @ 0x180107EA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicViewer::GetDesc(CHolographicViewer *this, struct HOLOGRAPHIC_VIEWER_DESC *a2)
{
  *(_OWORD *)a2 = *(_OWORD *)((char *)this + 20);
  *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)this + 36);
  *((_OWORD *)a2 + 2) = *(_OWORD *)((char *)this + 52);
  *((_DWORD *)a2 + 12) = *((_DWORD *)this + 17);
  return 0LL;
}
