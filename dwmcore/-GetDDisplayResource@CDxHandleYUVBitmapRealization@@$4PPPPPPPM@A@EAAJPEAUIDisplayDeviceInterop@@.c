/*
 * XREFs of ?GetDDisplayResource@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EAAJPEAUIDisplayDeviceInterop@@PEAPEAUIDisplaySurface@Core@Display@Devices@Windows@@PEAI@Z @ 0x18011EDF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

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
