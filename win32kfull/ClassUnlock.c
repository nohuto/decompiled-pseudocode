/*
 * XREFs of ClassUnlock @ 0x1C012DCF4
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 * Callees:
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C0012890 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 */

struct tagCLS *__fastcall ClassUnlock(struct tagCLS *a1, _QWORD *a2)
{
  *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 16) = *a2;
  return ClassUnlockWorker(a1);
}
