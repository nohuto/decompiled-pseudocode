_DWORD *__fastcall lambda_ed419e8dc31e70bbfd3394c14ddbfc24_::operator()(__int64 a1, int a2)
{
  __int64 v4; // rdx
  _DWORD *result; // rax

  if ( **(_DWORD **)a1 <= **(_DWORD **)(a1 + 8) )
    WdLogSingleEntry0(1LL);
  v4 = **(_QWORD **)(a1 + 16);
  result = *(_DWORD **)a1;
  *(_DWORD *)(v4 + 4LL * (unsigned int)--*result) = a2;
  return result;
}
