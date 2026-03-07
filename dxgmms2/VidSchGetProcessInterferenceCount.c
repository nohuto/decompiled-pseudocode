__int64 __fastcall VidSchGetProcessInterferenceCount(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 2672);
  *a2 = result;
  return result;
}
