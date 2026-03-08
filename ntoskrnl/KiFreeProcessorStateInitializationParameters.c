/*
 * XREFs of KiFreeProcessorStateInitializationParameters @ 0x140569A34
 * Callers:
 *     KiStartDynamicProcessor @ 0x140970898 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140B3C580 (KeStartAllProcessors.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     KiFreeProcessorStacks @ 0x14056994C (KiFreeProcessorStacks.c)
 *     KiFreeProcessorNumber @ 0x14056E36C (KiFreeProcessorNumber.c)
 *     KeUninitThread @ 0x14079B04C (KeUninitThread.c)
 *     MmFreeIndependentPages @ 0x14087B250 (MmFreeIndependentPages.c)
 */

signed __int64 __fastcall KiFreeProcessorStateInitializationParameters(__int64 a1)
{
  void *v1; // rdi
  signed __int64 result; // rax
  __int64 v4; // rcx

  v1 = *(void **)(a1 + 48);
  if ( v1 )
  {
    KeUninitThread(v1);
    ObfDereferenceObjectWithTag(v1, 0x746C6644u);
  }
  if ( *(_WORD *)(a1 + 32) || *(_BYTE *)(a1 + 34) )
    KiFreeProcessorNumber();
  result = KiFreeProcessorStacks((_QWORD *)a1);
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
    return MmFreeIndependentPages(v4, *(unsigned int *)(a1 + 16));
  return result;
}
