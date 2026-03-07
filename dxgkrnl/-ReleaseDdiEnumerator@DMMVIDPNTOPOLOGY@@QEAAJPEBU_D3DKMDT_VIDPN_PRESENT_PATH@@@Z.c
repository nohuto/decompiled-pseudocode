__int64 __fastcall DMMVIDPNTOPOLOGY::ReleaseDdiEnumerator(
        DMMVIDPNTOPOLOGY *this,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a2)
{
  const struct _D3DKMDT_VIDPN_PRESENT_PATH *v2; // r11
  SIZE_T *p_DataSize; // rbx
  D3DDDI_GAMMA_RAMP_RGB256x3x16 *pRgb256x3x16; // rdx

  v2 = a2;
  if ( !a2 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223192345LL;
  }
  p_DataSize = &a2[-1].GammaRamp.DataSize;
  if ( LODWORD(a2[-1].GammaRamp.DataSize) != 305419896 )
  {
    WdLogSingleEntry1(2LL, &a2[-1].GammaRamp.DataSize);
    return 3223192345LL;
  }
  pRgb256x3x16 = a2[-1].GammaRamp.Data.pRgb256x3x16;
  if ( !pRgb256x3x16
    || DoublyLinkedList<DMMVIDPNPRESENTPATH,DoubleLinkedListElementDeleter<DMMVIDPNPRESENTPATH>>::ContainsByReference(
         (__int64)this + 8,
         (__int64)pRgb256x3x16) )
  {
    operator delete(v2->GammaRamp.Data.pRgb256x3x16);
    operator delete(p_DataSize);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(2LL, p_DataSize, this);
    return 3223192368LL;
  }
}
