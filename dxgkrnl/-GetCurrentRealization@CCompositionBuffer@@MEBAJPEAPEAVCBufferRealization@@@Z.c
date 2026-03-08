/*
 * XREFs of ?GetCurrentRealization@CCompositionBuffer@@MEBAJPEAPEAVCBufferRealization@@@Z @ 0x1C007CB30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionBuffer::GetCurrentRealization(CCompositionBuffer *this, struct CBufferRealization **a2)
{
  *a2 = 0LL;
  if ( *((_DWORD *)this + 68) )
    *a2 = (struct CBufferRealization *)(*((_QWORD *)this + 32) - 8LL);
  return 3221226021LL;
}
