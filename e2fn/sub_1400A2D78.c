void __fastcall sub_1400A2D78(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax
  _QWORD *v4; // rdi
  __int64 v5; // rax

  v2 = a1[5];
  v4 = a1;
  if ( !v2 )
    return;
  if ( v2 != 1 )
  {
    if ( a2 == (_QWORD *)*a1 )
    {
      *(_QWORD *)(*a2 + 8LL) = a1;
    }
    else
    {
      v5 = a2[1];
      if ( a2 == (_QWORD *)a1[1] )
      {
        a1[1] = v5;
        *(_QWORD *)a2[1] = a1;
        goto LABEL_10;
      }
      *(_QWORD *)(*a2 + 8LL) = v5;
      a1 = (_QWORD *)a2[1];
    }
    *a1 = *a2;
    goto LABEL_10;
  }
  a1[1] = 0LL;
  *a1 = 0LL;
LABEL_10:
  sub_1400A2CF4(a2, 0);
  if ( a2 )
    ExFreePool(a2);
  --v4[5];
}
