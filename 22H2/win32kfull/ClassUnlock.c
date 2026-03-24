/*
 * XREFs of ClassUnlock @ 0x1C01E8CD4
 * Callers:
 *     _lambda_cd33d3260540cb20afcdcf97ba84ccae_::operator() @ 0x1C01690E8 (_lambda_cd33d3260540cb20afcdcf97ba84ccae_--operator().c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C010F370 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 */

struct _CALLPROCDATA **__fastcall ClassUnlock(struct _CALLPROCDATA **a1, _QWORD *a2)
{
  *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 16) = *a2;
  return ClassUnlockWorker(a1);
}
