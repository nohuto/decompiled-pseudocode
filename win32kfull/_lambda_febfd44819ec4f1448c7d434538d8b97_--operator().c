__int64 *__fastcall lambda_febfd44819ec4f1448c7d434538d8b97_::operator()(__int64 **a1, __int64 a2, __int64 a3)
{
  __int64 *result; // rax
  __int64 v5; // rcx

  result = *a1;
  v5 = **a1;
  if ( v5 )
  {
    result = (__int64 *)_DeferWindowPosAndBand(
                          v5,
                          a2,
                          a3,
                          0LL,
                          0,
                          0,
                          0,
                          *(_DWORD *)a1[1],
                          *(_DWORD *)a1[2],
                          *(_DWORD *)a1[3]);
    **a1 = (__int64)result;
  }
  return result;
}
