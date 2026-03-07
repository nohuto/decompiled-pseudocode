void __fastcall DxgkDelayedEvictionThread(struct DXGADAPTER *a1)
{
  int v2; // r8d
  _BYTE v3[144]; // [rsp+20h] [rbp-A8h] BYREF

  WdLogSingleEntry1(9LL, a1);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v3, a1, 0LL);
  COREADAPTERACCESS::AcquireExclusive((__int64)v3, (unsigned int)(v2 + 2));
  *((_BYTE *)a1 + 4784) = 1;
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v3);
}
