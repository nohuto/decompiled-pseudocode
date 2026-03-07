__int64 __fastcall Isoch_GetPacketLength(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // edx

  v2 = *(_QWORD *)(a1 + 48);
  v3 = 3LL * a2;
  if ( a2 == *(_DWORD *)(a1 + 96) - 1 )
    v4 = *(_DWORD *)(a1 + 80);
  else
    v4 = *(_DWORD *)(v2 + 12LL * (a2 + 1) + 140);
  return (unsigned int)(v4 - *(_DWORD *)(v2 + 4 * v3 + 140));
}
