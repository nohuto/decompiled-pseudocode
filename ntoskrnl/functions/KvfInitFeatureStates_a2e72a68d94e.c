__int64 __fastcall KvfInitFeatureStates(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = KvfFeatureStates;
  if ( (unsigned int)KvfFeatureStates >= 8 )
  {
    v1 = 0;
    KvfFeatureStates = 0;
  }
  result = *(_QWORD *)(a1 + 240);
  if ( (*(_DWORD *)(result + 132) & 1) == 0 && (v1 & 2) != 0 )
  {
    result = v1 & 0xFFFFFFFE | ((v1 & 1) == 0) | 4;
    KvfFeatureStates = v1 & 0xFFFFFFFE | ((v1 & 1) == 0) | 4;
  }
  return result;
}
