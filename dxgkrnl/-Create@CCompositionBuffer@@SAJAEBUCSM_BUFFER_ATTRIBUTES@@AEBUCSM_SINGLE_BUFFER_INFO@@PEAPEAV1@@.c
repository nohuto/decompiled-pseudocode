__int64 __fastcall CCompositionBuffer::Create(
        const struct CSM_BUFFER_ATTRIBUTES *a1,
        const struct CSM_SINGLE_BUFFER_INFO *a2,
        struct CCompositionBuffer **a3)
{
  int v6; // ebx
  CCompositionBuffer *v7; // rax
  CCompositionBuffer *v8; // rax
  struct CCompositionBuffer *v9; // rdi

  *a3 = 0LL;
  v6 = ValidateBufferAttributes(a1, (__int64)a2, (__int64)a3);
  if ( v6 >= 0 )
  {
    if ( *(_DWORD *)a2 == 1 )
    {
      v7 = (CCompositionBuffer *)operator new[](0x140uLL, 0x624D5343u, 256LL);
      if ( v7 && (v8 = CCompositionBuffer::CCompositionBuffer(v7), (v9 = v8) != 0LL) )
      {
        v6 = CCompositionBuffer::Initialize(v8, a1, a2);
        if ( v6 < 0 )
          (**(void (__fastcall ***)(struct CCompositionBuffer *, __int64))v9)(v9, 1LL);
        else
          *a3 = v9;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)v6;
}
