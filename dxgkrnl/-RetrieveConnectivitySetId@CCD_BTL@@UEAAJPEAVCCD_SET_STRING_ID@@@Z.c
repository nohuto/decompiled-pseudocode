/*
 * XREFs of ?RetrieveConnectivitySetId@CCD_BTL@@UEAAJPEAVCCD_SET_STRING_ID@@@Z @ 0x1C01BB000
 * Callers:
 *     <none>
 * Callees:
 *     ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x1C01BB028 (--RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ.c)
 */

__int64 __fastcall CCD_BTL::RetrieveConnectivitySetId(CCD_BTL *this, struct CCD_SET_STRING_ID *a2)
{
  struct CCD_SET_STRING_ID *v3; // [rsp+20h] [rbp-28h] BYREF
  __int128 v4; // [rsp+28h] [rbp-20h]

  v3 = a2;
  v4 = 0LL;
  return CCD_BTL_CONNECTIVITY_COLLECTOR::operator()(&v3);
}
