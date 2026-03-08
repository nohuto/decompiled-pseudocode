/*
 * XREFs of ?EnableFormattingBuffer@ADAPTER_RENDER@@QEAAXH@Z @ 0x1C02BC2C0
 * Callers:
 *     ?EnableFormattingBuffer@DXGGLOBAL@@QEAAXH@Z @ 0x1C030DB3C (-EnableFormattingBuffer@DXGGLOBAL@@QEAAXH@Z.c)
 * Callees:
 *     ?DestroyFormattingBuffer@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0041A04 (-DestroyFormattingBuffer@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?CreateFormattingBuffer@ADAPTER_RENDER@@QEAAXXZ @ 0x1C02BB9D4 (-CreateFormattingBuffer@ADAPTER_RENDER@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_RENDER::EnableFormattingBuffer(ADAPTER_RENDER *this, int a2)
{
  if ( *((_BYTE *)this + 968) )
  {
    if ( a2 )
      ADAPTER_RENDER::CreateFormattingBuffer(this);
    else
      ADAPTER_RENDER::DestroyFormattingBuffer(this);
  }
}
