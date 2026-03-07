__int64 __fastcall HUBHSM_CheckingIfHubDescriptorRetryCountExceededMax(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int16 v2; // cx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(_WORD *)(v1 + 76);
  *(_WORD *)(v1 + 76) = v2 + 1;
  result = 2057LL;
  if ( v2 <= 3u )
    return 2041LL;
  return result;
}
