/*
 * XREFs of ?ClearClipRgnOrMaxClip@tagWND@@QEAAXXZ @ 0x1C0061020
 * Callers:
 *     xxxFreeWindow @ 0x1C005E458 (xxxFreeWindow.c)
 *     SelectWindowRgn @ 0x1C00847C0 (SelectWindowRgn.c)
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x1C00D31F8 (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall tagWND::ClearClipRgnOrMaxClip(tagWND *this)
{
  __int64 v1; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx

  v1 = *((_QWORD *)this + 5);
  v3 = v1;
  v4 = *(_QWORD *)(v1 + 168);
  if ( v4 && (*(_WORD *)(v1 + 42) & 0x2FFF) != 0x29D )
  {
    GreDeleteObject(v4);
    v3 = *((_QWORD *)this + 5);
  }
  *(_QWORD *)(v3 + 168) = 0LL;
}
