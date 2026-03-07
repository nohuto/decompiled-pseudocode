char *__fastcall MiGetAnyMultiplexedVm(int a1)
{
  __int64 v1; // rax
  char *v2; // rcx

  if ( a1 < 1 )
  {
    v1 = 3LL * a1;
    v2 = (char *)&unk_140C6F480;
  }
  else
  {
    v1 = 5LL * a1;
    v2 = (char *)&unk_140C69680;
  }
  return &v2[64 * v1];
}
