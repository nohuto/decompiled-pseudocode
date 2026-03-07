__int64 __fastcall DynArrayImpl<0>::DetachData(__int64 a1, unsigned int a2, _QWORD *a3)
{
  void *v3; // rdi
  unsigned int v4; // esi
  unsigned __int64 v8; // rdx
  __int64 result; // rax
  int v10; // eax
  void *v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(void **)a1;
  v4 = 0;
  if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) )
    goto LABEL_5;
  v8 = *(unsigned int *)(a1 + 20);
  v11 = 0LL;
  result = HrMalloc(a2, v8, &v11);
  v4 = result;
  if ( (int)result >= 0 )
  {
    v10 = *(_DWORD *)(a1 + 24);
    v3 = v11;
    if ( v10 )
      memcpy_0(v11, *(const void **)a1, a2 * v10);
LABEL_5:
    *(_QWORD *)a1 = 0LL;
    result = v4;
    *(_DWORD *)(a1 + 20) = 0;
    *(_DWORD *)(a1 + 24) = 0;
    *a3 = v3;
    return result;
  }
  *a3 = 0LL;
  return result;
}
