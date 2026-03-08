/*
 * XREFs of ?GetRenderingEffect@CHWDrawListEntry@@UEBAPEAVCRenderingEffect@@XZ @ 0x180106310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CRenderingEffect *__fastcall CHWDrawListEntry::GetRenderingEffect(CHWDrawListEntry *this)
{
  return (struct CRenderingEffect *)*((_QWORD *)this + 9);
}
