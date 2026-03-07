void *__fastcall SepAppendPrimaryGroup(__int64 a1, unsigned __int8 *a2)
{
  __int64 v2; // rax
  void *v4; // rsi
  unsigned int v5; // ebx
  void *result; // rax

  v2 = *(_QWORD *)(a1 + 184);
  if ( v2 )
    v4 = (void *)(*(_QWORD *)(a1 + 176) + *(unsigned __int16 *)(v2 + 2));
  else
    v4 = *(void **)(a1 + 176);
  v5 = 4 * a2[1] + 8;
  result = memmove(v4, a2, v5);
  *(_DWORD *)(a1 + 140) -= v5;
  *(_QWORD *)(a1 + 168) = v4;
  return result;
}
