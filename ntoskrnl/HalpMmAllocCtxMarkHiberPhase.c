/*
 * XREFs of HalpMmAllocCtxMarkHiberPhase @ 0x140A9269C
 * Callers:
 *     HaliLocateHiberRanges @ 0x140A92C20 (HaliLocateHiberRanges.c)
 * Callees:
 *     RtlAreBitsClear @ 0x14036C910 (RtlAreBitsClear.c)
 *     PoSetHiberRange @ 0x14058C400 (PoSetHiberRange.c)
 */

void HalpMmAllocCtxMarkHiberPhase()
{
  __int64 i; // rbx
  unsigned __int64 v1; // rdi
  ULONG v2; // r14d
  char *j; // rbp
  __int64 v4; // rsi

  for ( i = HalpNPPoolAllocCtx; (__int64 *)i != &HalpNPPoolAllocCtx; i = *(_QWORD *)i )
  {
    v1 = *(unsigned int *)(i + 32);
    v2 = 0;
    for ( j = *(char **)(i + 16); v1; v1 -= v4 )
    {
      v4 = v1;
      if ( v1 > 0x100 )
        v4 = 256LL;
      if ( !RtlAreBitsClear((PRTL_BITMAP)(i + 32), v2, v4) )
        PoSetHiberRange(0LL, 0x10000u, j, 16 * v4, 0x746C6168u);
      v2 += v4;
      j += 16 * v4;
    }
  }
}
