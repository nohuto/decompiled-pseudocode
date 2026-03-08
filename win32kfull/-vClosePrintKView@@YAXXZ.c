/*
 * XREFs of ?vClosePrintKView@@YAXXZ @ 0x1C02B98F8
 * Callers:
 *     ?MapFontFileInKernel@@YAJPEAXPEAPEAX@Z @ 0x1C02B884C (-MapFontFileInKernel@@YAJPEAXPEAPEAX@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __fastcall vClosePrintKView(__int64 a1)
{
  __int64 v1; // rbx
  __int64 i; // rbx
  void *v3; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  v4 = *(_QWORD *)(v1 + 23400);
  GreAcquireSemaphore(v4);
  for ( i = *(_QWORD *)(v1 + 23392); i; i = *(_QWORD *)(i + 32) )
  {
    if ( !*(_DWORD *)(i + 12) )
    {
      v3 = *(void **)(i + 16);
      if ( v3 )
      {
        MmUnmapViewInSessionSpace(v3);
        *(_QWORD *)(i + 16) = 0LL;
      }
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v4);
}
