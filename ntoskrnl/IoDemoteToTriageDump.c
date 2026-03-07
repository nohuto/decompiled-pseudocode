bool IoDemoteToTriageDump()
{
  int v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( !CrashdmpDumpBlock || !qword_140C6A8D0 )
    return 0;
  qword_140C6A8D0(6LL, &v1);
  return v1 >= 0;
}
