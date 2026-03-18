/*
 * XREFs of ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0168F80
 * Callers:
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C0031540 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C00D8EEC (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DC::vMarkTransformDirty(DC *this)
{
  __int64 v1; // rdx

  *((_DWORD *)this + 130) &= ~4u;
  v1 = *((_QWORD *)this + 122);
  if ( (*((_DWORD *)this + 130) & 1) != 0 )
    *(_DWORD *)(v1 + 340) |= 0x16090u;
  else
    *(_DWORD *)(v1 + 340) |= 0x6090u;
}
