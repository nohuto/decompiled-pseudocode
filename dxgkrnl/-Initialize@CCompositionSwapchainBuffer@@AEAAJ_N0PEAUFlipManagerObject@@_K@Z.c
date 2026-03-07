__int64 __fastcall CCompositionSwapchainBuffer::Initialize(
        CCompositionSwapchainBuffer *this,
        unsigned __int8 a2,
        char a3,
        struct FlipManagerObject *a4,
        unsigned __int64 a5)
{
  int v6; // edi
  int v9; // ecx
  _DWORD v11[36]; // [rsp+20h] [rbp-98h] BYREF

  v6 = a2;
  memset(v11, 0, sizeof(v11));
  v11[17] = 1;
  v11[34] = 16 * (v6 | (2 * (v6 | (2 * v6))));
  v9 = CFlipExBuffer::InitializeAttributes(this, (const struct CSM_BUFFER_ATTRIBUTES *)v11);
  if ( v9 >= 0 )
  {
    *((_DWORD *)this + 46) |= 0x4000u;
    v9 = 0;
    *((_DWORD *)this + 30) = 1065353216;
    *((_QWORD *)this + 40) = 0LL;
    *((_QWORD *)this + 91) = 0LL;
    *((_DWORD *)this + 33) = 1065353216;
    *((_QWORD *)this + 90) = a5;
    *((_BYTE *)this + 624) = a3;
    *((_BYTE *)this + 737) = v6;
    *((_QWORD *)this + 89) = a4;
    *((_DWORD *)this + 23) = 1;
    *((_BYTE *)this + 736) = 1;
  }
  return (unsigned int)v9;
}
