__int64 __fastcall sub_14010B510(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  void (__fastcall ***v4)(_QWORD, _QWORD *); // rcx
  __int64 v5; // rax
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v1 = a1[51];
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  while ( a1[60] )
  {
    sub_140060A24(a1, &v7);
    v3 = v8;
    v4 = (void (__fastcall ***)(_QWORD, _QWORD *))a1[53];
    v8 = 0LL;
    v9[1] = v3;
    v5 = v7;
    v7 = 0LL;
    v9[0] = v5;
    (**v4)(v4, v9);
  }
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
}
