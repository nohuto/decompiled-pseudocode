/*
 * XREFs of ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C017F8DC
 * Callers:
 *     ?bUnMapImmediate@SURFACE@@QEAAHPEAXPEAVDC@@@Z @ 0x1C0185270 (-bUnMapImmediate@SURFACE@@QEAAHPEAXPEAVDC@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SURFACE::bRedirectionBitmap(SURFACE *this)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( *((_QWORD *)this + 31) || (*((_DWORD *)this + 29) & 1) != 0 )
    return 1;
  return v1;
}
