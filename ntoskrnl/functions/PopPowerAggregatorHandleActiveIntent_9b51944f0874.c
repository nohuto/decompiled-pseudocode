__int64 __fastcall PopPowerAggregatorHandleActiveIntent(__int64 a1, __int64 a2)
{
  int v2; // r8d
  __int64 result; // rax
  int v4; // r8d
  int v5; // r8d

  v2 = *(_DWORD *)(a1 + 16);
  result = 0LL;
  if ( !v2 )
  {
    *(_OWORD *)a2 = *(_OWORD *)(a1 + 16);
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 32);
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 48);
    return result;
  }
  v4 = v2 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 && v5 != 2 )
      return 3221266435LL;
  }
  else if ( PopPlatformAoAc && *(_BYTE *)(a1 + 41) )
  {
    return 3221225473LL;
  }
  *(_DWORD *)a2 = 0;
  return result;
}
