__int64 __fastcall ESM_CheckingIfEndpointShouldBeAutoReset(__int64 a1)
{
  __int64 result; // rax

  result = 33LL;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 960) + 120LL) != 4 )
    return 21LL;
  return result;
}
