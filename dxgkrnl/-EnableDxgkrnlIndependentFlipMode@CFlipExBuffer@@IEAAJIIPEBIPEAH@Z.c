__int64 __fastcall CFlipExBuffer::EnableDxgkrnlIndependentFlipMode(
        CFlipExBuffer *this,
        int a2,
        unsigned int a3,
        const unsigned int *a4,
        int *a5)
{
  unsigned int v5; // edi
  int v10; // ebp
  CBufferRealization *v11; // rcx
  __int64 v12; // rcx
  HANDLE Handle; // [rsp+80h] [rbp+8h] BYREF

  v5 = 0;
  v10 = -1073741275;
  if ( *((_DWORD *)this + 68) )
  {
    v11 = (CBufferRealization *)(*((_QWORD *)this + 32) - 8LL);
    Handle = 0LL;
    v10 = CBufferRealization::OpenDxSurfaceHandle(v11, 0, 1, &Handle);
    if ( v10 >= 0 )
    {
      v10 = DxgkSetIndependentFlipMode(Handle, a2, a3, (__int64)a4, (__int64)a5, (__int64)this + 536);
      if ( v10 < 0 )
      {
        ObCloseHandle(Handle, 0);
      }
      else
      {
        *((_QWORD *)this + 68) = Handle;
        *((_DWORD *)this + 96) = 1;
        *((_DWORD *)this + 154) = a3;
        *((_DWORD *)this + 155) = a2;
        memset((char *)this + 552, 0, 0x40uLL);
        for ( ; a3; a3 >>= 1 )
        {
          if ( (a3 & 1) != 0 )
          {
            v12 = v5++;
            *((_DWORD *)this + v12 + 138) = a4[v12];
          }
        }
      }
    }
  }
  return (unsigned int)v10;
}
