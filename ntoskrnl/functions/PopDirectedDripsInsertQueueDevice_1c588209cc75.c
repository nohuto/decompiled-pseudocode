_QWORD *__fastcall PopDirectedDripsInsertQueueDevice(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *v3; // rax
  _QWORD *result; // rax

  v2 = *a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2
    || (v3 = (_QWORD *)a2[1], (_QWORD *)*v3 != a2)
    || (*v3 = v2, *(_QWORD *)(v2 + 8) = v3, result = *(_QWORD **)(a1 + 8), *result != a1) )
  {
    __fastfail(3u);
  }
  *a2 = a1;
  a2[1] = result;
  *result = a2;
  *(_QWORD *)(a1 + 8) = a2;
  return result;
}
