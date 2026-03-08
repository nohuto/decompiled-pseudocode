/*
 * XREFs of ?bCurrentTlDriverCall@@YAHAEAVPDEVOBJ@@@Z @ 0x1C001D03C
 * Callers:
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C001C7C4 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall bCurrentTlDriverCall(struct PDEVOBJ *a1)
{
  unsigned int v2; // edi
  __int64 ThreadWin32Thread; // rbx
  __int64 v5; // rbx

  v2 = 0;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( !ThreadWin32Thread
    || !PDEVOBJ::bAllowShareAccess(a1)
    || !*(_DWORD *)(ThreadWin32Thread + 104) && !*(_DWORD *)(ThreadWin32Thread + 108) )
  {
    return 0LL;
  }
  v5 = *(_QWORD *)a1 + 80LL;
  if ( *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 32LL) == v5 )
    return **(unsigned int **)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280);
  return v2;
}
