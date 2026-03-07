_BOOL8 __fastcall IsMiPEnabledForWindow(__int64 a1)
{
  __int64 v1; // rax
  int v2; // r8d
  _BOOL8 result; // rax
  int v4; // ecx

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_DWORD *)(v1 + 1272);
  result = (*(_BYTE *)(*(_QWORD *)(v1 + 424) + 812LL) & 4) != 0 || (v2 & 0x2000000) != 0;
  if ( (v2 & 0x4000000) != 0 )
  {
    v4 = *(_DWORD *)(a1 + 320);
    if ( (v4 & 0x10) != 0 )
      return ((unsigned __int8)v4 >> 3) & 1;
  }
  return result;
}
