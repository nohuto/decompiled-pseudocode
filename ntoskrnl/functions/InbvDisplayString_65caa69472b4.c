char __fastcall InbvDisplayString(__int64 a1)
{
  __int64 (*v2)(void); // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  if ( !byte_140C6A7CC )
    return 0;
  if ( qword_140C6A7D8 )
    qword_140C6A7D8(&v3);
  if ( qword_140C6A7D0 && (v2 = *(__int64 (**)(void))(qword_140C6A7D0 + 40)) != 0LL )
    return v2();
  else
    return 0;
}
