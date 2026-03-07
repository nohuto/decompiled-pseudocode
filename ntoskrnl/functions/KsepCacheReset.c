_QWORD *__fastcall KsepCacheReset(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v3; // rsi
  _QWORD *v4; // rcx
  _QWORD *result; // rax
  unsigned int i; // ecx
  __int64 v7; // rax

  v1 = (_QWORD *)(a1 + 32);
  v3 = *(_QWORD **)(a1 + 32);
  while ( v3 != v1 )
  {
    v4 = v3 - 3;
    v3 = (_QWORD *)*v3;
    result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(a1 + 88))(v4);
  }
  for ( i = 0; i < *(_DWORD *)(a1 + 12); *result = result )
  {
    v7 = i++;
    result = (_QWORD *)(*(_QWORD *)(a1 + 16) + 16 * v7);
    result[1] = result;
  }
  *(_DWORD *)(a1 + 8) = 0;
  v1[1] = v1;
  *v1 = v1;
  return result;
}
