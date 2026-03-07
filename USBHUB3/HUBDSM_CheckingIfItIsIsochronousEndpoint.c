__int64 __fastcall HUBDSM_CheckingIfItIsIsochronousEndpoint(__int64 a1)
{
  __int64 result; // rax

  result = 4089LL;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 960) + 1656LL) + 32LL) + 3LL) & 3) != 1 )
    return 4061LL;
  return result;
}
