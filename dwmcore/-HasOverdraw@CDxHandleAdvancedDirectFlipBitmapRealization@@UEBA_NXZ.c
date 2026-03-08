/*
 * XREFs of ?HasOverdraw@CDxHandleAdvancedDirectFlipBitmapRealization@@UEBA_NXZ @ 0x180131910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::HasOverdraw(
        CDxHandleAdvancedDirectFlipBitmapRealization *this)
{
  return *((_QWORD *)this + 3) != 0LL;
}
