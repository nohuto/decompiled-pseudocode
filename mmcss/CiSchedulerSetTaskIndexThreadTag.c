__int64 __fastcall CiSchedulerSetTaskIndexThreadTag(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rdi
  __int64 result; // rax

  v2 = *(_QWORD **)(a1 + 32);
  v3 = (_QWORD *)(a1 + 32);
  for ( *(_DWORD *)(a1 + 188) = a2; v2 != v3; v2 = (_QWORD *)*v2 )
    result = CiSystemUpdateThreadTag(v2 - 10, a2);
  return result;
}
