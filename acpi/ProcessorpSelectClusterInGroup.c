_QWORD *__fastcall ProcessorpSelectClusterInGroup(__int64 a1, char a2, _QWORD *a3)
{
  _QWORD *v3; // r9
  _QWORD *v4; // rcx
  _QWORD *result; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rdx
  _QWORD *v8; // rcx

  v3 = (_QWORD *)(a1 + 16);
  v4 = *(_QWORD **)(a1 + 16);
  if ( v4 == v3 )
    goto LABEL_10;
  do
  {
    result = v4;
    if ( !a2 )
      goto LABEL_6;
    if ( v4[4] )
      break;
    v4 = (_QWORD *)*v4;
  }
  while ( v4 != v3 );
  if ( v4 == v3 )
LABEL_10:
    __fastfail(3u);
LABEL_6:
  v6 = *result;
  if ( *(_QWORD **)(*result + 8LL) != result )
    goto LABEL_10;
  v7 = (_QWORD *)result[1];
  if ( (_QWORD *)*v7 != result )
    goto LABEL_10;
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  v8 = (_QWORD *)v3[1];
  if ( (_QWORD *)*v8 != v3 )
    goto LABEL_10;
  *result = v3;
  result[1] = v8;
  *v8 = result;
  v3[1] = result;
  *a3 = result;
  return result;
}
