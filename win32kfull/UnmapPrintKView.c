/*
 * XREFs of UnmapPrintKView @ 0x1C0125034
 * Callers:
 *     ?DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z @ 0x1C0123CA0 (-DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __fastcall UnmapPrintKView(__int64 a1)
{
  __int64 v2; // rbx
  _QWORD *i; // rbx
  void *v4; // rcx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  v5 = *(_QWORD *)(v2 + 23400);
  GreAcquireSemaphore(v5);
  for ( i = *(_QWORD **)(v2 + 23392); i; i = (_QWORD *)i[4] )
  {
    if ( *i == a1 )
    {
      v4 = (void *)i[2];
      if ( v4 )
      {
        MmUnmapViewInSessionSpace(v4);
        i[2] = 0LL;
      }
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v5);
}
