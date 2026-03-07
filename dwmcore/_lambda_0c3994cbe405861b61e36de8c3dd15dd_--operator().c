bool __fastcall lambda_0c3994cbe405861b61e36de8c3dd15dd_::operator()(__int64 a1, __int64 a2, __int64 a3)
{
  if ( *(float *)(a3 + 12) <= *(float *)(a2 + 8) || *(float *)(a2 + 12) <= *(float *)(a3 + 8) )
    return *(float *)(a3 + 8) > *(float *)(a2 + 8);
  else
    return *(_DWORD *)a2 < *(_DWORD *)a3;
}
