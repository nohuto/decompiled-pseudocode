/*
 * XREFs of ?GetDXGIResource@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EAAJPEAPEAUIDXGIResource@@PEAI@Z @ 0x18011EE10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CDxHandleYUVBitmapRealization::GetDXGIResource(__int64 a1, struct IDXGIResource **a2, unsigned int *a3)
{
  return CDxHandleYUVBitmapRealization::GetDXGIResource(
           (CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4)),
           a2,
           a3);
}
