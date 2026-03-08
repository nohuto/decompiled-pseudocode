/*
 * XREFs of ?CheckOutput@DXGPRESENT@@QEAAXII@Z @ 0x1C033807C
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01C8C80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGPRESENT::CheckOutput(DXGPRESENT *this, int a2, int a3)
{
  if ( (*((_DWORD *)this + 18) & 0x10000) != 0 && (*((_DWORD *)this + 108) != a2 || *((_DWORD *)this + 109) != a3) )
  {
    *((_DWORD *)this + 1) |= 0x100u;
    *((_DWORD *)this + 108) = a2;
    *((_DWORD *)this + 109) = a3;
  }
}
