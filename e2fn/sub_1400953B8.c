__int64 __fastcall sub_1400953B8(__int64 *a1)
{
  void *v1; // rdx
  void *v2; // r8
  void *v4; // r9
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 result; // rax
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // rbx

  v1 = &unk_1400D44E0;
  v2 = &unk_1400D44E0;
  v4 = *(void **)(a1[3] + 16);
  v5 = a1[1];
  v6 = *a1;
  if ( v4 )
    v2 = v4;
  if ( *(_QWORD *)(v5 + 16) )
    v1 = *(void **)(v5 + 16);
  result = sub_1400B1884(v6, v1, v2);
  v8 = (volatile signed __int32 *)a1[4];
  if ( v8 )
  {
    result = (unsigned int)_InterlockedDecrement(v8 + 2);
    if ( !(_DWORD)result )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
      result = (unsigned int)_InterlockedDecrement(v8 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  v9 = (volatile signed __int32 *)a1[2];
  if ( v9 )
  {
    result = (unsigned int)_InterlockedDecrement(v9 + 2);
    if ( !(_DWORD)result )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
      result = (unsigned int)_InterlockedDecrement(v9 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  return result;
}
