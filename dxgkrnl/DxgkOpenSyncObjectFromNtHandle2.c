__int64 __fastcall DxgkOpenSyncObjectFromNtHandle2(
        struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  return DxgkOpenSyncObjectFromNtHandle2Impl(a1, 1, a3, a4, 0LL);
}
