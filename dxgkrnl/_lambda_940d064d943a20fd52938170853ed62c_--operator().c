__int64 __fastcall lambda_940d064d943a20fd52938170853ed62c_::operator()(__int64 a1, PERESOURCE ***a2)
{
  int v3; // r8d
  struct _LUID *v4; // rdx
  PERESOURCE **v5; // r11
  _BYTE v7[144]; // [rsp+20h] [rbp-A8h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v7, (struct DXGADAPTER *const)a2, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v7, (unsigned int)(v3 + 1)) >= 0
    && a2[365]
    && !DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)a2, v4, 0LL, 0LL) )
  {
    if ( a2[366] )
      v5 = a2[366];
    ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(a2[365], v5);
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v7);
  return 0LL;
}
