char InbvResetDisplay()
{
  __int64 (*v0)(void); // rax

  if ( qword_140C6A7D0 && (v0 = *(__int64 (**)(void))(qword_140C6A7D0 + 24)) != 0LL )
    return v0();
  else
    return 0;
}
