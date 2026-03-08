/*
 * XREFs of ?vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C026E7B0
 * Callers:
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z @ 0x1C0272EF8 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z.c)
 * Callees:
 *     ?bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C004DD9C (-bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00D50B8 (-bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 */

void __fastcall DEVLOCKBLTOBJ::vUnMap(DEVLOCKBLTOBJ *this)
{
  signed __int32 v2[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( (*((_DWORD *)this + 28) & 0x8000) != 0 )
  {
    if ( *((_QWORD *)this + 15) && *((_BYTE *)this + 137) )
      DEVLOCKBLTOBJ::bUnMapTrgSurfaceView(this);
    _InterlockedOr(v2, 0);
    if ( *((_QWORD *)this + 18) )
    {
      if ( *((_BYTE *)this + 161) )
        DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(this);
    }
  }
  else
  {
    if ( *((_QWORD *)this + 18) && *((_BYTE *)this + 161) )
      DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(this);
    _InterlockedOr(v2, 0);
    if ( *((_QWORD *)this + 15) && *((_BYTE *)this + 137) )
      DEVLOCKBLTOBJ::bUnMapTrgSurfaceView(this);
  }
}
