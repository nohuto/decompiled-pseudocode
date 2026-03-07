__int64 __fastcall sub_14079ADCC(__int64 a1, __int64 a2, _QWORD *a3)
{
  void *v5; // rdi
  int v7; // esi
  _QWORD *v8; // rbx
  void *v10; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0LL;
  v10 = 0LL;
  v7 = WbAlloc(0x500u, &v10);
  if ( v7 < 0 )
  {
    v5 = v10;
  }
  else
  {
    v8 = v10;
    memset(v10, 0, 0x500uLL);
    ++v8[1];
    *v8 = a2;
    v8[2] = 0LL;
    v8[3] = 0LL;
    *((_DWORD *)v8 + 8) = 10;
    *a3 = v8;
  }
  sub_1406AF488(a1, (__int64)v5);
  return (unsigned int)v7;
}
