__int64 __fastcall sub_1407554B8(__int64 a1, _QWORD *a2)
{
  void *v2; // rdi
  int v5; // esi
  _QWORD *v6; // rbx
  void *v8; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0LL;
  v8 = 0LL;
  v5 = WbAlloc(0x50u, &v8);
  if ( v5 < 0 )
  {
    v2 = v8;
  }
  else
  {
    v6 = v8;
    memset(v8, 0, 0x50uLL);
    *v6 = 1LL;
    v6[1] = 0LL;
    v6[2] = 0LL;
    *((_DWORD *)v6 + 6) = *(_DWORD *)(a1 + 8);
    v6[4] = *(_QWORD *)a1;
    *a2 = v6;
  }
  sub_140755994(v2);
  return (unsigned int)v5;
}
