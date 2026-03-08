/*
 * XREFs of ??0RenderBuffer@CHolographicInteropTexture@@QEAA@XZ @ 0x1802A6AF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CHolographicInteropTexture::RenderBuffer *__fastcall CHolographicInteropTexture::RenderBuffer::RenderBuffer(
        CHolographicInteropTexture::RenderBuffer *this)
{
  CHolographicInteropTexture::RenderBuffer *result; // rax

  *((_QWORD *)this + 2) = (char *)this + 24;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 6) = 0;
  result = this;
  *((_BYTE *)this + 88) = 0;
  return result;
}
