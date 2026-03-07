void __fastcall sub_1400A4398(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rcx

  v2 = a1[4];
  v3 = a1;
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      a1[1] = 0LL;
      *a1 = 0LL;
LABEL_10:
      *a2 = 0LL;
      a2[1] = 0LL;
      ExFreePool(a2);
      --v3[4];
      return;
    }
    if ( a2 == (_QWORD *)*a1 )
    {
      *(_QWORD *)(*a2 + 8LL) = a1;
    }
    else
    {
      v4 = a2[1];
      if ( a2 == (_QWORD *)v3[1] )
      {
        v3[1] = v4;
        *(_QWORD *)a2[1] = v3;
        goto LABEL_10;
      }
      *(_QWORD *)(*a2 + 8LL) = v4;
      a1 = (_QWORD *)a2[1];
    }
    *a1 = *a2;
    goto LABEL_10;
  }
}
