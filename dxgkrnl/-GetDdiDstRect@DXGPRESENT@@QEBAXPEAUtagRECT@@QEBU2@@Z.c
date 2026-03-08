/*
 * XREFs of ?GetDdiDstRect@DXGPRESENT@@QEBAXPEAUtagRECT@@QEBU2@@Z @ 0x1C03398FC
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01C8C80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGPRESENT::GetDdiDstRect(DXGPRESENT *this, struct tagRECT *a2, const struct tagRECT *const a3)
{
  a2->top = *((_DWORD *)this + 33) - a3->top;
  a2->bottom = *((_DWORD *)this + 35) - a3->top;
  a2->left = *((_DWORD *)this + 32) - a3->left;
  a2->right = *((_DWORD *)this + 34) - a3->left;
}
