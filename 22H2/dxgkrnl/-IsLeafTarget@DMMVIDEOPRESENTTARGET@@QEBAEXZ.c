/*
 * XREFs of ?IsLeafTarget@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C00161FC
 * Callers:
 *     ?DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z @ 0x1C017C4E0 (-DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z.c)
 *     ?DmmIsStaticAndLeafTarget@@YAJQEAXIPEA_N1@Z @ 0x1C01E5B4C (-DmmIsStaticAndLeafTarget@@YAJQEAXIPEA_N1@Z.c)
 *     ?CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C03B2DB8 (-CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall DMMVIDEOPRESENTTARGET::IsLeafTarget(DMMVIDEOPRESENTTARGET *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((DMMVIDEOPRESENTTARGET **)this + 55) == (DMMVIDEOPRESENTTARGET *)((char *)this + 440)
    && *((DMMVIDEOPRESENTTARGET **)this + 60) == (DMMVIDEOPRESENTTARGET *)((char *)this + 480) )
  {
    return *((_QWORD *)this + 66) == 0LL;
  }
  return v1;
}
