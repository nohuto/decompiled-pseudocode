__int64 __fastcall ESM_CheckingIfEndpointShouldBeReconfiguredAfterStop(__int64 a1)
{
  _BYTE *v1; // rax
  __int64 result; // rax
  bool v3; // zf

  v1 = *(_BYTE **)(a1 + 960);
  if ( !v1[37] )
    return 21LL;
  v3 = (*(_QWORD *)(*(_QWORD *)v1 + 336LL) & 0x200000LL) == 0;
  result = 33LL;
  if ( v3 )
    return 21LL;
  return result;
}
