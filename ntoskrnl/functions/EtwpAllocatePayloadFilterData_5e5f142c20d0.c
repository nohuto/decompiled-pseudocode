__int64 __fastcall EtwpAllocatePayloadFilterData(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  unsigned int v6; // ebx
  unsigned int v7; // esi
  _DWORD *Pool2; // rax
  _DWORD *v9; // rbx
  size_t v10; // r8
  const void *v11; // rdx

  if ( *a3 )
    return 3221225485LL;
  v6 = *(_DWORD *)(a2 + 8);
  result = EtwpValidatePayloadFilter(a1, *(_QWORD *)a2, v6);
  v7 = result;
  if ( (int)result >= 0 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, v6 + 8, 1182233669LL);
    v9 = Pool2;
    if ( Pool2 )
    {
      v10 = *(unsigned int *)(a2 + 8);
      v11 = *(const void **)a2;
      *Pool2 = 1;
      memmove(Pool2 + 2, v11, v10);
      result = v7;
      *a3 = v9;
    }
    else
    {
      return 3221225495LL;
    }
  }
  return result;
}
