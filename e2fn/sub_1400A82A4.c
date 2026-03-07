void __fastcall sub_1400A82A4(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  void *v6; // rcx

  v2 = a1[8];
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
      if ( a2 == (_QWORD *)v4[1] )
      {
        v4[1] = v5;
        *(_QWORD *)a2[1] = v4;
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
  *a2 = 0LL;
  a2[1] = 0LL;
  v6 = (void *)a2[4];
  a2[2] = &off_1400D41D0;
  if ( v6 )
    ExFreePool(v6);
  a2[4] = 0LL;
  a2[5] = 0LL;
  a2[6] = 0LL;
  ExFreePool(a2);
  --v4[8];
}
