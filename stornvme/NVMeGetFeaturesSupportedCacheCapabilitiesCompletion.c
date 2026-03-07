__int64 __fastcall NVMeGetFeaturesSupportedCacheCapabilitiesCompletion(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  _BYTE *v4; // r8
  __int64 v5; // r9

  result = GetSrbExtension(a2);
  if ( *(_BYTE *)(v3 + 3) == 1 )
  {
    if ( v4 )
      *(_BYTE *)(v5 + 4236) ^= (*(_BYTE *)(v5 + 4236) ^ (4 * *v4)) & 4;
    else
      *(_BYTE *)(v3 + 3) = 4;
  }
  *(_BYTE *)(result + 4253) |= 8u;
  return result;
}
