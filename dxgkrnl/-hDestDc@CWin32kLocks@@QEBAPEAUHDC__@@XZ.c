/*
 * XREFs of ?hDestDc@CWin32kLocks@@QEBAPEAUHDC__@@XZ @ 0x1C0029C34
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01C8C80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     <none>
 */

HDC __fastcall CWin32kLocks::hDestDc(CWin32kLocks *this)
{
  HDC result; // rax

  result = (HDC)*((_QWORD *)this + 1);
  if ( !result )
    return *(HDC *)this;
  return result;
}
