__int64 __fastcall lambda_f678eeb0d1545915315cd98f9c103f50_::operator()(__int64 *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = *a1;
  result = 0LL;
  v4 = *(_QWORD *)(*a1 + 72);
  if ( v4 )
  {
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(v4 + 32);
    result = *(unsigned int *)(*(_QWORD *)(v2 + 72) + 80LL);
  }
  else
  {
    *(_DWORD *)(a2 + 8) = 0;
  }
  *(_DWORD *)(a2 + 12) = result;
  return result;
}
