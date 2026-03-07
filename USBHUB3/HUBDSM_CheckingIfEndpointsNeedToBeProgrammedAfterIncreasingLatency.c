__int64 __fastcall HUBDSM_CheckingIfEndpointsNeedToBeProgrammedAfterIncreasingLatency(__int64 a1)
{
  __int64 v1; // rax
  bool v2; // zf
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 960);
  if ( *(_DWORD *)(v1 + 128) )
    return 4089LL;
  v2 = *(_DWORD *)(v1 + 112) == 0;
  result = 4061LL;
  if ( !v2 )
    return 4089LL;
  return result;
}
