__int64 __fastcall PspSetJobBackgroundCountCallback(__int64 a1, __int64 a2)
{
  int v2; // eax
  bool v3; // zf
  int v4; // r10d

  v2 = *(_DWORD *)(a1 + 1056);
  v3 = *(_BYTE *)a2 == 0;
  v4 = v2 + 1;
  if ( !*(_BYTE *)a2 )
    v4 = v2 - 1;
  *(_DWORD *)(a1 + 1056) = v4;
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 1068);
  if ( !v3 && v4 == 1 || !v4 )
    PspUpdateJobEffectivePriorityLimits(a1, 3LL);
  return 0LL;
}
