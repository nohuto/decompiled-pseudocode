__int64 __fastcall CDxHandleYUVBitmapRealization::GetDDisplayResource(
        __int64 a1,
        struct IDisplayDeviceInterop *a2,
        struct Windows::Devices::Display::Core::IDisplaySurface **a3,
        unsigned int *a4)
{
  return CDxHandleYUVBitmapRealization::GetDDisplayResource(
           (CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4)),
           a2,
           a3,
           a4);
}
