/*
 * XREFs of ?GetAndValidateDefaultShapeId@SystemCursor@@QEAA_KXZ @ 0x18013FE50
 * Callers:
 *     ?RemoveShape@SystemCursor@@QEAAX_K@Z @ 0x180140610 (-RemoveShape@SystemCursor@@QEAAX_K@Z.c)
 *     ?SetShape@SystemCursor@@QEAAJ_K@Z @ 0x180140748 (-SetShape@SystemCursor@@QEAAJ_K@Z.c)
 * Callees:
 *     ?ShapeExists@SystemCursor@@QEBA_N_K@Z @ 0x18013D180 (-ShapeExists@SystemCursor@@QEBA_N_K@Z.c)
 */

unsigned __int64 __fastcall SystemCursor::GetAndValidateDefaultShapeId(SystemCursor *this)
{
  __int64 v3; // rcx

  if ( SystemCursor::ShapeExists(this, 32512LL) )
    return 32512LL;
  v3 = *((_QWORD *)this + 4);
  if ( *(_QWORD *)v3 == v3 )
    return 0LL;
  else
    return *(_QWORD *)(*(_QWORD *)v3 + 32LL);
}
