/*
 * XREFs of ?ShouldRemoveMonitorRgn@@YAHPEAUtagWND@@@Z @ 0x1C006A054
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0068290 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     IsSmallerThanScreen @ 0x1C002C410 (IsSmallerThanScreen.c)
 */

__int64 __fastcall ShouldRemoveMonitorRgn(struct tagWND *a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 5);
  v2 = 0;
  v5 = 0LL;
  if ( (*(_BYTE *)(v1 + 21) & 8) != 0
    && (IsSmallerThanScreen(a1, &v5) || *(_QWORD *)(*((_QWORD *)a1 + 5) + 168LL) != v5) )
  {
    return 1;
  }
  return v2;
}
