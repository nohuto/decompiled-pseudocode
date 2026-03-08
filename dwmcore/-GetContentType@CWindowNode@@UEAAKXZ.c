/*
 * XREFs of ?GetContentType@CWindowNode@@UEAAKXZ @ 0x180253010
 * Callers:
 *     <none>
 * Callees:
 *     ?GetContentType@CVisual@@UEAAKXZ @ 0x1801C0FF0 (-GetContentType@CVisual@@UEAAKXZ.c)
 */

__int64 __fastcall CWindowNode::GetContentType(CWindowNode *this)
{
  char v1; // bl
  char v2; // di

  v1 = *((_BYTE *)this + 895);
  v2 = *((_BYTE *)this + 896);
  return (v2 != 0 ? 0x20000 : 0) | (v1 != 0 ? 0x100 : 0) | (unsigned int)CVisual::GetContentType(this);
}
