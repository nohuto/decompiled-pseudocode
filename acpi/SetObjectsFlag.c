__int64 __fastcall SetObjectsFlag(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *i; // rbx
  __int64 result; // rax

  v1 = (_QWORD *)(a1 + 24);
  *(_WORD *)(a1 + 64) |= 0x40u;
  for ( i = *(_QWORD **)(a1 + 24); v1 != i; i = (_QWORD *)*i )
    result = SetObjectsFlag(i);
  return result;
}
