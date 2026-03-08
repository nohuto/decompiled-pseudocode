/*
 * XREFs of ?HasSinglePrimitive@CRedirectedVisualContent@@UEBA_NXZ @ 0x18001F250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CRedirectedVisualContent::HasSinglePrimitive(CRedirectedVisualContent *this)
{
  return (*(_DWORD *)(*((_QWORD *)this + 9) + 96LL) & 0x20000) == 0;
}
