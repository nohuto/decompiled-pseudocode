/*
 * XREFs of ?AddRealization@CFlipExBuffer@@UEAAJPEAVCBufferRealization@@@Z @ 0x1C000CD80
 * Callers:
 *     ?AddRealization@CCompositionSwapchainBuffer@@UEAAJPEAVCBufferRealization@@@Z @ 0x1C0089400 (-AddRealization@CCompositionSwapchainBuffer@@UEAAJPEAVCBufferRealization@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipExBuffer::AddRealization(CFlipExBuffer *this, struct CBufferRealization *a2)
{
  unsigned int v2; // r8d
  char *v4; // rax
  CFlipExBuffer **v5; // r10
  CFlipExBuffer *v6; // rcx
  __int64 v7; // rax

  v2 = 0;
  if ( (unsigned int)(*((_DWORD *)a2 + 6) - 2) > 2 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v4 = (char *)this + 256;
    v5 = (CFlipExBuffer **)*((_QWORD *)this + 33);
    v6 = (struct CBufferRealization *)((char *)a2 + 8);
    if ( *v5 != (CFlipExBuffer *)((char *)this + 256) )
      __fastfail(3u);
    *(_QWORD *)v6 = v4;
    *((_QWORD *)a2 + 2) = v5;
    *v5 = v6;
    *((_QWORD *)this + 33) = v6;
    if ( ++*((_DWORD *)this + 68) == 1 )
    {
      v7 = 0LL;
      if ( (unsigned int)(*((_DWORD *)a2 + 6) - 2) <= 2 )
        v7 = *((_QWORD *)a2 + 5);
      *((_QWORD *)this + 45) = v7;
    }
  }
  return v2;
}
