/*
 * XREFs of ?CreateGlobal@CCD_BTL@@SAJXZ @ 0x1C0205590
 * Callers:
 *     DriverEntry @ 0x1C03D9E6C (DriverEntry.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ??0CCD_BTL@@IEAA@XZ @ 0x1C0205604 (--0CCD_BTL@@IEAA@XZ.c)
 */

__int64 CCD_BTL::CreateGlobal(void)
{
  CCD_BTL *v0; // rax
  CCD_BTL *v1; // rbx

  if ( CCD_BTL::m_pGlobalBtl )
  {
    WdLogSingleEntry0(1LL);
    return 3221225473LL;
  }
  else
  {
    v0 = (CCD_BTL *)operator new[](0xA0uLL, 0x63644356u, 256LL);
    v1 = v0;
    if ( v0 )
    {
      memset(v0, 0, 0xA0uLL);
      CCD_BTL::CCD_BTL(v1);
      CCD_BTL::m_pGlobalBtl = v1;
      *(_QWORD *)v1 = &CCD_BTL_FULL::`vftable';
      return 0LL;
    }
    else
    {
      CCD_BTL::m_pGlobalBtl = 0LL;
      WdLogSingleEntry1(6LL, 160LL);
      return 3221225495LL;
    }
  }
}
