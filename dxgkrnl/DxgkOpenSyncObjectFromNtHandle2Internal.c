__int64 __fastcall DxgkOpenSyncObjectFromNtHandle2Internal(
        struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *a1,
        __int64 a2,
        unsigned __int8 a3,
        unsigned __int8 a4)
{
  return DxgkOpenSyncObjectFromNtHandle2Impl(a1, 0, a3, a4, 0LL);
}
