__int64 __fastcall CCompositionSurface::SetIndependentFlip(
        CCompositionSurface *this,
        __int64 a2,
        char a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        const unsigned int *a7,
        int *a8)
{
  __int64 result; // rax
  __int64 v10; // r8
  char v11; // r11
  __int64 v12; // rdx
  struct CCompositionBuffer *v13; // [rsp+40h] [rbp-18h] BYREF

  v13 = 0LL;
  result = CCompositionSurface::FindBuffer(this, a2, &v13);
  if ( (int)result >= 0 )
  {
    LOBYTE(v10) = v11;
    v12 = a6;
    LOBYTE(v12) = a3;
    return (*(__int64 (__fastcall **)(struct CCompositionBuffer *, __int64, __int64, _QWORD, unsigned int, const unsigned int *, int *))(*(_QWORD *)v13 + 184LL))(
             v13,
             v12,
             v10,
             a5,
             a6,
             a7,
             a8);
  }
  return result;
}
