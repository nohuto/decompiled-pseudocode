/*
 * XREFs of ?IsEmptyDrawing@CSceneWorld@@UEBA_NXZ @ 0x180260700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSceneWorld::IsEmptyDrawing(CSceneWorld *this)
{
  return *((_QWORD *)this + 11) == 0LL;
}
