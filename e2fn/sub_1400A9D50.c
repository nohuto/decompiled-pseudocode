_QWORD *__fastcall sub_1400A9D50(_QWORD *a1, char a2)
{
  _QWORD *v3; // rdi
  __int64 v4; // rcx
  _QWORD *i; // rax

  if ( (a2 & 2) != 0 )
  {
    v3 = a1 - 1;
    v4 = *(a1 - 1);
    for ( i = &a1[2 * v4]; v4; --v4 )
    {
      i -= 2;
      *i = &off_1400D44E8;
    }
    if ( (a2 & 1) != 0 )
    {
      if ( v3 )
        ExFreePool(v3);
    }
    return v3;
  }
  else
  {
    *a1 = &off_1400D44E8;
    if ( (a2 & 1) != 0 )
      ExFreePool(a1);
    return a1;
  }
}
