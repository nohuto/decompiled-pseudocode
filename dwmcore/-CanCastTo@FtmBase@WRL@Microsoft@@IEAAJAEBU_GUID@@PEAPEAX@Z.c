__int64 __fastcall Microsoft::WRL::FtmBase::CanCastTo(Microsoft::WRL::FtmBase *this, const struct _GUID *a2, void **a3)
{
  const struct _GUID *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r10
  _QWORD *v7; // r8
  unsigned int v8; // r9d
  __int64 v9; // r10

  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90) )
  {
    *v4 = v5;
    return 0LL;
  }
  else
  {
    if ( (unsigned int)InlineIsEqualGUID(v3, &GUID_00000003_0000_0000_c000_000000000046) )
      *v7 = v9;
    else
      return (unsigned int)-2147467262;
    return v8;
  }
}
