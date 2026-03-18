/*
 * XREFs of ?bInsideDriverCall@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C00FAC84
 * Callers:
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0031BF0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00FA780 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall bInsideDriverCall(struct _SPRITESTATE *a1)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v3; // rdi
  unsigned int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v6 = *(_QWORD *)a1;
  v3 = ThreadWin32Thread;
  PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v6);
  v4 = 0;
  if ( v3 && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v6) && (*(_DWORD *)(v3 + 104) || *(_DWORD *)(v3 + 108)) )
  {
    if ( *(struct _SPRITESTATE **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 32LL) == a1 )
      return **(unsigned int **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280);
  }
  else
  {
    return *((unsigned int *)a1 + 22);
  }
  return v4;
}
