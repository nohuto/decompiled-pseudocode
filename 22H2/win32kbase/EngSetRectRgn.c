/*
 * XREFs of EngSetRectRgn @ 0x1C014BE20
 * Callers:
 *     <none>
 * Callees:
 *     GreGetObjectOwner @ 0x1C00328C0 (GreGetObjectOwner.c)
 *     GreSetRectRgn @ 0x1C0080E90 (GreSetRectRgn.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C00CB83C (--0EngModeState@@QEAA@XZ.c)
 */

BOOL __stdcall EngSetRectRgn(HANDLE hrgn, INT left, INT top, INT right, INT bottom)
{
  BOOL result; // eax
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF

  EngModeState::EngModeState((EngModeState *)v10);
  if ( (unsigned int)GreGetObjectOwner((unsigned int)hrgn, 4) )
    result = 0;
  else
    result = GreSetRectRgn((HRGN)hrgn, left, top, right, bottom);
  if ( v10[0] )
    *(_DWORD *)(v10[0] + 328LL) &= ~0x20u;
  return result;
}
