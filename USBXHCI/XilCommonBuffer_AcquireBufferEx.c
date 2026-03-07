__int64 __fastcall XilCommonBuffer_AcquireBufferEx(
        struct _KEVENT *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        int a5)
{
  switch ( a5 )
  {
    case 1:
      return CommonBuffer_AcquireBuffer(a1, a2, a3, a4);
    case 2:
      return CommonBuffer_AcquireShadowBuffer(a2, a3, a4);
    case 3:
      return CommonBuffer_AcquireSecureBuffer();
  }
  return 0LL;
}
