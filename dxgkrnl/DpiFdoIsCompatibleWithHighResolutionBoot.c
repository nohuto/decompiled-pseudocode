char __fastcall DpiFdoIsCompatibleWithHighResolutionBoot(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v3; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  if ( !v1 || *(_DWORD *)(v1 + 16) != 1953656900 || *(_DWORD *)(v1 + 20) != 2 )
    return 1;
  v3 = 0;
  if ( (int)DpiReadPnpRegistryValue(a1, L"HighResBootCompatible", (char *)&v3, 4u, 2u) < 0 )
  {
    WdLogSingleEntry1(4LL, 1LL);
    return 1;
  }
  if ( v3 )
  {
    WdLogSingleEntry1(4LL, v3);
    return 1;
  }
  WdLogSingleEntry1(4LL, 0LL);
  return 0;
}
