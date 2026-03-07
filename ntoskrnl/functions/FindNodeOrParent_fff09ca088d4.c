__int64 __fastcall FindNodeOrParent(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v8; // rax
  int v9; // eax

  v3 = *a1;
  if ( !*a1 )
    return 0LL;
  while ( 1 )
  {
    v9 = ((__int64 (__fastcall *)(__int64 *, __int64, __int64))a1[5])(a1, a2, v3 + 40);
    if ( !v9 )
      break;
    if ( v9 != 1 )
    {
      result = 1LL;
      goto LABEL_10;
    }
    v8 = *(_QWORD *)(v3 + 16);
    if ( !v8 )
    {
      result = 3LL;
      goto LABEL_10;
    }
LABEL_4:
    v3 = v8;
  }
  v8 = *(_QWORD *)(v3 + 8);
  if ( v8 )
    goto LABEL_4;
  result = 2LL;
LABEL_10:
  *a3 = v3;
  return result;
}
