__int64 __fastcall lambda_a6cadc748e29644dcd3cf84dc08806d7_::operator()(_QWORD *a1)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax

  v2 = (__int64 *)a1[1];
  v3 = *a1;
  v4 = *v2;
  if ( *(_QWORD *)(*a1 + 160LL) != *v2 )
  {
    *v2 = 0LL;
    v5 = *(_QWORD *)(v3 + 160);
    *(_QWORD *)(v3 + 160) = v4;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*a1 + 72LL))(*a1, 0LL, 0LL);
  }
  result = *a1;
  *(_BYTE *)(*a1 + 168LL) = 0;
  return result;
}
