__int64 __fastcall Isoch_CalculatePacketsPerFrame(__int64 a1)
{
  int v1; // r8d
  int v2; // r8d
  unsigned int v5; // r8d

  v1 = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 20LL);
  if ( v1 && (v2 = v1 - 1) != 0 && (unsigned int)(v2 - 1) <= 1 )
  {
    v5 = 1 << (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 102LL) - 1);
    if ( v5 > 8 )
      v5 = 8;
    return 8 / v5;
  }
  else
  {
    return 1;
  }
}
