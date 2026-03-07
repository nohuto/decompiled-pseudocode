_QWORD *__fastcall CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,64>::CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,64>(
        _QWORD *a1)
{
  void *v2; // rax
  void *v3; // rbx

  v2 = (void *)operator new[](0x840uLL, 0x4B677844u, 64LL);
  v3 = v2;
  if ( v2 )
    memset(v2, 0, 0x840uLL);
  else
    v3 = 0LL;
  *a1 = v3;
  return a1;
}
