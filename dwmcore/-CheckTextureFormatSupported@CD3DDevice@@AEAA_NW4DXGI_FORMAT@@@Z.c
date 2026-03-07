char __fastcall CD3DDevice::CheckTextureFormatSupported(CD3DDevice *this, __int64 a2)
{
  __int64 v2; // rcx
  char v3; // bl
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 69);
  v3 = 0;
  v5 = 0;
  if ( (*(int (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v2 + 232LL))(v2, a2, &v5) >= 0 )
    return (v5 & 0x8220) == 33312;
  return v3;
}
