/*
 * XREFs of ?GetDevice@CCompSwapChain@@UEBAPEAVCD3DDevice@@XZ @ 0x180107A4C
 * Callers:
 *     ?GetDevice@CCompSwapChain@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ @ 0x18011BE50 (-GetDevice@CCompSwapChain@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ.c)
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CCompSwapChain::GetDevice(CCompSwapChain *this)
{
  return (struct CD3DDevice *)*((_QWORD *)this - 45);
}
