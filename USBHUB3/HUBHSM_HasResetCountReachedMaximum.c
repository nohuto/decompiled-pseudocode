__int64 __fastcall HUBHSM_HasResetCountReachedMaximum(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int16 v2; // cx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(_WORD *)(v1 + 52);
  *(_WORD *)(v1 + 52) = v2 + 1;
  if ( v2 <= 3u )
    return 2041LL;
  result = 2057LL;
  *(_DWORD *)(v1 + 2596) = 1073872899;
  return result;
}
