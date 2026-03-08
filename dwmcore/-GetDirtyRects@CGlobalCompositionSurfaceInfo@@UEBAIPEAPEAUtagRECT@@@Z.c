/*
 * XREFs of ?GetDirtyRects@CGlobalCompositionSurfaceInfo@@UEBAIPEAPEAUtagRECT@@@Z @ 0x180130270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::GetDirtyRects(
        CGlobalCompositionSurfaceInfo *this,
        struct tagRECT **a2)
{
  struct tagRECT *v2; // r8
  __int64 result; // rax

  v2 = (struct tagRECT *)*((_QWORD *)this + 19);
  result = (__int64)(*((_QWORD *)this + 20) - (_QWORD)v2) >> 4;
  if ( !(_DWORD)result )
    v2 = 0LL;
  *a2 = v2;
  return result;
}
