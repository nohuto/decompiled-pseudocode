_QWORD *__fastcall ACPIInitRemovePowerNodes(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rcx
  __int64 v5; // r8
  _QWORD *v6; // rdx
  _QWORD *result; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  _QWORD *v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rcx

  v2 = 0LL;
  do
  {
    v3 = a1[v2 + 51];
    if ( v3 )
    {
      v4 = (_QWORD *)(v3 + 40);
      v5 = *v4;
      if ( *(_QWORD **)(*v4 + 8LL) != v4 )
        goto LABEL_18;
      v6 = (_QWORD *)v4[1];
      if ( (_QWORD *)*v6 != v4 )
        goto LABEL_18;
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      a1[v2 + 51] = 0LL;
    }
    v2 = (unsigned int)(v2 + 1);
  }
  while ( (unsigned int)v2 <= 4 );
  result = (_QWORD *)a1[56];
  if ( result )
  {
    result += 5;
    v8 = *result;
    if ( *(_QWORD **)(*result + 8LL) != result || (v9 = (_QWORD *)result[1], (_QWORD *)*v9 != result) )
LABEL_18:
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    a1[56] = 0LL;
  }
  v10 = a1 + 57;
  v11 = 5LL;
  do
  {
    if ( *v10 )
    {
      result = (_QWORD *)AMLIDereferenceHandleEx(*v10);
      *v10 = 0LL;
    }
    ++v10;
    --v11;
  }
  while ( v11 );
  v12 = a1[62];
  if ( v12 )
  {
    result = (_QWORD *)AMLIDereferenceHandleEx(v12);
    a1[62] = 0LL;
  }
  return result;
}
