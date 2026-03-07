void *(__fastcall **__fastcall sub_140071058(_QWORD *a1))(CUnknown *__hidden this, unsigned int)
{
  _QWORD *v2; // r14
  _QWORD *v3; // rbx
  _QWORD *v4; // rbp
  volatile signed __int32 *v5; // rdi
  void *(__fastcall **result)(CUnknown *__hidden, unsigned int); // rax
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v8; // [rsp+28h] [rbp-10h]

  *a1 = &off_1400D9078;
  v2 = a1 + 1;
  v3 = (_QWORD *)a1[2];
  v4 = v3;
  if ( a1[6] )
    v4 = a1 + 1;
  while ( v3 != v4 )
  {
    sub_1400A27D4(&v7, v3 + 2);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    if ( v8 )
    {
      if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
      {
        v5 = v8;
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
        if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 16LL))(v8);
      }
    }
    v3 = (_QWORD *)v3[1];
  }
  sub_1400A2980(v2);
  result = &off_1400D46A0;
  *a1 = &off_1400D46A0;
  return result;
}
