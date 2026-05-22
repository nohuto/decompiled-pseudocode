/*
 * XREFs of ??$_Destroy_range@V?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@@YAXPEAUContextualProcessorEntry@ContextualProcessorManager@@0AEAV?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@0@@Z @ 0x180049814
 * Callers:
 *     ??$_Uninitialized_move@PEAUContextualProcessorEntry@ContextualProcessorManager@@PEAU12@V?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@@YAPEAUContextualProcessorEntry@ContextualProcessorManager@@QEAU12@0PEAU12@AEAV?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@0@@Z @ 0x1800499AC (--$_Uninitialized_move@PEAUContextualProcessorEntry@ContextualProcessorManager@@PEAU12@V-$alloca.c)
 *     ?_Change_array@?$vector@UContextualProcessorEntry@ContextualProcessorManager@@V?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@@AEAAXQEAUContextualProcessorEntry@ContextualProcessorManager@@_K1@Z @ 0x180049AF8 (-_Change_array@-$vector@UContextualProcessorEntry@ContextualProcessorManager@@V-$allocator@UCont.c)
 *     ?_Destroy@?$vector@UContextualProcessorEntry@ContextualProcessorManager@@V?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@@AEAAXPEAUContextualProcessorEntry@ContextualProcessorManager@@0@Z @ 0x180049B74 (-_Destroy@-$vector@UContextualProcessorEntry@ContextualProcessorManager@@V-$allocator@UContextua.c)
 *     ??_EContextualProcessorManager@@MEAAPEAXI@Z @ 0x180149620 (--_EContextualProcessorManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AE40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<ContextualProcessorManager::ContextualProcessorEntry>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v3);
      v3 += 2;
    }
    while ( v3 != a2 );
  }
  return result;
}
