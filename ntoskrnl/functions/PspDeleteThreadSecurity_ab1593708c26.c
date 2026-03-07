LONG_PTR __fastcall PspDeleteThreadSecurity(__int64 a1)
{
  LONG_PTR result; // rax
  _QWORD *v2; // rdi
  void *v4; // rcx

  result = *(unsigned int *)(a1 + 1376);
  v2 = (_QWORD *)(a1 + 1272);
  if ( (result & 8) != 0 )
  {
    result = ObfDereferenceObject((PVOID)(*v2 & 0xFFFFFFFFFFFFFFF8uLL));
    v4 = *(void **)(a1 + 1544);
    if ( v4 )
    {
      result = ObfDereferenceObject(v4);
      *(_QWORD *)(a1 + 1544) = 0LL;
    }
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1376), 0xFFFFFFF7);
  }
  *v2 = 0LL;
  return result;
}
