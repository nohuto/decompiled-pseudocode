/*
 * XREFs of ?push_back@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAXAEBUtagRECT@@@Z @ 0x1800F2078
 * Callers:
 *     ?PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x18024F8F8 (-PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPL.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall std::vector<tagRECT>::push_back(_QWORD *a1, _OWORD *a2)
{
  _BYTE *v3; // rdx
  unsigned __int64 result; // rax

  v3 = (_BYTE *)a1[1];
  if ( (_BYTE *)a1[2] == v3 )
    return std::vector<tagRECT>::_Emplace_reallocate<tagRECT &>(a1, v3, a2);
  *(_OWORD *)v3 = *a2;
  a1[1] += 16LL;
  return result;
}
