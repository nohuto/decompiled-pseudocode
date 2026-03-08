/*
 * XREFs of ??0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z @ 0x1C002622C
 * Callers:
 *     DxgkPresent @ 0x1C01C8120 (DxgkPresent.c)
 *     DxgkSubmitPresentToHwQueue @ 0x1C03198F0 (DxgkSubmitPresentToHwQueue.c)
 * Callees:
 *     <none>
 */

CWin32kLocks *__fastcall CWin32kLocks::CWin32kLocks(
        CWin32kLocks *this,
        const struct _DXGKWIN32KENG_INTERFACE *const a2,
        struct DXGADAPTER *a3)
{
  CWin32kLocks *result; // rax

  *((_QWORD *)this + 3) = a2;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  result = this;
  *((_QWORD *)this + 7) = a3;
  return result;
}
