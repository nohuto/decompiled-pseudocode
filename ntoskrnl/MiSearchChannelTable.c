_QWORD *__fastcall MiSearchChannelTable(ULONG_PTR BugCheckParameter2)
{
  int v1; // edx
  _QWORD *result; // rax
  int v4; // r9d
  int v5; // eax
  _QWORD *v6; // rcx

  v1 = dword_140C65714;
  if ( dword_140C65710 > (unsigned int)dword_140C65714
    || (result = (char *)qword_140C65750 + 16 * dword_140C65710, BugCheckParameter2 < *result)
    || dword_140C65710 != dword_140C65714 && BugCheckParameter2 >= result[2] )
  {
    v4 = 0;
    if ( dword_140C65714 < 0 )
LABEL_13:
      KeBugCheckEx(0x1Au, 0x6202uLL, BugCheckParameter2, 0LL, 0LL);
    while ( 1 )
    {
      v5 = (v4 + v1) >> 1;
      v6 = (char *)qword_140C65750 + 16 * v5;
      if ( BugCheckParameter2 >= *v6 )
      {
        if ( v5 == dword_140C65714 || BugCheckParameter2 < v6[2] )
        {
          dword_140C65710 = (v4 + v1) >> 1;
          return (char *)qword_140C65750 + 16 * v5;
        }
        v4 = v5 + 1;
      }
      else
      {
        if ( !v5 )
          KeBugCheckEx(0x1Au, 0x6200uLL, BugCheckParameter2, (ULONG_PTR)v6, 0LL);
        v1 = v5 - 1;
      }
      if ( v1 < v4 )
        goto LABEL_13;
    }
  }
  return result;
}
