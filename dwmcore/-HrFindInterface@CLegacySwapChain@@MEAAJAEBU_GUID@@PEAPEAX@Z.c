/*
 * XREFs of ?HrFindInterface@CLegacySwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180102490
 * Callers:
 *     ?HrFindInterface@CConversionSwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18029ED20 (-HrFindInterface@CConversionSwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?HrFindInterface@COverlaySwapChainBase@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801024E0 (-HrFindInterface@COverlaySwapChainBase@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CLegacySwapChain::HrFindInterface(CLegacySwapChain *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  char *v5; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_d1f4aa89_764d_40c8_b46d_5c9e9777fb37.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_d1f4aa89_764d_40c8_b46d_5c9e9777fb37.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_d1f4aa89_764d_40c8_b46d_5c9e9777fb37.Data4;
    if ( v4 )
    {
      return COverlaySwapChainBase::HrFindInterface(this, a2, a3);
    }
    else
    {
      v5 = (char *)this - 16;
      if ( this != (CLegacySwapChain *)16 )
        v5 = (char *)this + *(int *)(*((_QWORD *)this - 1) + 16LL) - 8;
      *a3 = v5;
      return 0LL;
    }
  }
  return result;
}
