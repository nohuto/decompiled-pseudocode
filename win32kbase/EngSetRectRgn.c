/*
 * XREFs of EngSetRectRgn @ 0x1C0019BF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0EngModeState@@QEAA@XZ @ 0x1C0019C74 (--0EngModeState@@QEAA@XZ.c)
 *     GreGetObjectOwner @ 0x1C0019E80 (GreGetObjectOwner.c)
 *     GreSetRectRgn @ 0x1C0041FD0 (GreSetRectRgn.c)
 */

BOOL __stdcall EngSetRectRgn(HANDLE hrgn, INT left, INT top, INT right, INT bottom)
{
  BOOL result; // eax
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF

  EngModeState::EngModeState((EngModeState *)v7);
  if ( (unsigned int)GreGetObjectOwner(hrgn, 4LL) )
    result = 0;
  else
    result = GreSetRectRgn((HRGN)hrgn, bottom);
  if ( v7[0] )
    *(_DWORD *)(v7[0] + 328LL) &= ~0x10u;
  return result;
}
