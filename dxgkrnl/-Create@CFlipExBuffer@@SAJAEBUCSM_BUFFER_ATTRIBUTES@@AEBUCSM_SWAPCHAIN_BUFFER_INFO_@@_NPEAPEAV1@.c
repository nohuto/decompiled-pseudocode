__int64 __fastcall CFlipExBuffer::Create(
        const struct CSM_BUFFER_ATTRIBUTES *a1,
        const struct CSM_SWAPCHAIN_BUFFER_INFO_ *a2,
        __int64 a3,
        struct CFlipExBuffer **a4)
{
  int v7; // ebx
  CFlipExBuffer *v8; // rax
  CFlipExBuffer *v9; // rax
  bool v10; // r9
  struct CFlipExBuffer *v11; // rdi

  *a4 = 0LL;
  v7 = ValidateBufferAttributes(a1);
  if ( v7 >= 0 )
  {
    v7 = -1073741811;
    if ( (unsigned int)(*(_DWORD *)a2 - 2) <= 2 && (unsigned int)(*((_DWORD *)a2 + 1) - 1) <= 0x1E )
    {
      v8 = (CFlipExBuffer *)operator new[](0x2C8uLL, 0x624D5343u, 256LL);
      if ( v8 && (v9 = CFlipExBuffer::CFlipExBuffer(v8), (v11 = v9) != 0LL) )
      {
        v7 = CFlipExBuffer::Initialize(v9, a1, a2, v10);
        if ( v7 < 0 )
          (**(void (__fastcall ***)(struct CFlipExBuffer *, __int64))v11)(v11, 1LL);
        else
          *a4 = v11;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return (unsigned int)v7;
}
