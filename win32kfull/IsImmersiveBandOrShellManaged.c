__int64 __fastcall IsImmersiveBandOrShellManaged(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // r8
  unsigned int v4; // edx

  v2 = IsNonImmersiveBand(a1, a2, a1);
  v4 = 0;
  if ( !v2 || (*(_BYTE *)(*(_QWORD *)(v3 + 40) + 232LL) & 0x40) != 0 )
    return 1;
  return v4;
}
