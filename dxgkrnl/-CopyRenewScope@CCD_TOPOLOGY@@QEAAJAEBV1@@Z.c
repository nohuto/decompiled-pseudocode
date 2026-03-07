__int64 __fastcall CCD_TOPOLOGY::CopyRenewScope(CCD_TOPOLOGY *this, const struct CCD_TOPOLOGY *a2)
{
  int v3; // ebx
  struct CCD_BTL *v4; // rax
  int v6; // [rsp+20h] [rbp-48h] BYREF
  __int128 v7; // [rsp+28h] [rbp-40h]
  __int64 v8; // [rsp+38h] [rbp-30h]
  __int16 v9; // [rsp+40h] [rbp-28h]
  __int128 v10; // [rsp+48h] [rbp-20h]

  v3 = CCD_TOPOLOGY::CopyInheritScope(this, a2);
  if ( v3 >= 0 )
  {
    v6 = 0;
    v7 = 0LL;
    v8 = 0LL;
    v10 = 0LL;
    v9 = 0;
    v4 = CCD_BTL::Global();
    v3 = (**(__int64 (__fastcall ***)(struct CCD_BTL *, int *))v4)(v4, &v6);
    if ( v3 >= 0 )
      v3 = CCD_TOPOLOGY::SetConnectivityHash(this, (const struct CCD_SET_STRING_ID *)&v6);
    CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v6);
  }
  return (unsigned int)v3;
}
