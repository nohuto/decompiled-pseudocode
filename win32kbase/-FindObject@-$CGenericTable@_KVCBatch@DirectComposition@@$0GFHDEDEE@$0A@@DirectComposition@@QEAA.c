/*
 * XREFs of ?FindObject@?$CGenericTable@_KVCBatch@DirectComposition@@$0GFHDEDEE@$0A@@DirectComposition@@QEAAPEAVCBatch@2@_K@Z @ 0x1C00A909C
 * Callers:
 *     ?ShouldDeferToken@CSynchronizationManager@DirectComposition@@SA_N_K0@Z @ 0x1C00A8F38 (-ShouldDeferToken@CSynchronizationManager@DirectComposition@@SA_N_K0@Z.c)
 *     ?NotifyPresent@CSynchronizationManager@DirectComposition@@SAX_K_N@Z @ 0x1C00A8FFC (-NotifyPresent@CSynchronizationManager@DirectComposition@@SAX_K_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CGenericTable<unsigned __int64,DirectComposition::CBatch,1702052676,0>::FindObject(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rax
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[0] = a2;
  v2 = 0LL;
  Buffer[1] = 0LL;
  v3 = RtlLookupElementGenericTable(DirectComposition::CSynchronizationManager::s_pSyncTable, Buffer);
  if ( v3 )
    return v3[1];
  return v2;
}
