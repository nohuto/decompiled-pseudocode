_QWORD *__fastcall MiAppendTailList(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // r8
  __int64 v4; // rcx
  _QWORD *result; // rax

  *(_QWORD *)(*a2 + 8LL) = a2[1];
  *(_QWORD *)a2[1] = *a2;
  v3 = (_QWORD *)a1[1];
  if ( *(_QWORD **)(*a1 + 8LL) != a1
    || (_QWORD *)*v3 != a1
    || (v4 = *a2, *(_QWORD *)(*(_QWORD *)*a2 + 8LL) != *a2)
    || **(_QWORD **)(v4 + 8) != v4 )
  {
    __fastfail(3u);
  }
  *v3 = v4;
  a1[1] = *(_QWORD *)(v4 + 8);
  result = *(_QWORD **)(v4 + 8);
  *result = a1;
  *(_QWORD *)(v4 + 8) = v3;
  a2[1] = a2;
  *a2 = a2;
  return result;
}
