_QWORD *__fastcall CiTaskIndexRemove(__int64 a1)
{
  _QWORD *v1; // rcx
  __int64 v2; // rdx
  _QWORD *result; // rax

  v1 = (_QWORD *)(a1 + 168);
  v2 = *v1;
  if ( *(_QWORD **)(*v1 + 8LL) != v1 || (result = (_QWORD *)v1[1], (_QWORD *)*result != v1) )
    __fastfail(3u);
  --CiTaskIndicesCount;
  *result = v2;
  *(_QWORD *)(v2 + 8) = result;
  return result;
}
