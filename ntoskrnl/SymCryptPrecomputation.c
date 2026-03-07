__int64 __fastcall SymCryptPrecomputation(int a1, unsigned int a2, _QWORD *a3, int a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rbx
  __int64 result; // rax
  _QWORD *v11; // rdi
  __int64 v12; // rsi

  v6 = a3;
  result = SymCryptEcpointDouble(a1, *a3, a4, 0, a5, a6);
  if ( a2 > 1 )
  {
    v11 = v6 + 1;
    v12 = a2 - 1;
    do
    {
      result = SymCryptEcpointAddDiffNonZero(a1, a4, *v6++, *v11++, a5, a6);
      --v12;
    }
    while ( v12 );
  }
  return result;
}
