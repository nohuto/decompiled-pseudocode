__int64 __fastcall CCD_BTL::RetrieveConnectivitySetId(CCD_BTL *this, struct CCD_SET_STRING_ID *a2)
{
  struct CCD_SET_STRING_ID *v3; // [rsp+20h] [rbp-28h] BYREF
  __int128 v4; // [rsp+28h] [rbp-20h]

  v3 = a2;
  v4 = 0LL;
  return CCD_BTL_CONNECTIVITY_COLLECTOR::operator()(&v3);
}
