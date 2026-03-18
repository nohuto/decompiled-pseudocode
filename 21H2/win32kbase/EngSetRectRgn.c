/*
 * XREFs of EngSetRectRgn @ 0x1C008E8D0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetObjectOwner @ 0x1C001F0C0 (GreGetObjectOwner.c)
 *     GreSetRectRgn @ 0x1C008E9A0 (GreSetRectRgn.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C008EA90 (--0EngModeState@@QEAA@XZ.c)
 */

BOOL __stdcall EngSetRectRgn(HANDLE hrgn, INT left, INT top, INT right, INT bottom)
{
  BOOL result; // eax
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF

  EngModeState::EngModeState((EngModeState *)v7);
  if ( (unsigned int)GreGetObjectOwner((unsigned int)hrgn, 4) )
    result = 0;
  else
    result = GreSetRectRgn((HRGN)hrgn, bottom);
  if ( v7[0] )
    *(_DWORD *)(v7[0] + 328LL) &= ~0x10u;
  return result;
}
