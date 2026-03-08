/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@std@@@0@@Z @ 0x1800ED590
 * Callers:
 *     ??1CLegacySwapChain@@MEAA@XZ @ 0x1800C7F18 (--1CLegacySwapChain@@MEAA@XZ.c)
 *     ??$_Uninitialized_move@PEAV?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@std@@V?$allocator@V?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@std@@@0@@Z @ 0x1800EC824 (--$_Uninitialized_move@PEAV-$unique_ptr@VCSwapChainBuffer@@U-$default_delete@VCSwapChainBuffer@@.c)
 *     ?_Change_array@?$vector@V?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@std@@V?$allocator@V?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@2@_K1@Z @ 0x1800ED51C (-_Change_array@-$vector@V-$unique_ptr@VCSwapChainBuffer@@U-$default_delete@VCSwapChainBuffer@@@s.c)
 * Callees:
 *     ??1CSwapChainBuffer@@QEAA@XZ @ 0x1801010A0 (--1CSwapChainBuffer@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Destroy_range<std::allocator<std::unique_ptr<CSwapChainBuffer>>>(
        CSwapChainBuffer **a1,
        CSwapChainBuffer **a2)
{
  CSwapChainBuffer **v3; // rbx
  CSwapChainBuffer *v4; // rdi

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        CSwapChainBuffer::~CSwapChainBuffer(*v3);
        operator delete(v4, 0xB0uLL);
      }
      ++v3;
    }
    while ( v3 != a2 );
  }
}
