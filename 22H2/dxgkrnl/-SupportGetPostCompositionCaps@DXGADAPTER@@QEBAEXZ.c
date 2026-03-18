/*
 * XREFs of ?SupportGetPostCompositionCaps@DXGADAPTER@@QEBAEXZ @ 0x1C0002AC8
 * Callers:
 *     ?GetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJIPEAM0@Z @ 0x1C0176540 (-GetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJIPEAM0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGADAPTER::SupportGetPostCompositionCaps(DXGADAPTER *this)
{
  bool result; // al

  result = 0;
  if ( *((_QWORD *)this + 153) )
    return *((_BYTE *)this + 2866) != 0;
  return result;
}
