_QWORD **__fastcall PipAttemptDependentsStart(__int64 a1)
{
  __int64 v1; // rcx
  _QWORD **result; // rax
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx
  char v5; // [rsp+30h] [rbp+8h] BYREF
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  Object = 0LL;
  result = (_QWORD **)PiGetDependentList(v1);
  v3 = result;
  v4 = *result;
  while ( v4 != v3 )
  {
    result = (_QWORD **)PiEnumerateDependentListEntry(v4, &Object, &v5);
    v4 = (_QWORD *)*v4;
    if ( Object )
      result = (_QWORD **)PipAttemptDependentStart(Object);
  }
  return result;
}
