/*
 * XREFs of ?AddRef@CMesh2DEffect@@UEAAKXZ @ 0x1802BB480
 * Callers:
 *     ?AddRef@CMesh2DEffect@@W7EAAKXZ @ 0x18011FEB0 (-AddRef@CMesh2DEffect@@W7EAAKXZ.c)
 *     ?AddRef@CMesh2DEffect@@WBA@EAAKXZ @ 0x18011FED0 (-AddRef@CMesh2DEffect@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMesh2DEffect::AddRef(CMesh2DEffect *this)
{
  return CMILRefCountImpl::AddReference((CMesh2DEffect *)((char *)this + 24));
}
