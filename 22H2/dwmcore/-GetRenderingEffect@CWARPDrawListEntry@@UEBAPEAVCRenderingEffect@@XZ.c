/*
 * XREFs of ?GetRenderingEffect@CWARPDrawListEntry@@UEBAPEAVCRenderingEffect@@XZ @ 0x180131A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CRenderingEffect *__fastcall CWARPDrawListEntry::GetRenderingEffect(CWARPDrawListEntry *this)
{
  return (struct CRenderingEffect *)(((unsigned __int64)this + 64) & -(__int64)(this != 0LL));
}
