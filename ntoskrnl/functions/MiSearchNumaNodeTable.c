_QWORD *__fastcall MiSearchNumaNodeTable(ULONG_PTR BugCheckParameter2)
{
  int v1; // r8d
  _QWORD *result; // rax
  int v3; // r9d
  int v4; // eax
  _QWORD *v5; // rdx

  v1 = dword_140C65708;
  if ( dword_140C65704 > (unsigned int)dword_140C65708
    || (result = (char *)qword_140C65748 + 16 * dword_140C65704, BugCheckParameter2 < *result)
    || dword_140C65704 != dword_140C65708 && BugCheckParameter2 >= result[2] )
  {
    v3 = 0;
    if ( dword_140C65708 < 0 )
LABEL_17:
      KeBugCheckEx(0x1Au, 0x6201uLL, BugCheckParameter2, 0LL, 0LL);
    while ( 1 )
    {
      v4 = (v3 + v1) >> 1;
      v5 = (char *)qword_140C65748 + 16 * v4;
      if ( BugCheckParameter2 < *v5 )
      {
        if ( !v4 )
          KeBugCheckEx(0x1Au, 0x6200uLL, BugCheckParameter2, (ULONG_PTR)v5, 0LL);
        v1 = v4 - 1;
      }
      else
      {
        if ( v4 == dword_140C65708 || BugCheckParameter2 < v5[2] )
        {
          dword_140C65704 = (v3 + v1) >> 1;
          return (char *)qword_140C65748 + 16 * v4;
        }
        v3 = v4 + 1;
      }
      if ( v1 < v3 )
        goto LABEL_17;
    }
  }
  return result;
}
