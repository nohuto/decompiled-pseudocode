__int64 __fastcall sub_140753A9C(__int64 a1, _DWORD *a2)
{
  int v2; // esi
  void *v5; // rsi
  int v6; // edi
  __int64 v8; // [rsp+88h] [rbp+10h] BYREF
  PMDL Mdl; // [rsp+90h] [rbp+18h] BYREF

  v2 = a2[1];
  v8 = 0LL;
  v5 = (void *)(*(_QWORD *)(a1 + 32) + (v2 & 0xFFFFFFF));
  Mdl = 0LL;
  v6 = sub_14075424C(v5);
  if ( v6 >= 0 )
  {
    v6 = sub_1406B6FF4(v5, a2[2] & 0xFFFFFFF, (*a2 & 2) == 0, &Mdl, &v8);
    if ( v6 >= 0 )
    {
      v6 = sub_14075435C(
             1,
             (_DWORD)v5,
             v8,
             a2[2] & 0xFFFFFFF,
             *(_QWORD *)(a1 + 56) + 72LL,
             a2[1] & 0xFFFFFFF,
             *(_QWORD *)(a1 + 56) + 80LL);
      if ( v6 >= 0 )
        *a2 &= 0xFFFFFC03;
    }
  }
  sub_140754E6C(Mdl);
  return (unsigned int)v6;
}
