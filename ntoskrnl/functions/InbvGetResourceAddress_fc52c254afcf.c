__int64 InbvGetResourceAddress()
{
  __int64 (*v0)(void); // rax

  if ( qword_140C6A7D0 && (v0 = *(__int64 (**)(void))(qword_140C6A7D0 + 128)) != 0LL )
    return v0();
  else
    return 0LL;
}
