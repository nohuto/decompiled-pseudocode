__int64 __fastcall CExpressionForce::GetCurrentState(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 36);
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 20);
  *(_DWORD *)(a2 + 16) = v2;
  return a2;
}
