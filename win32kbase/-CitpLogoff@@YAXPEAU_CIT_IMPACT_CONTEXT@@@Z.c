/*
 * XREFs of ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00B0358
 * Callers:
 *     CitUserChange @ 0x1C00B0320 (CitUserChange.c)
 *     CitModerncoreShutdown @ 0x1C0273930 (CitModerncoreShutdown.c)
 * Callees:
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C00B03A4 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00B0C84 (-CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void __fastcall CitpLogoff(struct _CIT_IMPACT_CONTEXT *a1)
{
  struct _CIT_IMPACT_CONTEXT *v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1;
  CitpContextFlush(a1, (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  CitpCleanupGlobalImpactContext(&v1);
}
